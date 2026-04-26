#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <switch.h>
#include "ui.h"
#include "dbi0.h"
#include "log.h"
#include "fb_console.h"
#include "ftp.h"
#include "mtp.h"
#include "webdav.h"
#include "theme.h"
#include "title_render.h"
#include "http_servers.h"

int main(int argc, char **argv) {
    (void)argc; (void)argv;

    /* File-backed activity log at sdmc:/switch/DBI/logs/ — mirrors
     * upstream DBI which writes its own daily log there. Initialized
     * before the framebuffer so any startup errors still land in the
     * file. */
    log_init();
    log_event("main: argc=%d", argc);

    /* Drop-in replacement for libnx consoleInit: upstream DBI renders
     * through its own VI + nwindow + linear RGBA8 framebuffer, blitting
     * 16x16 glyphs from a 2 MiB zstd-compressed BMP atlas it carries in
     * .rodata (see FINDINGS.md Part 45). Our fork ships the same atlas
     * verbatim in data/font.bin.zst and reimplements the pipeline:
     *   fb_console_init -> nwindowGetDefault + framebufferCreate/MakeLinear
     *                    + ZSTD_decompress(font) + devoptab(stdout) install.
     * This makes the existing printf(ANSI-escape...) calls in ui.c render
     * correctly for the full BMP — Cyrillic, box-drawing, CJK all work. */
    if (fb_console_init() != 0) {
        log_event("main: fb_console_init FAILED — aborting");
        log_exit();
        return 1;
    }

    /* Applet-mode detection retained from prior main: mirrors DBI 887's
     * bg-swap branch (though that flag is dead code — see memory
     * project_dbi_bg_flag_dead). AppletType_LibraryApplet == Album-overlay
     * launch (~512MB RAM); AppletType_Application == title launch. */
    AppletType at = appletGetAppletType();
    ui_set_applet_mode(at == AppletType_LibraryApplet);

    PadState pad;
    padConfigureInput(1, HidNpadStyleSet_NpadStandard);
    padInitializeDefault(&pad);

    ui_state_t st;
    ui_init(&st);

    /* Phase 4 module bootstrap. The fork brings up these subsystems
     * once at start and ticks them inside the main UI loop.
     *
     * - theme.c          system-theme detection (light/dark)
     * - title_render.c   in-app title strings (replaces FUN_71001a17f0)
     * - ftp.c            RFC 959 server, port 5000
     * - webdav.c         RFC 4918 (read-only), port 5005
     * - mtp.c            USB MTP (VID 0x057E PID 0x3000)
     * - dbi0.c           legacy DBI USB protocol against dbibackend.py
     */
    theme_init();
    log_event("main: title=%s", title_get_main_localised());

    if (socketInitializeDefault() == 0) {
        ftp_server_start(5000, "sdmc:/");
        webdav_server_start(5005, "sdmc:/");
        album_server_start(8081);
        installed_games_server_start(8082);
        sdcard_server_start(8083);
    } else {
        log_event("main: socketInitializeDefault failed; net servers disabled");
    }

    /* MTP can run alongside DBI0 because they share the same USB
     * interface (DBI re-uses the same VID/PID for both). For now we
     * pick MTP as the default; users who only have dbibackend can
     * disable it via the settings UI. */
    mtp_server_start();

    while (appletMainLoop()) {
        padUpdate(&pad);
        ui_tick(&st, &pad);
        ftp_server_tick();
        webdav_server_tick();
        mtp_server_tick();
        http_servers_tick_all();
        if (st.screen == UI_SCREEN_EXIT) break;
        fb_console_flip();
    }

    http_servers_stop_all();
    mtp_server_stop();
    webdav_server_stop();
    ftp_server_stop();
    socketExit();
    dbi0_exit();
    fb_console_exit();
    log_event("main: exit");
    log_exit();
    return 0;
}
