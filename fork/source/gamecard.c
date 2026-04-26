#include "gamecard.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/* fsOpenGameCardStorage (fs cmd 30) is not exported by libnx 4.12.0.
 * We dispatch it ourselves against the fs service session. Layout
 * mirrors libnx' fsOpenGameCardFileSystem (cmd 31): { u32 handle,
 * u32 partition } in, one out object = FsStorage. DBI uses
 * partition=1 for the XCI dump path (FINDINGS §18). */
static Result fork_fsOpenGameCardStorage(FsStorage *out,
                                         const FsGameCardHandle *handle,
                                         u32 partition) {
    const struct {
        u32 handle;
        u32 partition;
    } in = { handle->value, partition };

    return serviceDispatchIn(fsGetServiceSession(), 30, in,
        .out_num_objects = 1,
        .out_objects     = &out->s,
    );
}

/* rom_size enum byte → raw card capacity in bytes (switchbrew table). */
static u64 rom_size_to_bytes(u8 v) {
    switch (v) {
        case 0xFA: return 1ULL  * 1024 * 1024 * 1024;  /* 1  GB */
        case 0xF8: return 2ULL  * 1024 * 1024 * 1024;  /* 2  GB */
        case 0xF0: return 4ULL  * 1024 * 1024 * 1024;  /* 4  GB */
        case 0xE0: return 8ULL  * 1024 * 1024 * 1024;  /* 8  GB */
        case 0xE1: return 16ULL * 1024 * 1024 * 1024;  /* 16 GB */
        case 0xE2: return 32ULL * 1024 * 1024 * 1024;  /* 32 GB */
        default:   return 0;
    }
}

static void read_xci_header(gamecard_info_t *out, const FsGameCardHandle *h) {
    FsStorage st;
    Result rc = fork_fsOpenGameCardStorage(&st, h, 1);
    if (R_FAILED(rc)) {
        snprintf(out->error, sizeof out->error,
                 "OpenGameCardStorage 0x%08x", rc);
        return;
    }

    u8 hdr[0x200];
    memset(hdr, 0, sizeof hdr);
    rc = fsStorageRead(&st, 0, hdr, sizeof hdr);
    fsStorageClose(&st);
    if (R_FAILED(rc)) {
        snprintf(out->error, sizeof out->error,
                 "fsStorageRead 0x%08x", rc);
        return;
    }

    u32 magic;
    memcpy(&magic, hdr + 0x100, sizeof magic);
    out->magic = magic;

    out->key_index             = hdr[0x10C];
    out->rom_size              = hdr[0x10D];
    out->card_header_version   = hdr[0x10E];
    out->card_flags            = hdr[0x10F];
    memcpy(&out->package_id,              hdr + 0x110, sizeof out->package_id);
    memcpy(&out->valid_data_end_address,  hdr + 0x118, sizeof out->valid_data_end_address);
    out->used_bytes     = (u64)out->valid_data_end_address * 0x200ULL;
    out->capacity_bytes = rom_size_to_bytes(out->rom_size);
    out->header_ok      = (magic == 0x44414548u); /* 'HEAD' LE */
    if (!out->header_ok) {
        snprintf(out->error, sizeof out->error,
                 "bad XCI magic 0x%08x", (unsigned)magic);
    }
}

Result gamecard_probe(gamecard_info_t *out) {
    memset(out, 0, sizeof *out);

    Result rc = fsInitialize();
    if (R_FAILED(rc)) {
        snprintf(out->error, sizeof out->error, "fsInitialize 0x%08x", rc);
        return rc;
    }

    FsDeviceOperator op;
    rc = fsOpenDeviceOperator(&op);
    if (R_FAILED(rc)) {
        snprintf(out->error, sizeof out->error, "DeviceOperator 0x%08x", rc);
        fsExit();
        return rc;
    }

    bool inserted = false;
    rc = fsDeviceOperatorIsGameCardInserted(&op, &inserted);
    if (R_FAILED(rc)) {
        snprintf(out->error, sizeof out->error, "IsInserted 0x%08x", rc);
        fsDeviceOperatorClose(&op);
        fsExit();
        return rc;
    }
    out->inserted = inserted;
    if (!inserted) {
        snprintf(out->error, sizeof out->error, "no game card present");
        fsDeviceOperatorClose(&op);
        fsExit();
        return 0;
    }

    FsGameCardHandle gc_handle;
    rc = fsDeviceOperatorGetGameCardHandle(&op, &gc_handle);
    if (R_FAILED(rc)) {
        snprintf(out->error, sizeof out->error, "GetHandle 0x%08x", rc);
        fsDeviceOperatorClose(&op);
        fsExit();
        return rc;
    }

    /* GameCardIdSet: 3 × 0x10 blob (id1/id2/id3). The `size` parameter
     * is passed twice (dst_size + requested size) per libnx convention. */
    s64 idset_sz = GC_ID_SET_SIZE;
    fsDeviceOperatorGetGameCardIdSet(&op, out->id_set,
                                     sizeof out->id_set, idset_sz);

    u8 attr = 0;
    fsDeviceOperatorGetGameCardAttribute(&op, &gc_handle, &attr);
    out->attribute = attr;

    read_xci_header(out, &gc_handle);

    fsDeviceOperatorClose(&op);
    fsExit();
    return 0;
}

