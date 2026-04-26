#pragma once
#include <switch.h>
#include <stdint.h>

/* Save-data enumeration via FsSaveDataInfoReader. Matches DBI
 * "Saves" surface (FINDINGS.md Part 7): walk the SaveDataInfo
 * stream for the Account save-data space, resolve the title name
 * via NACP, expose items to the UI. */

typedef struct {
    uint64_t save_id;      /* FsSaveDataInfo.save_data_id       */
    uint64_t app_id;       /* NsApplicationRecord.application_id */
    uint64_t uid_low;      /* user account UID lower half       */
    uint64_t uid_high;     /* user account UID upper half       */
    uint64_t size;         /* save-data size                    */
    uint8_t  save_type;    /* FsSaveDataType                    */
    uint8_t  rank;         /* FsSaveDataRank                    */
    char     title[96];
} saves_entry_t;

typedef struct {
    saves_entry_t *items;
    size_t         count;
    size_t         cap;
} saves_list_t;

/* Populate list with per-account saves (FsSaveDataSpaceId_User).
 * Returns first error code; partial list is still valid. */
Result saves_collect(saves_list_t *out, size_t max);
void   saves_free(saves_list_t *lst);

/* Export an Account save for `app_id`/`uid` into
 * `<saves_folder>/<app_id>_<uid_hi>_<uid_lo>/`. Walks the mounted save tree
 * recursively. On success *bytes_copied receives the total byte volume;
 * *files_copied the file count. `saves_folder` must not end in '/'; a NULL
 * or empty value falls back to `sdmc:/switch/DBI/saves`. */
Result saves_export(uint64_t app_id, uint64_t uid_lo, uint64_t uid_hi,
                    const char *saves_folder,
                    uint64_t *files_copied, uint64_t *bytes_copied,
                    char *err, size_t errsz);

/* Export an Account save to a single .zip archive at
 * `<saves_folder>/<app_id>_<uid_hi>_<uid_lo>.zip` — upstream DBI's
 * preferred save-backup form (one-file, easy to ship over USB/HTTP).
 * ZIP64 is used for >4GB archives. `files_copied`/`bytes_copied` are the
 * uncompressed file count and total raw byte volume (pre-DEFLATE).
 * `saves_folder` must not end in '/'; NULL/empty falls back to
 * `sdmc:/switch/DBI/saves`. */
Result saves_export_zip(uint64_t app_id, uint64_t uid_lo, uint64_t uid_hi,
                        const char *saves_folder,
                        uint64_t *files_copied, uint64_t *bytes_copied,
                        char *err, size_t errsz);

/* Restore a save backup zip into the target title's save filesystem. The
 * zip is read from `<saves_folder>/<app_id>_<uid_hi>_<uid_lo>.zip`. Every
 * entry is written into the mounted save, creating intermediate directories
 * as needed. `fsdevCommitDevice` flushes the save journal on success. The
 * target save must already exist — launch the title once first.
 * `saves_folder` must not end in '/'; NULL/empty → canonical default. */
Result saves_restore_zip(uint64_t app_id, uint64_t uid_lo, uint64_t uid_hi,
                         const char *saves_folder,
                         uint64_t *files_restored, uint64_t *bytes_restored,
                         char *err, size_t errsz);
