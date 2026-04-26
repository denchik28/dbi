#include "dbi_config.h"
#include <stdio.h>
#include <string.h>
#include <strings.h>
#include <ctype.h>
#include <sys/stat.h>
#include <errno.h>

static void rstrip(char *s) {
    size_t l = strlen(s);
    while (l > 0 && (s[l-1] == ' ' || s[l-1] == '\t' || s[l-1] == '\r' ||
                     s[l-1] == '\n')) s[--l] = 0;
}

static char *lstrip(char *s) {
    while (*s == ' ' || *s == '\t') s++;
    return s;
}

bool dbi_config_load(dbi_config_t *cfg, const char *path) {
    memset(cfg, 0, sizeof *cfg);
    snprintf(cfg->path, sizeof cfg->path, "%s", path ? path : "");
    FILE *f = fopen(path, "rb");
    if (!f) return true;

    char section[DBI_CONFIG_SECTION_LEN] = "";
    char line[512];
    while (fgets(line, sizeof line, f)) {
        rstrip(line);
        char *s = lstrip(line);
        if (!*s || *s == '#' || *s == ';') continue;

        if (*s == '[') {
            char *e = strchr(s, ']');
            if (!e) continue;
            *e = 0;
            snprintf(section, sizeof section, "%s", s + 1);
            continue;
        }

        char *eq = strchr(s, '=');
        if (!eq) continue;
        *eq = 0;
        char *key = s;
        char *val = lstrip(eq + 1);
        rstrip(key);

        if (cfg->count >= DBI_CONFIG_MAX_ENTRIES) break;
        dbi_config_entry_t *e = &cfg->entries[cfg->count++];
        snprintf(e->section, sizeof e->section, "%s", section);
        snprintf(e->key,     sizeof e->key,     "%s", key);
        snprintf(e->value,   sizeof e->value,   "%s", val);
    }
    fclose(f);
    cfg->loaded = true;
    return true;
}

const dbi_config_entry_t *dbi_config_find(const dbi_config_t *cfg,
                                          const char *section,
                                          const char *key) {
    if (!cfg || !key) return NULL;
    for (size_t i = 0; i < cfg->count; i++) {
        const dbi_config_entry_t *e = &cfg->entries[i];
        if (section && strcasecmp(e->section, section) != 0) continue;
        if (strcasecmp(e->key, key) == 0) return e;
    }
    return NULL;
}

bool dbi_config_set(dbi_config_t *cfg,
                    const char *section,
                    const char *key,
                    const char *value) {
    if (!cfg || !key || !value) return false;
    const char *sec = section ? section : "";
    for (size_t i = 0; i < cfg->count; i++) {
        dbi_config_entry_t *e = &cfg->entries[i];
        if (strcasecmp(e->section, sec) != 0) continue;
        if (strcasecmp(e->key, key)   != 0) continue;
        snprintf(e->value, sizeof e->value, "%s", value);
        return true;
    }
    if (cfg->count >= DBI_CONFIG_MAX_ENTRIES) return false;
    dbi_config_entry_t *e = &cfg->entries[cfg->count++];
    snprintf(e->section, sizeof e->section, "%s", sec);
    snprintf(e->key,     sizeof e->key,     "%s", key);
    snprintf(e->value,   sizeof e->value,   "%s", value);
    return true;
}

/* Build the parent directory chain so fopen("w") doesn't fail with
 * ENOENT on a fresh SD. mkdir() on existing dirs returns EEXIST which
 * we ignore. */
static void ensure_parent_dir(const char *path) {
    char tmp[256];
    snprintf(tmp, sizeof tmp, "%s", path);
    char *slash = strrchr(tmp, '/');
    if (!slash || slash == tmp) return;
    *slash = 0;
    for (char *p = tmp + 1; *p; p++) {
        if (*p == '/') {
            *p = 0;
            mkdir(tmp, 0777);
            *p = '/';
        }
    }
    mkdir(tmp, 0777);
}

bool dbi_config_folder(const dbi_config_t *cfg,
                       const char *section, const char *key,
                       const char *default_folder,
                       char *out, size_t outsz) {
    if (!out || outsz == 0) return false;
    const char *src = default_folder ? default_folder : "";
    bool used_cfg = false;
    const dbi_config_entry_t *e = dbi_config_find(cfg, section, key);
    if (e && e->value[0]) { src = e->value; used_cfg = true; }
    snprintf(out, outsz, "%s", src);
    size_t n = strlen(out);
    while (n > 0 && out[n - 1] == '/') out[--n] = 0;
    return used_cfg;
}

bool dbi_config_save(const dbi_config_t *cfg, const char *path) {
    if (!cfg || !path || !*path) return false;
    ensure_parent_dir(path);

    FILE *f = fopen(path, "wb");
    if (!f) return false;

    /* Track which indices we've already emitted so we can preserve
     * upstream DBI's section-grouped layout (all keys under [Section]
     * appear contiguously). First-seen section order is preserved. */
    bool done[DBI_CONFIG_MAX_ENTRIES] = { false };
    bool first_section = true;

    for (size_t i = 0; i < cfg->count; i++) {
        if (done[i]) continue;
        const char *sec = cfg->entries[i].section;

        if (!first_section) fputc('\n', f);
        first_section = false;

        if (sec && *sec) fprintf(f, "[%s]\n", sec);

        for (size_t j = i; j < cfg->count; j++) {
            if (done[j]) continue;
            if (strcasecmp(cfg->entries[j].section, sec) != 0) continue;
            fprintf(f, "%s=%s\n",
                    cfg->entries[j].key,
                    cfg->entries[j].value);
            done[j] = true;
        }
    }

    int rc = fclose(f);
    return rc == 0;
}
