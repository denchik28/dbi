/*
 * DBI 791-ru UI layout tables — byte-for-byte port of the paint bodies
 * reversed in analysis/ui_screens_791.md (FINDINGS.md Part 41) and
 * re-verified via the record-level compositor simulator in
 * scripts/dbi_compositor_sim.py (FINDINGS.md Part 43).
 *
 * All (row, col) values below are the exact 1-indexed positions the
 * DBI 791-ru compositor emits via FUN_71000cb9e0(col, row, str, 0) on
 * its 80x45 libnx text console. Columns for title/help/footer rows are
 * computed by the simulator with the same centering rules DBI uses
 * ( (UI_COLS - strlen(text)) / 2 + 1 ), so paint_trace_<screen>.tsv is
 * the single source of truth.
 */

#include "ui_layouts.h"
#include <stdio.h>
#include <string.h>
#include <switch.h>

#include "ui.h"   /* for UI_SCREEN_* ids used in UI_MAIN_MENU */

#define UI_COLS 80
#define UI_ROWS 45

/* ---- ANSI emission -------------------------------------------------- */

/* Position cursor (1-indexed). DBI does not hardcode CUP literals; its
 * compositor computes row/col at flush time. We emit CUP directly since
 * libnx honors VT100 CUP inside consoleInit(NULL). */
static inline void emit_cup(int row, int col) {
    printf("\x1b[%d;%dH", row, col);
}

/* Emit SGR for a ui_fg_t + flags. Mirrors the exact byte sequences at
 * 0x710069a080..0x710069d798 in the 791-ru rodata palette table. */
static void emit_sgr(int fg, int flags) {
    if (flags & UI_FLAG_INVERT) { fputs("\x1b[7m", stdout); }
    if (flags & UI_FLAG_DIM)    { fputs("\x1b[37m", stdout); return; }

    switch (fg) {
    case UI_FG_LIME_RGB:
        fputs("\x1b[38;2;50;205;50m",  stdout); return;
    case UI_FG_GREY_RGB:
        fputs("\x1b[38;2;220;220;220m", stdout); return;
    case UI_FG_ORANGE_RGB:
        fputs("\x1b[38;2;255;128;0m",  stdout); return;
    }

    int code = fg ? fg : UI_FG_WHITE;
    if (flags & UI_FLAG_BOLD) printf("\x1b[%d;1m", code);
    else                      printf("\x1b[%dm",   code);
}

/* Reset to white bold = DBI's default "foreground reset"
 * (address 0x710069a080 in the 791-ru rodata). */
static inline void emit_reset(void) { fputs("\x1b[37;1m", stdout); }

/* Write a padded row — extends the row to the right edge with spaces so
 * that inverse (selection) highlighting fills the full bar the same way
 * DBI's compositor does when it pushes a rect record. */
static void write_padded(const char *s, int col) {
    int max_w = UI_COLS - col - 1;
    int n     = 0;
    for (const char *p = s; *p && n < max_w; p++, n++) fputc(*p, stdout);
    for (; n < max_w; n++) fputc(' ', stdout);
}

/* ---- walker --------------------------------------------------------- */

void ui_paint_layout(const ui_layout_t *layout) {
    if (!layout || !layout->cells) return;
    for (int i = 0; i < layout->n; i++) {
        const ui_cell_t *c = &layout->cells[i];
        if (c->text == NULL) continue; /* dynamic slot, caller fills */
        emit_cup(c->row, c->col);
        emit_sgr(c->fg, c->flags);
        if (c->flags & UI_FLAG_PAD_ROW) write_padded(c->text, c->col);
        else                            fputs(c->text, stdout);
        emit_reset();
    }
}

/* Trace-driven paint: emit every cell in the layout exactly as captured
 * by the upstream paint trace.  Unlike ui_paint_layout (which assumes the
 * caller already drew chrome and only emits content cells), this walker
 * paints the FULL screen including frame borders and dividers — the trace
 * is the single source of truth.  Dynamic data (firmware version, SD GB,
 * time) is overlaid by callers AFTER this returns. */
