/* DBI fork — FTP server (RFC 959).
 *
 * Reverse-engineered from upstream DBI 891 FUN_714885dc and the
 * cipher v2 response strings in
 *   /opt/aimeld-proj/re/analysis/891/decoded_v2_clean.tsv
 *
 * Design notes:
 *   - Listens on a configurable port (default 5000), default upstream-
 *     DBI behaviour.
 *   - Single-threaded, polling event loop integrated with the main UI
 *     tick (call ftp_tick() from the main loop).
 *   - Passive mode (PASV / EPSV) only; active mode (PORT) is rejected
 *     because Switch homebrew can't easily open inbound connections
 *     from arbitrary ports.
 *   - Filesystem rooted at sdmc: by default; mountable to other
 *     fsdev paths via ftp_set_root().
 */
#ifndef DBI_FORK_FTP_H
#define DBI_FORK_FTP_H

#include <stdint.h>
#include <stdbool.h>

#define FTP_DEFAULT_PORT 5000
#define FTP_DEFAULT_ROOT "sdmc:/"

typedef enum {
    FTP_STATE_IDLE = 0,
    FTP_STATE_LISTENING,
    FTP_STATE_AUTHENTICATING,
    FTP_STATE_AUTHENTICATED,
    FTP_STATE_DATA_PENDING,
    FTP_STATE_DATA_TRANSFER,
    FTP_STATE_ERROR,
} ftp_state_t;

typedef struct ftp_session ftp_session_t;

/* Global server lifecycle */
int  ftp_server_start(uint16_t port, const char *root);
void ftp_server_stop(void);

/* Drive the event loop — call once per UI frame */
void ftp_server_tick(void);

/* State queries (for UI status display) */
bool        ftp_server_is_running(void);
uint16_t    ftp_server_port(void);
const char* ftp_server_root(void);
int         ftp_server_active_session_count(void);

/* Send-back stats for the title-bar / status line */
typedef struct {
    uint64_t bytes_sent;
    uint64_t bytes_received;
    uint32_t total_sessions;
    uint32_t total_files_served;
} ftp_stats_t;

void ftp_server_get_stats(ftp_stats_t *out);

#endif /* DBI_FORK_FTP_H */
