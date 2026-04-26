#pragma once
#include <stdbool.h>
#include <stddef.h>

/* Activity log — byte-level match of upstream DBI's log format
 * (FINDINGS.md Part 38.2 + the Log screen UX at row-tail reader):
 *
 *   sdmc:/switch/DBI/logs/dbi-YYYYMMDD.txt
 *
 * One entry per line: "[HH:MM:SS] <message>\n". Opened append-mode so
 * each boot extends the same-day file. `log_init()` is idempotent;
 * call once from main() after fsdevMountSdmc/consoleInit. */

bool log_init(void);
void log_exit(void);

/* Rebind the log to a different folder after config load. `folder` is
 * the resolved `[General]/LogsFolder` (trailing '/' already stripped).
 * No-op if the current path already sits under that folder. On success
 * closes the existing file and reopens `<folder>/dbi-YYYYMMDD.txt` in
 * append mode. */
bool log_reopen_in(const char *folder);

/* printf-style entry. Timestamps + appends. Silent no-op if log_init
 * has not succeeded. */
void log_linef(const char *fmt, ...) __attribute__((format(printf, 1, 2)));

/* Event-level log. Identical formatting to log_linef() but gated by the
 * `[General]/LogEvents` config key: when false, the call is a no-op.
 * Use for routine success messages (install OK, save backed up, ticket
 * imported...) so users who set LogEvents=false only see errors. Errors
 * and warnings should stay on log_linef() — they're always logged. */
void log_event(const char *fmt, ...) __attribute__((format(printf, 1, 2)));

/* Toggle [General]/LogEvents gating. Default enabled so that pre-config
 * boot-time events (log_init / main: argc) still land in the file. Call
 * from ui load_config() after parsing dbi.config. */
void log_set_events_enabled(bool on);

/* Raw line (no timestamp) — used for fs_scan progress dumps that
 * multi-line one event. */
void log_raw(const char *s);

/* For the UI Log screen: path of the currently-open log file (NULL
 * if not initialised). */
const char *log_current_path(void);