void ui_paint_trace(const ui_layout_t *layout) {
    if (!layout || !layout->cells) return;
    /* CR+LF/clear so the previous frame doesn't bleed through. */
    fputs("\x1b[H\x1b[2J", stdout);
    for (int i = 0; i < layout->n; i++) {
        const ui_cell_t *c = &layout->cells[i];
        if (c->text == NULL) continue;
        emit_cup(c->row, c->col);
        emit_sgr(c->fg, c->flags);
        fputs(c->text, stdout);
        emit_reset();
    }
}

/* Scratch buffer for layouts that mix static + dynamic rows. */
#define UI_SCRATCH_MAX 128
static ui_cell_t  s_scratch[UI_SCRATCH_MAX];
static int        s_scratch_n = 0;
static char       s_scratch_text[UI_SCRATCH_MAX][160];

void ui_layout_row(int row, int col, const char *text, int fg, int flags) {
    if (s_scratch_n >= UI_SCRATCH_MAX) return;
    int idx = s_scratch_n++;
    snprintf(s_scratch_text[idx], sizeof s_scratch_text[idx], "%s", text ? text : "");
    s_scratch[idx].row   = row;
    s_scratch[idx].col   = col;
    s_scratch[idx].text  = s_scratch_text[idx];
    s_scratch[idx].fg    = fg;
    s_scratch[idx].flags = flags;
}

/* Called by ui.c before appending dynamic rows. */
void ui_layout_scratch_reset(void) { s_scratch_n = 0; }
const ui_cell_t *ui_layout_scratch_cells(void) { return s_scratch; }
int ui_layout_scratch_n(void) { return s_scratch_n; }

/* ---- main menu ------------------------------------------------------ */

/* Order matches the 791-ru screenshot row-for-row.
 * internal_id values are the exact rodata bytes at 0x71006a0528.. —
 * verified via /opt/aimeld-proj/re/analysis/ui_screens_791.md §2. */
const ui_menu_item_t UI_MAIN_MENU[] = {
    { UI_SCREEN_BROWSE_SD,   "BrowseSD",    "Browse SD card"         },
    { UI_SCREEN_USB_HOST,    "USBHost",     "Install via DBIbackend" },
    { UI_SCREEN_MAIN,        NULL,          NULL                     },  /* spacer */
    { UI_SCREEN_BROWSE_APPS, "BrowseApps",  "Installed games"        },
    { UI_SCREEN_TOOLS,       "Tools",       "Tools"                  },
    { UI_SCREEN_MAIN,        NULL,          NULL                     },  /* spacer */
    { UI_SCREEN_TICKETS,     "Tickets",     "Tickets"                },
    { UI_SCREEN_SAVES,       "Saves",       "Saves"                  },
    { UI_SCREEN_MAIN,        NULL,          NULL                     },  /* spacer */
    { UI_SCREEN_MTP,         "MTP",         "Start MTP connection"   },
    { UI_SCREEN_FTP,         "FTP",         "Start FTP server"       },
    { UI_SCREEN_HTTP,        "HTTP",        "Start HTTP server"      },
    { UI_SCREEN_MAIN,        NULL,          NULL                     },  /* spacer */
    { UI_SCREEN_LOG,         "LogManager",  "Activity log"           },
    { UI_SCREEN_SETTINGS,    "Settings",    "DBI settings"           },
    { UI_SCREEN_EXIT,        "Exit",        "Quit"                   },
};
const int UI_MAIN_MENU_N = (int)(sizeof UI_MAIN_MENU / sizeof UI_MAIN_MENU[0]);

/* MTP storage list — identical byte-for-byte to rodata table at
 * 0x71006a05d0..0x71006a06b0. */
const char *const UI_MTP_STORAGES[] = {
    "1: SD Card",
    "2: Nand USER",
    "3: Nand SYSTEM",
    "4: Installed games",
    "5: SD Card install",
    "6: NAND install",
    "7: Saves",
    "8: Album",
    "9: Gamecard",
};
const int UI_MTP_STORAGES_N = (int)(sizeof UI_MTP_STORAGES / sizeof UI_MTP_STORAGES[0]);

