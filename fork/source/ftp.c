/* ftp.c — DBI fork FTP server (RFC 959) — full read+write implementation. */
#include "ftp.h"
#include "log.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <errno.h>
#include <unistd.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <fcntl.h>
#include <dirent.h>
#include <sys/stat.h>
#include <time.h>
#include <switch.h>

#define FTP_MAX_SESSIONS    4
#define FTP_BUF_SIZE        4096
#define FTP_DATA_BUF_SIZE   65536
#define FTP_PATH_MAX        512

typedef enum {
    XFER_NONE = 0,
    XFER_RETR,
    XFER_STOR,
    XFER_APPE,
    XFER_LIST,
    XFER_NLST,
} xfer_type_t;

typedef struct ftp_session {
    bool         used;
    int          ctrl_sock;
    int          data_listen;
    int          data_sock;
    uint16_t     data_port;
    ftp_state_t  state;
    bool         auth_ok;
    bool         binary_mode;
    char         cwd[FTP_PATH_MAX];
    char         rename_from[FTP_PATH_MAX];
    char         rx_buf[FTP_BUF_SIZE];
    int          rx_len;

    /* file transfer state — used to coalesce data-conn handshake */
    xfer_type_t  pending_xfer;
    char         pending_path[FTP_PATH_MAX];
    uint64_t     rest_offset;
    FILE        *xfer_fp;
    uint64_t     xfer_bytes;
} ftp_session_t;

static struct {
    bool                running;
    int                 listen_sock;
    uint16_t            port;
    char                root[FTP_PATH_MAX];
    ftp_session_t       sessions[FTP_MAX_SESSIONS];
    ftp_stats_t         stats;
} g_ftp;

/* ───────────────────────────────────── helpers ─────────────────────── */

static int set_nb(int s) {
    int fl = fcntl(s, F_GETFL, 0);
    return fl < 0 ? -1 : fcntl(s, F_SETFL, fl | O_NONBLOCK);
}

static int send_line(int s, const char *fmt, ...) {
    char buf[1024];
    va_list ap;
    va_start(ap, fmt);
    int n = vsnprintf(buf, sizeof(buf) - 2, fmt, ap);
    va_end(ap);
    if (n < 0 || n >= (int)sizeof(buf) - 2) return -1;
    buf[n++] = '\r';
    buf[n++] = '\n';
    int sent = 0;
    while (sent < n) {
        int r = send(s, buf + sent, n - sent, 0);
        if (r < 0) {
            if (errno == EAGAIN || errno == EWOULDBLOCK) {
                svcSleepThread(1000000);
                continue;
            }
            return -1;
        }
        sent += r;
    }
    return 0;
}

static void session_close(ftp_session_t *sess) {
    if (sess->ctrl_sock >= 0) close(sess->ctrl_sock);
    if (sess->data_listen >= 0) close(sess->data_listen);
    if (sess->data_sock >= 0) close(sess->data_sock);
    if (sess->xfer_fp) fclose(sess->xfer_fp);
    memset(sess, 0, sizeof(*sess));
    sess->ctrl_sock = sess->data_listen = sess->data_sock = -1;
}

/* Resolve `arg` (may be absolute or relative) into an absolute path
 * inside the root. Resolves "..", "./", multiple slashes. Refuses to
 * escape `g_ftp.root`. */
