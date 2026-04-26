#pragma once
#include <stdint.h>
#include <stdbool.h>
#include <switch.h>

/* SNTP v4 time-sync helper — matches upstream DBI behaviour (FINDINGS.md
 * Part 27). DBI, on boot (unless `Network/NtpServer` is set in dbi.config),
 * tries a hard-coded list of servers until one answers, then writes the
 * response timestamp to Horizon's clock via timeSetCurrentTime().
 *
 * The server list below is upstream's built-in fallback, minus ntp.msk-ix.ru
 * which we keep last to avoid RU-specific routing quirks.
 *
 * Dependencies: socketInitializeDefault() and timeInitialize() must be
 * already initialized (caller's responsibility). */

/* Try each server in the list (up to 10, 0-terminated). First successful
 * query wins. `out_unix_secs` is the remote's timestamp converted to
 * POSIX seconds since 1970-01-01 UTC. Returns 0 on success, -1 on total
 * failure (no server answered). */
int ntp_query_servers(const char *const *servers, int n_servers,
                      uint64_t *out_unix_secs, char *err, size_t errsz);

/* One-shot helper: query the upstream default list, and if successful,
 * set Horizon's system time. Requires `set:sys` perms — our NPDM grants
 * this via the same SetSysUserSystemClock manifest entry DBI uses. */
Result ntp_sync_system_time(char *err, size_t errsz);

/* Upstream DBI's built-in server list (FINDINGS Part 27). Exposed so the
 * UI can show it on the Network screen. */
extern const char *const ntp_default_servers[];
extern const int         ntp_default_servers_count;
