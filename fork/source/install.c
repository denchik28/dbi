#include "install.h"
#include "install_sources.h"
#include "es.h"
#include "nsz.h"
#include "zipsrc.h"
#include "log.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <inttypes.h>
#include <sys/stat.h>

/* -- helpers ---------------------------------------------------------------*/

static int hex_nib(char c) {
    if (c >= '0' && c <= '9') return c - '0';
    if (c >= 'a' && c <= 'f') return c - 'a' + 10;
    if (c >= 'A' && c <= 'F') return c - 'A' + 10;
    return -1;
}

static bool parse_hex16_from_name(const char *name, uint8_t out[16]) {
    for (int i = 0; i < 32; i++) {
        if (hex_nib(name[i]) < 0) return false;
    }
    for (int i = 0; i < 16; i++) {
        int hi = hex_nib(name[i*2]);
        int lo = hex_nib(name[i*2+1]);
        out[i] = (uint8_t)((hi<<4) | lo);
    }
    return true;
}

static bool ends_with(const char *s, const char *suf) {
    size_t ls = strlen(s), lu = strlen(suf);
    return ls >= lu && strcmp(s + ls - lu, suf) == 0;
}

static void report(const install_opts_t *opts, const char *phase,
                   uint64_t done, uint64_t total) {
    if (opts && opts->cb) opts->cb(phase, done, total, opts->ctx);
}

/* -- Writing one file into an ncm placeholder ------------------------------*/

typedef struct {
    NcmContentStorage *cs;
    NcmPlaceHolderId  *ph;
    uint64_t           total;
    uint64_t           written;
    const install_opts_t *opts;
    const char        *phase_name;
    Result             last_err;
} ph_sink_ctx_t;

static int ph_sink(const uint8_t *buf, size_t len, void *ctx_) {
    ph_sink_ctx_t *ctx = (ph_sink_ctx_t *)ctx_;
    Result rc = ncmContentStorageWritePlaceHolder(ctx->cs, ctx->ph, ctx->written, buf, len);
    if (R_FAILED(rc)) { ctx->last_err = rc; return -1; }
    ctx->written += len;
    report(ctx->opts, ctx->phase_name, ctx->written, ctx->total);
    return 0;
}

static Result install_one_nca(const char *nsp_name, const pfs0_file_t *f,
                              NcmContentStorage *cs, NcmContentId *out_cid,
                              const install_source_t *src, const install_opts_t *opts) {
    uint8_t cid_bytes[16];
    if (!parse_hex16_from_name(f->name, cid_bytes))
        return MAKERESULT(Module_Libnx, LibnxError_BadInput);
    NcmContentId cid;
    memcpy(cid.c, cid_bytes, 16);

    NcmPlaceHolderId ph;
    Result rc = ncmContentStorageGeneratePlaceHolderId(cs, &ph);
    if (R_FAILED(rc)) return rc;

    rc = ncmContentStorageCreatePlaceHolder(cs, &cid, &ph, (s64)f->size);
    if (R_FAILED(rc)) return rc;

    ph_sink_ctx_t ps = { .cs = cs, .ph = &ph, .total = f->size, .written = 0,
                         .opts = opts, .phase_name = f->name, .last_err = 0 };
    if (src->stream) {
        int src_rc = src->stream(nsp_name, f->offset, f->size, ph_sink, &ps, src->ctx);
        if (src_rc != 0) rc = ps.last_err ? ps.last_err : MAKERESULT(Module_Libnx, LibnxError_BadInput);
    } else if (src->read) {
        uint64_t remain = f->size, cur = 0;
        uint8_t *buf = (uint8_t *)malloc(0x100000);
        if (!buf) return MAKERESULT(Module_Libnx, LibnxError_HeapAllocFailed);
        while (remain > 0) {
            size_t take = remain > 0x100000 ? 0x100000 : (size_t)remain;
            int src_rc = src->read(nsp_name, f->offset + cur, take, buf, src->ctx);
            if (src_rc != 0) { free(buf); return MAKERESULT(Module_Libnx, LibnxError_BadInput); }
            rc = ncmContentStorageWritePlaceHolder(cs, &ph, cur, buf, take);
            if (R_FAILED(rc)) { free(buf); return rc; }
            cur += take; remain -= take;
            report(opts, f->name, cur, f->size);
        }
        free(buf);
    } else {
        return MAKERESULT(Module_Libnx, LibnxError_BadInput);
    }
    if (R_FAILED(rc)) return rc;

    rc = ncmContentStorageRegister(cs, &cid, &ph);
    if (R_FAILED(rc)) return rc;
    *out_cid = cid;
    return 0;
}