/* ---- screen layouts (from paint_trace_<screen>.tsv) ----------------- */
/* Columns for centered rows:
 *     col = (UI_COLS - strlen(text)) / 2 + 1
 * Columns for body rows are always 4 or 6 in DBI 791-ru (matches sim). */

/* Main menu screen has NO static cells — the menu is built dynamically
 * from UI_MAIN_MENU at paint time. This struct exists so the dispatcher
 * has a single entry point per screen. */
static const ui_cell_t MAIN_CELLS[] = { {0,0,NULL,0,0} };
const ui_layout_t UI_LAYOUT_MAIN = { "Main menu", MAIN_CELLS, 0 };

/* SD browser — title is dynamic ("SD: <path>"), body is dynamic list.
 * Static cell is the help row at row 41 (from paint_trace_browse_sd.tsv). */
static const ui_cell_t BROWSE_SD_CELLS[] = {
    /* row, col, text, fg, flags */
    { 41, 15, "(A) open  (Y) install NSP  (X) rescan  (B) up / back",
      UI_FG_WHITE, UI_FLAG_DIM },
};
const ui_layout_t UI_LAYOUT_BROWSE_SD = {
    "SD browser",
    BROWSE_SD_CELLS,
    (int)(sizeof BROWSE_SD_CELLS / sizeof BROWSE_SD_CELLS[0])
};

/* USB host / DBIbackend — title row 3, help row 41, VID/PID row 6 col 6
 * (first list row per sim). */
static const ui_cell_t USB_HOST_CELLS[] = {
    { 3,  36, "DBIbackend", UI_FG_WHITE, UI_FLAG_BOLD },
    { 6,   6, "VID 057E  PID 3000", UI_FG_WHITE, UI_FLAG_DIM },
    { 41, 13, "(A) open/LIST  (Y) install sel  (X) send EXIT  (B) close",
      UI_FG_WHITE, UI_FLAG_DIM },
};
const ui_layout_t UI_LAYOUT_USB_HOST = {
    "DBIbackend",
    USB_HOST_CELLS,
    (int)(sizeof USB_HOST_CELLS / sizeof USB_HOST_CELLS[0])
};

/* Installed games list — title row 3, help row 41. Body is dynamic. */
static const ui_cell_t APPS_CELLS[] = {
    { 3,  19, "Installed games (ns:am application records)",
      UI_FG_CYAN, UI_FLAG_BOLD },
    { 41, 11, "(A) launch  (X) export save  (Y) delete  (ZL) rescan  (B) back",
      UI_FG_WHITE, UI_FLAG_DIM },
};
const ui_layout_t UI_LAYOUT_BROWSE_APPS = {
    "Installed games",
    APPS_CELLS,
    (int)(sizeof APPS_CELLS / sizeof APPS_CELLS[0])
};

/* Tickets — fork-live. Title row 3 col 37, cyan subtitle row 4 col 4,
 * help row 41. Dynamic body (rights_ids) painted by paint_tickets(). */
static const ui_cell_t TICKETS_CELLS[] = {
    { 3,  37, "Tickets", UI_FG_WHITE, UI_FLAG_BOLD },
    { 4,   4, "Tickets — es:ListCommonTicket + ListPersonalizedTicket",
      UI_FG_CYAN, UI_FLAG_BOLD },
    { 41, 30, "(A) enumerate  (B) back", UI_FG_WHITE, UI_FLAG_DIM },
};
const ui_layout_t UI_LAYOUT_TICKETS = {
    "Tickets", TICKETS_CELLS,
    (int)(sizeof TICKETS_CELLS / sizeof TICKETS_CELLS[0])
};

/* Saves — fork-live. Title row 3, cyan subtitle row 4, help row 41.
 * Dynamic body (FsSaveDataInfoReader walk) painted by paint_saves(). */
static const ui_cell_t SAVES_CELLS[] = {
    { 3,  38, "Saves", UI_FG_WHITE, UI_FLAG_BOLD },
    { 4,   4, "Saves — FsSaveDataInfoReader (User space)",
      UI_FG_CYAN, UI_FLAG_BOLD },
    { 41, 14, "(A) rescan  (X) export selected  (B) back",
      UI_FG_WHITE, UI_FLAG_DIM },
};
const ui_layout_t UI_LAYOUT_SAVES = {
    "Saves", SAVES_CELLS,
    (int)(sizeof SAVES_CELLS / sizeof SAVES_CELLS[0])
};

