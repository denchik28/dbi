#pragma once
#include <switch.h>

typedef struct {
    uint64_t app_id;            /* base app id (bit 12..44 = title-group)   */
    char     name[128];
    char     author[64];
    uint64_t last_updated;

    /* Combined-NSP view: which content-metas are installed under this
     * base app_id. Upstream DBI surfaces this as the "[B/U/Dxx]" group
     * prefix on the title list and as the "combined NSP" dump target.
     * Populated by a pass over NcmContentMetaDatabase.  */
    bool     has_base;          /* Application meta present                 */
    bool     has_patch;         /* Patch meta present (update)              */
    uint16_t dlc_count;         /* AddOnContent metas counted               */
    uint32_t patch_version;     /* highest Patch meta key.version           */
} title_entry_t;

typedef struct {
    title_entry_t *items;
    size_t         count;
    size_t         cap;
} title_list_t;

/* Populate list with installed titles via ns: + nacp resolution.
   Skips entries whose NACP can't be resolved. */
Result titles_collect(title_list_t *out, size_t max);
void   titles_free(title_list_t *lst);

/* Request Horizon to launch `app_id` via applet:.
   Only works when the hbloader took the LibraryApplet slot
   (album/hbmenu entry) — returns an error in Application-takeover mode. */
Result titles_launch(uint64_t app_id);

/* Delete title completely (program data + add-on + tickets).
   Wraps ns:am `nsDeleteApplicationCompletely`. */
Result titles_delete(uint64_t app_id);