/* -- Read CNMT blob from the registered meta NCA ---------------------------
 * After the .cnmt.nca is registered, its NCA section-0 PFS0 contains a
 * single file ending in ".cnmt" (the content meta binary). libnx exposes
 * that via fsOpenFileSystemWithId with FsFileSystemType_ContentMeta — this
 * performs NCA header/key-area decrypt + section extraction for us. */
static Result read_cnmt_from_meta_nca(NcmContentStorage *cs, const NcmContentId *meta_cid,
                                      uint8_t **out_buf, size_t *out_size) {
    char nca_path[FS_MAX_PATH];
    Result rc = ncmContentStorageGetPath(cs, nca_path, sizeof nca_path, meta_cid);
    if (R_FAILED(rc)) return rc;

    FsFileSystem fs;
    rc = fsOpenFileSystemWithId(&fs, 0, FsFileSystemType_ContentMeta, nca_path, FsContentAttributes_All);
    if (R_FAILED(rc)) return rc;

    FsDir dir;
    rc = fsFsOpenDirectory(&fs, "/", FsDirOpenMode_ReadFiles, &dir);
    if (R_FAILED(rc)) { fsFsClose(&fs); return rc; }

    FsDirectoryEntry ent; s64 read = 0;
    char cnmt_path[FS_MAX_PATH] = "/";
    bool found = false;
    while (R_SUCCEEDED(fsDirRead(&dir, &read, 1, &ent)) && read == 1) {
        if (ent.type == FsDirEntryType_File && ends_with(ent.name, ".cnmt")) {
            strncat(cnmt_path, ent.name, sizeof cnmt_path - 2);
            found = true;
            break;
        }
    }
    fsDirClose(&dir);
    if (!found) { fsFsClose(&fs); return MAKERESULT(Module_Libnx, LibnxError_NotFound); }

    FsFile file;
    rc = fsFsOpenFile(&fs, cnmt_path, FsOpenMode_Read, &file);
    if (R_FAILED(rc)) { fsFsClose(&fs); return rc; }
    s64 sz = 0;
    rc = fsFileGetSize(&file, &sz);
    if (R_FAILED(rc) || sz <= 0) { fsFileClose(&file); fsFsClose(&fs); return R_FAILED(rc) ? rc : MAKERESULT(Module_Libnx, LibnxError_BadInput); }

    uint8_t *buf = (uint8_t *)malloc((size_t)sz);
    if (!buf) { fsFileClose(&file); fsFsClose(&fs); return MAKERESULT(Module_Libnx, LibnxError_HeapAllocFailed); }
    u64 got = 0;
    rc = fsFileRead(&file, 0, buf, (u64)sz, FsReadOption_None, &got);
    fsFileClose(&file);
    fsFsClose(&fs);
    if (R_FAILED(rc) || got != (u64)sz) { free(buf); return R_FAILED(rc) ? rc : MAKERESULT(Module_Libnx, LibnxError_BadInput); }

    *out_buf = buf;
    *out_size = (size_t)sz;
    return 0;
}

