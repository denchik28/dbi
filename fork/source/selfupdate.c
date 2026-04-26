#include "selfupdate.h"
#include "http.h"
#include "log.h"
#include <minizip/unzip.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <inttypes.h>
#include <sys/stat.h>

/* ---- HTML anchor scan --------------------------------------------------- */

typedef struct {
    uint32_t maj, min, pat, bld;
    char     fname[128];  /* filename stem extracted from href */
} ver_t;

static int parse_u(const char **p, const char *end, uint32_t *out) {
    const char *s = *p;
    uint32_t v = 0; int any = 0;
    while (s < end && *s >= '0' && *s <= '9') { v = v*10 + (uint32_t)(*s - '0'); s++; any = 1; }
    if (!any) return -1;
    *p = s;
    *out = v;
    return 0;
}

/* Parse `{major}.{minor}.{patch}[-{build}]` prefix of `name` into `out`.
 * Returns 0 on match. */
static int parse_version_prefix(const char *name, ver_t *out) {
    const char *p = name;
    const char *end = name + strlen(name);
    out->maj = out->min = out->pat = out->bld = 0;

    /* Skip leading non-digits so links like "DBI-3.11.0-1.zip" work. */
    while (p < end && !(*p >= '0' && *p <= '9')) p++;
    if (parse_u(&p, end, &out->maj) != 0) return -1;
    if (p >= end || *p != '.') return -1;
    p++;
    if (parse_u(&p, end, &out->min) != 0) return -1;
    if (p >= end || *p != '.') return -1;
    p++;
    if (parse_u(&p, end, &out->pat) != 0) return -1;
    if (p < end && *p == '-') { p++; parse_u(&p, end, &out->bld); }
    return 0;
}

static int ver_cmp(const ver_t *a, const ver_t *b) {
    if (a->maj != b->maj) return a->maj < b->maj ? -1 : 1;
    if (a->min != b->min) return a->min < b->min ? -1 : 1;
    if (a->pat != b->pat) return a->pat < b->pat ? -1 : 1;
    if (a->bld != b->bld) return a->bld < b->bld ? -1 : 1;
    return 0;
}

static bool href_ends_zip(const char *s, size_t n) {
    if (n < 4) return false;
    return (s[n-4] == '.') &&
           ((s[n-3]|32) == 'z') && ((s[n-2]|32) == 'i') && ((s[n-1]|32) == 'p');
}

/* Walk `buf` (html) for `<a href="..."`, pull out every href whose URL ends
 * in `.zip`. Pick the one with the highest version. Writes the absolute-ish
 * href into `out_href` (may be relative to `base_url`). */
static int scan_newest_zip(const char *buf, size_t size,
                           char out_href[256], ver_t *out_ver) {
    const char *end = buf + size;
    ver_t best = { 0 }; bool have = false;
    char best_href[256] = { 0 };

    for (const char *p = buf; p < end; ) {
        /* Find "href=" case-insensitively. */
        const char *q = NULL;
        for (const char *s = p; s + 5 <= end; s++) {
            if ((s[0]|32)=='h' && (s[1]|32)=='r' && (s[2]|32)=='e' &&
                (s[3]|32)=='f' && s[4]=='=') { q = s + 5; break; }
        }
        if (!q) break;

        char quote = 0;
        if (q < end && (*q == '"' || *q == '\'')) { quote = *q; q++; }
        const char *hs = q;
        while (q < end && *q != quote && *q != '>' && *q != ' ' &&
               *q != '\r' && *q != '\n' && *q != '\t') q++;
        size_t hl = (size_t)(q - hs);

        if (hl > 0 && hl < sizeof best_href && href_ends_zip(hs, hl)) {
            /* Extract basename for version parse. */
            const char *slash = hs;
            for (const char *s = hs; s < hs + hl; s++)
                if (*s == '/' || *s == '\\') slash = s + 1;
            size_t fn = (size_t)((hs + hl) - slash);
            if (fn < 127) {
                char fname[128];
                memcpy(fname, slash, fn);
                fname[fn] = 0;
                ver_t v;
                if (parse_version_prefix(fname, &v) == 0) {
                    if (!have || ver_cmp(&v, &best) > 0) {
                        best = v;
                        have = true;
                        memcpy(best_href, hs, hl);
                        best_href[hl] = 0;
                    }
                }
            }
        }
        p = q + 1;
    }

    if (!have) return -1;
    memcpy(out_href, best_href, sizeof best_href);
    out_href[sizeof best_href - 1] = 0;
    *out_ver = best;
    return 0;
}

