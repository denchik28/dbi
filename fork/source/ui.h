#pragma once
#include <switch.h>
#include <stdint.h>
#include <stdbool.h>

/* Upstream target: DBI 887-ru (latest as of 2026-04-07).
 * Menu labels are English — upstream binaries (791/887) contain zero
 * Cyrillic in the UI chrome rodata; earlier Russian screenshots came
 * from a community patch, not sthetix/DBI. Internal IDs live at
 * rodata 0x71006a0528.. in 791, re-validated against 887 in Part 40. */

typedef enum {
    UI_SCREEN_MAIN = 0,
    UI_SCREEN_BROWSE_SD,
    UI_SCREEN_BROWSE_SYSTEM,
    UI_SCREEN_BROWSE_USER,
    UI_SCREEN_USB_HOST,
    UI_SCREEN_BACKEND_INSTALL,
    UI_SCREEN_GAMECARD,
    UI_SCREEN_NETWORK,
    UI_SCREEN_BROWSE_APPS,
    UI_SCREEN_TOOLS,
    UI_SCREEN_TICKETS,
    UI_SCREEN_SAVES,
    UI_SCREEN_MTP,
    UI_SCREEN_FTP,
    UI_SCREEN_HTTP,
    UI_SCREEN_USBMS,
    UI_SCREEN_LOG,
    UI_SCREEN_SETTINGS,
    UI_SCREEN_INFO,
    UI_SCREEN_INSTALL,
    UI_SCREEN_EXIT,
} ui_screen_t;

typedef struct {
    ui_screen_t screen;
    int         menu_sel;
    int         sd_sel;
    int         app_sel;
    int         save_sel;
    char        status[512];
    char        target_path[512];
    char        current_dir[512];  /* Browse SD: current directory, "sdmc:/" = root */
} ui_state_t;

void ui_init(ui_state_t *st);
void ui_set_status(ui_state_t *st, const char *fmt, ...);
void ui_tick(ui_state_t *st, PadState *pad);

/* Applet-mode bg swap — matches DBI 887's FUN_7100155ac0/b30 behavior
 * (flag=0 emits blue-bold `\x1b[44;1m`, flag=1 emits black `\x1b[40m`).
 * Upstream toggles the flag via the applet-type branch in the libnx
 * startup path; we do the same at main() via appletGetAppletType(). */
void ui_set_applet_mode(bool is_library_applet);
