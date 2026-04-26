#include "nsz.h"
#include "log.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <zstd.h>
#include <switch.h>

/* -- helpers --------------------------------------------------------------- */

static bool ends_with_ci(const char *s, const char *suf) {
    size_t ls = strlen(s), lu = strlen(suf);
    if (lu > ls) return false;
    return strcasecmp(s + ls - lu, suf) == 0;
}

bool nsz_is_compressed(const char *name) {
    return ends_with_ci(name, ".ncz") ||
           ends_with_ci(name, ".nsz") ||
           ends_with_ci(name, ".xcz");
}

/* NCZ section descriptor — 0x38 bytes on disk. */
typedef struct {
    uint64_t offset;
    uint64_t size;
    uint64_t crypto_type;
    uint64_t pad;
    uint8_t  crypto_key[16];
    uint8_t  crypto_counter[16];   /* BE 128-bit counter at start of section */
} ncz_section_t;

_Static_assert(sizeof(ncz_section_t) == 0x40, "ncz_section_t layout");

/* Derive NcmContentId from ".ncz"/".nca" filename. Upstream names the
 * file by its 32-hex content id, e.g.
 *   deadbeef00112233445566778899aabb.ncz
 * Returns false on any non-hex byte. */
static int hex_nib(char c) {
    if (c >= '0' && c <= '9') return c - '0';
    if (c >= 'a' && c <= 'f') return c - 'a' + 10;
    if (c >= 'A' && c <= 'F') return c - 'A' + 10;
    return -1;
}
static bool parse_cid_from_name(const char *name, uint8_t out[16]) {
    for (int i = 0; i < 32; i++) if (hex_nib(name[i]) < 0) return false;
    for (int i = 0; i < 16; i++) {
        int hi = hex_nib(name[i*2]);
        int lo = hex_nib(name[i*2+1]);
        out[i] = (uint8_t)((hi << 4) | lo);
    }
    return true;
}

/* ---- per-install state --------------------------------------------------- */

typedef struct {
    NcmContentStorage *cs;
    NcmPlaceHolderId  *ph;
    const install_opts_t *opts;
    const char        *phase_name;
    uint64_t           placeholder_size;   /* total bytes of the re-assembled NCA */
    uint64_t           written_total;      /* reported in progress cb */
} ncz_writer_t;

static Result write_ph(ncz_writer_t *w, uint64_t off, const uint8_t *buf, size_t len) {
    Result rc = ncmContentStorageWritePlaceHolder(w->cs, w->ph, off, buf, len);
    if (R_FAILED(rc)) return rc;
    w->written_total += len;
    if (w->opts && w->opts->cb)
        w->opts->cb(w->phase_name, w->written_total, w->placeholder_size, w->opts->ctx);
    return 0;
}

/* ---- main entry ---------------------------------------------------------- */

