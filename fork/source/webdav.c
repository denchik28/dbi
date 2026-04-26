/* webdav.c — DBI fork WebDAV (RFC 4918) — full read+write. */
#include "webdav.h"
#include "log.h"
#define _GNU_SOURCE 1
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <strings.h>
#include <stdarg.h>

/* devkitpro newlib doesn't ship strcasestr. Implement it inline. */
static char *strcasestr(const char *hay, const char *needle) {
    if (!*needle) return (char*)hay;
    size_t nl = strlen(needle);
    for (; *hay; hay++) {
        if (strncasecmp(hay, needle, nl) == 0) return (char*)hay;
    }
    return NULL;
}
#include <errno.h>
#include <unistd.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <fcntl.h>
#include <dirent.h>
#include <sys/stat.h>
#include <switch.h>

#define WEBDAV_BUF_SZ    16384
#define WEBDAV_PATH_MAX  512
#define WEBDAV_DATA_BUF  65536

static struct {
    bool     running;
    int      listen_sock;
    uint16_t port;
    char     root[WEBDAV_PATH_MAX];
} g_dav;

static int set_nb(int s) {
    int fl = fcntl(s, F_GETFL, 0);
    return fl < 0 ? -1 : fcntl(s, F_SETFL, fl | O_NONBLOCK);
}
static int send_all(int s, const void *p, size_t n) {
    const uint8_t *b = p;
    while (n) {
        int r = send(s, b, n, 0);
        if (r <= 0) {
            if (errno == EAGAIN) { svcSleepThread(500000); continue; }
            return -1;
        }
        b += r; n -= r;
    }
    return 0;
}
static int sendf(int s, const char *fmt, ...) {
    char buf[1024];
    va_list ap; va_start(ap, fmt);
    int n = vsnprintf(buf, sizeof(buf), fmt, ap);
    va_end(ap);
    return send_all(s, buf, n);
}
static void send_response(int s, int code, const char *reason,
                          const char *content_type,
                          const void *body, size_t body_len) {
    sendf(s, "HTTP/1.1 %d %s\r\n", code, reason);
    sendf(s, "Server: dbi-fork/1.0\r\n");
    sendf(s, "DAV: 1, 2\r\n");
    sendf(s, "Allow: OPTIONS, GET, HEAD, PUT, DELETE, MKCOL, COPY, MOVE, PROPFIND, PROPPATCH\r\n");
    sendf(s, "Content-Type: %s\r\n", content_type);
    sendf(s, "Content-Length: %zu\r\n", body_len);
    sendf(s, "Connection: close\r\n\r\n");
    if (body && body_len) send_all(s, body, body_len);
}
static void send_status(int s, int code, const char *reason) {
    sendf(s, "HTTP/1.1 %d %s\r\n", code, reason);
    sendf(s, "Server: dbi-fork/1.0\r\n");
    sendf(s, "Content-Length: 0\r\n");
    sendf(s, "Connection: close\r\n\r\n");
}
static void send_error(int s, int code, const char *reason) {
    char body[256];
    int n = snprintf(body, sizeof(body), "<h1>%d %s</h1>\n", code, reason);
    send_response(s, code, reason, "text/html", body, n);
}

static bool resolve_path(char *out, size_t outsz, const char *path) {
    /* Refuse climbs out of g_dav.root */
    char raw[WEBDAV_PATH_MAX];
    snprintf(raw, sizeof(raw), "%s%s", g_dav.root,
             path[0] == '/' ? path + 1 : path);
    /* Block obvious traversal */
    if (strstr(raw, "/..") || strstr(raw, "..\\")) return false;
    snprintf(out, outsz, "%s", raw);
    return true;
}

/* ───────────────────────────────────── method handlers ──────────────── */

static void handle_options(int s) {
    sendf(s, "HTTP/1.1 200 OK\r\n");
    sendf(s, "DAV: 1, 2\r\n");
    sendf(s, "Allow: OPTIONS, GET, HEAD, PUT, DELETE, MKCOL, COPY, MOVE, PROPFIND, PROPPATCH\r\n");
    sendf(s, "MS-Author-Via: DAV\r\n");
    sendf(s, "Content-Length: 0\r\n");
    sendf(s, "Connection: close\r\n\r\n");
}