/* ---- XCI dump ---------------------------------------------------------- */

#define GC_DUMP_CHUNK (1u * 1024u * 1024u)

Result gamecard_dump_xci(const char *out_path, bool valid_only,
                         gamecard_progress_cb_t cb, void *cb_ctx) {
    if (!out_path || !out_path[0]) return MAKERESULT(Module_Libnx, LibnxError_BadInput);

    Result rc = fsInitialize();
    if (R_FAILED(rc)) return rc;

    FsDeviceOperator op;
    rc = fsOpenDeviceOperator(&op);
    if (R_FAILED(rc)) { fsExit(); return rc; }

    bool inserted = false;
    rc = fsDeviceOperatorIsGameCardInserted(&op, &inserted);
    if (R_FAILED(rc) || !inserted) {
        fsDeviceOperatorClose(&op);
        fsExit();
        return R_FAILED(rc) ? rc : MAKERESULT(Module_Libnx, LibnxError_NotFound);
    }

    FsGameCardHandle gc_handle;
    rc = fsDeviceOperatorGetGameCardHandle(&op, &gc_handle);
    if (R_FAILED(rc)) { fsDeviceOperatorClose(&op); fsExit(); return rc; }

    FsStorage st;
    rc = fork_fsOpenGameCardStorage(&st, &gc_handle, 1);
    if (R_FAILED(rc)) { fsDeviceOperatorClose(&op); fsExit(); return rc; }

    /* Resolve total length: prefer header's valid_data_end_address when
     * trimmed, otherwise rom_size enum → byte count, falling back to the
     * IStorage-reported size. */
    u8 hdr[0x200];
    memset(hdr, 0, sizeof hdr);
    rc = fsStorageRead(&st, 0, hdr, sizeof hdr);
    if (R_FAILED(rc)) { fsStorageClose(&st); fsDeviceOperatorClose(&op); fsExit(); return rc; }

    u32 magic;
    memcpy(&magic, hdr + 0x100, sizeof magic);
    u8 rom_size = hdr[0x10D];
    u32 valid_end = 0;
    memcpy(&valid_end, hdr + 0x118, sizeof valid_end);

    u64 total = 0;
    if (valid_only && magic == 0x44414548u && valid_end) {
        total = (u64)valid_end * 0x200ULL;
    } else {
        total = rom_size_to_bytes(rom_size);
        if (total == 0) {
            s64 got = 0;
            if (R_SUCCEEDED(fsStorageGetSize(&st, &got)) && got > 0) {
                total = (u64)got;
            }
        }
    }
    if (total == 0) {
        fsStorageClose(&st);
        fsDeviceOperatorClose(&op);
        fsExit();
        return MAKERESULT(Module_Libnx, LibnxError_BadInput);
    }

    FILE *fp = fopen(out_path, "wb");
    if (!fp) { fsStorageClose(&st); fsDeviceOperatorClose(&op); fsExit();
               return MAKERESULT(Module_Libnx, LibnxError_IoError); }

    u8 *buf = (u8 *)malloc(GC_DUMP_CHUNK);
    if (!buf) { fclose(fp); remove(out_path); fsStorageClose(&st);
                fsDeviceOperatorClose(&op); fsExit();
                return MAKERESULT(Module_Libnx, LibnxError_HeapAllocFailed); }

    u64 done = 0;
    Result last = 0;
    while (done < total) {
        u64 want = total - done;
        if (want > GC_DUMP_CHUNK) want = GC_DUMP_CHUNK;
        rc = fsStorageRead(&st, (s64)done, buf, want);
        if (R_FAILED(rc)) { last = rc; break; }
        if (fwrite(buf, 1, (size_t)want, fp) != (size_t)want) {
            last = MAKERESULT(Module_Libnx, LibnxError_IoError);
            break;
        }
        done += want;
        if (cb && cb(done, total, cb_ctx) != 0) {
            last = MAKERESULT(Module_Libnx, LibnxError_BadInput);
            break;
        }
    }

    free(buf);
    fclose(fp);
    if (R_FAILED(last)) remove(out_path);
    fsStorageClose(&st);
    fsDeviceOperatorClose(&op);
    fsExit();
    return last;
}