static bool resolve(char *out, size_t outsz,
                    const char *base, const char *arg) {
    char raw[FTP_PATH_MAX];
    if (arg[0] == '/') {
        snprintf(raw, sizeof(raw), "%s%s", g_ftp.root, arg + 1);
    } else {
        size_t bl = strlen(base);
        if (bl && base[bl-1] == '/')
            snprintf(raw, sizeof(raw), "%s%s", base, arg);
        else
            snprintf(raw, sizeof(raw), "%s/%s", base, arg);
    }

    /* Canonicalise — drop "." and "..". Refuse to climb above root. */
    char canon[FTP_PATH_MAX];
    size_t rl = strlen(g_ftp.root);
    snprintf(canon, sizeof(canon), "%s", g_ftp.root);
    size_t cl = rl;

    const char *p = raw + rl;
    while (*p) {
        while (*p == '/') p++;
        const char *seg = p;
        while (*p && *p != '/') p++;
        size_t sl = p - seg;
        if (sl == 0) continue;
        if (sl == 1 && seg[0] == '.') continue;
        if (sl == 2 && seg[0] == '.' && seg[1] == '.') {
            /* climb if possible but not above root */
            while (cl > rl && canon[cl-1] != '/') cl--;
            if (cl > rl) cl--;
            canon[cl] = 0;
            continue;
        }
        if (cl + sl + 2 > sizeof(canon)) return false;
        if (cl == 0 || canon[cl-1] != '/') canon[cl++] = '/';
        memcpy(canon + cl, seg, sl);
        cl += sl;
        canon[cl] = 0;
    }
    snprintf(out, outsz, "%s", canon);
    return true;
}

/* ───────────────────────────────────── data conn helpers ───────────── */

static int data_accept(ftp_session_t *sess) {
    if (sess->data_listen < 0) return -1;
    /* Polling accept with short loop. */
    for (int i = 0; i < 100; i++) {
        int s = accept(sess->data_listen, NULL, NULL);
        if (s >= 0) {
            close(sess->data_listen);
            sess->data_listen = -1;
            sess->data_sock = s;
            return s;
        }
        svcSleepThread(20000000);
    }
    return -1;
}

static int data_open_pasv(ftp_session_t *sess) {
    if (sess->data_listen >= 0) close(sess->data_listen);
    sess->data_listen = socket(AF_INET, SOCK_STREAM, 0);
    if (sess->data_listen < 0) return -1;
    struct sockaddr_in sa = {.sin_family = AF_INET, .sin_addr.s_addr = INADDR_ANY };
    sa.sin_port = 0;
    if (bind(sess->data_listen, (struct sockaddr*)&sa, sizeof(sa)) < 0 ||
        listen(sess->data_listen, 1) < 0) {
        close(sess->data_listen);
        sess->data_listen = -1;
        return -1;
    }
    socklen_t l = sizeof(sa);
    getsockname(sess->data_listen, (struct sockaddr*)&sa, &l);
    sess->data_port = ntohs(sa.sin_port);
    set_nb(sess->data_listen);
    return 0;
}

/* ───────────────────────────────────── command handlers ────────────── */

static void cmd_user(ftp_session_t *sess, const char *arg) {
    sess->state = FTP_STATE_AUTHENTICATING;
    send_line(sess->ctrl_sock, "331 Password required for %s.", arg);
}
static void cmd_pass(ftp_session_t *sess, const char *arg) {
    (void)arg;
    sess->auth_ok = true;
    sess->state = FTP_STATE_AUTHENTICATED;
    send_line(sess->ctrl_sock, "230 Service ready for new user.");
}
static void cmd_quit(ftp_session_t *sess) {
    send_line(sess->ctrl_sock, "221 Goodbye.");
    sess->state = FTP_STATE_IDLE;
}
static void cmd_pwd(ftp_session_t *sess) {
    /* Strip g_ftp.root prefix from cwd for client display. */
    size_t rl = strlen(g_ftp.root);
    const char *disp = sess->cwd;
    if (strncmp(sess->cwd, g_ftp.root, rl) == 0) disp = sess->cwd + rl - 1;
    send_line(sess->ctrl_sock, "257 \"%s\" is the current directory.", disp);
}
static void cmd_cwd(ftp_session_t *sess, const char *arg) {
    char p[FTP_PATH_MAX];
    if (!resolve(p, sizeof(p), sess->cwd, arg)) {
        send_line(sess->ctrl_sock, "550 Path too long.");
        return;
    }
    DIR *d = opendir(p);
    if (!d) { send_line(sess->ctrl_sock, "550 No such directory."); return; }
    closedir(d);
    snprintf(sess->cwd, sizeof(sess->cwd), "%s", p);
    send_line(sess->ctrl_sock, "250 OK.");
}
static void cmd_cdup(ftp_session_t *sess) { cmd_cwd(sess, ".."); }

