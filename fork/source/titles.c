#include "titles.h"
#include "log.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/* Wraps ns:am nsListApplicationRecord + nsGetApplicationControlData.
   Matches DBI "title manager" surface (reverse Parts 4, 7): enumerate
   installed app records and resolve their NACP language entry.

   Second pass (Combined NSP, FINDINGS.md Part 6 + Part 23): walk all
   NcmContentMetaDatabase entries across {SdCard, BuiltInUser,
   BuiltInSystem}, group by base_app_id, annotate each title_entry_t
   with {has_base, has_patch, dlc_count, patch_version} so the UI can
   render the "[B+U+Dn]" group prefix upstream DBI shows. */

/* Meta-id → base-app-id:
 *    Application  → id
 *    Patch        → id & ~0x800
 *    AddOn        → id & ~0xFFF  (DLC is per-base, 0..0xFFF)
 *  Other types (Delta, DataPatch, SystemUpdate…) are ignored by the
 *  combined-NSP view. */
static uint64_t base_of(uint64_t id, u8 type) {
    switch (type) {
        case NcmContentMetaType_Patch:        return id & ~(u64)0x800;
        case NcmContentMetaType_AddOnContent: return id & ~(u64)0xFFF;
        default:                              return id;
    }
}

static title_entry_t *find_by_base(title_list_t *lst, uint64_t base) {
    for (size_t i = 0; i < lst->count; i++)
        if (lst->items[i].app_id == base) return &lst->items[i];
    return NULL;
}

static void walk_ncm_storage(title_list_t *out, NcmStorageId sid) {
    NcmContentMetaDatabase db;
    Result rc = ncmOpenContentMetaDatabase(&db, sid);
    if (R_FAILED(rc)) return;

    enum { BATCH = 128 };
    NcmContentMetaKey *keys = (NcmContentMetaKey *)calloc(BATCH, sizeof *keys);
    if (!keys) { ncmContentMetaDatabaseClose(&db); return; }

    s32 offset = 0;
    while (true) {
        s32 total = 0, written = 0;
        rc = ncmContentMetaDatabaseList(&db, &total, &written, keys, BATCH,
                                        NcmContentMetaType_Unknown,
                                        0 /* appId=0 = any */,
                                        0 /* min       */,
                                        UINT64_MAX /* max */,
                                        NcmContentInstallType_Full);
        if (R_FAILED(rc) || written <= 0) break;

        for (s32 i = 0; i < written; i++) {
            uint64_t base = base_of(keys[i].id, keys[i].type);
            title_entry_t *te = find_by_base(out, base);
            if (!te) continue;   /* not a known title — skip */
            switch (keys[i].type) {
                case NcmContentMetaType_Application:
                    te->has_base = true;
                    break;
                case NcmContentMetaType_Patch:
                    te->has_patch = true;
                    if (keys[i].version > te->patch_version)
                        te->patch_version = keys[i].version;
                    break;
                case NcmContentMetaType_AddOnContent:
                    if (te->dlc_count < UINT16_MAX) te->dlc_count++;
                    break;
                default: break;
            }
        }
        if (written < BATCH) break;
        offset += written;
        (void)offset;   /* ncmList doesn't take offset; loop ends via written<BATCH */
    }

    free(keys);
    ncmContentMetaDatabaseClose(&db);
}

Result titles_collect(title_list_t *out, size_t max) {
    memset(out, 0, sizeof *out);
    out->cap   = max;
    out->items = (title_entry_t *)calloc(max, sizeof(title_entry_t));
    if (!out->items) return MAKERESULT(Module_Libnx, LibnxError_HeapAllocFailed);

    Result rc = nsInitialize();
    if (R_FAILED(rc)) { free(out->items); out->items = NULL; return rc; }

    NsApplicationRecord *recs = (NsApplicationRecord *)malloc(sizeof(NsApplicationRecord) * max);
    if (!recs) { nsExit(); free(out->items); out->items = NULL;
                 return MAKERESULT(Module_Libnx, LibnxError_HeapAllocFailed); }

    s32 total = 0;
    rc = nsListApplicationRecord(recs, (s32)max, 0, &total);
    if (R_FAILED(rc)) { free(recs); nsExit(); return rc; }

    NsApplicationControlData *ctrl = (NsApplicationControlData *)malloc(sizeof(NsApplicationControlData));
    if (!ctrl) { free(recs); nsExit();
                 return MAKERESULT(Module_Libnx, LibnxError_HeapAllocFailed); }

    for (s32 i = 0; i < total && out->count < max; i++) {
        title_entry_t *e = &out->items[out->count];
        e->app_id       = recs[i].application_id;
        e->last_updated = recs[i].last_updated;

        u64 actual = 0;
        Result r = nsGetApplicationControlData(NsApplicationControlSource_Storage,
                                               recs[i].application_id, ctrl,
                                               sizeof *ctrl, &actual);
        if (R_SUCCEEDED(r) && actual >= sizeof(NacpStruct)) {
            NacpLanguageEntry *lang = NULL;
            if (R_SUCCEEDED(nacpGetLanguageEntry(&ctrl->nacp, &lang)) && lang) {
                snprintf(e->name,   sizeof e->name,   "%.*s",
                         (int)(sizeof e->name   - 1), lang->name);
                snprintf(e->author, sizeof e->author, "%.*s",
                         (int)(sizeof e->author - 1), lang->author);
            } else {
                snprintf(e->name, sizeof e->name, "(no NACP lang)");
            }
        } else {
            snprintf(e->name, sizeof e->name, "(NACP unavailable)");
        }
        out->count++;
    }

    free(ctrl);
    free(recs);
    nsExit();

    /* Second pass: annotate each title with Combined-NSP children. */
    Result ncm_rc = ncmInitialize();
    if (R_SUCCEEDED(ncm_rc)) {
        walk_ncm_storage(out, NcmStorageId_SdCard);
        walk_ncm_storage(out, NcmStorageId_BuiltInUser);
        walk_ncm_storage(out, NcmStorageId_BuiltInSystem);
        ncmExit();
    } else {
        log_linef("titles: ncmInitialize failed 0x%08x — skipping combined view", ncm_rc);
    }

    return 0;
}

void titles_free(title_list_t *lst) {
    if (!lst) return;
    free(lst->items);
    lst->items = NULL;
    lst->count = 0;
    lst->cap   = 0;
}

Result titles_launch(uint64_t app_id) {
    return appletRequestLaunchApplication(app_id, NULL);
}

Result titles_delete(uint64_t app_id) {
    Result rc = nsInitialize();
    if (R_FAILED(rc)) return rc;
    rc = nsDeleteApplicationCompletely(app_id);
    nsExit();
    return rc;
}
