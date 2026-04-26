#include "fb_console.h"
#include "atlas.h"
#include "utf8.h"
#include "ansi.h"
#include "log.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <sys/iosupport.h>
#include <sys/stat.h>
#include <switch.h>

/* 8-color palette (bright variants — DBI's default 3-bit set). */
static const rgba_t PALETTE[8] = {
    0xFF000000,  /* 0 black   */
    0xFF2020D0,  /* 1 red     */
    0xFF20C020,  /* 2 green   */
    0xFF20C0C0,  /* 3 yellow  */
    0xFFD04020,  /* 4 blue    */
    0xFFC020C0,  /* 5 magenta */
    0xFFD0D020,  /* 6 cyan    */
    0xFFE0E0E0,  /* 7 white   */
};
#define DEFAULT_FG PALETTE[7]
#define DEFAULT_BG PALETTE[0]

typedef struct {
    uint32_t glyph;
    rgba_t   fg;
    rgba_t   bg;
} cell_t;

static Framebuffer g_fb;
static int         g_fb_ready = 0;
static cell_t      g_cells[FB_COLS * FB_ROWS];
static int         g_cur_col = 0;
static int         g_cur_row = 0;
static int         g_saved_col = 0;
static int         g_saved_row = 0;
static rgba_t      g_fg = DEFAULT_FG;
static rgba_t      g_bg = DEFAULT_BG;
static utf8_state_t g_u8;
static ansi_state_t g_ansi;

/* ===== primitives called by ANSI state machine ===== */

void fb_console_emit_cp(uint32_t cp) {
    /* Control bytes first. */
    if (cp == '\n') {
        g_cur_col = 0;
        if (g_cur_row < FB_ROWS - 1) g_cur_row++;
        return;
    }
    if (cp == '\r') { g_cur_col = 0; return; }
    if (cp == '\b') { if (g_cur_col > 0) g_cur_col--; return; }
    if (cp == '\t') {
        int next = (g_cur_col + 8) & ~7;
        if (next >= FB_COLS) next = FB_COLS - 1;
        g_cur_col = next;
        return;
    }
    if (cp < 0x20) {
        /* Silently drop other control chars. */
        return;
    }
    if (g_cur_col >= FB_COLS) {
        g_cur_col = 0;
        if (g_cur_row < FB_ROWS - 1) g_cur_row++;
    }
    cell_t *c = &g_cells[g_cur_row * FB_COLS + g_cur_col];
    c->glyph = cp;
    c->fg = g_fg;
    c->bg = g_bg;
    g_cur_col++;
}

void fb_console_cursor_to(int col, int row) {
    if (col < 0) col = 0;
    if (col >= FB_COLS) col = FB_COLS - 1;
    if (row < 0) row = 0;
    if (row >= FB_ROWS) row = FB_ROWS - 1;
    g_cur_col = col;
    g_cur_row = row;
}

void fb_console_cursor_rel(int dcol, int drow) {
    fb_console_cursor_to(g_cur_col + dcol, g_cur_row + drow);
}

static void fill_cells(int start, int end) {
    if (start < 0) start = 0;
    if (end > FB_COLS * FB_ROWS) end = FB_COLS * FB_ROWS;
    for (int i = start; i < end; i++) {
        g_cells[i].glyph = ' ';
        g_cells[i].fg = g_fg;
        g_cells[i].bg = g_bg;
    }
}

void fb_console_erase_display(int mode) {
    int cur = g_cur_row * FB_COLS + g_cur_col;
    switch (mode) {
    case 0: fill_cells(cur, FB_COLS * FB_ROWS); break;
    case 1: fill_cells(0, cur + 1); break;
    case 2: default: fill_cells(0, FB_COLS * FB_ROWS); break;
    }
}

void fb_console_erase_line(int mode) {
    int row_off = g_cur_row * FB_COLS;
    switch (mode) {
    case 0: fill_cells(row_off + g_cur_col, row_off + FB_COLS); break;
    case 1: fill_cells(row_off, row_off + g_cur_col + 1); break;
    case 2: default: fill_cells(row_off, row_off + FB_COLS); break;
    }
}

