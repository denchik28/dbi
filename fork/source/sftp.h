/* DBI fork — SFTP / SCP client (libssh2-backed).
 *
 * Counterpart of upstream's libssh2 footprint (REVERSE.md Part 20).
 * The client side: connect to a remote SFTP host and pull NSPs / push
 * cart dumps. Server-side SFTP is not implemented — too risky on the
 * Switch (would expose the filesystem).
 */
#ifndef DBI_FORK_SFTP_H
#define DBI_FORK_SFTP_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

typedef struct sftp_session sftp_session_t;

sftp_session_t *sftp_connect(const char *host, uint16_t port,
                             const char *user, const char *password);
int  sftp_disconnect(sftp_session_t *s);

/* List entries in `path` (caller frees `out_names` array of strdup'd
 * strings + the array itself). */
int  sftp_list(sftp_session_t *s, const char *path,
               char ***out_names, int *out_count);

/* Download `remote` into `local`. */
int  sftp_get_file(sftp_session_t *s, const char *remote, const char *local);

/* Upload `local` to `remote`. */
int  sftp_put_file(sftp_session_t *s, const char *local, const char *remote);

#endif /* DBI_FORK_SFTP_H */
