#pragma once
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

/* IPS / IPS32 / pchtxt patch parser — byte-for-byte match of the
 * format atmosphère reads from sdmc:/atmosphere/exefs_patches/.
 *
 * Supported inputs:
 *   1. Classic IPS:  magic "PATCH"  (5 B), 3-byte offsets, "EOF" terminator (3 B).
 *   2. IPS32:        magic "IPS32"  (5 B), 4-byte offsets, "EEOF" terminator (4 B).
 *   3. pchtxt:       plain text, `#`/`//` comments, hex pairs `<offset> <bytes>`,
 *                    directives `@enabled`/`@disabled`/`@stop`/`@flag`. Reverse of
 *                    atmosphère's PchTxt reader (upstream DBI reads these via
 *                    FS glue for the "Mods & Cheats" manager, Part 28).
 *
 * This is a PARSER ONLY — it does not apply patches. Application requires
 * `svcWriteDebugProcessMemory` + atmosphère debug hook, which is the code-patch
 * pipeline (Phase 5). Current goal: enumerate + summarise so the UI can
 * list patches that atmosphère will apply at title launch.
 */

typedef enum {
    IPS_FMT_UNKNOWN = 0,
    IPS_FMT_IPS,
    IPS_FMT_IPS32,
    IPS_FMT_PCHTXT,
} ips_format_t;

typedef struct {
    uint64_t offset;     /* patch target offset within the NSO segment */
    uint32_t length;     /* bytes to write (for RLE: run length) */
    bool     is_rle;     /* 0x0000 size → RLE record: `length` bytes of `rle_byte` */
    uint8_t  rle_byte;
    /* For non-RLE records we do NOT keep the payload in memory — the
     * whole file is typically 1-64 KB and refreshes happen seldom, so
     * the caller re-reads the file when it needs the bytes. */
} ips_record_t;

#define IPS_MAX_RECORDS 2048

typedef struct {
    ips_format_t    format;
    ips_record_t    records[IPS_MAX_RECORDS];
    size_t          count;
    uint64_t        min_offset;
    uint64_t        max_offset;
    uint64_t        total_bytes;   /* sum of record lengths */
    char            path[256];
    char            err[96];
} ips_patch_t;

/* Load + parse one patch file. `path` may end in .ips / .ips32 / .pchtxt.
 * Format is auto-detected from magic (or text signature). On success,
 * `out->count > 0 || out->format != IPS_FMT_UNKNOWN`. On parse error the
 * first-encountered issue is written to `out->err[]`. */
bool ips_load(ips_patch_t *out, const char *path);

/* Directory scan — enumerate all .ips/.ips32/.pchtxt under a directory
 * tree (recursive, atmosphère-style). Each match gets one `ips_patch_t`
 * with parsed summary. `n_out` is the number of patches populated. */

#define IPS_SCAN_MAX 128

typedef struct {
    ips_patch_t  items[IPS_SCAN_MAX];
    size_t       count;
    char         root[256];
} ips_scan_t;

bool ips_scan(ips_scan_t *out, const char *root);
