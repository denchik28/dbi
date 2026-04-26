/* title_render.c — DBI fork title strings.
 *
 * No cipher, no IPC dance, no sentinel check. Just snprintf.
 *
 * Replacement for upstream's FUN_710012b890 + FUN_71001a17f0 chain
 * documented in REVERSE.md sec 13 / FINDINGS Part 48.
 */
#include "title_render.h"
#include <stdio.h>
#include <string.h>
#include <switch.h>

static char g_main_localised[64];

const char *title_get_main(void) {
    return DBI_FORK_NAME " " DBI_FORK_VERSION;
}

const char *title_get_mtp(void) {
    return DBI_FORK_NAME " MTP";
}

const char *title_get_backend(void) {
    return DBI_FORK_NAME " Backend";
}

const char *title_get_main_localised(void) {
    if (g_main_localised[0]) return g_main_localised;

    /* Map appletGetDesiredLanguage() -> short locale code. Mirrors
     * upstream's FUN_7113c4e0 locale mapper (REVERSE.md sec 7) but as
     * a static lookup instead of a tbnz dispatcher. */
    static const char *codes[] = {
        "en", "en", "ja", "fr", "de",
        "es", "it", "ru", "ko", "zh-CN",
        "zh-TW", "nl", "pt", "pt", "fr-CA",
    };
    u64 desired = 0;
    Result rc = appletGetDesiredLanguage(&desired);
    const char *loc = "en";
    if (R_SUCCEEDED(rc)) {
        u32 idx = (u32)desired & 0xff;
        if (idx < sizeof(codes) / sizeof(codes[0])) loc = codes[idx];
    }
    snprintf(g_main_localised, sizeof(g_main_localised),
             "%s %s-%s", DBI_FORK_NAME, DBI_FORK_VERSION, loc);
    return g_main_localised;
}
