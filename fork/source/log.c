#include "log.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <time.h>
#include <sys/stat.h>
#include <switch.h>

static FILE       *g_log  = NULL;
static char        g_path[256];
static Mutex       g_mtx;
static bool        g_mtx_inited = false;
/* Gated by [General]/LogEvents via log_set_events_enabled. Default true
 * so that early-boot log_event calls (before config load) land in the
 * file; flipped off when config says LogEvents=false. */
static bool        g_events_enabled = true;

/* Creates sdmc:/switch and /switch/DBI and /switch/DBI/logs so the
 * first-boot case doesn't silently drop log entries. mkdir() of an
 * existing dir returns EEXIST — harmless, we ignore rc. */
static void ensure_log_dir(void) {
    mkdir("sdmc:/switch",          0777);
    mkdir("sdmc:/switch/DBI",      0777);
    mkdir("sdmc:/switch/DBI/logs", 0777);
}

bool log_init(void) {
    if (!g_mtx_inited) { mutexInit(&g_mtx); g_mtx_inited = true; }
    if (g_log) return true;

    ensure_log_dir();

    time_t   tt = time(NULL);
    struct tm *tm = localtime(&tt);
    if (tm) snprintf(g_path, sizeof g_path,
                     "sdmc:/switch/DBI/logs/dbi-%04d%02d%02d.txt",
                     tm->tm_year + 1900, tm->tm_mon + 1, tm->tm_mday);
    else strcpy(g_path, "sdmc:/switch/DBI/logs/dbi.txt");

    g_log = fopen(g_path, "ab");
    if (!g_log) return false;

    setvbuf(g_log, NULL, _IOLBF, 0); /* line-buffered so crash still flushes */

    fprintf(g_log, "\n=== session start ===\n");
    fflush(g_log);
    return true;
}

void log_exit(void) {
    if (!g_log) return;
    mutexLock(&g_mtx);
    fprintf(g_log, "=== session end ===\n");
    fclose(g_log);
    g_log = NULL;
    mutexUnlock(&g_mtx);
}

void log_linef(const char *fmt, ...) {
    if (!g_log) return;
    mutexLock(&g_mtx);

    time_t   tt = time(NULL);
    struct tm *tm = localtime(&tt);
    if (tm) fprintf(g_log, "[%02d:%02d:%02d] ",
                    tm->tm_hour, tm->tm_min, tm->tm_sec);

    va_list ap;
    va_start(ap, fmt);
    vfprintf(g_log, fmt, ap);
    va_end(ap);

    fputc('\n', g_log);
    fflush(g_log);

    mutexUnlock(&g_mtx);
}

void log_event(const char *fmt, ...) {
    if (!g_log || !g_events_enabled) return;
    mutexLock(&g_mtx);

    time_t   tt = time(NULL);
    struct tm *tm = localtime(&tt);
    if (tm) fprintf(g_log, "[%02d:%02d:%02d] ",
                    tm->tm_hour, tm->tm_min, tm->tm_sec);

    va_list ap;
    va_start(ap, fmt);
    vfprintf(g_log, fmt, ap);
    va_end(ap);

    fputc('\n', g_log);
    fflush(g_log);

    mutexUnlock(&g_mtx);
}

void log_set_events_enabled(bool on) {
    g_events_enabled = on;
}

void log_raw(const char *s) {
    if (!g_log || !s) return;
    mutexLock(&g_mtx);
    fputs(s, g_log);
    fflush(g_log);
    mutexUnlock(&g_mtx);
}

const char *log_current_path(void) {
    return g_log ? g_path : NULL;
}

bool log_reopen_in(const char *folder) {
    if (!folder || !*folder) return false;
    if (!g_mtx_inited) { mutexInit(&g_mtx); g_mtx_inited = true; }

    /* Trim one trailing '/' for prefix compare; the inbound value from
     * dbi_config_folder already strips trailing slashes but we don't
     * want to rely on that for a fallback path. */
    char f[192];
    snprintf(f, sizeof f, "%s", folder);
    size_t fl = strlen(f);
    while (fl > 0 && f[fl - 1] == '/') f[--fl] = 0;

    /* Skip rebind if the current open path already lives under `folder/`. */
    size_t pl = strlen(g_path);
    if (g_log && pl > fl + 1 &&
        strncmp(g_path, f, fl) == 0 && g_path[fl] == '/')
        return true;

    mutexLock(&g_mtx);
    if (g_log) {
        fprintf(g_log, "=== rebinding log to %s ===\n", f);
        fclose(g_log);
        g_log = NULL;
    }

    /* Mirror ensure_log_dir's path-chain mkdir. sdmc:/<chain> only. */
    char tmp[192];
    snprintf(tmp, sizeof tmp, "%s", f);
    char *root = strchr(tmp, ':');
    char *start = root ? root + 2 : tmp + 1;
    for (char *p = start; *p; p++) {
        if (*p == '/') { *p = 0; mkdir(tmp, 0777); *p = '/'; }
    }
    mkdir(tmp, 0777);

    time_t   tt = time(NULL);
    struct tm *tm = localtime(&tt);
    if (tm) snprintf(g_path, sizeof g_path,
                     "%s/dbi-%04d%02d%02d.txt",
                     f, tm->tm_year + 1900, tm->tm_mon + 1, tm->tm_mday);
    else snprintf(g_path, sizeof g_path, "%s/dbi.txt", f);

    g_log = fopen(g_path, "ab");
    if (g_log) {
        setvbuf(g_log, NULL, _IOLBF, 0);
        fprintf(g_log, "=== session continued at %s ===\n", g_path);
        fflush(g_log);
    }
    mutexUnlock(&g_mtx);
    return g_log != NULL;
}