static void cmd_pasv(ftp_session_t *sess) {
    if (data_open_pasv(sess) < 0) {
        send_line(sess->ctrl_sock, "425 Cannot allocate data socket.");
        return;
    }
    struct sockaddr_in la;
    socklen_t ll = sizeof(la);
    getsockname(sess->ctrl_sock, (struct sockaddr*)&la, &ll);
    uint32_t ip = ntohl(la.sin_addr.s_addr);
    send_line(sess->ctrl_sock, "227 Entering Passive Mode (%u,%u,%u,%u,%u,%u).",
              (ip >> 24) & 0xff, (ip >> 16) & 0xff,
              (ip >> 8)  & 0xff,  ip        & 0xff,
              (sess->data_port >> 8) & 0xff,
              sess->data_port & 0xff);
    sess->state = FTP_STATE_DATA_PENDING;
}
static void cmd_epsv(ftp_session_t *sess) {
    if (data_open_pasv(sess) < 0) {
        send_line(sess->ctrl_sock, "425 Cannot allocate data socket.");
        return;
    }
    send_line(sess->ctrl_sock, "229 Entering Extended Passive Mode (|||%u|).",
              sess->data_port);
    sess->state = FTP_STATE_DATA_PENDING;
}

static void list_one(int s, const char *name, struct stat *st) {
    char line[512];
    char mode[11] = "----------";
    if (S_ISDIR(st->st_mode)) mode[0] = 'd';
    if (st->st_mode & 0400) mode[1] = 'r';
    if (st->st_mode & 0200) mode[2] = 'w';
    if (st->st_mode & 0100) mode[3] = 'x';
    char tbuf[32] = "Jan 01 00:00";
    struct tm tm;
    time_t t = st->st_mtime;
    if (gmtime_r(&t, &tm)) {
        static const char *mn[] = {"Jan","Feb","Mar","Apr","May","Jun",
                                    "Jul","Aug","Sep","Oct","Nov","Dec"};
        snprintf(tbuf, sizeof(tbuf), "%s %02d %02d:%02d",
                 mn[tm.tm_mon], tm.tm_mday, tm.tm_hour, tm.tm_min);
    }
    int n = snprintf(line, sizeof(line), "%s 1 user user %llu %s %s\r\n",
                     mode, (unsigned long long)st->st_size, tbuf, name);
    send(s, line, n, 0);
}

static void cmd_list(ftp_session_t *sess, bool name_only) {
    if (sess->state != FTP_STATE_DATA_PENDING) {
        send_line(sess->ctrl_sock, "425 Use PASV first."); return;
    }
    int data = data_accept(sess);
    if (data < 0) {
        send_line(sess->ctrl_sock, "425 Cannot accept data conn."); return;
    }
    send_line(sess->ctrl_sock, "150 Opening data connection.");
    DIR *d = opendir(sess->cwd);
    if (d) {
        struct dirent *de;
        while ((de = readdir(d))) {
            if (de->d_name[0] == '.') continue;
            if (name_only) {
                send(data, de->d_name, strlen(de->d_name), 0);
                send(data, "\r\n", 2, 0);
            } else {
                char p[FTP_PATH_MAX * 2];
                snprintf(p, sizeof(p), "%s/%s", sess->cwd, de->d_name);
                struct stat st;
                if (stat(p, &st) == 0) list_one(data, de->d_name, &st);
            }
        }
        closedir(d);
    }
    close(data);
    sess->data_sock = -1;
    sess->state = FTP_STATE_AUTHENTICATED;
    send_line(sess->ctrl_sock, "226 Transfer complete.");
}