/* MTP server — sim: title row 3 col 23, 9 storage rows at col 6 rows 6..14,
 * info row 15 → moved to row 16 (simulator trace). */
static const ui_cell_t MTP_CELLS[] = {
    { 3,  23, "MTP server — custom storage mapping",
      UI_FG_WHITE, UI_FLAG_BOLD },
    { 6,   6, "1: SD Card",          UI_FG_WHITE, UI_FLAG_BOLD },
    { 7,   6, "2: Nand USER",        UI_FG_WHITE, UI_FLAG_BOLD },
    { 8,   6, "3: Nand SYSTEM",      UI_FG_WHITE, UI_FLAG_BOLD },
    { 9,   6, "4: Installed games",  UI_FG_WHITE, UI_FLAG_BOLD },
    { 10,  6, "5: SD Card install",  UI_FG_WHITE, UI_FLAG_BOLD },
    { 11,  6, "6: NAND install",     UI_FG_WHITE, UI_FLAG_BOLD },
    { 12,  6, "7: Saves",            UI_FG_WHITE, UI_FLAG_BOLD },
    { 13,  6, "8: Album",            UI_FG_WHITE, UI_FLAG_BOLD },
    { 14,  6, "9: Gamecard",         UI_FG_WHITE, UI_FLAG_BOLD },
    { 16,  6, "Host sees: Haze-compatible MTP responder",
      UI_FG_WHITE, UI_FLAG_DIM },
    { 41, 29, "(A) start/stop  (B) back", UI_FG_WHITE, UI_FLAG_DIM },
};
const ui_layout_t UI_LAYOUT_MTP = {
    "MTP server", MTP_CELLS,
    (int)(sizeof MTP_CELLS / sizeof MTP_CELLS[0])
};

/* FTP server — sim: title row 3 col 36, body rows 4/5/7/8. */
static const ui_cell_t FTP_CELLS[] = {
    { 3,  36, "FTP server", UI_FG_WHITE, UI_FLAG_BOLD },
    { 4,   4, "FTP server", UI_FG_CYAN,  UI_FLAG_BOLD },
    { 5,   4, "listening on :5000 (default)", UI_FG_WHITE, 0 },
    { 7,   4, "anonymous allowed; 21 commands supported",
      UI_FG_WHITE, UI_FLAG_DIM },
    { 8,   4, "Not implemented yet.", UI_FG_RED, UI_FLAG_BOLD },
    { 41, 29, "(A) start/stop  (B) back", UI_FG_WHITE, UI_FLAG_DIM },
};
const ui_layout_t UI_LAYOUT_FTP = {
    "FTP server", FTP_CELLS,
    (int)(sizeof FTP_CELLS / sizeof FTP_CELLS[0])
};

/* HTTP server — sim: title row 3 col 25, body rows 4/5/7. */
static const ui_cell_t HTTP_CELLS[] = {
    { 3,  25, "HTTP server — Tinfoil-compatible",
      UI_FG_WHITE, UI_FLAG_BOLD },
    { 4,   4, "HTTP server — Tinfoil-compatible",
      UI_FG_CYAN,  UI_FLAG_BOLD },
    { 5,   4, "SDCardHttpServer + AlbumHttpServer + InstalledGamesHttpServer",
      UI_FG_WHITE, 0 },
    { 7,   4, "Not implemented yet.", UI_FG_RED, UI_FLAG_BOLD },
    { 41, 29, "(A) start/stop  (B) back", UI_FG_WHITE, UI_FLAG_DIM },
};
const ui_layout_t UI_LAYOUT_HTTP = {
    "HTTP server", HTTP_CELLS,
    (int)(sizeof HTTP_CELLS / sizeof HTTP_CELLS[0])
};