/* ---- absolute-URL resolution ------------------------------------------- */

static void resolve_url(const char *base, const char *href,
                        char out[512]) {
    if (strstr(href, "://")) { /* already absolute */
        snprintf(out, 512, "%s", href);
        return;
    }
    if (href[0] == '/') {
        /* scheme + host from base + absolute path */
        const char *p = strstr(base, "://");
        p = p ? p + 3 : base;
        const char *host_end = strchr(p, '/');
        size_t prefix = host_end ? (size_t)(host_end - base) : strlen(base);
        if (prefix > 480) prefix = 480;
        memcpy(out, base, prefix);
        out[prefix] = 0;
        strncat(out, href, 512 - prefix - 1);
        return;
    }
    /* relative to base directory */
    const char *last_slash = NULL;
    for (const char *p = base; *p; p++) if (*p == '/') last_slash = p;
    if (!last_slash) { snprintf(out, 512, "%s", href); return; }
    size_t prefix = (size_t)(last_slash - base + 1);
    if (prefix > 480) prefix = 480;
    memcpy(out, base, prefix);
    out[prefix] = 0;
    strncat(out, href, 512 - prefix - 1);
}

/* ---- zip extraction ---------------------------------------------------- */

static Result extract_first_nro(const char *zip_path, const char *out_nro_path,
                                uint64_t *out_size) {
    unzFile zf = unzOpen64(zip_path);
    if (!zf) return MAKERESULT(Module_Libnx, LibnxError_NotFound);

    int rc = unzGoToFirstFile(zf);
    bool found = false;
    while (rc == UNZ_OK && !found) {
        char name[256];
        unz_file_info64 info;
        if (unzGetCurrentFileInfo64(zf, &info, name, sizeof name,
                                    NULL, 0, NULL, 0) != UNZ_OK) break;

        size_t n = strlen(name);
        bool is_nro = n >= 4 && (name[n-4]=='.') &&
                      ((name[n-3]|32)=='n') && ((name[n-2]|32)=='r') &&
                      ((name[n-1]|32)=='o');
        if (is_nro) { found = true; break; }
        rc = unzGoToNextFile(zf);
    }
    if (!found) { unzClose(zf); return MAKERESULT(Module_Libnx, LibnxError_NotFound); }

    if (unzOpenCurrentFile(zf) != UNZ_OK) {
        unzClose(zf);
        return MAKERESULT(Module_Libnx, LibnxError_IoError);
    }
    FILE *f = fopen(out_nro_path, "wb");
    if (!f) { unzCloseCurrentFile(zf); unzClose(zf);
             return MAKERESULT(Module_Libnx, LibnxError_IoError); }

    uint8_t scratch[64 * 1024];
    uint64_t total = 0;
    for (;;) {
        int n = unzReadCurrentFile(zf, scratch, sizeof scratch);
        if (n <= 0) break;
        if (fwrite(scratch, 1, (size_t)n, f) != (size_t)n) {
            fclose(f); unzCloseCurrentFile(zf); unzClose(zf);
            return MAKERESULT(Module_Libnx, LibnxError_IoError);
        }
        total += (uint64_t)n;
    }
    fclose(f);
    unzCloseCurrentFile(zf);
    unzClose(zf);
    *out_size = total;
    return 0;
}