static void cmd_retr(ftp_session_t *sess, const char *arg) {
    if (sess->state != FTP_STATE_DATA_PENDING) {
        send_line(sess->ctrl_sock, "425 Use PASV first."); return;
    }
    char p[FTP_PATH_MAX];
    if (!resolve(p, sizeof(p), sess->cwd, arg)) {
        send_line(sess->ctrl_sock, "550 Path too long.");
        if (sess->data_listen >= 0) { close(sess->data_listen); sess->data_listen = -1; }
        return;
    }
    FILE *f = fopen(p, "rb");
    if (!f) {
        send_line(sess->ctrl_sock, "550 File not found.");
        if (sess->data_listen >= 0) { close(sess->data_listen); sess->data_listen = -1; }
        return;
    }
    if (sess->rest_offset) fseek(f, sess->rest_offset, SEEK_SET);
    int data = data_accept(sess);
    if (data < 0) {
        fclose(f);
        send_line(sess->ctrl_sock, "425 Cannot accept data conn.");
        return;
    }
    send_line(sess->ctrl_sock, "150 Opening %s mode data connection.",
              sess->binary_mode ? "binary" : "ASCII");
    static char buf[FTP_DATA_BUF_SIZE];
    size_t n;
    bool ok = true;
    while ((n = fread(buf, 1, sizeof(buf), f)) > 0) {
        size_t off = 0;
        while (off < n) {
            int r = send(data, buf + off, n - off, 0);
            if (r <= 0) { ok = false; goto fini; }
            off += r;
            sess->xfer_bytes += r;
            g_ftp.stats.bytes_sent += r;
        }
    }
fini:
    fclose(f);
    close(data);
    sess->data_sock = -1;
    sess->state = FTP_STATE_AUTHENTICATED;
    sess->rest_offset = 0;
    if (ok) {
        g_ftp.stats.total_files_served++;
        send_line(sess->ctrl_sock, "226 Transfer complete.");
    } else {
        send_line(sess->ctrl_sock, "426 Connection closed; transfer aborted.");
    }
}

static void cmd_stor(ftp_session_t *sess, const char *arg, bool append) {
    if (sess->state != FTP_STATE_DATA_PENDING) {
        send_line(sess->ctrl_sock, "425 Use PASV first."); return;
    }
    char p[FTP_PATH_MAX];
    if (!resolve(p, sizeof(p), sess->cwd, arg)) {
        send_line(sess->ctrl_sock, "550 Path too long.");
        if (sess->data_listen >= 0) { close(sess->data_listen); sess->data_listen = -1; }
        return;
    }
    FILE *f = fopen(p, append ? "ab" : "wb");
    if (!f) {
        send_line(sess->ctrl_sock, "553 Cannot open file for writing.");
        if (sess->data_listen >= 0) { close(sess->data_listen); sess->data_listen = -1; }
        return;
    }
    int data = data_accept(sess);
    if (data < 0) {
        fclose(f);
        send_line(sess->ctrl_sock, "425 Cannot accept data conn.");
        return;
    }
    send_line(sess->ctrl_sock, "150 Opening data connection.");
    static char buf[FTP_DATA_BUF_SIZE];
    int n;
    bool ok = true;
    while ((n = recv(data, buf, sizeof(buf), 0)) > 0) {
        if (fwrite(buf, 1, n, f) != (size_t)n) { ok = false; break; }
        g_ftp.stats.bytes_received += n;
    }
    fclose(f);
    close(data);
    sess->data_sock = -1;
    sess->state = FTP_STATE_AUTHENTICATED;
    send_line(sess->ctrl_sock, ok ? "226 Transfer complete."
                                  : "426 Connection closed; transfer aborted.");
}