/* Activity log — sim: title row 3 col 35, subtitle row 4, path row 5. */
static const ui_cell_t LOG_CELLS[] = {
    { 3,  35, "Activity log", UI_FG_WHITE, UI_FLAG_BOLD },
    { 4,   4, "Activity log", UI_FG_CYAN,  UI_FLAG_BOLD },
    { 5,   4, "Path: sdmc:/switch/DBI/logs/", UI_FG_WHITE, 0 },
    { 41, 37, "(B) back", UI_FG_WHITE, UI_FLAG_DIM },
};
const ui_layout_t UI_LAYOUT_LOG = {
    "Activity log", LOG_CELLS,
    (int)(sizeof LOG_CELLS / sizeof LOG_CELLS[0])
};

/* DBI settings — fork-live. Title + cyan subtitle + help row.
 * Body (parsed dbi.config entries) painted by paint_settings(). */
static const ui_cell_t SETTINGS_CELLS[] = {
    { 3,  35, "DBI settings", UI_FG_WHITE, UI_FLAG_BOLD },
    { 4,   4, "DBI settings — sdmc:/switch/DBI/dbi.config",
      UI_FG_CYAN, UI_FLAG_BOLD },
    { 41, 32, "(A) reload  (B) back", UI_FG_WHITE, UI_FLAG_DIM },
};
const ui_layout_t UI_LAYOUT_SETTINGS = {
    "DBI settings", SETTINGS_CELLS,
    (int)(sizeof SETTINGS_CELLS / sizeof SETTINGS_CELLS[0])
};

/* NSP info — sim: title row 3 col 37. Body rows 4 (target_path, dynamic)
 * and 6+ (entries, dynamic). */
static const ui_cell_t INFO_CELLS[] = {
    { 3,  37, "NSP info", UI_FG_WHITE, UI_FLAG_BOLD },
    { 4,   4, "NSP info", UI_FG_CYAN,  UI_FLAG_BOLD },
    { 41, 37, "(B) back", UI_FG_WHITE, UI_FLAG_DIM },
};
const ui_layout_t UI_LAYOUT_INFO = {
    "NSP info", INFO_CELLS,
    (int)(sizeof INFO_CELLS / sizeof INFO_CELLS[0])
};

/* Installing — sim: title row 3 col 36, "Installing" cyan row 5 col 4,
 * dynamic status row 9 col 4. */
static const ui_cell_t INSTALL_CELLS[] = {
    { 3,  36, "Installing", UI_FG_WHITE, UI_FLAG_BOLD },
    { 5,   4, "Installing", UI_FG_CYAN,  UI_FLAG_BOLD },
    { 41, 32, "(B) back when done", UI_FG_WHITE, UI_FLAG_DIM },
};
const ui_layout_t UI_LAYOUT_INSTALL = {
    "Installing", INSTALL_CELLS,
    (int)(sizeof INSTALL_CELLS / sizeof INSTALL_CELLS[0])
};

/* Tools — fork-live sub-menu. Title + cyan subtitle + help row; the
 * selectable list is painted dynamically by paint_tools(). */
static const ui_cell_t TOOLS_CELLS[] = {
    { 3,  38, "Tools", UI_FG_WHITE, UI_FLAG_BOLD },
    { 4,   4, "Tools — NAND browsers, game card, network",
      UI_FG_CYAN, UI_FLAG_BOLD },
    { 41, 32, "(A) open  (B) back", UI_FG_WHITE, UI_FLAG_DIM },
};
const ui_layout_t UI_LAYOUT_TOOLS = {
    "Tools", TOOLS_CELLS,
    (int)(sizeof TOOLS_CELLS / sizeof TOOLS_CELLS[0])
};

/* System partition browser — fork-live. paint_browse_sd() emits header
 * + list starting row 6; static cells here keep only title + help. */
static const ui_cell_t BROWSE_SYSTEM_CELLS[] = {
    { 3,  33, "System NAND", UI_FG_WHITE, UI_FLAG_BOLD },
    { 41, 13, "(A) open  (X) rescan  (B) up / back",
      UI_FG_WHITE, UI_FLAG_DIM },
};
const ui_layout_t UI_LAYOUT_BROWSE_SYSTEM = {
    "System partition", BROWSE_SYSTEM_CELLS,
    (int)(sizeof BROWSE_SYSTEM_CELLS / sizeof BROWSE_SYSTEM_CELLS[0])
};

