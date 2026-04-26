#include "http.h"
#include "log.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <curl/curl.h>

static bool g_inited = false;
/* Gated by ui.c via http_set_validate_ssl(). Upstream default is false
 * (FINDINGS Part 27 + stock dbi.config ships `ValidateSSL=false`) because
 * the Switch ships no CA bundle — opting in only works when the user has
 * sideloaded /atmosphere/contents/... cacert bundles. */
static bool g_validate_ssl = false;
/* [General]/CustomDNS — comma-separated IPv4/IPv6 list copied into a
 * static buffer so curl handles can reference it by pointer for the full
 * lifetime of the process. Empty string means "use system DNS". */
static char g_dns_csv[160] = { 0 };

void http_init(void) {
    if (g_inited) return;
    curl_global_init(CURL_GLOBAL_DEFAULT);
    g_inited = true;
}

void http_exit(void) {
    if (!g_inited) return;
    curl_global_cleanup();
    g_inited = false;
}

void http_set_validate_ssl(bool on) {
    g_validate_ssl = on;
}

void http_set_dns_servers(const char *csv) {
    if (!csv || !*csv) { g_dns_csv[0] = 0; return; }
    snprintf(g_dns_csv, sizeof g_dns_csv, "%s", csv);
}

/* ---- common curl setup -------------------------------------------------- */

static void apply_common(CURL *c, const char *url) {
    curl_easy_setopt(c, CURLOPT_URL, url);
    curl_easy_setopt(c, CURLOPT_FOLLOWLOCATION, 1L);
    curl_easy_setopt(c, CURLOPT_MAXREDIRS, 5L);
    curl_easy_setopt(c, CURLOPT_CONNECTTIMEOUT, 8L);
    curl_easy_setopt(c, CURLOPT_TIMEOUT, 120L);
    curl_easy_setopt(c, CURLOPT_USERAGENT, "dbi-fork/0.1 (libcurl)");
    /* [General]/ValidateSSL: when false (default) skip peer/host checks
     * so HTTPS works without a CA bundle — matches upstream DBI which
     * also lets users disable verification for convenience. */
    curl_easy_setopt(c, CURLOPT_SSL_VERIFYPEER, g_validate_ssl ? 1L : 0L);
    curl_easy_setopt(c, CURLOPT_SSL_VERIFYHOST, g_validate_ssl ? 2L : 0L);
    /* [General]/CustomDNS — skip when empty so curl keeps system defaults. */
    if (g_dns_csv[0])
        curl_easy_setopt(c, CURLOPT_DNS_SERVERS, g_dns_csv);
    curl_easy_setopt(c, CURLOPT_ACCEPT_ENCODING, "");  /* all supported */
}

/* ---- buffer sink -------------------------------------------------------- */

typedef struct {
    uint8_t *buf;
    size_t   used;
    size_t   cap;
    size_t   max;
    bool     oom;
} bufctx_t;

static size_t buf_write(char *ptr, size_t sz, size_t nm, void *u) {
    bufctx_t *b = (bufctx_t *)u;
    size_t n = sz * nm;
    if (b->used + n > b->max) { b->oom = true; return 0; }
    if (b->used + n > b->cap) {
        size_t want = b->cap ? b->cap * 2 : 0x10000;
        while (want < b->used + n) want *= 2;
        if (want > b->max) want = b->max;
        uint8_t *nb = (uint8_t *)realloc(b->buf, want);
        if (!nb) { b->oom = true; return 0; }
        b->buf = nb; b->cap = want;
    }
    memcpy(b->buf + b->used, ptr, n);
    b->used += n;
    return n;
}

