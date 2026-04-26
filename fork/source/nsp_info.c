#include "nsp_info.h"
#include <string.h>
#include <strings.h>
#include <stdlib.h>

static bool ends_with_ci(const char *s, const char *suffix) {
    size_t sl = strlen(s), xl = strlen(suffix);
    if (sl < xl) return false;
    return strcasecmp(s + sl - xl, suffix) == 0;
}

static uint64_t load_u64_be(const uint8_t *p) {
    uint64_t v = 0;
    for (int i = 0; i < 8; i++) v = (v << 8) | p[i];
    return v;
}

/* Ticket sig header sizes per switchbrew. Stock Switch tickets are
 * RSA-2048-SHA256 (0x00010002) so rights_id lands at 0x2A0; anything
 * else we skip gracefully. */
static bool compute_rights_id_offset(uint32_t sig_type, size_t *off) {
    switch (sig_type) {
        case 0x00010000u: *off = 0x240u + 0x160u; return true; /* RSA-4096-SHA1   */
        case 0x00010001u: *off = 0x140u + 0x160u; return true; /* RSA-2048-SHA1   */
        case 0x00010002u: *off = 0x040u + 0x160u; return true; /* ECDSA-SHA1      */
        case 0x00010003u: *off = 0x240u + 0x160u; return true; /* RSA-4096-SHA256 */
        case 0x00010004u: *off = 0x140u + 0x160u; return true; /* RSA-2048-SHA256 */
        case 0x00010005u: *off = 0x040u + 0x160u; return true; /* ECDSA-SHA256    */
        default:          return false;
    }
}

/* Classify title id per switchbrew title-id allocation:
 *   bottom 0xFFF bits:  0x000 = Application
 *                       0x800 = Patch (update)
 *                       other = AddOnContent (DLC)
 * base_title_id = title_id & ~0xFFFULL so we can surface the parent app. */
static nsp_meta_type_t classify_title_id(uint64_t tid) {
    uint64_t low = tid & 0xFFFULL;
    if (low == 0x000) return NSP_META_APPLICATION;
    if (low == 0x800) return NSP_META_PATCH;
    return NSP_META_ADDONCONTENT;
}

Result nsp_info_probe(nsp_info_t *out, const pfs0_t *pfs, FILE *fp) {
    memset(out, 0, sizeof *out);
    if (!pfs) return MAKERESULT(Module_Libnx, LibnxError_BadInput);
    out->total_entries = pfs->num_files;

    const pfs0_file_t *first_tik = NULL;

    for (size_t i = 0; i < pfs->num_files; i++) {
        const pfs0_file_t *f = &pfs->files[i];
        out->total_bytes += f->size;

        if (ends_with_ci(f->name, ".cnmt.nca")) {
            out->num_cnmt_ncas++;
            out->num_ncas++;
            if (!out->has_meta_nca) {
                out->has_meta_nca = true;
                size_t nl = strnlen(f->name, sizeof out->meta_nca_name - 1);
                memcpy(out->meta_nca_name, f->name, nl);
                out->meta_nca_name[nl] = 0;
            }
        } else if (ends_with_ci(f->name, ".nca")) {
            out->num_ncas++;
        } else if (ends_with_ci(f->name, ".ncz")) {
            out->num_ncz++;
            out->is_compressed = true;
        } else if (ends_with_ci(f->name, ".tik")) {
            out->num_tiks++;
            if (!first_tik) first_tik = f;
        } else if (ends_with_ci(f->name, ".cert")) {
            out->num_certs++;
        }
    }

    /* Extract title_id from the first ticket we saw. */
    if (first_tik && fp && first_tik->size >= 4 && first_tik->size < (1u << 16)) {
        if (fseek(fp, (long)first_tik->offset, SEEK_SET) == 0) {
            uint8_t *tik = (uint8_t *)malloc((size_t)first_tik->size);
            if (tik) {
                size_t got = fread(tik, 1, (size_t)first_tik->size, fp);
                if (got == (size_t)first_tik->size) {
                    uint32_t sig_type;
                    memcpy(&sig_type, tik, sizeof sig_type);
                    size_t rid_off = 0;
                    if (compute_rights_id_offset(sig_type, &rid_off) &&
                        rid_off + 16 <= got) {
                        uint64_t tid = load_u64_be(tik + rid_off);
                        if (tid) {
                            out->title_id_known = true;
                            out->title_id       = tid;
                            out->base_title_id  = tid & ~0xFFFULL;
                            out->meta_type      = classify_title_id(tid);
                        }
                    }
                }
                free(tik);
            }
        }
    }

    /* Heuristic when there is no ticket (stock title with built-in keys):
     * the meta NCA filename is its content-id (SHA256 truncated), NOT the
     * title id, so we cannot name the title. Leave title_id_known=false. */

    return 0;
}
