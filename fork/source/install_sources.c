#include "install_sources.h"
#include "dbi0.h"
#include "http.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* -- SD source -------------------------------------------------------------*/

static int sd_read(const char *nsp_name, uint64_t offset, size_t len, uint8_t *out, void *ctx) {
    (void)ctx;
    FILE *f = fopen(nsp_name, "rb");
    if (!f) return -1;
    if (fseek(f, (long)offset, SEEK_SET) != 0) { fclose(f); return -1; }
    size_t got = fread(out, 1, len, f);
    fclose(f);
    return got == len ? 0 : -1;
}

static int sd_stream(const char *nsp_name, uint64_t offset, uint64_t size,
                     int (*sink)(const uint8_t *, size_t, void *), void *sink_ctx, void *src_ctx) {
    (void)src_ctx;
    FILE *f = fopen(nsp_name, "rb");
    if (!f) return -1;
    if (fseek(f, (long)offset, SEEK_SET) != 0) { fclose(f); return -1; }
    enum { BUF_SZ = 0x100000 };
    uint8_t *buf = (uint8_t *)malloc(BUF_SZ);
    if (!buf) { fclose(f); return -1; }
    int rc = 0;
    uint64_t remaining = size;
    while (remaining > 0) {
        size_t want = remaining > BUF_SZ ? BUF_SZ : (size_t)remaining;
        size_t got = fread(buf, 1, want, f);
        if (got == 0) { rc = -1; break; }
        if (sink(buf, got, sink_ctx) != 0) { rc = -1; break; }
        remaining -= got;
    }
    free(buf);
    fclose(f);
    return rc;
}

void install_source_sd(install_source_t *out, const char *sd_path_buf) {
    (void)sd_path_buf;
    out->read = sd_read;
    out->stream = sd_stream;
    out->ctx = NULL;
}

/* -- DBI0 USB source -------------------------------------------------------*/

static int dbi_stream(const char *nsp_name, uint64_t offset, uint64_t size,
                      int (*sink)(const uint8_t *, size_t, void *), void *sink_ctx, void *src_ctx) {
    (void)src_ctx;
    Result rc = dbi0_stream_file_range(nsp_name, offset, size, sink, sink_ctx);
    return R_FAILED(rc) ? -1 : 0;
}

static int dbi_read(const char *nsp_name, uint64_t offset, size_t len, uint8_t *out, void *ctx) {
    (void)ctx;
    if (len > 0xFFFFFFFFu) return -1;
    Result rc = dbi0_request_file_range(nsp_name, offset, (uint32_t)len, out);
    return R_FAILED(rc) ? -1 : 0;
}

void install_source_dbi0(install_source_t *out) {
    out->read = dbi_read;
    out->stream = dbi_stream;
    out->ctx = NULL;
}

/* -- HTTP source -----------------------------------------------------------
 *
 * nsp_name == absolute URL. We can't share a single curl handle across calls
 * because the install loop may interleave random-access reads for PFS0 header
 * with large streamed reads for each NCA — simplest is one handle per read,
 * which matches upstream DBI's HTTPInstall path (FINDINGS Part 14).
 */

typedef struct {
    uint8_t *dst;
    size_t   cap;
    size_t   used;
} http_bufsink_t;

static size_t http_buf_cb(const void *buf, size_t n, void *ctx) {
    http_bufsink_t *b = (http_bufsink_t *)ctx;
    if (b->used + n > b->cap) n = b->cap - b->used;
    memcpy(b->dst + b->used, buf, n);
    b->used += n;
    return n;
}

static int http_read(const char *url, uint64_t offset, size_t len,
                     uint8_t *out, void *ctx) {
    (void)ctx;
    http_bufsink_t sink = { .dst = out, .cap = len, .used = 0 };
    http_result_t r = http_get_range(url, offset, len, http_buf_cb, &sink);
    if (r.status == 0 || sink.used != len) return -1;
    /* Accept both 206 Partial Content and 200 full body (legacy servers). */
    return 0;
}

typedef struct {
    int (*sink)(const uint8_t *, size_t, void *);
    void *sink_ctx;
} http_streamsink_t;

static size_t http_stream_cb(const void *buf, size_t n, void *ctx) {
    http_streamsink_t *s = (http_streamsink_t *)ctx;
    if (s->sink((const uint8_t *)buf, n, s->sink_ctx) != 0) return 0;
    return n;
}

static int http_stream(const char *url, uint64_t offset, uint64_t size,
                       int (*sink)(const uint8_t *, size_t, void *),
                       void *sink_ctx, void *src_ctx) {
    (void)src_ctx;
    http_streamsink_t s = { .sink = sink, .sink_ctx = sink_ctx };
    http_result_t r = http_get_range(url, offset, size, http_stream_cb, &s);
    if (r.status == 0) return -1;
    if (r.bytes != size) return -1;
    return 0;
}

void install_source_http(install_source_t *out) {
    out->read   = http_read;
    out->stream = http_stream;
    out->ctx    = NULL;
}

/* -- PFS0 header fetch -----------------------------------------------------*/

Result install_fetch_pfs0(const install_source_t *src, const char *name,
                          pfs0_t *out, uint8_t *hdr_buf, size_t hdr_cap) {
    if (!src || !src->read || hdr_cap < sizeof(pfs0_header_t))
        return MAKERESULT(Module_Libnx, LibnxError_BadInput);

    /* Pass 1: read fixed 16-byte header to get num_files / string_table_size. */
    if (src->read(name, 0, sizeof(pfs0_header_t), hdr_buf, src->ctx) != 0)
        return MAKERESULT(Module_Libnx, LibnxError_BadInput);
    pfs0_header_t h;
    memcpy(&h, hdr_buf, sizeof h);
    if (h.magic != PFS0_MAGIC) return MAKERESULT(Module_Libnx, LibnxError_BadInput);

    size_t need = pfs0_header_required_size(&h);
    if (need > hdr_cap) return MAKERESULT(Module_Libnx, LibnxError_HeapAllocFailed);

    /* Pass 2: read full header + entries + stringtab. */
    if (src->read(name, 0, need, hdr_buf, src->ctx) != 0)
        return MAKERESULT(Module_Libnx, LibnxError_BadInput);
    return pfs0_parse_header(out, hdr_buf, need);
}