http_result_t http_get_buf(const char *url, size_t max_bytes,
                           uint8_t **out_buf, size_t *out_size) {
    http_result_t r = { 0 };
    *out_buf = NULL; *out_size = 0;
    if (!max_bytes) max_bytes = 16 * 1024 * 1024;

    http_init();
    CURL *c = curl_easy_init();
    if (!c) { snprintf(r.err, sizeof r.err, "curl_easy_init"); return r; }
    apply_common(c, url);

    bufctx_t bx = { .max = max_bytes };
    curl_easy_setopt(c, CURLOPT_WRITEFUNCTION, buf_write);
    curl_easy_setopt(c, CURLOPT_WRITEDATA,     &bx);

    CURLcode rc = curl_easy_perform(c);
    long status = 0;
    curl_easy_getinfo(c, CURLINFO_RESPONSE_CODE, &status);
    curl_easy_cleanup(c);

    r.status = (int)status;
    r.bytes  = bx.used;

    if (rc != CURLE_OK) {
        snprintf(r.err, sizeof r.err, "curl: %s%s",
                 curl_easy_strerror(rc), bx.oom ? " (oom/cap)" : "");
        free(bx.buf);
        return r;
    }
    if (bx.oom) {
        snprintf(r.err, sizeof r.err, "over max_bytes=%zu", max_bytes);
        free(bx.buf);
        return r;
    }

    *out_buf  = bx.buf;
    *out_size = bx.used;
    log_linef("http: GET %.100s -> %d (%zu B)", url, r.status, bx.used);
    return r;
}

/* ---- streaming sink ----------------------------------------------------- */

typedef struct {
    http_write_cb_t cb;
    void           *ctx;
    bool            abort;
    size_t          total;
} streamctx_t;

static size_t stream_write(char *ptr, size_t sz, size_t nm, void *u) {
    streamctx_t *s = (streamctx_t *)u;
    size_t n = sz * nm;
    size_t taken = s->cb(ptr, n, s->ctx);
    s->total += taken;
    if (taken != n) { s->abort = true; return 0; }
    return n;
}

http_result_t http_get_stream(const char *url, http_write_cb_t cb, void *ctx) {
    http_result_t r = { 0 };

    http_init();
    CURL *c = curl_easy_init();
    if (!c) { snprintf(r.err, sizeof r.err, "curl_easy_init"); return r; }
    apply_common(c, url);

    streamctx_t sx = { .cb = cb, .ctx = ctx };
    curl_easy_setopt(c, CURLOPT_WRITEFUNCTION, stream_write);
    curl_easy_setopt(c, CURLOPT_WRITEDATA,     &sx);

    CURLcode rc = curl_easy_perform(c);
    long status = 0;
    curl_easy_getinfo(c, CURLINFO_RESPONSE_CODE, &status);
    curl_easy_cleanup(c);

    r.status = (int)status;
    r.bytes  = sx.total;

    if (rc != CURLE_OK) {
        snprintf(r.err, sizeof r.err, "curl: %s%s",
                 curl_easy_strerror(rc), sx.abort ? " (sink abort)" : "");
        return r;
    }
    log_linef("http: STREAM %.100s -> %d (%zu B)", url, r.status, sx.total);
    return r;
}

http_result_t http_get_range(const char *url, uint64_t off, uint64_t len,
                             http_write_cb_t cb, void *ctx) {
    http_result_t r = { 0 };

    http_init();
    CURL *c = curl_easy_init();
    if (!c) { snprintf(r.err, sizeof r.err, "curl_easy_init"); return r; }
    apply_common(c, url);

    char range[64];
    snprintf(range, sizeof range, "%llu-%llu",
             (unsigned long long)off,
             (unsigned long long)(off + len - 1));
    curl_easy_setopt(c, CURLOPT_RANGE, range);

    streamctx_t sx = { .cb = cb, .ctx = ctx };
    curl_easy_setopt(c, CURLOPT_WRITEFUNCTION, stream_write);
    curl_easy_setopt(c, CURLOPT_WRITEDATA,     &sx);

    CURLcode rc = curl_easy_perform(c);
    long status = 0;
    curl_easy_getinfo(c, CURLINFO_RESPONSE_CODE, &status);
    curl_easy_cleanup(c);

    r.status = (int)status;
    r.bytes  = sx.total;

    if (rc != CURLE_OK) {
        snprintf(r.err, sizeof r.err, "curl(range): %s%s",
                 curl_easy_strerror(rc), sx.abort ? " (sink abort)" : "");
        return r;
    }
    /* HTTP server may return 200 with the full body instead of 206 even when
     * Range: was specified — we accept that only when the first `off` bytes
     * haven't been delivered (sx.total exactly len). */
    return r;
}