/* ---- public ------------------------------------------------------------ */

Result selfupdate_run(const char *url, selfupdate_result_t *out) {
    memset(out, 0, sizeof *out);
    out->status = -1;

    if (!url || !url[0]) {
        snprintf(out->err, sizeof out->err, "no URL configured");
        return MAKERESULT(Module_Libnx, LibnxError_BadInput);
    }

    /* 1. GET the directory listing page. */
    uint8_t *html = NULL; size_t html_sz = 0;
    http_result_t r = http_get_buf(url, 8 * 1024 * 1024, &html, &html_sz);
    if (r.status != 200 || !html) {
        snprintf(out->err, sizeof out->err, "listing %d: %.120s", r.status, r.err);
        free(html);
        return MAKERESULT(Module_Libnx, LibnxError_IoError);
    }

    /* 2. Find the newest `*.zip`. */
    char href[256];
    ver_t ver;
    int scan_rc = scan_newest_zip((const char *)html, html_sz, href, &ver);
    free(html);
    if (scan_rc != 0) {
        snprintf(out->err, sizeof out->err, "no `*.zip` in listing");
        return MAKERESULT(Module_Libnx, LibnxError_NotFound);
    }
    out->chosen_major = ver.maj;
    out->chosen_minor = ver.min;
    out->chosen_patch = ver.pat;
    out->chosen_build = ver.bld;
    /* Store the basename only; the full href may overflow our 128-byte field. */
    const char *basename = href;
    for (const char *p = href; *p; p++)
        if (*p == '/' || *p == '\\') basename = p + 1;
    snprintf(out->chosen_filename, sizeof out->chosen_filename, "%s", basename);

    /* 3. Resolve absolute URL + download into tmp zip. */
    char zip_url[512];
    resolve_url(url, href, zip_url);

    uint8_t *zipbuf = NULL; size_t zip_sz = 0;
    r = http_get_buf(zip_url, 64 * 1024 * 1024, &zipbuf, &zip_sz);
    if (r.status != 200 || !zipbuf) {
        snprintf(out->err, sizeof out->err, "download %d: %.110s", r.status, r.err);
        free(zipbuf);
        return MAKERESULT(Module_Libnx, LibnxError_IoError);
    }
    out->zip_bytes = zip_sz;

    mkdir("sdmc:/switch",     0777);
    mkdir("sdmc:/switch/DBI", 0777);

    FILE *zf = fopen(SELFUPDATE_TMP_ZIP, "wb");
    if (!zf) {
        snprintf(out->err, sizeof out->err, "tmp zip open failed");
        free(zipbuf);
        return MAKERESULT(Module_Libnx, LibnxError_IoError);
    }
    size_t w = fwrite(zipbuf, 1, zip_sz, zf);
    fclose(zf);
    free(zipbuf);
    if (w != zip_sz) {
        snprintf(out->err, sizeof out->err, "tmp zip write short");
        remove(SELFUPDATE_TMP_ZIP);
        return MAKERESULT(Module_Libnx, LibnxError_IoError);
    }

    /* 4. Extract first .nro straight into the canonical install path. */
    uint64_t nro_bytes = 0;
    Result rc = extract_first_nro(SELFUPDATE_TMP_ZIP, SELFUPDATE_NRO_PATH, &nro_bytes);
    remove(SELFUPDATE_TMP_ZIP);
    if (R_FAILED(rc)) {
        snprintf(out->err, sizeof out->err, "zip extract 0x%x", rc);
        return rc;
    }
    out->nro_bytes = nro_bytes;
    out->status = 0;
    log_event("selfupdate: %u.%u.%u-%u installed (%" PRIu64 " B)",
              out->chosen_major, out->chosen_minor, out->chosen_patch,
              out->chosen_build, out->nro_bytes);
    return 0;
}