static void handle_get(int s, const char *path, bool head_only) {
    char p[WEBDAV_PATH_MAX];
    if (!resolve_path(p, sizeof(p), path)) { send_error(s, 403, "Forbidden"); return; }
    struct stat st;
    if (stat(p, &st) < 0) { send_error(s, 404, "Not Found"); return; }
    if (S_ISDIR(st.st_mode)) {
        char body[16384];
        int off = snprintf(body, sizeof(body),
            "<!DOCTYPE html><html><head><meta charset='utf-8'>"
            "<title>%s</title><style>"
            "body{font-family:sans-serif;background:#1c1c1c;color:#e5e5e5;padding:20px}"
            "h2{color:#66a3ff}a{color:#66a3ff;text-decoration:none}"
            "li{margin:4px 0}</style>"
            "</head><body><h2>%s</h2><ul>", path, path);
        DIR *d = opendir(p);
        if (d) {
            struct dirent *de;
            while ((de = readdir(d)) && off < (int)sizeof(body) - 200) {
                if (de->d_name[0] == '.') continue;
                off += snprintf(body + off, sizeof(body) - off,
                    "<li><a href='%s/'>%s</a></li>", de->d_name, de->d_name);
            }
            closedir(d);
        }
        off += snprintf(body + off, sizeof(body) - off, "</ul></body></html>");
        send_response(s, 200, "OK", "text/html; charset=utf-8", body, off);
        return;
    }
    sendf(s, "HTTP/1.1 200 OK\r\nServer: dbi-fork/1.0\r\n");
    sendf(s, "Content-Type: application/octet-stream\r\n");
    sendf(s, "Content-Length: %lld\r\n", (long long)st.st_size);
    sendf(s, "Connection: close\r\n\r\n");
    if (head_only) return;
    FILE *f = fopen(p, "rb");
    if (!f) return;
    static char buf[WEBDAV_DATA_BUF];
    size_t n;
    while ((n = fread(buf, 1, sizeof(buf), f)) > 0)
        if (send_all(s, buf, n) < 0) break;
    fclose(f);
}

static void handle_put(int s, const char *path, const char *headers, int body_off, int already_have) {
    char p[WEBDAV_PATH_MAX];
    if (!resolve_path(p, sizeof(p), path)) { send_error(s, 403, "Forbidden"); return; }
    /* Parse Content-Length */
    long long content_len = -1;
    const char *cl = strcasestr(headers, "Content-Length:");
    if (cl) {
        cl += strlen("Content-Length:");
        while (*cl == ' ') cl++;
        content_len = strtoll(cl, NULL, 10);
    }
    FILE *f = fopen(p, "wb");
    if (!f) { send_error(s, 500, "Cannot open file"); return; }
    long long written = 0;
    if (already_have > 0) {
        const char *bb = headers + body_off;
        if (fwrite(bb, 1, already_have, f) != (size_t)already_have) {
            fclose(f); send_error(s, 500, "Write failed"); return;
        }
        written = already_have;
    }
    static char buf[WEBDAV_DATA_BUF];
    while (content_len < 0 || written < content_len) {
        int r = recv(s, buf, sizeof(buf), 0);
        if (r <= 0) break;
        if (fwrite(buf, 1, r, f) != (size_t)r) { fclose(f); send_error(s, 500, "Write failed"); return; }
        written += r;
    }
    fclose(f);
    send_status(s, 201, "Created");
}

static void handle_delete(int s, const char *path) {
    char p[WEBDAV_PATH_MAX];
    if (!resolve_path(p, sizeof(p), path)) { send_error(s, 403, "Forbidden"); return; }
    struct stat st;
    if (stat(p, &st) < 0) { send_error(s, 404, "Not Found"); return; }
    int rc = S_ISDIR(st.st_mode) ? rmdir(p) : unlink(p);
    if (rc < 0) { send_error(s, 500, strerror(errno)); return; }
    send_status(s, 204, "No Content");
}

static void handle_mkcol(int s, const char *path) {
    char p[WEBDAV_PATH_MAX];
    if (!resolve_path(p, sizeof(p), path)) { send_error(s, 403, "Forbidden"); return; }
    if (mkdir(p, 0755) < 0) { send_error(s, 500, strerror(errno)); return; }
    send_status(s, 201, "Created");
}