/* -- Build meta DB install buffer ------------------------------------------
 * CNMT file layout (inside the decrypted meta NCA):
 *   NcmContentMetaKey      meta_key         (0x10)
 *   NcmContentMetaHeader   hdr              (0x08)
 *   u8[hdr.extended_header_size]            ext header (type-specific)
 *   NcmContentInfo[hdr.content_count]       (0x18 each, no SHA prefix)
 *   NcmContentMetaInfo[hdr.content_meta_count] (0x10 each)
 *   u8[ext_data_size]                       (type-specific; may be 0)
 *   u8[0x20]                                digest
 *
 * ncmContentMetaDatabaseSet expects:
 *   NcmContentMetaHeader (with content_count incremented by 1 for meta NCA)
 *   extended_header
 *   NcmContentInfo[N+1]  (entry 0 = meta NCA itself, type=Meta)
 *   NcmContentMetaInfo[M]
 */
static Result build_meta_db_buffer(const uint8_t *cnmt_buf, size_t cnmt_size,
                                   const NcmContentInfo *meta_content_info,
                                   NcmContentMetaKey *out_key,
                                   uint8_t **out_blob, size_t *out_blob_size) {
    if (cnmt_size < sizeof(NcmContentMetaKey) + sizeof(NcmContentMetaHeader))
        return MAKERESULT(Module_Libnx, LibnxError_BadInput);
    size_t off = 0;
    memcpy(out_key, cnmt_buf + off, sizeof *out_key);
    off += sizeof *out_key;

    NcmContentMetaHeader hdr;
    memcpy(&hdr, cnmt_buf + off, sizeof hdr);
    off += sizeof hdr;

    if (off + hdr.extended_header_size > cnmt_size)
        return MAKERESULT(Module_Libnx, LibnxError_BadInput);
    const uint8_t *ext_hdr = cnmt_buf + off;
    off += hdr.extended_header_size;

    size_t cinfo_bytes = (size_t)hdr.content_count * sizeof(NcmContentInfo);
    if (off + cinfo_bytes > cnmt_size) return MAKERESULT(Module_Libnx, LibnxError_BadInput);
    const NcmContentInfo *cinfos = (const NcmContentInfo *)(cnmt_buf + off);
    off += cinfo_bytes;

    size_t cmeta_bytes = (size_t)hdr.content_meta_count * sizeof(NcmContentMetaInfo);
    if (off + cmeta_bytes > cnmt_size) return MAKERESULT(Module_Libnx, LibnxError_BadInput);
    const NcmContentMetaInfo *cmetas = (const NcmContentMetaInfo *)(cnmt_buf + off);

    NcmContentMetaHeader hdr2 = hdr;
    hdr2.content_count        = (u16)(hdr.content_count + 1);
    hdr2.attributes           = 0;
    hdr2.storage_id           = 0;

    size_t blob_size = sizeof hdr2 + hdr.extended_header_size
                     + (size_t)hdr2.content_count * sizeof(NcmContentInfo)
                     + cmeta_bytes;
    uint8_t *blob = (uint8_t *)malloc(blob_size);
    if (!blob) return MAKERESULT(Module_Libnx, LibnxError_HeapAllocFailed);

    size_t w = 0;
    memcpy(blob + w, &hdr2, sizeof hdr2); w += sizeof hdr2;
    memcpy(blob + w, ext_hdr, hdr.extended_header_size); w += hdr.extended_header_size;
    memcpy(blob + w, meta_content_info, sizeof *meta_content_info); w += sizeof *meta_content_info;
    memcpy(blob + w, cinfos, cinfo_bytes); w += cinfo_bytes;
    if (cmeta_bytes) { memcpy(blob + w, cmetas, cmeta_bytes); w += cmeta_bytes; }

    *out_blob = blob;
    *out_blob_size = w;
    return 0;
}

/* -- Read a whole PFS0 entry into a heap buffer ----------------------------
 * Works for either random-access (read) or streaming (stream) sources. */
typedef struct {
    uint8_t *buf;
    size_t   cap;
    size_t   len;
    Result   err;
} buffer_sink_ctx_t;

static int buffer_sink(const uint8_t *data, size_t len, void *ctx_) {
    buffer_sink_ctx_t *ctx = (buffer_sink_ctx_t *)ctx_;
    if (ctx->len + len > ctx->cap) {
        ctx->err = MAKERESULT(Module_Libnx, LibnxError_HeapAllocFailed);
        return -1;
    }
    memcpy(ctx->buf + ctx->len, data, len);
    ctx->len += len;
    return 0;
}

