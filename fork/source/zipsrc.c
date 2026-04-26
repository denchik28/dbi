#include "zipsrc.h"
#include "log.h"
#include <minizip/unzip.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/* Per-entry forward-only decompression cursor. install.c's access pattern for
 * a PFS0 install is:
 *     read(name, 0, 16)                 // header pass 1
 *     read(name, 0, need)                // header pass 2 (~4 KB)
 *     stream(name, data_off + file[0].offset, file[0].size)
 *     stream(name, data_off + file[1].offset, file[1].size)
 *     ...
 * Every step is either at cur_pos or forward of it, except the second header
 * read which rewinds to 0. We implement rewind by reopening the entry. */

struct zipsrc_s {
    unzFile  zf;
    char     zip_path[384];
    char     active[256];   /* name of currently-opened entry, "" if none */
    uint64_t cur_pos;       /* decompressed cursor within active entry */
    uint8_t  scratch[8 * 1024];
};

/* -- helpers -------------------------------------------------------------- */

static bool ext_is_payload(const char *name) {
    size_t n = strlen(name);
    if (n < 4) return false;
    const char *e = name + n - 4;
    return  strcmp(e, ".nsp") == 0 || strcmp(e, ".NSP") == 0
         || strcmp(e, ".nsz") == 0 || strcmp(e, ".NSZ") == 0
         || strcmp(e, ".xci") == 0 || strcmp(e, ".XCI") == 0
         || strcmp(e, ".xcz") == 0 || strcmp(e, ".XCZ") == 0;
}

static int close_active(zipsrc_t *z) {
    if (z->active[0]) {
        unzCloseCurrentFile(z->zf);
        z->active[0] = 0;
        z->cur_pos = 0;
    }
    return 0;
}

static int open_entry(zipsrc_t *z, const char *name) {
    if (unzLocateFile(z->zf, name, /*case_sensitive=*/1) != UNZ_OK) {
        if (unzLocateFile(z->zf, name, 0) != UNZ_OK) return -1;
    }
    if (unzOpenCurrentFile(z->zf) != UNZ_OK) return -1;
    strncpy(z->active, name, sizeof z->active - 1);
    z->active[sizeof z->active - 1] = 0;
    z->cur_pos = 0;
    return 0;
}

static int ensure_entry(zipsrc_t *z, const char *name) {
    if (strcmp(z->active, name) == 0) return 0;
    close_active(z);
    return open_entry(z, name);
}

static int skip_forward(zipsrc_t *z, uint64_t target) {
    while (z->cur_pos < target) {
        uint64_t want = target - z->cur_pos;
        if (want > sizeof z->scratch) want = sizeof z->scratch;
        int n = unzReadCurrentFile(z->zf, z->scratch, (unsigned)want);
        if (n <= 0) return -1;
        z->cur_pos += (uint64_t)n;
    }
    return 0;
}

static int rewind_entry(zipsrc_t *z) {
    char saved[256];
    strncpy(saved, z->active, sizeof saved);
    saved[sizeof saved - 1] = 0;
    unzCloseCurrentFile(z->zf);
    z->active[0] = 0;
    return open_entry(z, saved);
}

static int seek_to(zipsrc_t *z, uint64_t offset) {
    if (offset < z->cur_pos) {
        if (rewind_entry(z) != 0) return -1;
    }
    return skip_forward(z, offset);
}

/* -- install_source_t callbacks ------------------------------------------- */

static int src_read(const char *nsp_name, uint64_t offset, size_t len,
                    uint8_t *out, void *ctx) {
    zipsrc_t *z = (zipsrc_t *)ctx;
    if (ensure_entry(z, nsp_name) != 0) return -1;
    if (seek_to(z, offset) != 0) return -1;

    size_t got = 0;
    while (got < len) {
        int n = unzReadCurrentFile(z->zf, out + got, (unsigned)(len - got));
        if (n <= 0) return -1;
        got += (size_t)n;
        z->cur_pos += (uint64_t)n;
    }
    return 0;
}