static void cmd_dele(ftp_session_t *sess, const char *arg) {
    char p[FTP_PATH_MAX];
    if (!resolve(p, sizeof(p), sess->cwd, arg)) {
        send_line(sess->ctrl_sock, "550 Path too long."); return;
    }
    if (unlink(p) < 0) {
        send_line(sess->ctrl_sock, "550 Delete failed: %s", strerror(errno));
    } else {
        send_line(sess->ctrl_sock, "250 File deleted.");
    }
}
static void cmd_mkd(ftp_session_t *sess, const char *arg) {
    char p[FTP_PATH_MAX];
    if (!resolve(p, sizeof(p), sess->cwd, arg)) {
        send_line(sess->ctrl_sock, "550 Path too long."); return;
    }
    if (mkdir(p, 0755) < 0) {
        send_line(sess->ctrl_sock, "550 mkdir failed: %s", strerror(errno));
    } else {
        send_line(sess->ctrl_sock, "257 \"%s\" directory created.", arg);
    }
}
static void cmd_rmd(ftp_session_t *sess, const char *arg) {
    char p[FTP_PATH_MAX];
    if (!resolve(p, sizeof(p), sess->cwd, arg)) {
        send_line(sess->ctrl_sock, "550 Path too long."); return;
    }
    if (rmdir(p) < 0) {
        send_line(sess->ctrl_sock, "550 rmdir failed: %s", strerror(errno));
    } else {
        send_line(sess->ctrl_sock, "250 Directory removed.");
    }
}
static void cmd_rnfr(ftp_session_t *sess, const char *arg) {
    char p[FTP_PATH_MAX];
    if (!resolve(p, sizeof(p), sess->cwd, arg)) {
        send_line(sess->ctrl_sock, "550 Path too long."); return;
    }
    snprintf(sess->rename_from, sizeof(sess->rename_from), "%s", p);
    send_line(sess->ctrl_sock, "350 Ready for RNTO.");
}
static void cmd_rnto(ftp_session_t *sess, const char *arg) {
    if (!sess->rename_from[0]) {
        send_line(sess->ctrl_sock, "503 RNFR first."); return;
    }
    char p[FTP_PATH_MAX];
    if (!resolve(p, sizeof(p), sess->cwd, arg)) {
        send_line(sess->ctrl_sock, "550 Path too long."); return;
    }
    if (rename(sess->rename_from, p) < 0) {
        send_line(sess->ctrl_sock, "550 Rename failed: %s", strerror(errno));
    } else {
        send_line(sess->ctrl_sock, "250 Rename OK.");
    }
    sess->rename_from[0] = 0;
}
static void cmd_size(ftp_session_t *sess, const char *arg) {
    char p[FTP_PATH_MAX];
    if (!resolve(p, sizeof(p), sess->cwd, arg)) {
        send_line(sess->ctrl_sock, "550 Path too long."); return;
    }
    struct stat st;
    if (stat(p, &st) < 0) {
        send_line(sess->ctrl_sock, "550 No such file."); return;
    }
    send_line(sess->ctrl_sock, "213 %llu", (unsigned long long)st.st_size);
}
static void cmd_mdtm(ftp_session_t *sess, const char *arg) {
    char p[FTP_PATH_MAX];
    if (!resolve(p, sizeof(p), sess->cwd, arg)) {
        send_line(sess->ctrl_sock, "550 Path too long."); return;
    }
    struct stat st;
    if (stat(p, &st) < 0) {
        send_line(sess->ctrl_sock, "550 No such file."); return;
    }
    struct tm tm;
    time_t t = st.st_mtime;
    if (!gmtime_r(&t, &tm)) {
        send_line(sess->ctrl_sock, "550 mdtm error."); return;
    }
    send_line(sess->ctrl_sock, "213 %04d%02d%02d%02d%02d%02d",
              tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday,
              tm.tm_hour, tm.tm_min, tm.tm_sec);
}
static void cmd_rest(ftp_session_t *sess, const char *arg) {
    sess->rest_offset = strtoull(arg, NULL, 10);
    send_line(sess->ctrl_sock, "350 Restart at %llu.",
              (unsigned long long)sess->rest_offset);
}
static void cmd_type(ftp_session_t *sess, const char *arg) {
    sess->binary_mode = (arg[0] == 'I' || arg[0] == 'i');
    send_line(sess->ctrl_sock, "200 Type set to %c.", sess->binary_mode ? 'I' : 'A');
}

