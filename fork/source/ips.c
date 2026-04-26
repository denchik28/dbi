#include "ips.h"
#include "log.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <strings.h>
#include <ctype.h>
#include <dirent.h>
#include <errno.h>
#include <sys/stat.h>

/* ---- helpers -------------------------------------------------------- */

static uint32_t be_read(const uint8_t *p, int n) {
    uint32_t v = 0;
    for (int i = 0; i < n; i++) v = (v << 8) | p[i];
    return v;
}

static void set_err(ips_patch_t *out, const char *fmt, ...) {
    va_list ap;
    va_start(ap, fmt);
    vsnprintf(out->err, sizeof out->err, fmt, ap);
    va_end(ap);
}

/* ---- classic IPS ---------------------------------------------------- */

static bool parse_ips_stream(ips_patch_t *out, const uint8_t *buf, size_t len,
                             int off_bytes /* 3 or 4 */) {
    const char *term = (off_bytes == 3) ? "EOF"  : "EEOF";
    int         term_len = (off_bytes == 3) ? 3    : 4;
    size_t      hdr_len  = 5;    /* "PATCH" or "IPS32" */
    size_t      p = hdr_len;

    out->min_offset = UINT64_MAX;
    out->max_offset = 0;
    out->total_bytes = 0;

    while (p < len) {
        /* Terminator check. */
        if (p + term_len <= len && memcmp(buf + p, term, term_len) == 0) {
            return true;
        }
        if (p + off_bytes + 2 > len) {
            set_err(out, "truncated record at 0x%zx", p);
            return false;
        }
        uint64_t rec_off = be_read(buf + p, off_bytes);
        p += off_bytes;

        uint32_t rec_size = be_read(buf + p, 2);
        p += 2;

        if (out->count >= IPS_MAX_RECORDS) {
            set_err(out, "record cap %u reached", IPS_MAX_RECORDS);
            return false;
        }

        ips_record_t *r = &out->records[out->count];
        r->offset  = rec_off;
        r->is_rle  = (rec_size == 0);

        if (r->is_rle) {
            if (p + 2 + 1 > len) {
                set_err(out, "truncated RLE at 0x%zx", p);
                return false;
            }
            r->length   = be_read(buf + p, 2); p += 2;
            r->rle_byte = buf[p++];
        } else {
            r->length = rec_size;
            if (p + rec_size > len) {
                set_err(out, "truncated data at 0x%zx (need %u)", p, rec_size);
                return false;
            }
            p += rec_size;
        }

        if (rec_off < out->min_offset) out->min_offset = rec_off;
        if (rec_off + r->length > out->max_offset)
            out->max_offset = rec_off + r->length;
        out->total_bytes += r->length;
        out->count++;
    }

    set_err(out, "EOF before terminator");
    return false;
}

/* ---- pchtxt -------------------------------------------------------- */

/* pchtxt is a text format that looks roughly like:
 *
 *     @nsobid-DEADBEEF...
 *     @flag offset_shift 0x100
 *     @enabled
 *     01234567 0F B0 00 00        # add 0x0F, 0xB0 at offset 0x01234567
 *     @stop
 *     @disabled
 *     ...
 *
 * We stay conservative: track `@enabled` blocks only, parse hex offset +
 * hex byte pairs on the same line, accumulate records. Unknown directives
 * skipped. Comments (`//` or `#`) cut to EOL. */

static int hex_digit(int c) {
    if (c >= '0' && c <= '9') return c - '0';
    if (c >= 'a' && c <= 'f') return 10 + c - 'a';
    if (c >= 'A' && c <= 'F') return 10 + c - 'A';
    return -1;
}

static bool parse_hex_u64(const char **cur, uint64_t *out) {
    const char *s = *cur;
    while (*s == ' ' || *s == '\t') s++;
    if (hex_digit((unsigned char)*s) < 0) return false;
    uint64_t v = 0;
    while (hex_digit((unsigned char)*s) >= 0) {
        v = (v << 4) | (uint32_t)hex_digit((unsigned char)*s);
        s++;
    }
    *out = v;
    *cur = s;
    return true;
}

