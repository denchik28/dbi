#pragma once
#include <stdbool.h>
#include <stddef.h>

/* Minimal ini reader for sdmc:/switch/DBI/dbi.config. Byte layout per
 * FINDINGS.md Part 17 + 38.2: ASCII, LF line endings, sections in
 * `[Section]` brackets, keys separated by `=`. Values kept as raw
 * strings (no type coercion). Upstream ships 30+ keys spread across
 * [General] [Album] [Filtering] [ActivityLog] [MainMenu] [Applications]
 * [Install] [MTP] [FTP] [HTTP] [Access point] [MTP Storages] [FB2]
 * [Network sources] [Local sources] [MTP custom storages]
 * [Title name override] [Disabled titles]. */

#define DBI_CONFIG_MAX_ENTRIES 256
#define DBI_CONFIG_SECTION_LEN 48
#define DBI_CONFIG_KEY_LEN     64
#define DBI_CONFIG_VAL_LEN     128

typedef struct {
    char section[DBI_CONFIG_SECTION_LEN];
    char key    [DBI_CONFIG_KEY_LEN];
    char value  [DBI_CONFIG_VAL_LEN];
} dbi_config_entry_t;

typedef struct {
    dbi_config_entry_t entries[DBI_CONFIG_MAX_ENTRIES];
    size_t              count;
    bool                loaded;
    char                path[256];
} dbi_config_t;

/* Load + parse. Returns true even if file missing (leaves cfg empty). */
bool dbi_config_load(dbi_config_t *cfg, const char *path);

/* Find first matching entry. NULL section => any section. */
const dbi_config_entry_t *dbi_config_find(const dbi_config_t *cfg,
                                          const char *section,
                                          const char *key);

/* Mutate in place. Returns true on success. Creates a new entry when
 * (section, key) is not yet present; otherwise overwrites the value. */
bool dbi_config_set(dbi_config_t *cfg,
                    const char *section,
                    const char *key,
                    const char *value);

/* Serialize back to disk, preserving section grouping order. Sections
 * appear in first-seen order; keys within a section in their current
 * order. Creates parent directory if missing. Returns true on success. */
bool dbi_config_save(const dbi_config_t *cfg, const char *path);

/* Resolve a folder-typed value. Copies `[section]/key` into `out` when
 * present and non-empty, otherwise falls back to `default_folder`. A
 * trailing '/' is always stripped so callers can append `"/<name>"`
 * without doubling the separator. Returns whether a config value was
 * used (false = default). `out` is always null-terminated. */
bool dbi_config_folder(const dbi_config_t *cfg,
                       const char *section, const char *key,
                       const char *default_folder,
                       char *out, size_t outsz);
