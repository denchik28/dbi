#include "titledb.h"
#include "http.h"
#include "log.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <time.h>

/* ---- parsing ------------------------------------------------------------ */

static uint64_t parse_hex_u64(const char *s, const char *end) {
    uint64_t v = 0;
    while (s < end) {
        int c = *s;
        if (c >= '0' && c <= '9') v = (v << 4) | (uint32_t)(c - '0');
        else if (c >= 'a' && c <= 'f') v = (v << 4) | (uint32_t)(c - 'a' + 10);
        else if (c >= 'A' && c <= 'F') v = (v << 4) | (uint32_t)(c - 'A' + 10);
        else break;
        s++;
    }
    return v;
}

static uint32_t parse_dec_u32(const char *s, const char *end) {
    uint32_t v = 0;
    while (s < end && *s >= '0' && *s <= '9') { v = v * 10 + (*s - '0'); s++; }
    return v;
}

static int cmp_entry(const void *a_, const void *b_) {
    const titledb_entry_t *a = (const titledb_entry_t *)a_;
    const titledb_entry_t *b = (const titledb_entry_t *)b_;
    if (a->id < b->id) return -1;
    if (a->id > b->id) return  1;
    return 0;
}

/* Parse buf in-place (no mutation). Appends to db->entries, resizing cap. */
static Result parse_lines(titledb_t *db, const char *buf, size_t size) {
    const char *p = buf;
    const char *end = buf + size;
    bool header_skipped = false;

    while (p < end) {
        const char *line = p;
        while (p < end && *p != '\n' && *p != '\r') p++;
        size_t llen = (size_t)(p - line);
        while (p < end && (*p == '\n' || *p == '\r')) p++;

        if (llen == 0) continue;

        if (!header_skipped) {
            header_skipped = true;
            /* Header always starts with "id|" — skip it. */
            if (llen >= 3 && line[0] == 'i' && line[1] == 'd' && line[2] == '|')
                continue;
            /* If first non-empty line isn't a header, treat it as data. */
        }

        const char *bar1 = memchr(line, '|', llen);
        if (!bar1) continue;
        const char *bar2 = memchr(bar1 + 1, '|', (size_t)(line + llen - (bar1 + 1)));
        if (!bar2) continue;

        uint64_t id = parse_hex_u64(line, bar1);
        if (id == 0) continue;
        uint32_t version = parse_dec_u32(bar2 + 1, line + llen);

        if (db->count == db->cap) {
            size_t want = db->cap ? db->cap * 2 : 4096;
            titledb_entry_t *ne = (titledb_entry_t *)realloc(db->entries,
                                                             want * sizeof *ne);
            if (!ne) return MAKERESULT(Module_Libnx, LibnxError_HeapAllocFailed);
            db->entries = ne;
            db->cap     = want;
        }
        db->entries[db->count].id      = id;
        db->entries[db->count].version = version;
        db->count++;
    }

    qsort(db->entries, db->count, sizeof db->entries[0], cmp_entry);
    return 0;
}

/* ---- download ----------------------------------------------------------- */

Result titledb_download(const char *url) {
    if (!url) url = TITLEDB_DEFAULT_URL;

    uint8_t *buf = NULL; size_t sz = 0;
    /* versions.txt is ~5-6 MB today; cap at 32 MB for headroom. */
    http_result_t r = http_get_buf(url, 32 * 1024 * 1024, &buf, &sz);
    if (r.status != 200 || !buf) {
        log_linef("titledb: download failed status=%d %s", r.status, r.err);
        free(buf);
        return MAKERESULT(Module_Libnx, LibnxError_IoError);
    }

    mkdir("sdmc:/switch",           0777);
    mkdir("sdmc:/switch/DBI",       0777);
    mkdir("sdmc:/switch/DBI/cache", 0777);

    FILE *f = fopen(TITLEDB_CACHE_PATH, "wb");
    if (!f) { free(buf); return MAKERESULT(Module_Libnx, LibnxError_IoError); }
    size_t w = fwrite(buf, 1, sz, f);
    fclose(f);
    free(buf);

    if (w != sz) return MAKERESULT(Module_Libnx, LibnxError_IoError);
    log_event("titledb: cached %zu B at %s", sz, TITLEDB_CACHE_PATH);
    return 0;
}

/* ---- load cache --------------------------------------------------------- */

Result titledb_load_cache(titledb_t *db) {
    memset(db, 0, sizeof *db);

    FILE *f = fopen(TITLEDB_CACHE_PATH, "rb");
    if (!f) return MAKERESULT(Module_Libnx, LibnxError_NotFound);
    fseek(f, 0, SEEK_END);
    long sz = ftell(f);
    fseek(f, 0, SEEK_SET);
    if (sz <= 0 || sz > 64 * 1024 * 1024) {
        fclose(f);
        return MAKERESULT(Module_Libnx, LibnxError_BadInput);
    }

    char *buf = (char *)malloc((size_t)sz);
    if (!buf) { fclose(f); return MAKERESULT(Module_Libnx, LibnxError_HeapAllocFailed); }
    size_t got = fread(buf, 1, (size_t)sz, f);

    struct stat st;
    if (fstat(fileno(f), &st) == 0) db->fetched_at_unix = (uint64_t)st.st_mtime;
    fclose(f);

    Result rc = parse_lines(db, buf, got);
    free(buf);

    if (R_FAILED(rc)) { titledb_free(db); return rc; }
    log_event("titledb: loaded %zu entries", db->count);
    return 0;
}

void titledb_free(titledb_t *db) {
    if (!db) return;
    free(db->entries);
    db->entries = NULL;
    db->count = db->cap = 0;
}

/* ---- lookup ------------------------------------------------------------- */

uint32_t titledb_lookup(const titledb_t *db, uint64_t id) {
    if (!db || db->count == 0) return 0;
    size_t lo = 0, hi = db->count;
    while (lo < hi) {
        size_t m = (lo + hi) / 2;
        if (db->entries[m].id < id)      lo = m + 1;
        else if (db->entries[m].id > id) hi = m;
        else return db->entries[m].version;
    }
    return 0;
}

bool titledb_has_newer_patch(const titledb_t *db, uint64_t base_app_id,
                             uint32_t installed_patch_version) {
    /* Patch title id is base | 0x800. */
    uint64_t patch_id = base_app_id | 0x800;
    uint32_t remote = titledb_lookup(db, patch_id);
    return remote > installed_patch_version;
}