static Result read_pfs0_entry_fully(const char *nsp_name, const pfs0_file_t *f,
                                    const install_source_t *src,
                                    uint8_t **out_buf, size_t *out_size) {
    uint8_t *buf = (uint8_t *)malloc((size_t)f->size);
    if (!buf) return MAKERESULT(Module_Libnx, LibnxError_HeapAllocFailed);
    if (src->read) {
        int rc = src->read(nsp_name, f->offset, (size_t)f->size, buf, src->ctx);
        if (rc) { free(buf); return MAKERESULT(Module_Libnx, LibnxError_BadInput); }
    } else if (src->stream) {
        buffer_sink_ctx_t bs = { .buf = buf, .cap = (size_t)f->size, .len = 0, .err = 0 };
        int rc = src->stream(nsp_name, f->offset, f->size, buffer_sink, &bs, src->ctx);
        if (rc || bs.len != (size_t)f->size) {
            free(buf);
            return bs.err ? bs.err : MAKERESULT(Module_Libnx, LibnxError_BadInput);
        }
    } else {
        free(buf);
        return MAKERESULT(Module_Libnx, LibnxError_BadInput);
    }
    *out_buf  = buf;
    *out_size = (size_t)f->size;
    return 0;
}

/* -- Import every (.tik, .cert) pair into the ticket database --------------
 * Mirrors DBI's ImportTicket flow (es service, cmd 1). For each .tik entry
 * in the PFS0 we look for a sibling .cert (same base name); if found, both
 * are slurped and handed to esImportTicket. NSPs without tickets (e.g.
 * base-firmware titles) are treated as a no-op success. */
static Result install_tickets(const char *nsp_name, const pfs0_t *pfs0,
                              const install_source_t *src, const install_opts_t *opts) {
    Result rc = esInitialize();
    if (R_FAILED(rc)) return rc;

    size_t imported = 0;
    for (size_t i = 0; i < pfs0->num_files; i++) {
        const pfs0_file_t *tf = &pfs0->files[i];
        if (!ends_with(tf->name, ".tik")) continue;

        size_t tl = strlen(tf->name);
        if (tl < 4 || tl > 200) continue;
        char cert_name[256];
        memcpy(cert_name, tf->name, tl - 4);
        memcpy(cert_name + tl - 4, ".cert", 6);

        const pfs0_file_t *cf = NULL;
        for (size_t j = 0; j < pfs0->num_files; j++) {
            if (strcmp(pfs0->files[j].name, cert_name) == 0) { cf = &pfs0->files[j]; break; }
        }
        if (!cf) continue;

        uint8_t *tik = NULL, *cert = NULL; size_t tik_sz = 0, cert_sz = 0;
        rc = read_pfs0_entry_fully(nsp_name, tf, src, &tik, &tik_sz);
        if (R_FAILED(rc)) break;
        rc = read_pfs0_entry_fully(nsp_name, cf, src, &cert, &cert_sz);
        if (R_FAILED(rc)) { free(tik); break; }

        rc = esImportTicket(tik, tik_sz, cert, cert_sz);
        free(tik); free(cert);
        if (R_FAILED(rc)) break;
        imported++;
        report(opts, "ticket", imported, imported);
    }
    esExit();
    return rc;
}

/* -- ns_am2 PushApplicationRecord (IApplicationManagerInterface cmd 16) ----
 * Input:  u8 last_modified_event, u8 pad[7], u64 app_id
 * Buffer: type-X(5) array of ContentStorageRecord (NcmContentMetaKey + storage + pad = 0x18 ea)
 * Stable since 1.0.0. */
typedef struct {
    NcmContentMetaKey key;
    u8 storage_id;
    u8 padding[7];
} ContentStorageRecord;

