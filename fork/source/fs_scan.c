#include "fs_scan.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <dirent.h>
#include <sys/stat.h>

static bool ext_match(const char *name, const char *exts) {
    const char *dot = strrchr(name, '.');
    if (!dot) return false;
    char lc_ext[32] = {0};
    size_t l = strlen(dot);
    if (l >= sizeof lc_ext) return false;
    for (size_t i = 0; i < l; i++) lc_ext[i] = (char)tolower((unsigned char)dot[i]);

    const char *p = exts;
    while (*p) {
        const char *q = strchr(p, ',');
        size_t n = q ? (size_t)(q - p) : strlen(p);
        char buf[32];
        if (n < sizeof buf) {
            buf[0] = '.';
            size_t k = 0;
            for (; k < n && k+1 < sizeof buf - 1; k++)
                buf[k+1] = (char)tolower((unsigned char)p[k]);
            buf[k+1] = 0;
            if (strcmp(lc_ext, buf) == 0) return true;
        }
        if (!q) break;
        p = q + 1;
    }
    return false;
}

static void walk(fs_scan_list_t *out, const char *path, const char *exts, int depth_left) {
    if (out->count >= FS_SCAN_MAX_ENTRIES) return;
    DIR *d = opendir(path);
    if (!d) return;
    struct dirent *e;
    while ((e = readdir(d)) != NULL) {
        if (e->d_name[0] == '.') continue;
        char full[FS_SCAN_NAME_MAX];
        int n = snprintf(full, sizeof full, "%s/%s", path, e->d_name);
        if (n <= 0 || (size_t)n >= sizeof full) continue;
        struct stat st;
        if (stat(full, &st) != 0) continue;
        if (S_ISDIR(st.st_mode)) {
            if (depth_left > 0) walk(out, full, exts, depth_left - 1);
        } else if (S_ISREG(st.st_mode)) {
            if (!ext_match(e->d_name, exts)) continue;
            if (out->count >= FS_SCAN_MAX_ENTRIES) break;
            fs_scan_entry_t *it = &out->items[out->count++];
            strncpy(it->name, e->d_name, sizeof it->name - 1);
            strncpy(it->path, full,       sizeof it->path - 1);
            it->size = (uint64_t)st.st_size;
            it->is_dir = false;
        }
    }
    closedir(d);
}

Result fs_scan_collect(fs_scan_list_t *out, const char *root, const char *exts, int max_depth) {
    memset(out, 0, sizeof *out);
    walk(out, root, exts, max_depth);
    return 0;
}

/* -- flat directory listing for file-browser UI -------------------------- */

static int cmp_entries(const void *a, const void *b) {
    const fs_scan_entry_t *ea = (const fs_scan_entry_t *)a;
    const fs_scan_entry_t *eb = (const fs_scan_entry_t *)b;
    if (ea->is_dir != eb->is_dir) return ea->is_dir ? -1 : 1;
    return strcasecmp(ea->name, eb->name);
}

Result fs_scan_list_dir(fs_scan_list_t *out, const char *dir) {
    memset(out, 0, sizeof *out);
    DIR *d = opendir(dir);
    if (!d) return MAKERESULT(Module_Libnx, LibnxError_BadInput);
    struct dirent *e;
    while ((e = readdir(d)) != NULL) {
        if (e->d_name[0] == '.' && (e->d_name[1] == 0 ||
            (e->d_name[1] == '.' && e->d_name[2] == 0))) continue;  /* skip . and .. */
        if (out->count >= FS_SCAN_MAX_ENTRIES) break;
        fs_scan_entry_t *it = &out->items[out->count];
        char full[FS_SCAN_NAME_MAX];
        int n = snprintf(full, sizeof full, "%s/%s", dir, e->d_name);
        if (n <= 0 || (size_t)n >= sizeof full) continue;
        struct stat st;
        if (stat(full, &st) != 0) continue;
        it->is_dir = S_ISDIR(st.st_mode);
        it->size   = it->is_dir ? 0 : (uint64_t)st.st_size;
        strncpy(it->name, e->d_name, sizeof it->name - 1);
        strncpy(it->path, full,      sizeof it->path - 1);
        out->count++;
    }
    closedir(d);
    qsort(out->items, out->count, sizeof out->items[0], cmp_entries);
    return 0;
}