static void handle_move(int s, const char *path, const char *headers) {
    char from[WEBDAV_PATH_MAX], to[WEBDAV_PATH_MAX];
    if (!resolve_path(from, sizeof(from), path)) { send_error(s, 403, "Forbidden"); return; }
    /* Find Destination header */
    const char *dest = strcasestr(headers, "Destination:");
    if (!dest) { send_error(s, 400, "Destination required"); return; }
    dest += strlen("Destination:");
    while (*dest == ' ') dest++;
    /* Strip URL prefix (http://host/path -> /path) */
    const char *q = strstr(dest, "://");
    if (q) { q += 3; q = strchr(q, '/'); if (q) dest = q; }
    char dest_path[WEBDAV_PATH_MAX];
    int n = 0;
    while (*dest && *dest != '\r' && *dest != '\n' && n < (int)sizeof(dest_path) - 1)
        dest_path[n++] = *dest++;
    dest_path[n] = 0;
    if (!resolve_path(to, sizeof(to), dest_path)) { send_error(s, 403, "Forbidden"); return; }
    if (rename(from, to) < 0) { send_error(s, 500, strerror(errno)); return; }
    send_status(s, 201, "Created");
}

static void handle_copy(int s, const char *path, const char *headers) {
    char from[WEBDAV_PATH_MAX], to[WEBDAV_PATH_MAX];
    if (!resolve_path(from, sizeof(from), path)) { send_error(s, 403, "Forbidden"); return; }
    const char *dest = strcasestr(headers, "Destination:");
    if (!dest) { send_error(s, 400, "Destination required"); return; }
    dest += strlen("Destination:");
    while (*dest == ' ') dest++;
    const char *q = strstr(dest, "://");
    if (q) { q += 3; q = strchr(q, '/'); if (q) dest = q; }
    char dest_path[WEBDAV_PATH_MAX];
    int n = 0;
    while (*dest && *dest != '\r' && *dest != '\n' && n < (int)sizeof(dest_path) - 1)
        dest_path[n++] = *dest++;
    dest_path[n] = 0;
    if (!resolve_path(to, sizeof(to), dest_path)) { send_error(s, 403, "Forbidden"); return; }
    FILE *fi = fopen(from, "rb"); if (!fi) { send_error(s, 404, "Not Found"); return; }
    FILE *fo = fopen(to, "wb"); if (!fo) { fclose(fi); send_error(s, 500, "Cannot create"); return; }
    static char buf[WEBDAV_DATA_BUF];
    size_t r;
    while ((r = fread(buf, 1, sizeof(buf), fi)) > 0)
        if (fwrite(buf, 1, r, fo) != r) break;
    fclose(fi); fclose(fo);
    send_status(s, 201, "Created");
}

static void handle_propfind(int s, const char *path, const char *headers) {
    char p[WEBDAV_PATH_MAX];
    if (!resolve_path(p, sizeof(p), path)) { send_error(s, 403, "Forbidden"); return; }
    struct stat st;
    if (stat(p, &st) < 0) { send_error(s, 404, "Not Found"); return; }
    /* Depth header — 0 = self only, 1 = self + children. */
    const char *dh = strcasestr(headers, "Depth:");
    int depth = 1;
    if (dh) {
        dh += strlen("Depth:");
        while (*dh == ' ') dh++;
        if (*dh == '0') depth = 0;
    }

    char body[32768];
    int off = snprintf(body, sizeof(body),
        "<?xml version=\"1.0\"?>"
        "<D:multistatus xmlns:D=\"DAV:\">");

    off += snprintf(body + off, sizeof(body) - off,
        "<D:response><D:href>%s</D:href><D:propstat><D:prop>"
        "<D:resourcetype>%s</D:resourcetype>"
        "<D:getcontentlength>%lld</D:getcontentlength>"
        "<D:getlastmodified>%lld</D:getlastmodified>"
        "</D:prop><D:status>HTTP/1.1 200 OK</D:status></D:propstat></D:response>",
        path,
        S_ISDIR(st.st_mode) ? "<D:collection/>" : "",
        (long long)st.st_size,
        (long long)st.st_mtime);

    if (depth >= 1 && S_ISDIR(st.st_mode)) {
        DIR *d = opendir(p);
        if (d) {
            struct dirent *de;
            while ((de = readdir(d)) && off < (int)sizeof(body) - 1024) {
                if (de->d_name[0] == '.') continue;
                char child[WEBDAV_PATH_MAX];
                snprintf(child, sizeof(child), "%s/%s", p, de->d_name);
                struct stat cs;
                if (stat(child, &cs) < 0) continue;
                off += snprintf(body + off, sizeof(body) - off,
                    "<D:response><D:href>%s%s%s</D:href><D:propstat><D:prop>"
                    "<D:resourcetype>%s</D:resourcetype>"
                    "<D:getcontentlength>%lld</D:getcontentlength>"
                    "</D:prop><D:status>HTTP/1.1 200 OK</D:status></D:propstat></D:response>",
                    path, path[strlen(path)-1] == '/' ? "" : "/", de->d_name,
                    S_ISDIR(cs.st_mode) ? "<D:collection/>" : "",
                    (long long)cs.st_size);
            }
            closedir(d);
        }
    }
    off += snprintf(body + off, sizeof(body) - off, "</D:multistatus>");

    sendf(s, "HTTP/1.1 207 Multi-Status\r\n");
    sendf(s, "DAV: 1, 2\r\n");
    sendf(s, "Content-Type: application/xml; charset=utf-8\r\n");
    sendf(s, "Content-Length: %d\r\n", off);
    sendf(s, "Connection: close\r\n\r\n");
    send_all(s, body, off);
}