static Result ns_push_application_record(u64 app_id, const ContentStorageRecord *records,
                                         u32 num_records) {
    Service ami;
    Result rc = nsGetApplicationManagerInterface(&ami);
    if (R_FAILED(rc)) return rc;

    struct {
        u8 last_modified_event;
        u8 pad[7];
        u64 app_id;
    } in = { .last_modified_event = 3, .pad = {0}, .app_id = app_id };

    rc = serviceDispatchIn(&ami, 16, in,
        .buffer_attrs = { SfBufferAttr_HipcMapAlias | SfBufferAttr_In },
        .buffers      = { { records, num_records * sizeof *records } },
    );
    serviceClose(&ami);
    return rc;
}

/* IApplicationManagerInterface cmd 17: ListApplicationRecordContentMeta
 *   In: s64 offset, u64 app_id
 *   TypeB buffer: ContentStorageRecord[]
 *   Out: u32 count_written
 * Used for merge-push so we don't clobber sibling Patch/AddOn records. */
static Result ns_list_application_record(u64 app_id, ContentStorageRecord *out,
                                         u32 cap, u32 *out_count) {
    Service ami;
    Result rc = nsGetApplicationManagerInterface(&ami);
    if (R_FAILED(rc)) return rc;

    struct { s64 offset; u64 app_id; } in = { .offset = 0, .app_id = app_id };
    u32 count = 0;
    rc = serviceDispatchInOut(&ami, 17, in, count,
        .buffer_attrs = { SfBufferAttr_HipcMapAlias | SfBufferAttr_Out },
        .buffers      = { { out, cap * sizeof *out } },
    );
    serviceClose(&ami);
    if (R_SUCCEEDED(rc)) *out_count = count;
    return rc;
}

static bool same_meta_key(const NcmContentMetaKey *a, const NcmContentMetaKey *b) {
    return a->id == b->id && a->version == b->version
        && a->type == b->type && a->install_type == b->install_type;
}

/* Push-merge: read existing records for app_id, replace the entry that
 * matches `rec->key`, append if new, then push the full list back. */
static Result ns_push_record_merged(u64 app_id, const ContentStorageRecord *rec) {
    enum { MAX_RECORDS = 32 };
    ContentStorageRecord list[MAX_RECORDS];
    u32 have = 0;
    Result rc = ns_list_application_record(app_id, list, MAX_RECORDS, &have);
    if (R_FAILED(rc)) {
        /* App unknown to ns → fall back to single-entry push. */
        return ns_push_application_record(app_id, rec, 1);
    }

    bool replaced = false;
    for (u32 i = 0; i < have; i++) {
        if (same_meta_key(&list[i].key, &rec->key)) { list[i] = *rec; replaced = true; break; }
    }
    if (!replaced) {
        if (have >= MAX_RECORDS) return MAKERESULT(Module_Libnx, LibnxError_HeapAllocFailed);
        list[have++] = *rec;
    }
    return ns_push_application_record(app_id, list, have);
}

/* -- Main install entry -----------------------------------------------------*/

