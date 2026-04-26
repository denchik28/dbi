/* DBI fork — Album / InstalledGames / SDCard HTTP servers.
 *
 * Mirrors upstream's three HTTP virtual servers (REVERSE.md Part 13/29):
 *   AlbumHttpServer:           port 8081  — Switch screenshot album
 *   InstalledGamesHttpServer:  port 8082  — JSON list of installed titles + HTML UI
 *   SDCardHttpServer:          port 8083  — sdmc:/ file tree
 */
#ifndef DBI_FORK_HTTP_SERVERS_H
#define DBI_FORK_HTTP_SERVERS_H

#include <stdint.h>
#include <stdbool.h>

int  album_server_start(uint16_t port);
int  installed_games_server_start(uint16_t port);
int  sdcard_server_start(uint16_t port);
void http_servers_stop_all(void);
void http_servers_tick_all(void);

bool album_server_is_running(void);
bool installed_games_server_is_running(void);
bool sdcard_server_is_running(void);

#endif