static int src_stream(const char *nsp_name, uint64_t offset, uint64_t size,
                      int (*sink)(const uint8_t *, size_t, void *),
                      void *sink_ctx, void *src_ctx) {
    zipsrc_t *z = (zipsrc_t *)src_ctx;
    if (ensure_entry(z, nsp_name) != 0) return -1;
    if (seek_to(z, offset) != 0) return -1;

    uint64_t remaining = size;
    while (remaining > 0) {
        size_t chunk = remaining > sizeof z->scratch
                       ? sizeof z->scratch : (size_t)remaining;
        int n = unzReadCurrentFile(z->zf, z->scratch, (unsigned)chunk);
        if (n <= 0) return -1;
        if (sink(z->scratch, (size_t)n, sink_ctx) != 0) return -1;
        z->cur_pos += (uint64_t)n;
        remaining  -= (uint64_t)n;
    }
    return 0;
}

/* -- public API ----------------------------------------------------------- */

Result zipsrc_open(zipsrc_t **out, const char *zip_path) {
    *out = NULL;
    zipsrc_t *z = (zipsrc_t *)calloc(1, sizeof *z);
    if (!z) return MAKERESULT(Module_Libnx, LibnxError_HeapAllocFailed);

    z->zf = unzOpen64(zip_path);
    if (!z->zf) {
        free(z);
        return MAKERESULT(Module_Libnx, LibnxError_NotFound);
    }
    strncpy(z->zip_path, zip_path, sizeof z->zip_path - 1);
    *out = z;
    return 0;
}

void zipsrc_close(zipsrc_t *z) {
    if (!z) return;
    close_active(z);
    if (z->zf) unzClose(z->zf);
    free(z);
}

static int zipsrc_emit_current(zipsrc_t *z, char out_name[256],
                               uint64_t *out_size) {
    unz_file_info64 info;
    char namebuf[256];
    if (unzGetCurrentFileInfo64(z->zf, &info, namebuf, sizeof namebuf,
                                NULL, 0, NULL, 0) != UNZ_OK)
        return -1;
    /* Strip any directory prefix so install can parse the hex name. */
    const char *basename = namebuf;
    for (const char *p = namebuf; *p; p++)
        if (*p == '/' || *p == '\\') basename = p + 1;
    strncpy(out_name, basename, 255);
    out_name[255] = 0;
    *out_size = info.uncompressed_size;
    return 0;
}

static int find_next_payload(zipsrc_t *z, char out_name[256], uint64_t *out_size,
                             int (*step)(unzFile)) {
    for (;;) {
        if (zipsrc_emit_current(z, out_name, out_size) == 0 &&
            ext_is_payload(out_name))
            return 0;
        int rc = step(z->zf);
        if (rc == UNZ_END_OF_LIST_OF_FILE) return 1;
        if (rc != UNZ_OK)                  return -1;
    }
}

int zipsrc_first(zipsrc_t *z, char out_name[256], uint64_t *out_size) {
    if (unzGoToFirstFile(z->zf) != UNZ_OK) return -1;
    /* close_active() in case caller iterates after an install. */
    close_active(z);
    return find_next_payload(z, out_name, out_size, unzGoToNextFile);
}

int zipsrc_next(zipsrc_t *z, char out_name[256], uint64_t *out_size) {
    close_active(z);
    int rc = unzGoToNextFile(z->zf);
    if (rc == UNZ_END_OF_LIST_OF_FILE) return 1;
    if (rc != UNZ_OK)                  return -1;
    return find_next_payload(z, out_name, out_size, unzGoToNextFile);
}

void zipsrc_as_source(zipsrc_t *z, install_source_t *out) {
    out->read   = src_read;
    out->stream = src_stream;
    out->ctx    = z;
}
