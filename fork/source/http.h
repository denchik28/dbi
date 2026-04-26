#pragma once
#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>

/* Thin libcurl wrapper — shared between titledb updater, DBI self-update,
 * HTTP install source and (future) MTP/FTP callback hooks.
 *
 * All helpers implicitly init libcurl on first use and tear down at
 * http_exit(); safe to call repeatedly. Threaded concurrency is NOT
 * supported — use from a single thread. */

typedef size_t (*http_write_cb_t)(const void *buf, size_t n, void *ctx);

typedef struct {
    int    status;           /* HTTP status code on success, 0 on net error */
    char   err[128];         /* human-readable failure message              */
    size_t bytes;             /* total bytes delivered to sink/buf           */
} http_result_t;

/* Fetch `url` into an in-memory buffer (malloc'd into *out_buf). Caller
 * must free(). Caps download at `max_bytes` (0 = 16 MB default). */
http_result_t http_get_buf(const char *url, size_t max_bytes,
                           uint8_t **out_buf, size_t *out_size);

/* Streaming variant — `cb(buf, n, ctx)` is invoked for each chunk.
 * Returning 0 from the sink aborts the transfer. */
http_result_t http_get_stream(const char *url, http_write_cb_t cb, void *ctx);

/* Ranged read — HTTP/1.1 `Range: bytes=<off>-<off+len-1>`. On success
 * the entire [off..off+len) window is delivered to `cb`; the server must
 * honour the range (206 response). For install pipelines we need random
 * access so this is the install_source_read_t adapter hook. Returns 206
 * on success; 200/416 on failure. */
http_result_t http_get_range(const char *url, uint64_t off, uint64_t len,
                             http_write_cb_t cb, void *ctx);

/* Optional up-front init if you want to front-load certificate loading
 * (costs ~50 ms on first use). Safe to skip. */
void http_init(void);
void http_exit(void);

/* Toggle `CURLOPT_SSL_VERIFYPEER`/`VERIFYHOST` for subsequent requests.
 * Drives upstream `[General]/ValidateSSL` (default false: no CA bundle
 * on Switch, so verification off; users who sideload a bundle can opt
 * in). Applied to every curl handle via apply_common(). */
void http_set_validate_ssl(bool on);

/* Override the system DNS resolvers for subsequent requests. Drives
 * upstream `[General]/CustomDNS=<ip>[,<ip>...]` — lets users pick e.g.
 * `8.8.8.8, 1.1.1.1` when the console's DNS is flaky. Pass NULL / empty
 * to fall back to system defaults. Buffer is copied. */
void http_set_dns_servers(const char *csv);
