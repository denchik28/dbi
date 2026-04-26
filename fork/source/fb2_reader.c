/* fb2_reader.c — DBI fork FictionBook reader.
 *
 * Status: SKELETON. Loads FB2 (XML) text content and paginates it to
 * fit the 80x45 console. Full upstream features (cover image, TOC,
 * bookmarks, font scaling) are TODO.
 *
 * FB2 spec: http://www.fictionbook.org/index.php/Eng:FictionBook_2.1_genres
 */
#include "fb2_reader.h"
#include "log.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define FB2_PAGE_LINES 40
#define FB2_PAGE_COLS  78
#define FB2_MAX_PAGES  500

static struct {
    bool   active;
    char  *body;            /* malloc'd full text (UTF-8) */
    size_t body_len;
    size_t page_off[FB2_MAX_PAGES];   /* byte offsets of each page start */
    int    page_count;
    int    cur_page;
    char   path[256];
} g_fb2;

/* Naive XML strip — drop tags, keep text content. Real FB2 reader would
 * use pugixml. */
static int strip_xml(const char *in, size_t inlen, char *out, size_t outsz) {
    bool in_tag = false;
    size_t o = 0;
    for (size_t i = 0; i < inlen && o < outsz - 1; i++) {
        char c = in[i];
        if (c == '<') { in_tag = true; continue; }
        if (c == '>') { in_tag = false; continue; }
        if (in_tag) continue;
        if (c == '\r') continue;
        out[o++] = c;
    }
    out[o] = 0;
    return (int)o;
}

static void paginate(void) {
    g_fb2.page_count = 0;
    if (!g_fb2.body || g_fb2.body_len == 0) return;
    g_fb2.page_off[g_fb2.page_count++] = 0;

    int line = 0, col = 0;
    for (size_t i = 0; i < g_fb2.body_len; i++) {
        char c = g_fb2.body[i];
        if (c == '\n') { line++; col = 0; }
        else col++;
        if (col >= FB2_PAGE_COLS) { line++; col = 0; }
        if (line >= FB2_PAGE_LINES) {
            if (g_fb2.page_count < FB2_MAX_PAGES)
                g_fb2.page_off[g_fb2.page_count++] = i + 1;
            line = 0; col = 0;
        }
    }
}

int fb2_reader_init(void) { return 0; }
void fb2_reader_exit(void) { fb2_reader_close(); }

int fb2_reader_open(const char *path) {
    fb2_reader_close();
    FILE *f = fopen(path, "rb");
    if (!f) {
        log_event("fb2: open %s failed", path);
        return -1;
    }
    fseek(f, 0, SEEK_END);
    long sz = ftell(f);
    fseek(f, 0, SEEK_SET);
    if (sz <= 0 || sz > 8 * 1024 * 1024) {
        fclose(f);
        return -1;
    }
    char *raw = malloc(sz);
    if (!raw) { fclose(f); return -1; }
    if ((long)fread(raw, 1, sz, f) != sz) {
        free(raw);
        fclose(f);
        return -1;
    }
    fclose(f);

    g_fb2.body = malloc(sz + 1);
    if (!g_fb2.body) { free(raw); return -1; }
    g_fb2.body_len = strip_xml(raw, sz, g_fb2.body, sz + 1);
    free(raw);

    snprintf(g_fb2.path, sizeof(g_fb2.path), "%s", path);
    paginate();
    g_fb2.cur_page = 0;
    g_fb2.active = true;
    log_event("fb2: opened %s, %d pages", path, g_fb2.page_count);
    return 0;
}

void fb2_reader_close(void) {
    if (g_fb2.body) free(g_fb2.body);
    memset(&g_fb2, 0, sizeof(g_fb2));
}

void fb2_reader_next_page(void) {
    if (!g_fb2.active) return;
    if (g_fb2.cur_page + 1 < g_fb2.page_count) g_fb2.cur_page++;
}

void fb2_reader_prev_page(void) {
    if (!g_fb2.active) return;
    if (g_fb2.cur_page > 0) g_fb2.cur_page--;
}

void fb2_reader_render(void) {
    if (!g_fb2.active || !g_fb2.body) return;
    size_t start = g_fb2.page_off[g_fb2.cur_page];
    size_t end   = (g_fb2.cur_page + 1 < g_fb2.page_count)
                   ? g_fb2.page_off[g_fb2.cur_page + 1]
                   : g_fb2.body_len;
    /* Render via printf — fb_console will pick it up. */
    fwrite(g_fb2.body + start, 1, end - start, stdout);
    printf("\n[Page %d/%d]\n", g_fb2.cur_page + 1, g_fb2.page_count);
}

bool fb2_reader_is_active(void) { return g_fb2.active; }
