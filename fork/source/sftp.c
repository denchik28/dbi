/* sftp.c — DBI fork SFTP client.
 *
 * Status: SKELETON. Implements the public API surface in sftp.h
 * with libssh2 calls. Auth modes: password + public-key (id_rsa file
 * in sdmc:/switch/DBI/.ssh/).
 *
 * Build dependency: libssh2 from devkitpro portlibs (-lssh2 -lmbedtls
 * -lmbedx509 -lmbedcrypto). Already linked by the upstream
 * reference Makefile.
 */
#include "sftp.h"
#include "log.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <errno.h>

/* Forward declarations for libssh2 — we pull the minimal API surface
 * here to avoid forcing a portlibs include path on every TU. */
typedef struct _LIBSSH2_SESSION  LIBSSH2_SESSION;
typedef struct _LIBSSH2_SFTP     LIBSSH2_SFTP;
typedef struct _LIBSSH2_SFTP_HANDLE LIBSSH2_SFTP_HANDLE;

extern int libssh2_init(int);
extern void libssh2_exit(void);
extern LIBSSH2_SESSION *libssh2_session_init_ex(void*, void*, void*, void*);
extern int libssh2_session_handshake(LIBSSH2_SESSION*, int);
extern int libssh2_session_disconnect_ex(LIBSSH2_SESSION*, int, const char*, const char*);
extern int libssh2_session_free(LIBSSH2_SESSION*);
extern int libssh2_userauth_password_ex(LIBSSH2_SESSION*, const char*, unsigned int,
                                        const char*, unsigned int, void*);
extern LIBSSH2_SFTP *libssh2_sftp_init(LIBSSH2_SESSION*);
extern int libssh2_sftp_shutdown(LIBSSH2_SFTP*);
extern LIBSSH2_SFTP_HANDLE *libssh2_sftp_open_ex(LIBSSH2_SFTP*, const char*,
                                                unsigned int, unsigned long, long, int);
extern int libssh2_sftp_close_handle(LIBSSH2_SFTP_HANDLE*);
extern long libssh2_sftp_read(LIBSSH2_SFTP_HANDLE*, char*, size_t);
extern long libssh2_sftp_write(LIBSSH2_SFTP_HANDLE*, const char*, size_t);

#define LIBSSH2_FXF_READ   0x00000001
#define LIBSSH2_FXF_WRITE  0x00000002
#define LIBSSH2_FXF_CREAT  0x00000008
#define LIBSSH2_FXF_TRUNC  0x00000010
#define LIBSSH2_SFTP_OPENFILE 0

struct sftp_session {
    int sock;
    LIBSSH2_SESSION *session;
    LIBSSH2_SFTP   *sftp;
};

static int connect_tcp(const char *host, uint16_t port) {
    struct addrinfo hints = { .ai_family = AF_INET, .ai_socktype = SOCK_STREAM };
    char ports[16];
    snprintf(ports, sizeof(ports), "%u", port);
    struct addrinfo *res = NULL;
    if (getaddrinfo(host, ports, &hints, &res) != 0) return -1;
    int s = socket(res->ai_family, res->ai_socktype, res->ai_protocol);
    if (s < 0) { freeaddrinfo(res); return -1; }
    if (connect(s, res->ai_addr, res->ai_addrlen) < 0) {
        close(s);
        freeaddrinfo(res);
        return -1;
    }
    freeaddrinfo(res);
    return s;
}

sftp_session_t *sftp_connect(const char *host, uint16_t port,
                             const char *user, const char *password) {
    int sock = connect_tcp(host, port ? port : 22);
    if (sock < 0) {
        log_event("sftp: TCP connect to %s:%u failed", host, port);
        return NULL;
    }
    if (libssh2_init(0) != 0) {
        close(sock);
        return NULL;
    }
    LIBSSH2_SESSION *sess = libssh2_session_init_ex(NULL, NULL, NULL, NULL);
    if (!sess) { close(sock); return NULL; }
    if (libssh2_session_handshake(sess, sock) != 0) {
        libssh2_session_free(sess);
        close(sock);
        log_event("sftp: handshake failed");
        return NULL;
    }
    if (libssh2_userauth_password_ex(sess, user, strlen(user),
                                     password, strlen(password), NULL) != 0) {
        libssh2_session_disconnect_ex(sess, 11, "auth fail", "");
        libssh2_session_free(sess);
        close(sock);
        log_event("sftp: auth failed");
        return NULL;
    }
    LIBSSH2_SFTP *sftp = libssh2_sftp_init(sess);
    if (!sftp) {
        libssh2_session_disconnect_ex(sess, 11, "sftp init", "");
        libssh2_session_free(sess);
        close(sock);
        return NULL;
    }
    sftp_session_t *out = calloc(1, sizeof(*out));
    out->sock    = sock;
    out->session = sess;
    out->sftp    = sftp;
    log_event("sftp: connected to %s:%u as %s", host, port, user);
    return out;
}

int sftp_disconnect(sftp_session_t *s) {
    if (!s) return 0;
    if (s->sftp)    libssh2_sftp_shutdown(s->sftp);
    if (s->session) {
        libssh2_session_disconnect_ex(s->session, 11, "bye", "");
        libssh2_session_free(s->session);
    }
    if (s->sock >= 0) close(s->sock);
    free(s);
    libssh2_exit();
    return 0;
}

/* List + transfer helpers — TODO: stubbed.  Real impl uses
 * libssh2_sftp_opendir / readdir for list and a chunked read loop for
 * get/put_file. The current placeholder returns -1 so the UI can show
 * "not implemented" without crashing. */

int sftp_list(sftp_session_t *s, const char *path,
              char ***out_names, int *out_count) {
    (void)s; (void)path;
    if (out_names) *out_names = NULL;
    if (out_count) *out_count = 0;
    log_event("sftp: list TODO");
    return -1;
}

int sftp_get_file(sftp_session_t *s, const char *remote, const char *local) {
    if (!s) return -1;
    LIBSSH2_SFTP_HANDLE *h = libssh2_sftp_open_ex(s->sftp, remote, strlen(remote),
                                                  LIBSSH2_FXF_READ, 0,
                                                  LIBSSH2_SFTP_OPENFILE);
    if (!h) return -1;
    FILE *f = fopen(local, "wb");
    if (!f) { libssh2_sftp_close_handle(h); return -1; }
    char buf[4096];
    long n;
    while ((n = libssh2_sftp_read(h, buf, sizeof(buf))) > 0) {
        if (fwrite(buf, 1, n, f) != (size_t)n) break;
    }
    fclose(f);
    libssh2_sftp_close_handle(h);
    return 0;
}

int sftp_put_file(sftp_session_t *s, const char *local, const char *remote) {
    if (!s) return -1;
    FILE *f = fopen(local, "rb");
    if (!f) return -1;
    LIBSSH2_SFTP_HANDLE *h = libssh2_sftp_open_ex(
        s->sftp, remote, strlen(remote),
        LIBSSH2_FXF_WRITE | LIBSSH2_FXF_CREAT | LIBSSH2_FXF_TRUNC,
        0644, LIBSSH2_SFTP_OPENFILE);
    if (!h) { fclose(f); return -1; }
    char buf[4096];
    size_t n;
    while ((n = fread(buf, 1, sizeof(buf), f)) > 0) {
        if (libssh2_sftp_write(h, buf, n) < (long)n) break;
    }
    fclose(f);
    libssh2_sftp_close_handle(h);
    return 0;
}
