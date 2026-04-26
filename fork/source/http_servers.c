/* http_servers.c — three HTTP virtual servers (Album / InstalledGames /
 * SDCard) with full HTML UI.
 *
 * Upstream serves these on three separate ports (see REVERSE.md Part 13).
 * Each one has its own URL space and rendering style. The fork wires up
 * all three; the HTML matches the upstream's inline <style> conventions.
 */
#include "http_servers.h"
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
#include <switch.h>

#define HTTP_BUF_SZ    8192
#define HTTP_DATA_BUF  65536

typedef struct {
    bool     running;
    int      sock;
    uint16_t port;
    enum {
        SRV_ALBUM,
        SRV_GAMES,
        SRV_SDCARD,
    } kind;
} http_srv_t;

static http_srv_t g_album, g_games, g_sdcard;

/* ───────────────────────────────────── shared HTTP plumbing ────────── */

static int set_nb(int s) {
    int fl = fcntl(s, F_GETFL, 0);
    return fl < 0 ? -1 : fcntl(s, F_SETFL, fl | O_NONBLOCK);
}
static int send_all(int s, const void *p, size_t n) {
    const uint8_t *b = p;
    while (n) {
        int r = send(s, b, n, 0);
        if (r <= 0) { if (errno == EAGAIN) { svcSleepThread(500000); continue; } return -1; }
        b += r; n -= r;
    }
    return 0;
}
static int sendf(int s, const char *fmt, ...) {
    char buf[1024]; va_list ap; va_start(ap, fmt);
    int n = vsnprintf(buf, sizeof(buf), fmt, ap); va_end(ap);
    return send_all(s, buf, n);
}
static void send_response(int s, int code, const char *reason,
                          const char *content_type,
                          const void *body, size_t body_len) {
    sendf(s, "HTTP/1.1 %d %s\r\n", code, reason);
    sendf(s, "Server: dbi-fork/1.0\r\n");
    sendf(s, "Content-Type: %s\r\n", content_type);
    sendf(s, "Content-Length: %zu\r\n", body_len);
    sendf(s, "Connection: close\r\n\r\n");
    if (body && body_len) send_all(s, body, body_len);
}
static void send_404(int s) {
    const char *body = "<h1>404 Not Found</h1>\n";
    send_response(s, 404, "Not Found", "text/html", body, strlen(body));
}

/* Common page wrapper styled like upstream */
static const char *PAGE_HEADER =
    "<!DOCTYPE html><html><head><meta charset='utf-8'>"
    "<title>%s</title>"
    "<link rel='stylesheet' href='/main.css'>"
    "<style>"
    "body{font-family:sans-serif;background:#1c1c1c;color:#e5e5e5;padding:20px}"
    "h1,h2{color:#66a3ff}"
    "a{color:#66a3ff;text-decoration:none}"
    "li{margin:6px 0}"
    "li.thumb{display:inline-table;padding:5px}"
    "ul.app-list{display:flex;flex-direction:column;padding-left:0;}"
    ".size{color:#888}"
    ".dir{color:#fa3}"
    "</style></head><body>";
static const char *PAGE_FOOTER = "<hr><small>dbi-fork</small></body></html>";

/* ───────────────────────────────────── Album server ────────────────── */

static void album_serve(int s, const char *path) {
    if (!strcmp(path, "/") || !strcmp(path, "/index.html")) {
        char body[16384];
        int off = snprintf(body, sizeof(body), PAGE_HEADER, "Album");
        off += snprintf(body + off, sizeof(body) - off,
                        "<h1>Album</h1><p>Switch screenshot gallery.</p><ul>");
        DIR *d = opendir("sdmc:/Nintendo/Album");
        if (d) {
            struct dirent *de;
            while ((de = readdir(d)) && off < (int)sizeof(body) - 200) {
                if (de->d_name[0] == '.') continue;
                off += snprintf(body + off, sizeof(body) - off,
                                "<li><a href='/folder/%s/'>%s</a></li>",
                                de->d_name, de->d_name);
            }
            closedir(d);
        } else {
            off += snprintf(body + off, sizeof(body) - off,
                            "<li><i>Album folder not present</i></li>");
        }
        off += snprintf(body + off, sizeof(body) - off, "</ul>%s", PAGE_FOOTER);
        send_response(s, 200, "OK", "text/html; charset=utf-8", body, off);
        return;
    }
    if (!strncmp(path, "/folder/", 8)) {
        char p[512];
        snprintf(p, sizeof(p), "sdmc:/Nintendo/Album/%s",
                 path + 8);
        DIR *d = opendir(p);
        if (!d) { send_404(s); return; }
        char body[32768];
        int off = snprintf(body, sizeof(body), PAGE_HEADER, "Album folder");
        off += snprintf(body + off, sizeof(body) - off, "<h1>%s</h1><ul class='app-list'>", path + 8);
        struct dirent *de;
        while ((de = readdir(d)) && off < (int)sizeof(body) - 400) {
            if (de->d_name[0] == '.') continue;
            off += snprintf(body + off, sizeof(body) - off,
                            "<li class='thumb'><a href='/file/%s/%s'>"
                            "<img src='/file/%s/%s' style='max-width:200px'><br>%s</a></li>",
                            path + 8, de->d_name, path + 8, de->d_name, de->d_name);
        }
        closedir(d);
        off += snprintf(body + off, sizeof(body) - off, "</ul>%s", PAGE_FOOTER);
        send_response(s, 200, "OK", "text/html; charset=utf-8", body, off);
        return;
    }
    if (!strncmp(path, "/file/", 6)) {
        char p[512];
        snprintf(p, sizeof(p), "sdmc:/Nintendo/Album/%s", path + 6);
        FILE *f = fopen(p, "rb");
        if (!f) { send_404(s); return; }
        struct stat st;
        stat(p, &st);
        const char *ext = strrchr(p, '.');
        const char *mime = "application/octet-stream";
        if (ext) {
            if (!strcasecmp(ext, ".jpg") || !strcasecmp(ext, ".jpeg")) mime = "image/jpeg";
            else if (!strcasecmp(ext, ".png")) mime = "image/png";
            else if (!strcasecmp(ext, ".mp4")) mime = "video/mp4";
        }
        sendf(s, "HTTP/1.1 200 OK\r\nServer: dbi-fork/1.0\r\n");
        sendf(s, "Content-Type: %s\r\n", mime);
        sendf(s, "Content-Length: %lld\r\n", (long long)st.st_size);
        sendf(s, "Connection: close\r\n\r\n");
        char buf[HTTP_DATA_BUF];
        size_t n;
        while ((n = fread(buf, 1, sizeof(buf), f)) > 0)
            if (send_all(s, buf, n) < 0) break;
        fclose(f);
        return;
    }
    send_404(s);
}