Result install_nsp(const char *nsp_name, const pfs0_t *pfs0,
                   const install_source_t *src, const install_opts_t *o_) {
    if (!pfs0 || !pfs0->files || pfs0->num_files == 0 || !src)
        return MAKERESULT(Module_Libnx, LibnxError_BadInput);
    const install_opts_t default_opts = {
        .storage     = NcmStorageId_SdCard,
        .applet_mode = false,
        .enable_nsz  = true,
        .create_lfs  = false,
    };
    const install_opts_t *opts = o_ ? o_ : &default_opts;

    /* [Install]/EnableNSZ gate — upstream rejects .ncz payloads in applet
     * mode when the flag is off. Reject upfront (before ncm open) so the
     * user sees a clean error instead of a partial placeholder. */
    if (opts->applet_mode && !opts->enable_nsz) {
        for (size_t i = 0; i < pfs0->num_files; i++) {
            if (nsz_is_compressed(pfs0->files[i].name)) {
                log_linef("install: refusing %s — NSZ disabled in applet mode",
                          nsp_name);
                return MAKERESULT(Module_Libnx, LibnxError_NotFound);
            }
        }
    }

    Result rc = ncmInitialize();
    if (R_FAILED(rc)) return rc;
    rc = nsInitialize();
    if (R_FAILED(rc)) { ncmExit(); return rc; }

    NcmContentStorage cs;
    rc = ncmOpenContentStorage(&cs, opts->storage);
    if (R_FAILED(rc)) goto fail_svc;
    NcmContentMetaDatabase db;
    rc = ncmOpenContentMetaDatabase(&db, opts->storage);
    if (R_FAILED(rc)) { ncmContentStorageClose(&cs); goto fail_svc; }

    /* Locate the meta NCA (.cnmt.nca) — needed for CNMT extraction. */
    const pfs0_file_t *meta_nca_entry = NULL;
    for (size_t i = 0; i < pfs0->num_files; i++)
        if (ends_with(pfs0->files[i].name, ".cnmt.nca")) { meta_nca_entry = &pfs0->files[i]; break; }
    if (!meta_nca_entry) { rc = MAKERESULT(Module_Libnx, LibnxError_BadInput); goto fail_db; }

    /* Phase 0: import any tickets present in the PFS0. Safe to run first —
     * failure here doesn't leave any placeholder garbage behind. */
    rc = install_tickets(nsp_name, pfs0, src, opts);
    if (R_FAILED(rc)) goto fail_db;

    /* Phase 1: install every .nca / .ncz (content body + meta NCA) into placeholders.
     * `.ncz` (NSZ-compressed NCA) is transparently decompressed + CTR-re-encrypted
     * by nsz_install_one so the stored NCA is byte-identical to the upstream .nca. */
    NcmContentId meta_cid; bool have_meta_cid = false;
    for (size_t i = 0; i < pfs0->num_files; i++) {
        const pfs0_file_t *f = &pfs0->files[i];
        bool is_nca = ends_with(f->name, ".nca");
        bool is_ncz = nsz_is_compressed(f->name);
        if (!is_nca && !is_ncz) continue;
        NcmContentId cid;
        rc = is_ncz ? nsz_install_one(nsp_name, f, &cs, &cid, src, opts)
                    : install_one_nca(nsp_name, f, &cs, &cid, src, opts);
        if (R_FAILED(rc)) goto fail_db;
        if (f == meta_nca_entry) { meta_cid = cid; have_meta_cid = true; }
    }
    if (!have_meta_cid) { rc = MAKERESULT(Module_Libnx, LibnxError_BadInput); goto fail_db; }

    /* Phase 2: extract CNMT from the registered meta NCA. */
    uint8_t *cnmt_buf = NULL; size_t cnmt_size = 0;
    rc = read_cnmt_from_meta_nca(&cs, &meta_cid, &cnmt_buf, &cnmt_size);
    if (R_FAILED(rc)) goto fail_db;

    /* Phase 3: build NcmContentInfo for the meta NCA itself. */
    NcmContentInfo meta_info = { 0 };
    meta_info.content_id    = meta_cid;
    ncmU64ToContentInfoSize(meta_nca_entry->size, &meta_info);
    meta_info.content_type  = NcmContentType_Meta;
    meta_info.id_offset     = 0;

    /* Phase 4: assemble meta DB buffer and commit. */
    NcmContentMetaKey meta_key;
    uint8_t *db_blob = NULL; size_t db_blob_size = 0;
    rc = build_meta_db_buffer(cnmt_buf, cnmt_size, &meta_info, &meta_key, &db_blob, &db_blob_size);
    free(cnmt_buf);
    if (R_FAILED(rc)) goto fail_db;

    report(opts, "meta-db", 0, 1);
    rc = ncmContentMetaDatabaseSet(&db, &meta_key, db_blob, db_blob_size);
    if (R_SUCCEEDED(rc)) rc = ncmContentMetaDatabaseCommit(&db);
    free(db_blob);
    if (R_FAILED(rc)) goto fail_db;
    report(opts, "meta-db", 1, 1);

    /* Phase 5: push ApplicationRecord so HOME menu picks up the title.
     *
     * For Patch (0x81): record must be attached to the BASE app id
     *   (base = patch_id & ~0x800). We push a single-entry record; if
     *   a base record already exists, ns will replace it — callers who
     *   need to preserve existing records should read/merge first (see
     *   FINDINGS Part 16 "Open questions"). For MVP this is acceptable
     *   because an update without a base already installed is an error.
     *
     * For AddOnContent (0x82): the base is (dlc_id & ~0xFFF). Same
     *   replace-semantic caveat applies.
     *
     * Other meta types (Delta 0x83, DataPatch 0x84, SystemUpdate,
     *   BootImagePackage...) are written to ncm only — HOME menu
     *   doesn't surface them directly. */
    u64 record_app_id = 0;
    bool push_record = false;
    switch (meta_key.type) {
        case NcmContentMetaType_Application:
            record_app_id = meta_key.id;
            push_record = true;
            break;
        case NcmContentMetaType_Patch:
            record_app_id = meta_key.id & ~(u64)0x800;
            push_record = true;
            break;
        case NcmContentMetaType_AddOnContent:
            record_app_id = meta_key.id & ~(u64)0xFFF;
            push_record = true;
            break;
        default:
            break;
    }
    if (push_record) {
        ContentStorageRecord rec = {
            .key        = meta_key,
            .storage_id = (u8)opts->storage,
            .padding    = { 0 },
        };
        /* Merge against existing records so a patch install doesn't wipe the
         * base/DLC entries, and vice versa. */
        rc = ns_push_record_merged(record_app_id, &rec);
        if (R_FAILED(rc)) goto fail_db;
    }

    /* [Install]/CreateLFS — drop an empty `/atmosphere/contents/<TID>/`
     * marker for Application installs so users can mod without manually
     * creating the path. Patch/DLC share the base TID so we'd duplicate
     * the mkdir; skip them. mkdir(EEXIST) is harmless. */
    if (opts->create_lfs && meta_key.type == NcmContentMetaType_Application) {
        char atm[96];
        mkdir("sdmc:/atmosphere", 0777);
        mkdir("sdmc:/atmosphere/contents", 0777);
        snprintf(atm, sizeof atm, "sdmc:/atmosphere/contents/%016llx",
                 (unsigned long long)meta_key.id);
        mkdir(atm, 0777);
    }

    report(opts, "install", 1, 1);

fail_db:
    ncmContentMetaDatabaseClose(&db);
    ncmContentStorageClose(&cs);
fail_svc:
    nsExit();
    ncmExit();
    return rc;
}