void fb_console_save_cursor(void) { g_saved_col = g_cur_col; g_saved_row = g_cur_row; }
void fb_console_restore_cursor(void) { g_cur_col = g_saved_col; g_cur_row = g_saved_row; }

void fb_console_set_fg_index(int idx) {
    g_fg = (idx >= 0 && idx < 8) ? PALETTE[idx] : DEFAULT_FG;
}
void fb_console_set_bg_index(int idx) {
    g_bg = (idx >= 0 && idx < 8) ? PALETTE[idx] : DEFAULT_BG;
}
void fb_console_reset_sgr(void) { g_fg = DEFAULT_FG; g_bg = DEFAULT_BG; }

rgba_t fb_console_fg(void) { return g_fg; }
rgba_t fb_console_bg(void) { return g_bg; }

/* ===== stream API ===== */

void fb_console_feed(const char *buf, size_t len) {
    for (size_t i = 0; i < len; i++) {
        uint32_t cp;
        if (utf8_feed(&g_u8, (uint8_t)buf[i], &cp)) {
            ansi_feed_cp(&g_ansi, cp);
        }
    }
}

/* ===== framebuffer presentation ===== */

void fb_console_flip(void) {
    if (!g_fb_ready) return;
    uint32_t stride_bytes = 0;
    uint32_t *pixels = (uint32_t *)framebufferBegin(&g_fb, &stride_bytes);
    if (!pixels) return;
    uint32_t stride_px = stride_bytes / 4;

    for (int r = 0; r < FB_ROWS; r++) {
        for (int c = 0; c < FB_COLS; c++) {
            const cell_t *cell = &g_cells[r * FB_COLS + c];
            atlas_blit(pixels, stride_px, c * FB_CELL_W, r * FB_CELL_H,
                       cell->glyph, cell->fg, cell->bg);
        }
    }
    framebufferEnd(&g_fb);
}

/* ===== devoptab (route printf/stdout/stderr into fb_console_feed) ===== */

static ssize_t fb_dev_write(struct _reent *r, void *fd, const char *ptr, size_t len) {
    (void)r; (void)fd;
    fb_console_feed(ptr, len);
    return (ssize_t)len;
}

static const devoptab_t g_fb_devoptab = {
    .name       = "fbcon",
    .structSize = 0,
    .write_r    = fb_dev_write,
};

static void install_stdout(void) {
    devoptab_list[STD_OUT] = &g_fb_devoptab;
    devoptab_list[STD_ERR] = &g_fb_devoptab;
    setvbuf(stdout, NULL, _IONBF, 0);
    setvbuf(stderr, NULL, _IONBF, 0);
}

/* ===== lifecycle ===== */

int fb_console_init(void) {
    if (atlas_load() != 0) return -1;

    NWindow *win = nwindowGetDefault();
    Result rc = nwindowSetDimensions(win, FB_W, FB_H);
    if (R_FAILED(rc)) { log_event("fb_console_init: nwindowSetDimensions -> 0x%x", rc); return -2; }

    rc = framebufferCreate(&g_fb, win, FB_W, FB_H, PIXEL_FORMAT_RGBA_8888, 2);
    if (R_FAILED(rc)) { log_event("fb_console_init: framebufferCreate -> 0x%x", rc); return -3; }

    rc = framebufferMakeLinear(&g_fb);
    if (R_FAILED(rc)) {
        log_event("fb_console_init: framebufferMakeLinear -> 0x%x", rc);
        framebufferClose(&g_fb);
        return -4;
    }

    g_fb_ready = 1;
    utf8_reset(&g_u8);
    ansi_reset(&g_ansi);
    fb_console_reset_sgr();
    fill_cells(0, FB_COLS * FB_ROWS);
    g_cur_col = g_cur_row = 0;

    install_stdout();
    log_event("fb_console_init: ok (%dx%d, %d cells)", FB_W, FB_H, FB_COLS * FB_ROWS);
    return 0;
}

void fb_console_exit(void) {
    if (g_fb_ready) {
        framebufferClose(&g_fb);
        g_fb_ready = 0;
    }
    atlas_unload();
}