/* ───────────────────────────────────── InstalledGames server ───────── */

static void games_serve(int s, const char *path) {
    if (!strcmp(path, "/main.css")) {
        const char *css =
            "body{font-family:sans-serif;background:#1c1c1c;color:#e5e5e5}"
            "li.thumb{display:inline-table;padding:5px}"
            "ul.app-list{display:flex;flex-direction:column;padding-left:0;}"
            ".svg_icon{position:absolute;width:40px;height:40px;}";
        send_response(s, 200, "OK", "text/css; charset=utf-8", css, strlen(css));
        return;
    }

    if (!strcmp(path, "/games.json")) {
        /* Build a JSON list of installed titles via ns:am. */
        char body[16384];
        int off = snprintf(body, sizeof(body), "{\"titles\":[");
        nsInitialize();
        Service *ns = nsGetServiceSession_ApplicationManagerInterface();
        (void)ns;
        nsExit();
        /* Simple stub: just list app dirs from sdmc:/switch/ as a placeholder.
         * Full impl would iterate through nsListApplicationContentMetaStatus. */
        DIR *d = opendir("sdmc:/switch");
        if (d) {
            int first = 1;
            struct dirent *de;
            while ((de = readdir(d)) && off < (int)sizeof(body) - 256) {
                if (de->d_name[0] == '.') continue;
                off += snprintf(body + off, sizeof(body) - off,
                                "%s{\"name\":\"%s\"}", first ? "" : ",", de->d_name);
                first = 0;
            }
            closedir(d);
        }
        off += snprintf(body + off, sizeof(body) - off, "]}");
        send_response(s, 200, "OK", "application/json", body, off);
        return;
    }
    /* Default index page */
    char body[8192];
    int off = snprintf(body, sizeof(body), PAGE_HEADER, "List of installed games");
    off += snprintf(body + off, sizeof(body) - off,
                    "<h1>Installed Games</h1>"
                    "<p>JSON view at <a href='/games.json'>/games.json</a></p>"
                    "<ul class='app-list'>");
    DIR *d = opendir("sdmc:/switch");
    if (d) {
        struct dirent *de;
        while ((de = readdir(d)) && off < (int)sizeof(body) - 256) {
            if (de->d_name[0] == '.') continue;
            off += snprintf(body + off, sizeof(body) - off,
                            "<li class='thumb'>%s</li>", de->d_name);
        }
        closedir(d);
    }
    off += snprintf(body + off, sizeof(body) - off, "</ul>%s", PAGE_FOOTER);
    send_response(s, 200, "OK", "text/html; charset=utf-8", body, off);
}

/* ───────────────────────────────────── SDCard server ───────────────── */