static int parse_one(ftp_session_t *sess) {
    char *eol = memmem(sess->rx_buf, sess->rx_len, "\r\n", 2);
    if (!eol) eol = memchr(sess->rx_buf, '\n', sess->rx_len);
    if (!eol) return 0;
    size_t line_len = eol - sess->rx_buf;
    char line[FTP_BUF_SIZE];
    if (line_len >= sizeof(line)) line_len = sizeof(line) - 1;
    memcpy(line, sess->rx_buf, line_len);
    line[line_len] = 0;

    char *cmd = line;
    char *arg = strchr(line, ' ');
    if (arg) { *arg++ = 0; while (*arg == ' ') arg++; }
    else arg = "";
    for (char *p = cmd; *p; p++) if (*p >= 'a' && *p <= 'z') *p -= 32;

    log_event("ftp: '%s' '%s'", cmd, arg);

    if      (!strcmp(cmd, "USER")) cmd_user(sess, arg);
    else if (!strcmp(cmd, "PASS")) cmd_pass(sess, arg);
    else if (!strcmp(cmd, "QUIT")) cmd_quit(sess);
    else if (!strcmp(cmd, "PWD") || !strcmp(cmd, "XPWD")) cmd_pwd(sess);
    else if (!strcmp(cmd, "CWD"))  cmd_cwd(sess, arg);
    else if (!strcmp(cmd, "CDUP") || !strcmp(cmd, "XCUP")) cmd_cdup(sess);
    else if (!strcmp(cmd, "PASV")) cmd_pasv(sess);
    else if (!strcmp(cmd, "EPSV")) cmd_epsv(sess);
    else if (!strcmp(cmd, "LIST")) cmd_list(sess, false);
    else if (!strcmp(cmd, "NLST")) cmd_list(sess, true);
    else if (!strcmp(cmd, "RETR")) cmd_retr(sess, arg);
    else if (!strcmp(cmd, "STOR")) cmd_stor(sess, arg, false);
    else if (!strcmp(cmd, "APPE")) cmd_stor(sess, arg, true);
    else if (!strcmp(cmd, "DELE")) cmd_dele(sess, arg);
    else if (!strcmp(cmd, "MKD") || !strcmp(cmd, "XMKD")) cmd_mkd(sess, arg);
    else if (!strcmp(cmd, "RMD") || !strcmp(cmd, "XRMD")) cmd_rmd(sess, arg);
    else if (!strcmp(cmd, "RNFR")) cmd_rnfr(sess, arg);
    else if (!strcmp(cmd, "RNTO")) cmd_rnto(sess, arg);
    else if (!strcmp(cmd, "SIZE")) cmd_size(sess, arg);
    else if (!strcmp(cmd, "MDTM")) cmd_mdtm(sess, arg);
    else if (!strcmp(cmd, "REST")) cmd_rest(sess, arg);
    else if (!strcmp(cmd, "TYPE")) cmd_type(sess, arg);
    else if (!strcmp(cmd, "FEAT")) {
        send_line(sess->ctrl_sock, "211-Features:");
        send_line(sess->ctrl_sock, " UTF8");
        send_line(sess->ctrl_sock, " EPSV");
        send_line(sess->ctrl_sock, " SIZE");
        send_line(sess->ctrl_sock, " MDTM");
        send_line(sess->ctrl_sock, " REST STREAM");
        send_line(sess->ctrl_sock, "211 End.");
    }
    else if (!strcmp(cmd, "OPTS"))  send_line(sess->ctrl_sock, "200 OK.");
    else if (!strcmp(cmd, "NOOP"))  send_line(sess->ctrl_sock, "200 OK.");
    else if (!strcmp(cmd, "SYST"))  send_line(sess->ctrl_sock, "215 UNIX Type: L8");
    else if (!strcmp(cmd, "ABOR"))  send_line(sess->ctrl_sock, "226 ABOR OK.");
    else send_line(sess->ctrl_sock, "502 %s not implemented.", cmd);

    size_t consumed = line_len + (eol[0] == '\r' ? 2 : 1);
    return (int)consumed;
}

/* ───────────────────────────────────── public API ──────────────────── */