static void handle_request(int s) {
    char buf[WEBDAV_BUF_SZ];
    int rx = 0;
    int hdr_end = -1;
    while (rx < (int)sizeof(buf) - 1) {
        int r = recv(s, buf + rx, sizeof(buf) - 1 - rx, 0);
        if (r <= 0) break;
        rx += r;
        char *e = memmem(buf, rx, "\r\n\r\n", 4);
        if (e) { hdr_end = (e - buf) + 4; break; }
    }
    if (hdr_end < 0) { send_error(s, 400, "Bad Request"); return; }
    buf[hdr_end] = 0;

    char method[16], path[WEBDAV_PATH_MAX], proto[16];
    if (sscanf(buf, "%15s %511s %15s", method, path, proto) != 3) {
        send_error(s, 400, "Bad Request"); return;
    }
    log_event("dav: %s %s", method, path);

    int already = rx - hdr_end;
    int body_off = hdr_end;

    if      (!strcmp(method, "OPTIONS"))   handle_options(s);
    else if (!strcmp(method, "GET"))       handle_get(s, path, false);
    else if (!strcmp(method, "HEAD"))      handle_get(s, path, true);
    else if (!strcmp(method, "PUT"))       handle_put(s, path, buf, body_off, already);
    else if (!strcmp(method, "DELETE"))    handle_delete(s, path);
    else if (!strcmp(method, "MKCOL"))     handle_mkcol(s, path);
    else if (!strcmp(method, "MOVE"))      handle_move(s, path, buf);
    else if (!strcmp(method, "COPY"))      handle_copy(s, path, buf);
    else if (!strcmp(method, "PROPFIND"))  handle_propfind(s, path, buf);
    else if (!strcmp(method, "PROPPATCH")) send_status(s, 207, "Multi-Status");
    else if (!strcmp(method, "LOCK"))      send_status(s, 200, "OK");
    else if (!strcmp(method, "UNLOCK"))    send_status(s, 204, "No Content");
    else                                    send_error(s, 501, "Not Implemented");
}

int webdav_server_start(uint16_t port, const char *root) {
    if (g_dav.running) return 0;
    memset(&g_dav, 0, sizeof(g_dav));
    g_dav.port = port ? port : WEBDAV_DEFAULT_PORT;
    snprintf(g_dav.root, sizeof(g_dav.root), "%s",
             root && root[0] ? root : "sdmc:/");
    g_dav.listen_sock = socket(AF_INET, SOCK_STREAM, 0);
    if (g_dav.listen_sock < 0) return -1;
    int yes = 1;
    setsockopt(g_dav.listen_sock, SOL_SOCKET, SO_REUSEADDR, &yes, sizeof(yes));
    struct sockaddr_in sa = {.sin_family = AF_INET,
                              .sin_addr.s_addr = INADDR_ANY,
                              .sin_port = htons(g_dav.port)};
    if (bind(g_dav.listen_sock, (struct sockaddr*)&sa, sizeof(sa)) < 0 ||
        listen(g_dav.listen_sock, 4) < 0) {
        close(g_dav.listen_sock);
        g_dav.listen_sock = -1;
        return -1;
    }
    set_nb(g_dav.listen_sock);
    g_dav.running = true;
    log_event("dav: listening on port %u root=%s", g_dav.port, g_dav.root);
    return 0;
}
void webdav_server_stop(void) {
    if (!g_dav.running) return;
    if (g_dav.listen_sock >= 0) close(g_dav.listen_sock);
    g_dav.listen_sock = -1;
    g_dav.running = false;
}
void webdav_server_tick(void) {
    if (!g_dav.running) return;
    int s = accept(g_dav.listen_sock, NULL, NULL);
    if (s < 0) return;
    handle_request(s);
    close(s);
}
bool webdav_server_is_running(void) { return g_dav.running; }