/* -- Zip-archive install ---------------------------------------------------*/

Result install_from_zip(const char *zip_path, const install_opts_t *opts) {
    zipsrc_t *z = NULL;
    Result rc = zipsrc_open(&z, zip_path);
    if (R_FAILED(rc)) { log_linef("zip: open %s failed 0x%x", zip_path, rc); return rc; }

    install_source_t src;
    zipsrc_as_source(z, &src);

    static uint8_t hdrbuf[0x10000];   /* PFS0 header scratch (max 64 KB) */
    char name[256];
    uint64_t size = 0;
    int step = zipsrc_first(z, name, &size);
    bool any = false;
    Result last = 0;

    while (step == 0) {
        log_event("zip: installing entry %s (%" PRIu64 " B)", name, size);
        pfs0_t pfs0;
        Result prc = install_fetch_pfs0(&src, name, &pfs0, hdrbuf, sizeof hdrbuf);
        if (R_SUCCEEDED(prc)) {
            prc = install_nsp(name, &pfs0, &src, opts);
            pfs0_free(&pfs0);
        }
        if (R_FAILED(prc)) { last = prc; log_linef("zip: %s failed 0x%x", name, prc); }
        else any = true;

        step = zipsrc_next(z, name, &size);
    }
    zipsrc_close(z);

    if (step < 0) return MAKERESULT(Module_Libnx, LibnxError_BadInput);
    if (!any)     return last ? last : MAKERESULT(Module_Libnx, LibnxError_NotFound);
    return last;
}
