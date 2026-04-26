/* theme.c — DBI fork theme detection + palette.
 *
 * Reference: REVERSE.md Part 40, Phase 1 string corpus for the upstream
 * theme palette ANSI sequences (.rodata 0x71840d00 area).
 *
 * Note: set:sys::GetColorSetId is libnx's setsysGetColorSetId().
 */
#include "theme.h"
#include "log.h"
#include <switch.h>
#include <stdbool.h>

static struct {
    bool         initialized;
    bool         forced;
    theme_kind_t forced_kind;
    theme_kind_t cached;
} g_theme;

static const theme_palette_t PAL_LIGHT = {
    .bg            = 0xefefefff,
    .fg            = 0x202020ff,
    .accent        = 0x3a86ffff,
    .error         = 0xd62828ff,
    .success       = 0x2a9d8fff,
    .inactive      = 0x9aa0a6ff,
    .border        = 0xc0c0c0ff,
    .selection_bg  = 0x3a86ffff,
    .selection_fg  = 0xffffffff,
};

static const theme_palette_t PAL_DARK = {
    .bg            = 0x1c1c1cff,
    .fg            = 0xe5e5e5ff,
    .accent        = 0x66a3ffff,
    .error         = 0xff6b6bff,
    .success       = 0x4cd9bdff,
    .inactive      = 0x6c7079ff,
    .border        = 0x404040ff,
    .selection_bg  = 0x66a3ffff,
    .selection_fg  = 0x1c1c1cff,
};

int theme_init(void) {
    if (g_theme.initialized) return 0;
    Result rc = setsysInitialize();
    if (R_FAILED(rc)) {
        log_event("theme: setsysInitialize failed 0x%x", rc);
        g_theme.cached = THEME_DARK;
    } else {
        ColorSetId cs = ColorSetId_Light;
        rc = setsysGetColorSetId(&cs);
        if (R_FAILED(rc)) {
            log_event("theme: setsysGetColorSetId failed 0x%x", rc);
            g_theme.cached = THEME_DARK;
        } else {
            g_theme.cached = (cs == ColorSetId_Dark) ? THEME_DARK : THEME_LIGHT;
        }
        setsysExit();
    }
    g_theme.initialized = true;
    log_event("theme: kind=%s",
              g_theme.cached == THEME_DARK ? "dark" : "light");
    return 0;
}

theme_kind_t theme_get(void) {
    if (!g_theme.initialized) theme_init();
    return g_theme.forced ? g_theme.forced_kind : g_theme.cached;
}

const theme_palette_t *theme_palette(void) {
    return theme_get() == THEME_DARK ? &PAL_DARK : &PAL_LIGHT;
}

void theme_force(theme_kind_t kind) {
    g_theme.forced = true;
    g_theme.forced_kind = kind;
}

void theme_follow_system(void) {
    g_theme.forced = false;
}