/* User partition browser — fork-live. Same shape as SYSTEM. */
static const ui_cell_t BROWSE_USER_CELLS[] = {
    { 3,  34, "User NAND", UI_FG_WHITE, UI_FLAG_BOLD },
    { 41, 13, "(A) open  (X) rescan  (B) up / back",
      UI_FG_WHITE, UI_FLAG_DIM },
};
const ui_layout_t UI_LAYOUT_BROWSE_USER = {
    "User partition", BROWSE_USER_CELLS,
    (int)(sizeof BROWSE_USER_CELLS / sizeof BROWSE_USER_CELLS[0])
};

/* Backend install — sim: title row 3 col 33, body rows 4/5/7. */
static const ui_cell_t BACKEND_INSTALL_CELLS[] = {
    { 3,  33, "Backend install", UI_FG_WHITE, UI_FLAG_BOLD },
    { 4,   4, "Backend install", UI_FG_CYAN,  UI_FLAG_BOLD },
    { 5,   4, "HTTP/MTP/FTP install sources (curl + pugixml)",
      UI_FG_WHITE, 0 },
    { 7,   4, "Not implemented yet.", UI_FG_RED, UI_FLAG_BOLD },
    { 41, 37, "(B) back", UI_FG_WHITE, UI_FLAG_DIM },
};
const ui_layout_t UI_LAYOUT_BACKEND_INSTALL = {
    "Backend install", BACKEND_INSTALL_CELLS,
    (int)(sizeof BACKEND_INSTALL_CELLS / sizeof BACKEND_INSTALL_CELLS[0])
};

/* Gamecard — fork-live. paint_gamecard() writes the XCI header fields
 * starting row 7; static cells here keep only title + help. */
static const ui_cell_t GAMECARD_CELLS[] = {
    { 3,  36, "Game card", UI_FG_WHITE, UI_FLAG_BOLD },
    { 4,   4, "Game card — fsOpenGameCardStorage + XCI header",
      UI_FG_CYAN, UI_FLAG_BOLD },
    { 41, 32, "(A) probe  (B) back", UI_FG_WHITE, UI_FLAG_DIM },
};
const ui_layout_t UI_LAYOUT_GAMECARD = {
    "Game card", GAMECARD_CELLS,
    (int)(sizeof GAMECARD_CELLS / sizeof GAMECARD_CELLS[0])
};

/* USB Mass Storage — fork-live. Title row 3, cyan subtitle row 4, help row 41.
 * Body (running flag, LUN list, live stats) painted by paint_usbms(). */
static const ui_cell_t USBMS_CELLS[] = {
    { 3,  33, "USB Mass Storage", UI_FG_WHITE, UI_FLAG_BOLD },
    { 4,   4, "USB-MS — Bulk-Only Transport + SCSI (BIS System / User, RO)",
      UI_FG_CYAN, UI_FLAG_BOLD },
    { 41, 24, "(A) start/stop  (X) rescan LUNs  (B) back",
      UI_FG_WHITE, UI_FLAG_DIM },
};
const ui_layout_t UI_LAYOUT_USBMS = {
    "USB Mass Storage", USBMS_CELLS,
    (int)(sizeof USBMS_CELLS / sizeof USBMS_CELLS[0])
};

/* Network — sim: title row 3 col 37, body rows 4/5 static; rows 7..13
 * are dynamic (populated by paint_network() via libnx nifm). */
static const ui_cell_t NETWORK_CELLS[] = {
    { 3,  37, "Network", UI_FG_WHITE, UI_FLAG_BOLD },
    { 4,   4, "Network — libnx nifm + install adapter list",
      UI_FG_CYAN,  UI_FLAG_BOLD },
    { 5,   4, "Current connection + install sources",
      UI_FG_WHITE, 0 },
    { 41, 37, "(B) back", UI_FG_WHITE, UI_FLAG_DIM },
};
const ui_layout_t UI_LAYOUT_NETWORK = {
    "Network", NETWORK_CELLS,
    (int)(sizeof NETWORK_CELLS / sizeof NETWORK_CELLS[0])
};