static bool parse_pchtxt(ips_patch_t *out, const char *text, size_t len) {
    bool enabled = true;   /* default block is enabled */

    out->min_offset = UINT64_MAX;
    out->max_offset = 0;
    out->total_bytes = 0;

    const char *p  = text;
    const char *end = text + len;

    while (p < end) {
        /* Take one line. */
        const char *line = p;
        while (p < end && *p != '\n' && *p != '\r') p++;
        size_t line_len = (size_t)(p - line);
        while (p < end && (*p == '\n' || *p == '\r')) p++;

        /* Strip inline comments. */
        for (size_t i = 0; i + 1 < line_len; i++) {
            if ((line[i] == '/' && line[i+1] == '/') ||
                (line[i] == '#')) {
                line_len = i;
                break;
            }
        }
        /* Trim. */
        while (line_len > 0 && (line[line_len-1] == ' ' || line[line_len-1] == '\t'))
            line_len--;
        while (line_len > 0 && (*line == ' ' || *line == '\t')) { line++; line_len--; }
        if (line_len == 0) continue;

        /* Directive? */
        if (line[0] == '@') {
            if (line_len >= 8 && strncasecmp(line, "@enabled", 8) == 0) {
                enabled = true;
            } else if (line_len >= 9 && strncasecmp(line, "@disabled", 9) == 0) {
                enabled = false;
            } else if (line_len >= 5 && strncasecmp(line, "@stop", 5) == 0) {
                enabled = false;
            }
            /* @nsobid / @flag / unknown: silently skipped */
            continue;
        }

        if (!enabled) continue;

        /* Hex-pair line: <offset> <hh> <hh> <hh> ... */
        char buf[512];
        size_t blen = line_len < sizeof buf - 1 ? line_len : sizeof buf - 1;
        memcpy(buf, line, blen);
        buf[blen] = 0;

        const char *cur = buf;
        uint64_t off = 0;
        if (!parse_hex_u64(&cur, &off)) continue;

        /* Count hex bytes. */
        uint32_t bytes_on_line = 0;
        while (*cur) {
            while (*cur == ' ' || *cur == '\t') cur++;
            int h = hex_digit((unsigned char)*cur);
            if (h < 0) break;
            int l = hex_digit((unsigned char)cur[1]);
            if (l < 0) break;
            cur += 2;
            bytes_on_line++;
        }
        if (bytes_on_line == 0) continue;

        if (out->count >= IPS_MAX_RECORDS) {
            set_err(out, "record cap %u reached", IPS_MAX_RECORDS);
            return false;
        }
        ips_record_t *r = &out->records[out->count++];
        r->offset  = off;
        r->length  = bytes_on_line;
        r->is_rle  = false;
        r->rle_byte = 0;

        if (off < out->min_offset) out->min_offset = off;
        if (off + bytes_on_line > out->max_offset)
            out->max_offset = off + bytes_on_line;
        out->total_bytes += bytes_on_line;
    }

    return true;
}

/* ---- driver --------------------------------------------------------- */

static bool has_suffix_ci(const char *s, const char *suf) {
    size_t ls = strlen(s), lt = strlen(suf);
    if (lt > ls) return false;
    return strcasecmp(s + ls - lt, suf) == 0;
}

bool ips_load(ips_patch_t *out, const char *path) {
    memset(out, 0, sizeof *out);
    if (!path) { set_err(out, "null path"); return false; }
    snprintf(out->path, sizeof out->path, "%s", path);

    FILE *f = fopen(path, "rb");
    if (!f) { set_err(out, "fopen: %s", strerror(errno)); return false; }
    fseek(f, 0, SEEK_END);
    long sz = ftell(f);
    fseek(f, 0, SEEK_SET);
    if (sz <= 0 || sz > 4 * 1024 * 1024) {
        fclose(f); set_err(out, "size %ld out of range", sz); return false;
    }

    uint8_t *buf = (uint8_t *)malloc((size_t)sz + 1);
    if (!buf) { fclose(f); set_err(out, "oom"); return false; }
    size_t got = fread(buf, 1, (size_t)sz, f);
    fclose(f);
    buf[got] = 0;

    bool ok = false;

    /* Magic-based detection first. */
    if (got >= 5 && memcmp(buf, "PATCH", 5) == 0) {
        out->format = IPS_FMT_IPS;
        ok = parse_ips_stream(out, buf, got, 3);
    } else if (got >= 5 && memcmp(buf, "IPS32", 5) == 0) {
        out->format = IPS_FMT_IPS32;
        ok = parse_ips_stream(out, buf, got, 4);
    } else if (has_suffix_ci(path, ".pchtxt")) {
        out->format = IPS_FMT_PCHTXT;
        ok = parse_pchtxt(out, (const char *)buf, got);
    } else {
        set_err(out, "unknown format (magic=%.4s)", buf);
    }

    free(buf);
    if (out->count == 0 && out->min_offset == UINT64_MAX) out->min_offset = 0;
    return ok;
}

/* ---- directory scan ------------------------------------------------- */

static void scan_recursive(ips_scan_t *out, const char *dir) {
    DIR *d = opendir(dir);
    if (!d) return;

    struct dirent *e;
    char sub[512];
    while ((e = readdir(d)) && out->count < IPS_SCAN_MAX) {
        if (e->d_name[0] == '.' &&
            (e->d_name[1] == 0 ||
             (e->d_name[1] == '.' && e->d_name[2] == 0))) continue;
        snprintf(sub, sizeof sub, "%s/%s", dir, e->d_name);

        struct stat sb;
        if (stat(sub, &sb) != 0) continue;

        if (S_ISDIR(sb.st_mode)) {
            scan_recursive(out, sub);
        } else if (S_ISREG(sb.st_mode) &&
                   (has_suffix_ci(e->d_name, ".ips")   ||
                    has_suffix_ci(e->d_name, ".ips32") ||
                    has_suffix_ci(e->d_name, ".pchtxt"))) {
            ips_patch_t *p = &out->items[out->count];
            bool ok = ips_load(p, sub);
            log_linef("ips: %s fmt=%d records=%zu ok=%d",
                      e->d_name, (int)p->format, p->count, (int)ok);
            out->count++;
        }
    }
    closedir(d);
}

bool ips_scan(ips_scan_t *out, const char *root) {
    memset(out, 0, sizeof *out);
    if (!root) return false;
    snprintf(out->root, sizeof out->root, "%s", root);
    scan_recursive(out, root);
    return true;
}
