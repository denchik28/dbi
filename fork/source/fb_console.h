#pragma once

#include <stdint.h>
#include <stddef.h>

#define FB_COLS      80
#define FB_ROWS      45
#define FB_CELL_W    16
#define FB_CELL_H    16
#define FB_W         (FB_COLS * FB_CELL_W)   /* 1280 */
#define FB_H         (FB_ROWS * FB_CELL_H)   /* 720  */

typedef uint32_t rgba_t;

/* Mirror of upstream DBI 887 render substrate:
 *   VI + nwindow + linear RGBA8 framebuffer + 80x45 grid of 16x16 cells,
 *   painted from a 2 MiB glyph atlas indexed by raw Unicode codepoint.
 * See FINDINGS.md Part 44 + Part 45.
 *
 * Init MUST be called before any printf or other stdout write; it installs
 * a devoptab that routes stdout/stderr into fb_console_feed().
 */
int  fb_console_init(void);   /* 0 on success, negative on error */
void fb_console_exit(void);
void fb_console_flip(void);   /* present the current cell grid as one frame */

/* Stream API — accepts UTF-8 bytes + ANSI escapes as emitted by printf. */
void fb_console_feed(const char *buf, size_t len);

/* Primitive ops used by the ANSI state machine. */
void fb_console_emit_cp(uint32_t cp);             /* put codepoint at cursor */
void fb_console_cursor_to(int col, int row);
void fb_console_cursor_rel(int dcol, int drow);
void fb_console_erase_display(int mode);          /* CSI J */
void fb_console_erase_line(int mode);             /* CSI K */
void fb_console_save_cursor(void);                /* CSI s */
void fb_console_restore_cursor(void);             /* CSI u */
void fb_console_set_fg_index(int idx);            /* SGR 30..37 / 39 */
void fb_console_set_bg_index(int idx);            /* SGR 40..47 / 49 */
void fb_console_reset_sgr(void);                  /* SGR 0 */

/* Expose current SGR for tests. */
rgba_t fb_console_fg(void);
rgba_t fb_console_bg(void);