int ftp_server_start(uint16_t port, const char *root) {
    if (g_ftp.running) return 0;
    memset(&g_ftp, 0, sizeof(g_ftp));
    g_ftp.port = port ? port : FTP_DEFAULT_PORT;
    snprintf(g_ftp.root, sizeof(g_ftp.root), "%s",
             root ? root : FTP_DEFAULT_ROOT);
    for (int i = 0; i < FTP_MAX_SESSIONS; i++) {
        g_ftp.sessions[i].ctrl_sock   = -1;
        g_ftp.sessions[i].data_listen = -1;
        g_ftp.sessions[i].data_sock   = -1;
    }
    g_ftp.listen_sock = socket(AF_INET, SOCK_STREAM, 0);
    if (g_ftp.listen_sock < 0) return -1;
    int yes = 1;
    setsockopt(g_ftp.listen_sock, SOL_SOCKET, SO_REUSEADDR, &yes, sizeof(yes));
    struct sockaddr_in sa = {.sin_family = AF_INET,
                              .sin_addr.s_addr = INADDR_ANY,
                              .sin_port = htons(g_ftp.port)};
    if (bind(g_ftp.listen_sock, (struct sockaddr*)&sa, sizeof(sa)) < 0 ||
        listen(g_ftp.listen_sock, FTP_MAX_SESSIONS) < 0) {
        close(g_ftp.listen_sock);
        g_ftp.listen_sock = -1;
        return -1;
    }
    set_nb(g_ftp.listen_sock);
    g_ftp.running = true;
    log_event("ftp: listening on port %u root=%s", g_ftp.port, g_ftp.root);
    return 0;
}

void ftp_server_stop(void) {
    if (!g_ftp.running) return;
    if (g_ftp.listen_sock >= 0) close(g_ftp.listen_sock);
    for (int i = 0; i < FTP_MAX_SESSIONS; i++)
        if (g_ftp.sessions[i].used) session_close(&g_ftp.sessions[i]);
    g_ftp.running = false;
}

void ftp_server_tick(void) {
    if (!g_ftp.running) return;
    while (1) {
        int s = accept(g_ftp.listen_sock, NULL, NULL);
        if (s < 0) break;
        ftp_session_t *slot = NULL;
        for (int i = 0; i < FTP_MAX_SESSIONS; i++)
            if (!g_ftp.sessions[i].used) { slot = &g_ftp.sessions[i]; break; }
        if (!slot) {
            send(s, "421 Server full.\r\n", 18, 0); close(s); continue;
        }
        memset(slot, 0, sizeof(*slot));
        slot->used = true;
        slot->ctrl_sock = s;
        slot->data_listen = -1;
        slot->data_sock = -1;
        slot->binary_mode = true;
        snprintf(slot->cwd, sizeof(slot->cwd), "%s", g_ftp.root);
        set_nb(s);
        send_line(s, "220 dbi-fork FTP server ready.");
        slot->state = FTP_STATE_AUTHENTICATING;
        g_ftp.stats.total_sessions++;
    }
    for (int i = 0; i < FTP_MAX_SESSIONS; i++) {
        ftp_session_t *sess = &g_ftp.sessions[i];
        if (!sess->used) continue;
        if (sess->state == FTP_STATE_IDLE) { session_close(sess); continue; }
        int avail = sizeof(sess->rx_buf) - sess->rx_len - 1;
        if (avail <= 0) { sess->rx_len = 0; continue; }
        int r = recv(sess->ctrl_sock, sess->rx_buf + sess->rx_len, avail, 0);
        if (r > 0) {
            sess->rx_len += r;
            int consumed;
            while ((consumed = parse_one(sess)) > 0) {
                memmove(sess->rx_buf, sess->rx_buf + consumed,
                        sess->rx_len - consumed);
                sess->rx_len -= consumed;
            }
        } else if (r == 0) {
            session_close(sess);
        } else if (errno != EAGAIN && errno != EWOULDBLOCK) {
            session_close(sess);
        }
    }
}

bool ftp_server_is_running(void)         { return g_ftp.running; }
uint16_t ftp_server_port(void)           { return g_ftp.port; }
const char *ftp_server_root(void)        { return g_ftp.root; }
int ftp_server_active_session_count(void){
    int n = 0;
    for (int i = 0; i < FTP_MAX_SESSIONS; i++) if (g_ftp.sessions[i].used) n++;
    return n;
}
void ftp_server_get_stats(ftp_stats_t *out) { if (out) *out = g_ftp.stats; }
