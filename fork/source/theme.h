/* DBI fork — theme module.
 *
 * Mirrors upstream DBI's theme handling (FINDINGS.md Part 40):
 *   - Detects system colour theme via set:sys::GetColorSetId.
 *   - Picks the matching ANSI palette for our framebuffer console.
 *   - Provides hooks the UI uses for colour-coded screen elements.
 */
#ifndef DBI_FORK_THEME_H
#define DBI_FORK_THEME_H

#include <stdint.h>

typedef enum {
    THEME_LIGHT = 0,
    THEME_DARK  = 1,
} theme_kind_t;

typedef struct {
    /* RGBA8 packed colour (0xRRGGBBAA). */
    uint32_t bg;
    uint32_t fg;
    uint32_t accent;
    uint32_t error;
    uint32_t success;
    uint32_t inactive;
    uint32_t border;
    uint32_t selection_bg;
    uint32_t selection_fg;
} theme_palette_t;

int  theme_init(void);
theme_kind_t theme_get(void);
const theme_palette_t *theme_palette(void);

/* User override (Settings UI -> here). 0 = follow system. */
void theme_force(theme_kind_t kind);
void theme_follow_system(void);

#endif /* DBI_FORK_THEME_H */
