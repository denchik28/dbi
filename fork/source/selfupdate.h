#pragma once
#include <stdint.h>
#include <switch.h>

/* selfupdate — replaces the running NRO with a newer build.
 * Mirrors upstream DBI's updateDBIFromURL (FINDINGS Part 27 →
 * `FUN_7100268eb0`):
 *
 *   1. GET the user-set `Network/DBIUpdateURL` (HTML directory listing).
 *   2. Parse `<a href="...zip">` anchors and pick the one with the
 *      highest `{major}.{minor}.{patch}-{build}.zip` filename.
 *   3. Download that zip.
 *   4. Extract the first *.nro entry.
 *   5. Overwrite `sdmc:/switch/DBI/DBI.nro`.
 *
 * Caller is expected to trigger a reboot into hbmenu afterwards so
 * the replacement is picked up on next launch. */

#define SELFUPDATE_NRO_PATH   "sdmc:/switch/DBI/DBI.nro"
#define SELFUPDATE_TMP_ZIP    "sdmc:/switch/DBI/update.zip"

typedef struct {
    int  status;                    /* 0 = OK, <0 = error */
    char err[160];                  /* human-readable on failure */
    char chosen_filename[256];      /* e.g. "DBI-887-5.nro.zip" */
    uint32_t chosen_major, chosen_minor, chosen_patch, chosen_build;
    uint64_t zip_bytes;
    uint64_t nro_bytes;
} selfupdate_result_t;

/* End-to-end: download + pick newest + extract + overwrite NRO.
 * Returns 0 on success; populates `out` in all cases. `url` must be
 * non-NULL. */
Result selfupdate_run(const char *url, selfupdate_result_t *out);