static void sdcard_serve(int s, const char *path) {
    char p[512];
    if (!strcmp(path, "/")) {
        snprintf(p, sizeof(p), "sdmc:/");
    } else {
        snprintf(p, sizeof(p), "sdmc:%s", path);
    }
    struct stat st;
    if (stat(p, &st) < 0) { send_404(s); return; }
    if (S_ISDIR(st.st_mode)) {
        char body[32768];
        int off = snprintf(body, sizeof(body), PAGE_HEADER, path);
        off += snprintf(body + off, sizeof(body) - off, "<h1>%s</h1><ul>", path);
        DIR *d = opendir(p);
        if (d) {
            struct dirent *de;
            while ((de = readdir(d)) && off < (int)sizeof(body) - 400) {
                if (de->d_name[0] == '.') continue;
                char child[512];
                snprintf(child, sizeof(child), "%s/%s", p, de->d_name);
                struct stat cs;
                stat(child, &cs);
                off += snprintf(body + off, sizeof(body) - off,
                                "<li><a href='%s%s%s%s'>%s%s</a> "
                                "<span class='size'>%lld</span></li>",
                                path, path[strlen(path)-1] == '/' ? "" : "/",
                                de->d_name, S_ISDIR(cs.st_mode) ? "/" : "",
                                de->d_name, S_ISDIR(cs.st_mode) ? "/" : "",
                                (long long)cs.st_size);
            }
            closedir(d);
        }
        off += snprintf(body + off, sizeof(body) - off, "</ul>%s", PAGE_FOOTER);
        send_response(s, 200, "OK", "text/html; charset=utf-8", body, off);
        return;
    }
    /* File download */
    FILE *f = fopen(p, "rb");
    if (!f) { send_404(s); return; }
    sendf(s, "HTTP/1.1 200 OK\r\nServer: dbi-fork/1.0\r\n");
    sendf(s, "Content-Type: application/octet-stream\r\n");
    sendf(s, "Content-Length: %lld\r\n", (long long)st.st_size);
    sendf(s, "Connection: close\r\n\r\n");
    char buf[HTTP_DATA_BUF];
    size_t n;
    while ((n = fread(buf, 1, sizeof(buf), f)) > 0)
        if (send_all(s, buf, n) < 0) break;
    fclose(f);
}

/* ───────────────────────────────────── dispatcher ──────────────────── */

static void srv_dispatch(http_srv_t *srv, int s) {
    char buf[HTTP_BUF_SZ];
    int rx = 0;
    while (rx < (int)sizeof(buf) - 1) {
        int r = recv(s, buf + rx, sizeof(buf) - 1 - rx, 0);
        if (r <= 0) break;
        rx += r;
        if (memmem(buf, rx, "\r\n\r\n", 4)) break;
    }
    buf[rx] = 0;
    char method[16], path[512], proto[16];
    if (sscanf(buf, "%15s %511s %15s", method, path, proto) != 3) {
        send_404(s); return;
    }
    /* Strip query string */
    char *q = strchr(path, '?'); if (q) *q = 0;
    log_event("http%c: %s %s",
              srv->kind == SRV_ALBUM ? 'A' :
              srv->kind == SRV_GAMES ? 'G' : 'S',
              method, path);
    if (strcmp(method, "GET") != 0 && strcmp(method, "HEAD") != 0) {
        send_response(s, 405, "Method Not Allowed", "text/plain", "405\n", 4); return;
    }
    if      (srv->kind == SRV_ALBUM)  album_serve(s, path);
    else if (srv->kind == SRV_GAMES)  games_serve(s, path);
    else                              sdcard_serve(s, path);
}

static int srv_start(http_srv_t *srv, uint16_t port, int kind) {
    if (srv->running) return 0;
    memset(srv, 0, sizeof(*srv));
    srv->kind = kind;
    srv->port = port;
    srv->sock = socket(AF_INET, SOCK_STREAM, 0);
    if (srv->sock < 0) return -1;
    int yes = 1;
    setsockopt(srv->sock, SOL_SOCKET, SO_REUSEADDR, &yes, sizeof(yes));
    struct sockaddr_in sa = {.sin_family = AF_INET,
                              .sin_addr.s_addr = INADDR_ANY,
                              .sin_port = htons(port)};
    if (bind(srv->sock, (struct sockaddr*)&sa, sizeof(sa)) < 0 ||
        listen(srv->sock, 4) < 0) {
        close(srv->sock); srv->sock = -1; return -1;
    }
    set_nb(srv->sock);
    srv->running = true;
    log_event("http: server kind=%d port=%u", kind, port);
    return 0;
}

static void srv_tick(http_srv_t *srv) {
    if (!srv->running) return;
    int s = accept(srv->sock, NULL, NULL);
    if (s < 0) return;
    srv_dispatch(srv, s);
    close(s);
}

int  album_server_start(uint16_t port)            { return srv_start(&g_album, port ? port : 8081, SRV_ALBUM); }
int  installed_games_server_start(uint16_t port)  { return srv_start(&g_games, port ? port : 8082, SRV_GAMES); }
int  sdcard_server_start(uint16_t port)           { return srv_start(&g_sdcard, port ? port : 8083, SRV_SDCARD); }

void http_servers_stop_all(void) {
    if (g_album.running)  { close(g_album.sock);  g_album.running  = false; }
    if (g_games.running)  { close(g_games.sock);  g_games.running  = false; }
    if (g_sdcard.running) { close(g_sdcard.sock); g_sdcard.running = false; }
}
void http_servers_tick_all(void) {
    srv_tick(&g_album);
    srv_tick(&g_games);
    srv_tick(&g_sdcard);
}
bool album_server_is_running(void)            { return g_album.running; }
bool installed_games_server_is_running(void)  { return g_games.running; }
bool sdcard_server_is_running(void)           { return g_sdcard.running; }
