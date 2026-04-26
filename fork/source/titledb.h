#pragma once
#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <switch.h>

/* titledb — wraps blawar/titledb's `versions.txt` (FINDINGS.md Part 27).
 *
 * Wire format is pipe-separated lines:
 *     id|rightsId|version
 * with a single header line (first row). `version` is a decimal integer
 * in Horizon patch-meta units (each `0x10000` tick = one release).
 *
 * Typical cache is ~60 k entries (~5-6 MB). We hold a tight, sorted-by-id
 * array so title lookup during Apps/Installed-games paint is O(log n).
 *
 * Config key `Network/VersionsURL` overrides the default upstream URL. */

#define TITLEDB_DEFAULT_URL \
    "https://raw.githubusercontent.com/blawar/titledb/master/versions.txt"

#define TITLEDB_CACHE_PATH "sdmc:/switch/DBI/cache/versions.txt"

typedef struct {
    uint64_t id;           /* Horizon titleId (base, patch, or DLC) */
    uint32_t version;      /* upstream-declared version             */
} titledb_entry_t;

typedef struct {
    titledb_entry_t *entries;
    size_t           count;
    size_t           cap;
    uint64_t         fetched_at_unix;   /* 0 if loaded from cache without mtime */
} titledb_t;

/* Download fresh versions.txt → sdmc cache file. `url` may be NULL to use
 * TITLEDB_DEFAULT_URL. Returns 0 on success. */
Result titledb_download(const char *url);

/* Parse the sdmc cache file into `db`. Caller must free via titledb_free.
 * Returns 0 even if the cache is empty; use db->count to check. */
Result titledb_load_cache(titledb_t *db);

void   titledb_free(titledb_t *db);

/* Lookup a specific title id. Returns version (≥1), or 0 if absent. */
uint32_t titledb_lookup(const titledb_t *db, uint64_t id);

/* For the Apps screen's HighlightUpdates feature. Given the currently
 * installed patch version and the base app id, returns true if titledb
 * advertises a newer patch. `installed_patch_version` may be 0 for base-only
 * titles. */
bool titledb_has_newer_patch(const titledb_t *db, uint64_t base_app_id,
                             uint32_t installed_patch_version);
