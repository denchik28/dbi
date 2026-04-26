/* DBI fork — WebDAV server.
 *
 * Mirrors the Album / InstalledGames / SDCard HTTP servers documented
 * in REVERSE.md Part 13/29, but speaks WebDAV (RFC 4918) so any
 * file manager (Nautilus, Cyberduck, Windows Explorer, Forklift) can
 * mount it natively.
 */
#ifndef DBI_FORK_WEBDAV_H
#define DBI_FORK_WEBDAV_H

#include <stdint.h>
#include <stdbool.h>

#define WEBDAV_DEFAULT_PORT 5005

int  webdav_server_start(uint16_t port, const char *root);
void webdav_server_stop(void);
void webdav_server_tick(void);
bool webdav_server_is_running(void);

#endif /* DBI_FORK_WEBDAV_H */