Result nsz_install_one(const char *nsp_name, const pfs0_file_t *f,
                       NcmContentStorage *cs, NcmContentId *out_cid,
                       const install_source_t *src, const install_opts_t *opts) {
    if (!src || !src->read) {
        /* For initial NSZ support we require random-access read. Stream-only
         * sources (e.g. pipe) are not yet supported by the decompressor. */
        log_linef("nsz: %s — stream-only source unsupported, need random-access read", f->name);
        return MAKERESULT(Module_Libnx, LibnxError_BadInput);
    }

    uint8_t cid_bytes[16];
    if (!parse_cid_from_name(f->name, cid_bytes))
        return MAKERESULT(Module_Libnx, LibnxError_BadInput);
    NcmContentId cid; memcpy(cid.c, cid_bytes, 16);

    if (f->size < NCZ_HEADER_SIZE + NCZ_MAGIC_LEN + 8)
        return MAKERESULT(Module_Libnx, LibnxError_BadInput);

    /* -- Step 1: read 0x4000 NCA header + NCZSECTN section table ---------- */
    uint8_t *hdr = (uint8_t *)malloc(NCZ_HEADER_SIZE);
    if (!hdr) return MAKERESULT(Module_Libnx, LibnxError_HeapAllocFailed);
    if (src->read(nsp_name, f->offset, NCZ_HEADER_SIZE, hdr, src->ctx) != 0) {
        free(hdr); return MAKERESULT(Module_Libnx, LibnxError_BadInput);
    }

    uint8_t magic_and_count[16];
    if (src->read(nsp_name, f->offset + NCZ_HEADER_SIZE, 16, magic_and_count, src->ctx) != 0) {
        free(hdr); return MAKERESULT(Module_Libnx, LibnxError_BadInput);
    }
    if (memcmp(magic_and_count, NCZ_MAGIC, NCZ_MAGIC_LEN) != 0) {
        log_linef("nsz: %s bad magic %.8s", f->name, magic_and_count);
        free(hdr); return MAKERESULT(Module_Libnx, LibnxError_BadInput);
    }
    uint64_t n_sections = 0;
    memcpy(&n_sections, magic_and_count + 8, 8);     /* LE u64 */
    if (n_sections == 0 || n_sections > 64) {
        log_linef("nsz: %s absurd sectionCount=%llu", f->name,
                  (unsigned long long)n_sections);
        free(hdr); return MAKERESULT(Module_Libnx, LibnxError_BadInput);
    }

    ncz_section_t *secs = (ncz_section_t *)calloc((size_t)n_sections, sizeof(ncz_section_t));
    if (!secs) { free(hdr); return MAKERESULT(Module_Libnx, LibnxError_HeapAllocFailed); }
    uint64_t sec_table_off = f->offset + NCZ_HEADER_SIZE + 16;
    uint64_t sec_table_sz  = (uint64_t)n_sections * sizeof(ncz_section_t);
    if (src->read(nsp_name, sec_table_off, (size_t)sec_table_sz,
                  (uint8_t *)secs, src->ctx) != 0) {
        free(secs); free(hdr); return MAKERESULT(Module_Libnx, LibnxError_BadInput);
    }

    /* Reconstruct the full NCA size = sum(sections) + 0x4000 header. The
     * top of the first section should be at 0x4000 (immediately after
     * the header). */
    uint64_t nca_size = NCZ_HEADER_SIZE;
    for (uint64_t i = 0; i < n_sections; i++) {
        if (secs[i].offset + secs[i].size > nca_size)
            nca_size = secs[i].offset + secs[i].size;
    }
    log_linef("nsz: %s sections=%llu nca_size=%llu",
              f->name, (unsigned long long)n_sections, (unsigned long long)nca_size);

    /* -- Step 2: create placeholder sized for the full NCA ---------------- */
    NcmPlaceHolderId ph;
    Result rc = ncmContentStorageGeneratePlaceHolderId(cs, &ph);
    if (R_FAILED(rc)) { free(secs); free(hdr); return rc; }
    rc = ncmContentStorageCreatePlaceHolder(cs, &cid, &ph, (s64)nca_size);
    if (R_FAILED(rc)) { free(secs); free(hdr); return rc; }

    ncz_writer_t w = {
        .cs = cs, .ph = &ph, .opts = opts, .phase_name = f->name,
        .placeholder_size = nca_size, .written_total = 0,
    };

    /* Write raw NCA header (first 0x4000 B) verbatim. */
    rc = write_ph(&w, 0, hdr, NCZ_HEADER_SIZE);
    free(hdr);
    if (R_FAILED(rc)) { free(secs); return rc; }

    /* -- Step 3: skip optional NCZBLOCK skippable ZSTD frame -------------- */
    /* Skippable frames are 0x184D2A50..0x184D2A5F for magic, followed by
     * a u32 LE length. We peek up to 16 bytes to decide. */
    uint64_t zstd_start = sec_table_off + sec_table_sz;
    uint8_t peek[16] = { 0 };
    (void)src->read(nsp_name, zstd_start, sizeof peek, peek, src->ctx);
    if (peek[0] == 0x50 && peek[1] == 0x2A && peek[2] == 0x4D &&
        (peek[3] & 0xF8) == 0x18) {
        uint32_t sk_len = (uint32_t)peek[4] | ((uint32_t)peek[5] << 8)
                       | ((uint32_t)peek[6] << 16) | ((uint32_t)peek[7] << 24);
        zstd_start += 8 + sk_len;
        log_linef("nsz: %s skipped NCZBLOCK frame (%u B)", f->name, sk_len);
    }

    /* -- Step 4: open ZSTD streaming decompressor ------------------------- */
    ZSTD_DStream *ds = ZSTD_createDStream();
    if (!ds) { free(secs); return MAKERESULT(Module_Libnx, LibnxError_HeapAllocFailed); }
    size_t zrc = ZSTD_initDStream(ds);
    if (ZSTD_isError(zrc)) {
        log_linef("nsz: %s ZSTD_initDStream failed", f->name);
        ZSTD_freeDStream(ds); free(secs);
        return MAKERESULT(Module_Libnx, LibnxError_BadInput);
    }

    /* -- Step 5: streaming decompress, track section cursor --------------- */
    enum { IN_BUF_SZ = 256 * 1024, OUT_BUF_SZ = 256 * 1024 };
    uint8_t *in_buf  = (uint8_t *)malloc(IN_BUF_SZ);
    uint8_t *out_buf = (uint8_t *)malloc(OUT_BUF_SZ);
    if (!in_buf || !out_buf) {
        free(in_buf); free(out_buf);
        ZSTD_freeDStream(ds); free(secs);
        return MAKERESULT(Module_Libnx, LibnxError_HeapAllocFailed);
    }

    uint64_t src_cur = zstd_start;
    uint64_t src_end = f->offset + f->size;
    ZSTD_inBuffer  zin  = { in_buf,  0, 0 };
    ZSTD_outBuffer zout = { out_buf, OUT_BUF_SZ, 0 };

    uint64_t sec_idx = 0;
    uint64_t sec_pos = 0;   /* bytes written into current section */
    Aes128CtrContext ctr_ctx;
    bool ctr_valid = false;

    while (sec_idx < n_sections) {
        /* Refill input if empty */
        if (zin.pos >= zin.size) {
            if (src_cur >= src_end) {
                rc = MAKERESULT(Module_Libnx, LibnxError_BadInput);
                log_linef("nsz: %s hit EOF before section %llu finished",
                          f->name, (unsigned long long)sec_idx);
                break;
            }
            size_t want = (src_end - src_cur > IN_BUF_SZ) ? IN_BUF_SZ
                                                          : (size_t)(src_end - src_cur);
            if (src->read(nsp_name, src_cur, want, in_buf, src->ctx) != 0) {
                rc = MAKERESULT(Module_Libnx, LibnxError_BadInput); break;
            }
            zin.src = in_buf; zin.size = want; zin.pos = 0;
            src_cur += want;
        }

        zout.pos = 0;
        zrc = ZSTD_decompressStream(ds, &zout, &zin);
        if (ZSTD_isError(zrc)) {
            log_linef("nsz: %s ZSTD error at src_cur=%llu: %s",
                      f->name, (unsigned long long)src_cur,
                      ZSTD_getErrorName(zrc));
            rc = MAKERESULT(Module_Libnx, LibnxError_BadInput);
            break;
        }

        /* Consume zout.pos bytes, dispatching to the current section. */
        size_t avail = zout.pos;
        uint8_t *p = out_buf;
        while (avail > 0 && sec_idx < n_sections) {
            ncz_section_t *s = &secs[sec_idx];
            if (sec_pos == 0 && (s->crypto_type == 3 || s->crypto_type == 4)) {
                aes128CtrContextCreate(&ctr_ctx, s->crypto_key, s->crypto_counter);
                ctr_valid = true;
            }

            size_t take = avail;
            if (take > s->size - sec_pos) take = (size_t)(s->size - sec_pos);

            if (s->crypto_type == 3 || s->crypto_type == 4) {
                /* AES-CTR re-encrypt in-place. libnx's aes128CtrCrypt keeps
                 * internal state across calls, so partial-block chunks work. */
                if (!ctr_valid) {
                    aes128CtrContextCreate(&ctr_ctx, s->crypto_key, s->crypto_counter);
                    ctr_valid = true;
                }
                /* NCA CTR counter is block-aligned — we always enter here
                 * with sec_pos % 16 == 0 on a fresh section. libnx ctx
                 * handles partial blocks internally. */
                aes128CtrCrypt(&ctr_ctx, p, p, take);
            }
            /* cryptoType 0/1 = plaintext sections (e.g. NCA header already
             * consumed, PFS0 superblock region). Pass through unchanged. */

            rc = write_ph(&w, s->offset + sec_pos, p, take);
            if (R_FAILED(rc)) {
                log_linef("nsz: %s write_ph failed at off=%llu",
                          f->name, (unsigned long long)(s->offset + sec_pos));
                goto done;
            }

            p       += take;
            avail   -= take;
            sec_pos += take;

            if (sec_pos >= s->size) {
                sec_idx++;
                sec_pos = 0;
                ctr_valid = false;
            }
        }

        if (avail > 0 && sec_idx >= n_sections) {
            log_linef("nsz: %s %u excess bytes after last section",
                      f->name, (unsigned)avail);
            /* Extra decompressed bytes after sections — silently dropped. */
            break;
        }
    }

done:
    free(in_buf);
    free(out_buf);
    ZSTD_freeDStream(ds);
    free(secs);
    if (R_FAILED(rc)) return rc;

    /* -- Step 6: register placeholder in ncm ------------------------------ */
    rc = ncmContentStorageRegister(cs, &cid, &ph);
    if (R_FAILED(rc)) {
        log_linef("nsz: %s ncmRegister failed 0x%x", f->name, rc);
        return rc;
    }
    *out_cid = cid;
    log_linef("nsz: %s installed (%llu B reassembled)",
              f->name, (unsigned long long)nca_size);
    return 0;
}
