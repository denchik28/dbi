#pragma once
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <switch.h>

#define FS_SCAN_MAX_ENTRIES 512
#define FS_SCAN_NAME_MAX    256

typedef struct {
    char     name[FS_SCAN_NAME_MAX];
    char     path[FS_SCAN_NAME_MAX];
    uint64_t size;
    bool     is_dir;
} fs_scan_entry_t;

typedef struct {
    fs_scan_entry_t items[FS_SCAN_MAX_ENTRIES];
    size_t          count;
} fs_scan_list_t;

/* Recursively walks `root` up to `max_depth`, collects all files whose name ends
 * with any of the given comma-separated extensions (case-insensitive). */
Result fs_scan_collect(fs_scan_list_t *out, const char *root, const char *exts, int max_depth);

/* Flat directory listing (non-recursive) like a file manager would show.
 * Lists everything in `dir` sorted: directories first alphabetically, then
 * files alphabetically. Output entries have is_dir set; size is 0 for dirs. */
Result fs_scan_list_dir(fs_scan_list_t *out, const char *dir);
