#include "ui.h"
#include "ui_layouts.h"
#include "dbi0.h"
#include "fs_scan.h"
#include "pfs0.h"
#include "nsp_info.h"
#include "install.h"
#include "install_sources.h"
#include "titles.h"
#include "dbi_config.h"
#include "saves.h"
#include "tickets.h"
#include "gamecard.h"
#include "usbms.h"
#include "titledb.h"
#include "selfupdate.h"
#include "log.h"
#include "ntp.h"
#include "ips.h"
#include "http.h"
#include <stdio.h>
#include <string.h>
#include <strings.h>
#include <stdarg.h>
#include <stdlib.h>
#include <time.h>
#include <dirent.h>
#include <sys/stat.h>
#include <sys/statvfs.h>
#include <switch.h>

#define NSP_LIST_BUFSZ (64*1024)
#define PFS0_HDR_BUFSZ (128*1024)

/* libnx default console geometry: 80x45 cells, 16x16 px per cell (=1280x720).
 * DBI 887-ru uses the same canvas — chrome primitives FUN_71000d7bf0/d80b0
 * check and early-exit on w<2 || h<2, and internal coord math matches
 * consoleInit(NULL) via FUN_7100159bf0 rendering into DAT_7100b71d60. */
#define UI_COLS 80
#define UI_ROWS 45

/* ANSI helpers. SGR codes mirror the byte literals at 0x710089e700.. in
 * the 887-ru rodata palette table (same offsets as 791-ru's 0x710069a080
 * after VA shift). DAT_71008aee30 holds the "\x1b[" prefix; H (CUP
 * terminator) lives at DAT_71008ae408. */
#define ESC          "\x1b["
#define CSI_HOME     ESC "H"
#define CSI_CLEAR    ESC "2J"
/* CSI_RESET preserves the background (SGR 49 = default bg is NOT used —
 * instead we emit only FG + reset-invert so the blue bg painted at the
 * start of each frame survives until the next clear). */
#define CSI_RESET    ESC "27m" ESC "37;1m"
#define CSI_BOLD     ESC "1m"
#define CSI_INVERT   ESC "7m"
#define CSI_NOINVERT ESC "27m"
#define CSI_WHITE    ESC "37;1m"
#define CSI_CYAN     ESC "36;1m"
#define CSI_GREEN    ESC "32;1m"
#define CSI_YELLOW   ESC "33;1m"
#define CSI_RED      ESC "31;1m"
#define CSI_DIM      ESC "37m"
/* DBI uses truecolor SGR for the menu text — approximates the tan/amber
 * tint visible on the upstream 791-ru screenshot. */
#define CSI_AMBER    ESC "38;2;227;170;100m"
/* Background SGRs — DBI 887-ru's FUN_7100155b30 ("normal bg") emits
 * the blue-bold sequence from &DAT_71008afd48 (`\x1b[44;1m`) when the
 * applet/title flag `DAT_7100b70500` is 0, and the black sequence from
 * &DAT_71008afd50 (`\x1b[40m`) when the flag is 1. Applet-mode launch
 * (Album overlay, ~512MB RAM) toggles the flag; title-mode (~3-4GB RAM)
 * leaves it zeroed. Fork mirrors this via appletGetAppletType() wired
 * through ui_set_applet_mode. */
#define CSI_BLUE_BG  ESC "44;1m"
#define CSI_BLACK_BG ESC "40m"

static bool s_applet_mode = false;

/* [General]/TimeShow + TimeShowSeconds — row-40 left-side clock.
 * Upstream defaults are both true; fork mirrors that. Toggled at runtime
 * by load_config(). Upstream format strings "%02d:%02d:%02d" (seconds on)
 * and "%02d:%02d" (seconds off) verified in DBI.nro string table. */
static bool s_time_show         = true;
static bool s_time_show_seconds = true;

void ui_set_applet_mode(bool is_library_applet) {
    s_applet_mode = is_library_applet;
}

static inline const char *ui_bg(void) {
    return s_applet_mode ? CSI_BLACK_BG : CSI_BLUE_BG;
}

static inline void ui_goto(int row, int col) { printf(ESC "%d;%dH", row, col); }

/* -- shared buffers -------------------------------------------------------- */

static char           s_list_buf[NSP_LIST_BUFSZ];
static char           s_usb_names[64][256];
static int            s_usb_names_cnt = 0;
static fs_scan_list_t s_sdlist;
static bool           s_sdlist_ready = false;
static title_list_t   s_titles;
static bool           s_titles_ready = false;
static uint8_t        s_pfs0_hdr_buf[PFS0_HDR_BUFSZ];
static char           s_progress[256];
static pfs0_t         s_info_pfs0;
static bool           s_info_pfs0_ready = false;
static nsp_info_t     s_info_meta;
static bool           s_info_meta_ready = false;

/* -- extended backends (fork-live screens) -------------------------------- */
static saves_list_t    s_saves;
static bool            s_saves_ready       = false;
static tickets_list_t  s_tickets;
static bool            s_tickets_ready     = false;
static gamecard_info_t s_gc;
static bool            s_gc_ready          = false;
static dbi_config_t    s_cfg;

/* Resolve a `[General]` folder key with upstream default + slash trim.
 * Caller-owned buffer; trailing '/' guaranteed stripped. */
static const char *resolve_folder(const char *key, const char *fallback,
                                  char *buf, size_t bufsz) {
    dbi_config_folder(&s_cfg, "General", key, fallback, buf, bufsz);
    return buf;
}

/* Browse SD post-filter — upstream `[General]/HideFolderJpg=true` (default)
 * removes the sibling `folder.jpg` entry from file-browser listings so it
 * doesn't clutter rows meant for installable payloads. Case-insensitive
 * match on the basename. Applied in-place. */
static void browse_filter_folder_jpg(fs_scan_list_t *lst) {
    const dbi_config_entry_t *e =
        dbi_config_find(&s_cfg, "General", "HideFolderJpg");
    bool hide = !e || !e->value[0] ||
                strcasecmp(e->value, "false") != 0; /* default true */
    if (!hide || !lst || lst->count == 0) return;
    size_t w = 0;
    for (size_t r = 0; r < lst->count; r++) {
        const char *n = lst->items[r].name;
        if (!lst->items[r].is_dir && strcasecmp(n, "folder.jpg") == 0)
            continue;
        if (w != r) lst->items[w] = lst->items[r];
        w++;
    }
    lst->count = w;
}

/* Build every directory along `folder`, ignoring the "sdmc:" prefix. */
static void ensure_dir_chain(const char *folder) {
    char tmp[256];
    snprintf(tmp, sizeof tmp, "%s", folder);
    char *root = strchr(tmp, ':');
    char *start = root ? root + 2 : tmp + 1;
    for (char *p = start; *p; p++) {
        if (*p == '/') { *p = 0; mkdir(tmp, 0777); *p = '/'; }
    }
    mkdir(tmp, 0777);
}

/* LOG screen: tail of the most recent log file under <LogsFolder>/. */
static char s_log_tail[20][160];
static int  s_log_tail_cnt = 0;
static char s_log_file[256];

/* BIS (NAND) browser — mounted on demand, name stays stable so the shared
 * `current_dir` path ("bis-system:/..") survives unmount/remount. */
static bool s_bis_system_mounted = false;
static bool s_bis_user_mounted   = false;

/* Tools sub-menu selection (distinct from menu_sel to preserve main menu). */
static int  s_tools_sel = 0;

/* Runtime main menu: mirrors the static UI_MAIN_MENU but lets us inject
 * dynamic [Local sources] shortcuts from dbi.config. Rebuilt whenever
 * load_config() runs. Entries with `sd_path != NULL` jump to Browse SD
 * with current_dir set to the stored path. */
#define MENU_MAX_RUNTIME 64
#define MENU_LABEL_MAX   48
#define MENU_PATH_MAX    160
typedef struct {
    int         screen_id;
    const char *internal_id;    /* NULL for dynamic rows */
    const char *ux_label_static;/* set when the row is a static UI_MAIN_MENU row */
    char        ux_label_dyn[MENU_LABEL_MAX];
    char        sd_path [MENU_PATH_MAX];  /* non-empty only for dynamic shortcuts */
} menu_rt_t;
static menu_rt_t s_menu[MENU_MAX_RUNTIME];
static int       s_menu_n = 0;

/* Settings row selection — picks which toggle the (A) button flips. */
static int  s_settings_sel = 0;

/* USB-MS state — LUN array lives here so the array outlives usbms_start
 * (usbms_t keeps only a pointer). Upstream DBI ships 9 LUNs; the fork
 * drop is 2 (BIS System + BIS User) via stock libnx fsOpenBisStorage. */
static usbms_lun_t s_usbms_luns[USBMS_MAX_LUNS];
static uint32_t    s_usbms_n_luns = 0;
static bool        s_usbms_configured = false;

/* -- cached system info --------------------------------------------------- */

typedef struct {
    char   fw_version[32];
    char   dbi_version[16];
    double sd_used_gb;
    double sd_total_gb;
    double nand_used_gb;
    double nand_total_gb;
    uint32_t battery;
    int32_t  temp_c;
} sys_info_t;

static sys_info_t s_sys;

static void sys_info_refresh(void) {
    if (!s_sys.fw_version[0]) {
        SetSysFirmwareVersion ver = {0};
        Result rc = setsysInitialize();
        if (R_SUCCEEDED(rc)) {
            rc = setsysGetFirmwareVersion(&ver);
            setsysExit();
        }
        if (R_SUCCEEDED(rc)) snprintf(s_sys.fw_version, sizeof s_sys.fw_version,
                                      "%s", ver.display_version);
        else strcpy(s_sys.fw_version, "?.?.?");
        strcpy(s_sys.dbi_version, "887-ru-fork");
    }
    struct statvfs sv;
    if (statvfs("sdmc:/", &sv) == 0) {
        double total = (double)sv.f_blocks * (double)sv.f_frsize;
        double avail = (double)sv.f_bavail * (double)sv.f_frsize;
        s_sys.sd_total_gb = total / (1024.0 * 1024.0 * 1024.0);
        s_sys.sd_used_gb  = (total - avail) / (1024.0 * 1024.0 * 1024.0);
    }
    if (s_sys.nand_total_gb == 0) {
        s_sys.nand_total_gb = 29.0;
        s_sys.nand_used_gb  = 0.0;
    }
    u32 batt = 0;
    if (R_SUCCEEDED(psmInitialize())) {
        psmGetBatteryChargePercentage(&batt);
        psmExit();
    }
    s_sys.battery = batt;

    s_sys.temp_c = 0;
    if (R_SUCCEEDED(tsInitialize())) {
        s32 mc = 0;
        if (R_SUCCEEDED(tsGetTemperatureMilliC(TsLocation_Internal, &mc)))
            s_sys.temp_c = mc / 1000;
        tsExit();
    }
}

/* -- screen→layout mapping ------------------------------------------------ */

/* One entry per enum value, so dispatch is O(1) and the layout table is
 * single-source-of-truth. Screens that mix static + dynamic cells (MAIN,
 * BROWSE_SD, USB_HOST, BROWSE_APPS, INFO, INSTALL) go through a helper
 * that appends dynamic rows via the scratch buffer, then paints. */
static const ui_layout_t *layout_for(ui_screen_t s) {
    switch (s) {
        case UI_SCREEN_MAIN:             return &UI_LAYOUT_MAIN;
        case UI_SCREEN_BROWSE_SD:        return &UI_LAYOUT_BROWSE_SD;
        case UI_SCREEN_BROWSE_SYSTEM:    return &UI_LAYOUT_BROWSE_SYSTEM;
        case UI_SCREEN_BROWSE_USER:      return &UI_LAYOUT_BROWSE_USER;
        case UI_SCREEN_USB_HOST:         return &UI_LAYOUT_USB_HOST;
        case UI_SCREEN_BACKEND_INSTALL:  return &UI_LAYOUT_BACKEND_INSTALL;
        case UI_SCREEN_GAMECARD:         return &UI_LAYOUT_GAMECARD;
        case UI_SCREEN_NETWORK:          return &UI_LAYOUT_NETWORK;
        case UI_SCREEN_BROWSE_APPS:      return &UI_LAYOUT_BROWSE_APPS;
        case UI_SCREEN_TOOLS:            return &UI_LAYOUT_TOOLS;
        case UI_SCREEN_TICKETS:          return &UI_LAYOUT_TICKETS;
        case UI_SCREEN_SAVES:            return &UI_LAYOUT_SAVES;
        case UI_SCREEN_MTP:              return &UI_LAYOUT_MTP;
        case UI_SCREEN_FTP:              return &UI_LAYOUT_FTP;
        case UI_SCREEN_HTTP:             return &UI_LAYOUT_HTTP;
        case UI_SCREEN_USBMS:            return &UI_LAYOUT_USBMS;
        case UI_SCREEN_LOG:              return &UI_LAYOUT_LOG;
        case UI_SCREEN_SETTINGS:         return &UI_LAYOUT_SETTINGS;
        case UI_SCREEN_INFO:             return &UI_LAYOUT_INFO;
        case UI_SCREEN_INSTALL:          return &UI_LAYOUT_INSTALL;
        case UI_SCREEN_EXIT:             return NULL;
    }
    return NULL;
}

static const char *screen_title(ui_screen_t s) {
    const ui_layout_t *l = layout_for(s);
    return l ? l->title : "?";
}

/* Runtime menu helpers live later in the file (they touch s_menu which is
 * declared below). Forward-declared here so paint_main_menu + nav can see
 * them before their definitions. */
static const char *menu_label(int i);
static bool menu_rt_is_spacer(int i);
static bool menu_rt_is_hidden(int i);

/* -- state helpers -------------------------------------------------------- */

void ui_set_status(ui_state_t *st, const char *fmt, ...) {
    va_list ap;
    va_start(ap, fmt);
    vsnprintf(st->status, sizeof st->status, fmt, ap);
    va_end(ap);
}

static titledb_t s_titledb;
static bool      s_titledb_loaded = false;

/* Forward decls — load_config lives near the extended-backend loaders
 * but ui_init needs it at startup, and the runtime menu builder depends
 * on the saves/titles/cfg statics above. */
static void load_config(void);
static void build_runtime_menu(void);

/* Comparator selection for the Apps list. Upstream `[General]/AppSorting`
 * is a comma-separated priority list (e.g. "LastPlayed,Size,Name") — the
 * fork honors only the first recognized key because title_entry_t doesn't
 * track `InstallLocation` or `Size` yet. Defaults to LastPlayed. */
static int cmp_title_last_played_desc(const void *a, const void *b) {
    const title_entry_t *ta = a, *tb = b;
    if (ta->last_updated < tb->last_updated) return  1;
    if (ta->last_updated > tb->last_updated) return -1;
    return strcmp(ta->name, tb->name);
}
static int cmp_title_name_asc(const void *a, const void *b) {
    const title_entry_t *ta = a, *tb = b;
    return strcasecmp(ta->name, tb->name);
}
static void sort_titles(title_list_t *lst) {
    if (!lst || lst->count < 2 || !lst->items) return;
    int (*cmp)(const void *, const void *) = cmp_title_last_played_desc;
    const dbi_config_entry_t *e =
        dbi_config_find(&s_cfg, "General", "AppSorting");
    if (e && e->value[0]) {
        const char *s = e->value;
        while (*s) {
            while (*s == ' ' || *s == ',') s++;
            const char *tok = s;
            while (*s && *s != ',') s++;
            size_t len = (size_t)(s - tok);
            if      (len == 10 && strncasecmp(tok, "LastPlayed", 10) == 0) {
                cmp = cmp_title_last_played_desc; break;
            } else if (len == 4  && strncasecmp(tok, "Name",       4)  == 0) {
                cmp = cmp_title_name_asc;         break;
            }
            /* "InstallLocation" / "Size" — not tracked; skip to next token. */
        }
    }
    qsort(lst->items, lst->count, sizeof(lst->items[0]), cmp);
}

void ui_init(ui_state_t *st) {
    memset(st, 0, sizeof *st);
    st->screen = UI_SCREEN_MAIN;
    sys_info_refresh();

    /* Load cached blawar/titledb versions.txt if present. Empty cache is
     * fine — Apps screen will just skip the newer-patch annotation. */
    if (R_SUCCEEDED(titledb_load_cache(&s_titledb)) && s_titledb.count > 0) {
        s_titledb_loaded = true;
        log_event("ui: titledb cache loaded (%zu entries)", s_titledb.count);
    }

    /* Pre-load dbi.config so [MainMenu] visibility + [General] behaviour
     * flags (Autorepeat, MoveDownAfterX, BrowseAppsFromFiles, …) apply
     * from the first frame rather than after the user opens Settings.
     * Also rebinds the daily log file to [General]/LogsFolder and builds
     * the runtime main menu with [Local sources] shortcuts merged in. */
    load_config();

    ui_set_status(st, "ready");
}

static void on_install_progress(const char *phase, uint64_t done, uint64_t total, void *ctx) {
    ui_state_t *st = (ui_state_t *)ctx;
    double pct = total ? (100.0 * (double)done / (double)total) : 0.0;
    snprintf(s_progress, sizeof s_progress, "%s  %5.1f%%  (%llu/%llu B)",
             phase, pct, (unsigned long long)done, (unsigned long long)total);
    if (st) ui_set_status(st, "%s", s_progress);
}

/* Read [Install]/<key>=true|false with a typed default. Absent key → default. */
static bool cfg_install_bool(const char *key, bool default_val) {
    const dbi_config_entry_t *e = dbi_config_find(&s_cfg, "Install", key);
    if (!e || !e->value[0]) return default_val;
    if (strcasecmp(e->value, "true")  == 0) return true;
    if (strcasecmp(e->value, "false") == 0) return false;
    return default_val;
}

static void run_install(ui_state_t *st, const install_source_t *src, const char *nsp_name) {
    pfs0_t p = {0};
    Result rc = install_fetch_pfs0(src, nsp_name, &p, s_pfs0_hdr_buf, sizeof s_pfs0_hdr_buf);
    if (R_FAILED(rc)) { ui_set_status(st, "PFS0 header err 0x%08x", rc); return; }
    install_opts_t opts = {
        .cb          = on_install_progress,
        .ctx         = st,
        .storage     = NcmStorageId_SdCard,
        .applet_mode = s_applet_mode,
        .enable_nsz  = cfg_install_bool("EnableNSZ",  true),
        .create_lfs  = cfg_install_bool("CreateLFS",  false),
    };
    st->screen = UI_SCREEN_INSTALL;
    ui_set_status(st, "Installing %s (%zu files)", nsp_name, p.num_files);
    log_event("install begin: %s (%zu files)", nsp_name, p.num_files);
    rc = install_nsp(nsp_name, &p, src, &opts);
    pfs0_free(&p);
    if (R_FAILED(rc)) {
        ui_set_status(st, "install failed 0x%08x", rc);
        log_linef("install FAIL: %s rc=0x%08x", nsp_name, rc);
    } else {
        ui_set_status(st, "install OK: %s", nsp_name);
        log_event("install OK: %s", nsp_name);
    }
}

static void split_names(const char *buf, size_t len) {
    s_usb_names_cnt = 0;
    size_t off = 0;
    while (off < len && s_usb_names_cnt < (int)(sizeof s_usb_names / sizeof s_usb_names[0])) {
        size_t e = off;
        while (e < len && buf[e] != '\n') e++;
        size_t l = e - off;
        if (l > 0 && l < sizeof s_usb_names[0]) {
            memcpy(s_usb_names[s_usb_names_cnt], buf + off, l);
            s_usb_names[s_usb_names_cnt][l] = 0;
            s_usb_names_cnt++;
        }
        off = e + 1;
    }
}

/* -- drawing primitives --------------------------------------------------- */

/* Box-drawing glyphs — UTF-8 encodings of U+2500..U+2524. These are the
 * same single-line glyphs the upstream 887-ru chrome picks from the
 * `{double, single}` pairs at DAT_71008aee38..aeea0 when its style flag
 * (param_5) is 0. FUN_71000d7bf0 (outer box) always single-line here;
 * FUN_71000d80b0 (hrule) flips to end-caps (├ ┤) when param_5 is set. */
#define BOX_H   "\xe2\x94\x80"  /* ─  U+2500  aee80 (single hrule)        */
#define BOX_V   "\xe2\x94\x82"  /* │  U+2502  aee90 (single vrule)        */
#define BOX_TL  "\xe2\x94\x8c"  /* ┌  U+250C  aee40 (single top-left)     */
#define BOX_TR  "\xe2\x94\x90"  /* ┐  U+2510  aee50 (single top-right)    */
#define BOX_BL  "\xe2\x94\x94"  /* └  U+2514  aee60 (single bottom-left)  */
#define BOX_BR  "\xe2\x94\x98"  /* ┘  U+2518  aee70 (single bottom-right) */
#define BOX_LTEE "\xe2\x94\x9c" /* ├  U+251C  aee98 (hrule left end-cap)  */
#define BOX_RTEE "\xe2\x94\xa4" /* ┤  U+2524  aeea0 (hrule right end-cap) */

/* Outer full-screen box — port of FUN_71000d7bf0 @ 0x71000d7bf0, single-line
 * mode (param_5=0). Upstream `w<2 || h<2` early-out preserved verbatim. */
static void draw_box(int x, int y, int w, int h) {
    if (w < 2 || h < 2) return;
    fputs(CSI_AMBER, stdout);
    ui_goto(y + 1, x + 1);
    fputs(BOX_TL, stdout);
    for (int i = 0; i < w - 2; i++) fputs(BOX_H, stdout);
    fputs(BOX_TR, stdout);
    for (int r = 1; r < h - 1; r++) {
        ui_goto(y + 1 + r, x + 1);       fputs(BOX_V, stdout);
        ui_goto(y + 1 + r, x + w);       fputs(BOX_V, stdout);
    }
    ui_goto(y + h, x + 1);
    fputs(BOX_BL, stdout);
    for (int i = 0; i < w - 2; i++) fputs(BOX_H, stdout);
    fputs(BOX_BR, stdout);
    fputs(CSI_RESET, stdout);
}

/* Horizontal rule at (x, y) of width w — port of FUN_71000d80b0. When
 * `caps` is true (param_5=1 in upstream), left and right cells use
 * tee glyphs (├ ┤) to connect with the outer box sides. */
static void draw_hrule(int x, int y, int w, bool caps) {
    if (w < 2) return;
    fputs(CSI_AMBER, stdout);
    ui_goto(y + 1, x + 1);
    fputs(caps ? BOX_LTEE : BOX_H, stdout);
    for (int i = 0; i < w - 2; i++) fputs(BOX_H, stdout);
    fputs(caps ? BOX_RTEE : BOX_H, stdout);
    fputs(CSI_RESET, stdout);
}

/* UTF-8 codepoint counter — ignores continuation bytes (10xxxxxx).
 * Needed because fork strings contain em-dashes, degree signs, and
 * box glyphs; byte-length strlen() would miscompute centering cols. */
static int utf8_cells(const char *s) {
    int n = 0;
    for (; *s; s++) if ((((unsigned char)*s) & 0xc0) != 0x80) n++;
    return n;
}

/* Paint raw text at (col, row) — port of FUN_71000d7520 (CUP + emit).
 * No surrounding padding; overwrites any glyphs already at that cell. */
static void paint_text_at(int row, int col, const char *text) {
    ui_goto(row + 1, col + 1);
    fputs(text, stdout);
}

/* Centered raw text — port of FUN_71000dc2a0. Column = (80 - cells)/2,
 * fallback to col 40 when string is empty (matches upstream exactly). */
static void paint_centered(int row, const char *text) {
    int n = utf8_cells(text);
    int col = n > 0 ? (UI_COLS - n) / 2 : 40;
    fputs(CSI_AMBER, stdout);
    paint_text_at(row, col, text);
    fputs(CSI_RESET, stdout);
}

/* Right-aligned raw text — port of the `FUN_71000d7520(w-2-len, y, ...)`
 * call at the end of FUN_7100655a10. */
static void paint_right(int row, const char *text) {
    int n = utf8_cells(text);
    int col = UI_COLS - 2 - n;
    if (col < 2) col = 2;
    fputs(CSI_AMBER, stdout);
    paint_text_at(row, col, text);
    fputs(CSI_RESET, stdout);
}

/* Selection bar — matches DBI 791/887-ru pattern: selected row inverts
 * the foreground across a fixed 72-col block starting at `col` (=6 on
 * the main menu). Unselected rows emit the plain label in amber. */
static void draw_menu_row(int row, int col, bool selected, const char *s) {
    ui_goto(row, col);
    if (selected) {
        fputs(CSI_INVERT, stdout);
        fputs(CSI_AMBER, stdout);
        int max_w = 72;
        int n = 0;
        for (const char *p = s; *p && n < max_w; p++, n++) fputc(*p, stdout);
        for (; n < max_w; n++) fputc(' ', stdout);
    } else {
        fputs(CSI_AMBER, stdout);
        fputs(s, stdout);
    }
    fputs(CSI_RESET, stdout);
}

/* -- status bars ---------------------------------------------------------- */

/* DBI chrome painter — port of FUN_7100655a10 @ 0x7100655a10. Call order
 * and row indices match the upstream decomp byte-for-byte on an 80×45
 * canvas (ctx+0xa0=80, ctx+0xa8=45):
 *   1. framebuffer fill → blue bg
 *   2. FUN_71000d7bf0(0, 0, 80, 45, 0)    — full single-line outer box
 *   3. FUN_71000d80b0(0, 4, 80, 0, 1)     — top hrule, end-caps ├ ┤
 *   4. FUN_71000dc2a0(2, padded_title)    — centered title row 2
 *   5. FUN_71000d80b0(0, 40, 80, 0, 1)    — bottom hrule, end-caps
 *   6. FUN_71000dc2a0(40, bottom_title)   — centered storage row 40 (over hrule)
 *   7. FUN_71000dc2a0(42, help)           — centered help row 42
 *   8. FUN_71000d7520(80-2-len, 40, right_top, 0) — right status row 40
 * Rows are 0-indexed upstream; paint_* helpers handle the +1 CUP offset. */
static void draw_chrome(ui_state_t *st) {
    /* Full bg fill — applet-mode uses black (\x1b[40m), title-mode uses
     * blue-bold (\x1b[44;1m); matches FUN_7100155ac0/b30 flag branch. */
    fputs(ui_bg(), stdout);
    fputs(CSI_CLEAR, stdout);

    /* (2) outer box (0,0)..(79,44) */
    draw_box(0, 0, UI_COLS, UI_ROWS);

    /* (3) top hrule at row 4, with end-caps — connects to box sides. */
    draw_hrule(0, 4, UI_COLS, true);

    /* (4) centered title row 2. Upstream builds `title` by concatenating
     * ctx+0x08 and ctx+0x10 then padding to w-4; we approximate with a
     * single em-dash-joined label. */
    const char *stitle = screen_title(st->screen);
    char title[96];
    snprintf(title, sizeof title,
             "DBI %s \xe2\x80\x94 %s \xe2\x80\x94 FW %s",
             s_sys.dbi_version, stitle, s_sys.fw_version);
    paint_centered(2, title);

    /* (5) bottom hrule at row 40 (h-5), with end-caps. */
    draw_hrule(0, UI_ROWS - 5, UI_COLS, true);

    /* (6) centered storage row 40 (overwrites middle of hrule, same as upstream). */
    char sd[80];
    snprintf(sd, sizeof sd,
             " SD: %.2f/%.0f GB \xe2\x80\x94 NAND: %.2f/%.0f GB ",
             s_sys.sd_used_gb, s_sys.sd_total_gb,
             s_sys.nand_used_gb, s_sys.nand_total_gb);
    paint_centered(UI_ROWS - 5, sd);

    /* (8) right-aligned status row 40 (overwrites right end of hrule). */
    char rt[32];
    snprintf(rt, sizeof rt, " %d\xc2\xb0""C %u%% ", s_sys.temp_c, s_sys.battery);
    paint_right(UI_ROWS - 5, rt);

    /* [General]/TimeShow — left-aligned status row 40 (symmetric with the
     * temp/battery paint_right above, overwrites left end of hrule).
     * [General]/TimeShowSeconds selects HH:MM:SS vs HH:MM; both formats
     * verified against DBI 887-ru string table. */
    if (s_time_show) {
        time_t now_raw = time(NULL);
        struct tm now_tm;
        localtime_r(&now_raw, &now_tm);
        char tm[16];
        if (s_time_show_seconds)
            snprintf(tm, sizeof tm, " %02d:%02d:%02d ",
                     now_tm.tm_hour, now_tm.tm_min, now_tm.tm_sec);
        else
            snprintf(tm, sizeof tm, " %02d:%02d ",
                     now_tm.tm_hour, now_tm.tm_min);
        fputs(CSI_AMBER, stdout);
        paint_text_at(UI_ROWS - 5, 2, tm);
        fputs(CSI_RESET, stdout);
    }

    /* (7) help row 42 (h-3). */
    const char *footer = st->screen == UI_SCREEN_MAIN
        ? " (A) select  (B) back  (+) exit "
        : " (A) enter  (B) back  (+) exit ";
    paint_centered(UI_ROWS - 3, footer);

    /* Transient status line inside the box at row 43 (h-2). Non-upstream —
     * upstream leaves this row blank (just the box vsides); we use it to
     * surface `st->status` strings from the body screens without stealing
     * a body row. */
    if (st->status[0]) {
        ui_goto(UI_ROWS - 2 + 1, 3);
        fputs(ui_bg(), stdout);
        printf(CSI_DIM "%.74s" CSI_RESET, st->status);
    }
}

/* -- browse-sd path helpers ----------------------------------------------- */

static const char *s_browse_sd_lines[260];
static char        s_browse_sd_buf[260][128];

/* Generic path helpers — work for any devoptab mount ("sdmc:/", "bis-system:/",
 * "bis-user:/", etc). Prefix length = (colon offset) + 2 (one for ':', one for
 * the following '/'). Used by Browse SD, Browse System NAND, Browse User NAND. */
static int sd_prefix_len(const char *p) {
    const char *c = strchr(p, ':');
    if (!c) return 0;
    return (int)(c - p) + 2;
}

static bool sd_is_root(const char *p) {
    int n = sd_prefix_len(p);
    return n > 0 && (int)strlen(p) == n;
}

static void sd_go_up(char *path) {
    int prefix = sd_prefix_len(path);
    if (prefix == 0) return;
    size_t l = strlen(path);
    while ((int)l > prefix && path[l-1] == '/') path[--l] = 0;
    char *slash = strrchr(path, '/');
    if (!slash) return;
    if (slash <= path + prefix - 1) path[prefix] = 0;
    else                            *slash        = 0;
}

static void sd_enter_dir(char *path, size_t cap, const char *name) {
    size_t l = strlen(path);
    if (l == 0 || l >= cap - 1) return;
    bool sep = (path[l-1] == '/');
    snprintf(path + l, cap - l, sep ? "%s" : "/%s", name);
}

static int sd_display_total(const ui_state_t *st) {
    int base = (int)s_sdlist.count;
    return sd_is_root(st->current_dir) ? base : base + 1;
}

static void rebuild_sd_lines(const ui_state_t *st) {
    int off = 0;
    if (!sd_is_root(st->current_dir)) {
        snprintf(s_browse_sd_buf[0], sizeof s_browse_sd_buf[0],
                 "%-60s  <UP>", "..");
        s_browse_sd_lines[0] = s_browse_sd_buf[0];
        off = 1;
    }
    size_t n = s_sdlist.count;
    if (n > 256) n = 256;
    for (size_t i = 0; i < n; i++) {
        const fs_scan_entry_t *e = &s_sdlist.items[i];
        if (e->is_dir) {
            snprintf(s_browse_sd_buf[i + off], sizeof s_browse_sd_buf[i + off],
                     "%-60s  [DIR]", e->name);
        } else {
            snprintf(s_browse_sd_buf[i + off], sizeof s_browse_sd_buf[i + off],
                     "%-60s  %7.2f MB", e->name, e->size / (1024.0 * 1024.0));
        }
        s_browse_sd_lines[i + off] = s_browse_sd_buf[i + off];
    }
}

static const char *s_apps_lines[256];
static char        s_apps_buf[256][128];

static void rebuild_apps_lines(void) {
    size_t n = s_titles.count > 256 ? 256 : s_titles.count;
    for (size_t i = 0; i < n; i++) {
        const title_entry_t *t = &s_titles.items[i];

        /* Combined-NSP tag: "[B+U+D3]" etc. matches upstream ShowCombinedNSP.
         * If titledb reports a newer patch version than what's installed,
         * append a trailing "!" to flag an update — upstream's
         * HighlightUpdates behaviour. */
        /* Upstream `[Disabled titles to check for updates]` section lets
         * the user skip specific TIDs from the HighlightUpdates scan. Keys
         * are uppercased title IDs (case-insensitive via dbi_config_find).
         * `BlockAllTitlesWithLFS=true` additionally blocks every title with
         * an Atmosphere layered-FS folder — detected by stat'ing the
         * `sdmc:/atmosphere/contents/<TID>/` path that [Install]/CreateLFS
         * populates. */
        char dis_key[17];
        snprintf(dis_key, sizeof dis_key, "%016llX",
                 (unsigned long long)t->app_id);
        const dbi_config_entry_t *dis =
            dbi_config_find(&s_cfg, "Disabled titles to check for updates",
                            dis_key);
        bool disabled = dis && dis->value[0] &&
                        strcasecmp(dis->value, "false") != 0;

        if (!disabled) {
            const dbi_config_entry_t *ball =
                dbi_config_find(&s_cfg,
                                "Disabled titles to check for updates",
                                "BlockAllTitlesWithLFS");
            bool block_lfs = ball && ball->value[0] &&
                             strcasecmp(ball->value, "true") == 0;
            if (block_lfs) {
                char atm_path[64];
                snprintf(atm_path, sizeof atm_path,
                         "sdmc:/atmosphere/contents/%016llx",
                         (unsigned long long)t->app_id);
                struct stat sb;
                if (stat(atm_path, &sb) == 0 && S_ISDIR(sb.st_mode))
                    disabled = true;
            }
        }

        /* Upstream `[General]/HighlightUpdates=false` kills the whole
         * scan — cheaper than disabling per-TID when the user just
         * doesn't want the feature. Default true (upstream default). */
        const dbi_config_entry_t *hu =
            dbi_config_find(&s_cfg, "General", "HighlightUpdates");
        bool highlight_on = !hu || !hu->value[0] ||
                            strcasecmp(hu->value, "false") != 0;

        bool newer = highlight_on && !disabled && s_titledb_loaded &&
                     titledb_has_newer_patch(&s_titledb, t->app_id,
                                             t->patch_version);

        char tag[14];
        if (t->has_base || t->has_patch || t->dlc_count || newer) {
            char parts[12] = {0};
            size_t p = 0;
            if (t->has_base  && p + 1 < sizeof parts) parts[p++] = 'B';
            if (t->has_patch && p + 1 < sizeof parts) parts[p++] = 'U';
            if (t->dlc_count && p + 1 < sizeof parts) parts[p++] = 'D';
            parts[p] = 0;

            const char *upd = newer ? "!" : "";
            if (t->dlc_count > 1)
                snprintf(tag, sizeof tag, "[%s%u]%s", parts, t->dlc_count, upd);
            else
                snprintf(tag, sizeof tag, "[%s]%s", parts, upd);
        } else {
            tag[0] = 0;
        }

        char name[33];
        char author[21];
        /* Upstream `[Title name override]` section: key = uppercased title
         * ID, value = user-specified display name. dbi_config_find() is
         * case-insensitive, so either case works for matching. */
        char tid_key[17];
        snprintf(tid_key, sizeof tid_key, "%016llX",
                 (unsigned long long)t->app_id);
        const dbi_config_entry_t *ovr =
            dbi_config_find(&s_cfg, "Title name override", tid_key);
        if (ovr && ovr->value[0])
            snprintf(name, sizeof name, "%.32s", ovr->value);
        else
            snprintf(name, sizeof name, "%.32s", t->name);
        snprintf(author, sizeof author, "%.20s", t->author);
        snprintf(s_apps_buf[i], sizeof s_apps_buf[i],
                 "%016llX %-9s %-32s  %s",
                 (unsigned long long)t->app_id,
                 tag, name, author);
        s_apps_lines[i] = s_apps_buf[i];
    }
}

static const char *s_usb_lines_p[64];

static void rebuild_usb_lines(void) {
    for (int i = 0; i < s_usb_names_cnt; i++)
        s_usb_lines_p[i] = s_usb_names[i];
}

/* -- screen-specific dynamic painters ------------------------------------- */

/* Main menu painter — stride +1 per entry, spacers add a single empty
 * row. Matches the upstream 791-ru / 887-ru screenshot: all menu items
 * stack tightly with a 1-row gap between groups (Browse/Install →
 * Apps/Tools → Tickets/Saves → MTP/FTP/HTTP → Log/Settings/Quit). */
static void paint_main_menu(ui_state_t *st) {
    if (s_menu_n == 0) build_runtime_menu();
    int row = 6;
    const int col = 6;
    for (int i = 0; i < s_menu_n; i++) {
        if (menu_rt_is_spacer(i)) { row += 1; continue; }
        if (menu_rt_is_hidden(i)) continue;
        draw_menu_row(row, col, i == st->menu_sel, menu_label(i));
        row += 1;
        if (row >= 40) break;
    }
}

/* Common helper for list-style screens: paint the dynamic header (title
 * row 3 col 3) and then emit the scrollable list in rows 6..40.
 * Columns match DBI 791-ru simulator traces (paint_trace_*.tsv). */
static void paint_list_body(const char *const *lines, int n, int sel,
                            const char *header_cyan, const char *empty_hint) {
    if (header_cyan) {
        ui_goto(3, 3);
        printf(CSI_CYAN "%s" CSI_RESET, header_cyan);
    }
    int row = 6;
    if (n == 0) {
        ui_goto(row, 6);
        printf(CSI_DIM "%s" CSI_RESET, empty_hint ? empty_hint : "(empty)");
        return;
    }
    int start = 0;
    int visible = 35;
    if (sel >= visible) start = sel - (visible - 1);
    int end = start + visible;
    if (end > n) end = n;
    for (int i = start; i < end; i++) {
        draw_menu_row(row, 6, i == sel, lines[i]);
        row++;
        if (row >= 41) break;
    }
}

static void paint_browse_sd(ui_state_t *st) {
    rebuild_sd_lines(st);
    /* Label derived from the mount prefix so the same painter drives SD
     * card and both BIS partitions. Falls back to "path" for any future
     * mounts we might add (e.g. MTP custom storages). */
    const char *label =
        strncmp(st->current_dir, "sdmc:/", 6) == 0        ? "SD" :
        strncmp(st->current_dir, "bis-system:/", 12) == 0 ? "System NAND" :
        strncmp(st->current_dir, "bis-user:/", 10) == 0   ? "User NAND"   :
        "path";
    char hdr[600];
    snprintf(hdr, sizeof hdr, "%s: %s", label, st->current_dir);
    paint_list_body(s_browse_sd_lines, sd_display_total(st), st->sd_sel,
                    hdr, "(empty directory)");
}

static void paint_usb_host(ui_state_t *st) {
    rebuild_usb_lines();
    const char *hdr = dbi0_is_inited()
        ? "DBIbackend: USB open (VID 057E/PID 3000)"
        : "DBIbackend: press (A) to open USB";
    paint_list_body(s_usb_lines_p, s_usb_names_cnt, st->menu_sel,
                    hdr, "Awaiting PC side. Run dbibackend.py on host.");
}

static void paint_browse_apps(ui_state_t *st) {
    rebuild_apps_lines();
    paint_list_body(s_apps_lines, (int)s_titles.count, st->app_sel,
                    NULL, /* static cell at row 3 already painted */
                    "Press (A) to enumerate. hbmenu needs ns: access (forwarder).");
}

static const char *nsp_meta_label(nsp_meta_type_t t) {
    switch (t) {
        case NSP_META_APPLICATION:  return "Application (Base)";
        case NSP_META_PATCH:        return "Patch (Update)";
        case NSP_META_ADDONCONTENT: return "AddOnContent (DLC)";
        default:                    return "unknown";
    }
}

static void paint_info(ui_state_t *st) {
    /* Target path on row 5 col 4 (dimmed). Summary block rows 7..11 when
     * nsp_info probe succeeded, PFS0 listing still painted below at row 13+. */
    ui_goto(5, 4);
    printf(CSI_DIM "%.74s" CSI_RESET, st->target_path);
    if (!s_info_pfs0_ready) {
        ui_goto(7, 4); printf(CSI_RED "PFS0 parse failed" CSI_RESET);
        return;
    }

    int row = 7;
    if (s_info_meta_ready) {
        const nsp_info_t *m = &s_info_meta;
        ui_goto(row++, 4);
        if (m->title_id_known) {
            printf(CSI_WHITE "Title id:    %016llx  (%s)" CSI_RESET,
                   (unsigned long long)m->title_id,
                   nsp_meta_label(m->meta_type));
        } else {
            printf(CSI_DIM   "Title id:    unknown (no ticket embedded)" CSI_RESET);
        }
        ui_goto(row++, 4);
        if (m->title_id_known && m->base_title_id != m->title_id) {
            printf(CSI_WHITE "Base app:    %016llx" CSI_RESET,
                   (unsigned long long)m->base_title_id);
        } else {
            printf(CSI_DIM   "Base app:    -" CSI_RESET);
        }
        ui_goto(row++, 4);
        printf(CSI_WHITE "Entries:     %zu   (NCA %zu · meta %zu · tik %zu · cert %zu)"
               CSI_RESET,
               m->total_entries, m->num_ncas, m->num_cnmt_ncas,
               m->num_tiks, m->num_certs);
        ui_goto(row++, 4);
        double mib = (double)m->total_bytes / (1024.0 * 1024.0);
        printf(CSI_WHITE "Total size:  %.2f MiB%s" CSI_RESET,
               mib, m->is_compressed ? "  (NSZ compressed)" : "");
        if (m->has_meta_nca) {
            ui_goto(row++, 4);
            printf(CSI_DIM   "Meta NCA:    %.60s" CSI_RESET, m->meta_nca_name);
        }
    } else {
        ui_goto(row++, 4);
        printf(CSI_WHITE "PFS0 entries: %zu" CSI_RESET, s_info_pfs0.num_files);
    }

    /* Raw PFS0 listing — cap to screen space. */
    row = row < 13 ? 13 : row + 1;
    size_t lim = s_info_pfs0.num_files;
    int max_rows = 41 - row;
    if (max_rows < 0) max_rows = 0;
    if ((int)lim > max_rows) lim = (size_t)max_rows;
    for (size_t i = 0; i < lim && row < 41; i++, row++) {
        ui_goto(row, 4);
        printf("  %-56s  %9llu B",
               s_info_pfs0.files[i].name,
               (unsigned long long)s_info_pfs0.files[i].size);
    }
}

/* Network — live libnx nifm query. Rows below the static chrome get
 * overlaid with real IP / link-state / wifi info. Matches upstream 887
 * Network tab structure (dynamic rows fed by the adapter-list walker
 * described in FINDINGS Part 21). `Remote SFTP` / `RTSP Media` rows are
 * appended as static hints until the fork's backend CLI exposes them. */
static bool s_nifm_inited = false;
static bool s_net_sockets_inited = false;
static bool s_net_time_inited    = false;
static char s_ntp_last_msg[120] = "(press A to sync NTP)";

static void ensure_nifm(void) {
    if (s_nifm_inited) return;
    if (R_SUCCEEDED(nifmInitialize(NifmServiceType_User))) s_nifm_inited = true;
}

/* Lazy init for NTP sync — socket+time services only brought up when the
 * user actually triggers the sync. Stays up once initialized; libnx cleans
 * them in the exit epilogue. */
static bool ensure_net_for_ntp(void) {
    if (!s_net_sockets_inited) {
        if (R_FAILED(socketInitializeDefault())) return false;
        s_net_sockets_inited = true;
    }
    if (!s_net_time_inited) {
        if (R_FAILED(timeInitialize())) return false;
        s_net_time_inited = true;
    }
    return true;
}

static void do_ntp_sync(ui_state_t *st) {
    if (!ensure_net_for_ntp()) {
        snprintf(s_ntp_last_msg, sizeof s_ntp_last_msg,
                 "NTP: socket/time service init failed");
        ui_set_status(st, "%s", s_ntp_last_msg);
        return;
    }
    char err[96] = { 0 };
    Result rc = ntp_sync_system_time(err, sizeof err);
    if (R_SUCCEEDED(rc)) {
        snprintf(s_ntp_last_msg, sizeof s_ntp_last_msg,
                 "NTP: synced OK");
    } else {
        snprintf(s_ntp_last_msg, sizeof s_ntp_last_msg,
                 "NTP: %s", err[0] ? err : "sync failed");
    }
    ui_set_status(st, "%s", s_ntp_last_msg);
}

static void paint_network(ui_state_t *st) {
    (void)st;
    ensure_nifm();

    u32 ip = 0;
    Result rc_ip = s_nifm_inited ? nifmGetCurrentIpAddress(&ip) : 1;
    NifmInternetConnectionType ctype = 0;
    u32 cstrength = 0;
    NifmInternetConnectionStatus cstatus = 0;
    Result rc_link = s_nifm_inited
        ? nifmGetInternetConnectionStatus(&ctype, &cstrength, &cstatus)
        : 1;
    bool wifi_on = false;
    if (s_nifm_inited) nifmIsWirelessCommunicationEnabled(&wifi_on);

    int row = 7;
    ui_goto(row++, 4);
    if (R_SUCCEEDED(rc_ip) && ip) {
        printf(CSI_WHITE "IP address:    %u.%u.%u.%u" CSI_RESET,
               (unsigned)(ip & 0xff), (unsigned)((ip >> 8) & 0xff),
               (unsigned)((ip >> 16) & 0xff), (unsigned)((ip >> 24) & 0xff));
    } else {
        printf(CSI_RED "IP address:    not connected" CSI_RESET);
    }

    ui_goto(row++, 4);
    const char *status_str;
    switch (cstatus) {
        case NifmInternetConnectionStatus_ConnectingUnknown1: status_str = "connecting…"; break;
        case NifmInternetConnectionStatus_ConnectingUnknown2: status_str = "handshake…"; break;
        case NifmInternetConnectionStatus_ConnectingUnknown3: status_str = "DHCP…"; break;
        case NifmInternetConnectionStatus_ConnectingUnknown4: status_str = "final setup…"; break;
        case NifmInternetConnectionStatus_Connected:          status_str = "connected"; break;
        default:                                              status_str = "unknown"; break;
    }
    if (R_SUCCEEDED(rc_link)) {
        const char *type_str = (ctype == NifmInternetConnectionType_WiFi)     ? "Wi-Fi"
                             : (ctype == NifmInternetConnectionType_Ethernet) ? "Ethernet"
                             : "other";
        printf(CSI_WHITE "Link:          %s · %s · %u%%" CSI_RESET,
               type_str, status_str, (unsigned)cstrength);
    } else {
        printf(CSI_RED "Link:          query failed" CSI_RESET);
    }

    ui_goto(row++, 4);
    printf(CSI_WHITE "Wireless:      %s" CSI_RESET, wifi_on ? "enabled" : "disabled");

    /* New 887 network sub-entries — fork has no backend adapter list yet,
     * so surface them as placeholders per Part 40 coord-diff note. */
    ui_goto(row++ + 1, 4);
    fputs(CSI_DIM "Install sources (dynamic, populated by CLI adapter list):"
          CSI_RESET, stdout);
    ui_goto(row++, 6);
    fputs(CSI_DIM "· Remote SFTP    — configure via dbi.config [Network sources]"
          CSI_RESET, stdout);
    ui_goto(row++, 6);
    fputs(CSI_DIM "· RTSP Media     — configure via dbi.config [Network sources]"
          CSI_RESET, stdout);
    ui_goto(row++, 6);
    fputs(CSI_DIM "· HTTP (curl)    — built-in, see [General] TitleDB / VersionsURL"
          CSI_RESET, stdout);

    ui_goto(row++ + 1, 4);
    printf(CSI_WHITE "NTP sync:      press (A) — %.60s" CSI_RESET,
           s_ntp_last_msg);

    /* HTTP install hint: configured via `[Network sources]/InstallURL`.
     * The URL is read as-is (http:// or https:// with a full path to an
     * .nsp/.nsz/.xci/.xcz). Press (Y) to install. */
    const dbi_config_entry_t *inst =
        dbi_config_find(&s_cfg, "Network sources", "InstallURL");
    ui_goto(row++ + 1, 4);
    if (inst && inst->value[0]) {
        printf(CSI_WHITE "HTTP install:  press (Y) — %.52s" CSI_RESET, inst->value);
    } else {
        printf(CSI_DIM
               "HTTP install:  set [Network sources]/InstallURL in dbi.config"
               CSI_RESET);
    }
}

static void paint_install(ui_state_t *st) {
    /* Layout: "Installing" static at row 5 col 4 (from INSTALL_CELLS),
     * source name (target basename) row 7 col 4, live progress status
     * row 9 col 4. Matches paint_trace_install.tsv. */
    const char *src = st->target_path[0] ? st->target_path : "(no source)";
    const char *base = strrchr(src, '/');
    ui_goto(7, 4);
    printf(CSI_WHITE "%s" CSI_RESET, base ? base + 1 : src);
    ui_goto(9, 4);
    printf(CSI_WHITE "%s" CSI_RESET, s_progress[0] ? s_progress : "idle");
}

/* -- extended backend loaders -------------------------------------------- */

/* Rebuild the runtime main menu by copying UI_MAIN_MENU and inserting
 * [Local sources] rows — each `<Name>=<Path>` becomes a Browse-SD shortcut
 * — before the "Activity log" row. If [Local sources] is absent the
 * runtime menu is byte-identical to the static one. */
static void build_runtime_menu(void) {
    s_menu_n = 0;
    int insert_before = -1;
    for (int i = 0; i < UI_MAIN_MENU_N; i++) {
        if (UI_MAIN_MENU[i].internal_id &&
            strcasecmp(UI_MAIN_MENU[i].internal_id, "LogManager") == 0) {
            insert_before = i;
            break;
        }
    }

    int dyn_injected = 0;
    for (int i = 0; i < UI_MAIN_MENU_N && s_menu_n < MENU_MAX_RUNTIME; i++) {
        if (i == insert_before && !dyn_injected) {
            /* Inject one blank spacer before the dynamic group (matches the
             * upstream separator style between menu groups). */
            bool any = false;
            for (size_t j = 0; j < s_cfg.count; j++) {
                if (strcasecmp(s_cfg.entries[j].section, "Local sources") == 0 &&
                    s_cfg.entries[j].value[0]) { any = true; break; }
            }
            if (any && s_menu_n < MENU_MAX_RUNTIME) {
                menu_rt_t *sp = &s_menu[s_menu_n++];
                sp->screen_id = UI_SCREEN_MAIN;
                sp->internal_id = NULL;
                sp->ux_label_static = NULL;
                sp->ux_label_dyn[0] = 0;
                sp->sd_path[0] = 0;
            }
            for (size_t j = 0; j < s_cfg.count &&
                               s_menu_n < MENU_MAX_RUNTIME; j++) {
                const dbi_config_entry_t *e = &s_cfg.entries[j];
                if (strcasecmp(e->section, "Local sources") != 0) continue;
                if (!e->key[0] || !e->value[0]) continue;
                menu_rt_t *m = &s_menu[s_menu_n++];
                m->screen_id = UI_SCREEN_BROWSE_SD;
                m->internal_id = NULL;
                m->ux_label_static = NULL;
                snprintf(m->ux_label_dyn, sizeof m->ux_label_dyn,
                         "%s", e->key);
                snprintf(m->sd_path, sizeof m->sd_path,
                         "%s", e->value);
            }
            dyn_injected = 1;
        }
        menu_rt_t *m = &s_menu[s_menu_n++];
        m->screen_id       = UI_MAIN_MENU[i].screen_id;
        m->internal_id     = UI_MAIN_MENU[i].internal_id;
        m->ux_label_static = UI_MAIN_MENU[i].ux_label;
        m->ux_label_dyn[0] = 0;
        m->sd_path[0]      = 0;
    }
}

static const char *menu_label(int i) {
    if (i < 0 || i >= s_menu_n) return NULL;
    return s_menu[i].ux_label_static ? s_menu[i].ux_label_static
                                     : s_menu[i].ux_label_dyn;
}

static bool menu_rt_is_spacer(int i) {
    if (i < 0 || i >= s_menu_n) return true;
    return menu_label(i) == NULL ||
           (s_menu[i].ux_label_static == NULL && s_menu[i].ux_label_dyn[0] == 0);
}

static bool menu_rt_is_hidden(int i) {
    if (i < 0 || i >= s_menu_n) return false;
    const char *id = s_menu[i].internal_id;
    if (!id || !*id) return false;   /* dynamic rows can't be hidden */
    if (strcasecmp(id, "LogManager") == 0 ||
        strcasecmp(id, "Settings")   == 0 ||
        strcasecmp(id, "Exit")       == 0) return false;
    const dbi_config_entry_t *e =
        dbi_config_find(&s_cfg, "MainMenu", id);
    return e && strcasecmp(e->value, "false") == 0;
}

static void load_config(void) {
    dbi_config_load(&s_cfg, "sdmc:/switch/DBI/dbi.config");
    /* Rebind the daily log file to [General]/LogsFolder if the user
     * overrode it. log_init already opened a file under the default
     * path at boot; this is a no-op when the folder matches. */
    char logs_folder[160];
    resolve_folder("LogsFolder", "sdmc:/switch/DBI/logs",
                   logs_folder, sizeof logs_folder);
    log_reopen_in(logs_folder);

    /* [General]/LogEvents gates routine log_event() calls. Default true
     * (upstream default) — omitting the key keeps the verbose trace. */
    const dbi_config_entry_t *le =
        dbi_config_find(&s_cfg, "General", "LogEvents");
    bool events_on = !le || !le->value[0] ||
                     strcasecmp(le->value, "false") != 0;
    log_set_events_enabled(events_on);

    /* [General]/ValidateSSL — upstream default false (Switch ships no CA
     * bundle). Propagated to http.c so every libcurl handle picks it up. */
    const dbi_config_entry_t *vs =
        dbi_config_find(&s_cfg, "General", "ValidateSSL");
    bool validate_ssl = vs && vs->value[0] &&
                        strcasecmp(vs->value, "true") == 0;
    http_set_validate_ssl(validate_ssl);

    /* [General]/CustomDNS — comma-separated resolver override handed to
     * libcurl (CURLOPT_DNS_SERVERS). Empty / missing leaves system DNS. */
    const dbi_config_entry_t *dns =
        dbi_config_find(&s_cfg, "General", "CustomDNS");
    http_set_dns_servers(dns ? dns->value : NULL);

    /* [General]/TimeShow + [General]/TimeShowSeconds — row-40 status clock.
     * Upstream defaults both true; only `false` disables (case-insensitive). */
    const dbi_config_entry_t *tshow =
        dbi_config_find(&s_cfg, "General", "TimeShow");
    s_time_show = !tshow || !tshow->value[0] ||
                  strcasecmp(tshow->value, "false") != 0;
    const dbi_config_entry_t *tsec =
        dbi_config_find(&s_cfg, "General", "TimeShowSeconds");
    s_time_show_seconds = !tsec || !tsec->value[0] ||
                          strcasecmp(tsec->value, "false") != 0;

    build_runtime_menu();
}

/* Known-user cache — populated alongside the saves list so
 * HideUnknownUsers filtering can tell live profiles from orphan UIDs. */
#define KNOWN_USERS_MAX 8
static AccountUid s_known_users[KNOWN_USERS_MAX];
static size_t     s_known_users_n = 0;

static void load_known_users(void) {
    s_known_users_n = 0;
    Result rc = accountInitialize(AccountServiceType_Application);
    if (R_FAILED(rc)) return;
    s32 n_out = 0;
    rc = accountListAllUsers(s_known_users, KNOWN_USERS_MAX, &n_out);
    if (R_SUCCEEDED(rc) && n_out > 0) {
        s_known_users_n = (size_t)n_out;
    }
    accountExit();
}

static bool uid_matches(const AccountUid *a, uint64_t lo, uint64_t hi) {
    return a->uid[0] == lo && a->uid[1] == hi;
}

static bool save_is_unknown_user(const saves_entry_t *e) {
    /* Device/Bcat saves have null UID — those are NOT unknown users,
     * they simply have no account attached. Only Account-type saves
     * with a UID not in the live profile list count as "unknown". */
    if (e->save_type != 1) return false;
    if (e->uid_low == 0 && e->uid_high == 0) return false;
    for (size_t i = 0; i < s_known_users_n; i++) {
        if (uid_matches(&s_known_users[i], e->uid_low, e->uid_high))
            return false;
    }
    return true;
}

static bool saves_hide_unknown(void) {
    const dbi_config_entry_t *e =
        dbi_config_find(&s_cfg, "ActivityLog", "HideUnknownUsers");
    return e && strcasecmp(e->value, "true") == 0;
}

/* [General]/SaveSorting — upstream tokens: AppLastPlayed, AppName, UserUid,
 * Size, Time (priority list). Fork honors only the first recognized token
 * it can service — AppLastPlayed/Time need per-save metadata not in
 * FsSaveDataInfo, so when they lead we fall through to natural enumeration
 * order. */
static int cmp_save_name_asc(const void *a, const void *b) {
    const saves_entry_t *sa = a, *sb = b;
    int c = strcasecmp(sa->title, sb->title);
    if (c) return c;
    /* Secondary: UID then save_id for stable grouping when titles match. */
    if (sa->uid_high != sb->uid_high) return sa->uid_high < sb->uid_high ? -1 : 1;
    if (sa->uid_low  != sb->uid_low ) return sa->uid_low  < sb->uid_low  ? -1 : 1;
    return 0;
}
static int cmp_save_size_desc(const void *a, const void *b) {
    const saves_entry_t *sa = a, *sb = b;
    if (sa->size < sb->size) return  1;
    if (sa->size > sb->size) return -1;
    return cmp_save_name_asc(a, b);
}
static int cmp_save_uid_asc(const void *a, const void *b) {
    const saves_entry_t *sa = a, *sb = b;
    if (sa->uid_high != sb->uid_high) return sa->uid_high < sb->uid_high ? -1 : 1;
    if (sa->uid_low  != sb->uid_low ) return sa->uid_low  < sb->uid_low  ? -1 : 1;
    return cmp_save_name_asc(a, b);
}
static void sort_saves(saves_list_t *lst) {
    if (!lst || lst->count < 2 || !lst->items) return;
    int (*cmp)(const void *, const void *) = NULL;
    const dbi_config_entry_t *e =
        dbi_config_find(&s_cfg, "General", "SaveSorting");
    if (e && e->value[0]) {
        const char *s = e->value;
        while (*s) {
            while (*s == ' ' || *s == ',') s++;
            const char *tok = s;
            while (*s && *s != ',') s++;
            size_t len = (size_t)(s - tok);
            if      (len == 7 && strncasecmp(tok, "AppName", 7) == 0) {
                cmp = cmp_save_name_asc; break;
            } else if (len == 4 && strncasecmp(tok, "Size",    4) == 0) {
                cmp = cmp_save_size_desc; break;
            } else if (len == 7 && strncasecmp(tok, "UserUid", 7) == 0) {
                cmp = cmp_save_uid_asc; break;
            }
            /* AppLastPlayed / Time — not tracked; advance to next token. */
        }
    }
    if (cmp) qsort(lst->items, lst->count, sizeof(lst->items[0]), cmp);
}

static void load_saves(void) {
    if (s_saves_ready) saves_free(&s_saves);
    saves_collect(&s_saves, 256);
    sort_saves(&s_saves);
    s_saves_ready = true;
    load_known_users();
    log_event("saves: loaded %zu entries (known users: %zu)",
              s_saves.count, s_known_users_n);
}

static void load_tickets(void) {
    if (s_tickets_ready) tickets_free(&s_tickets);
    tickets_collect(&s_tickets, 256);
    s_tickets_ready = true;
    log_event("tickets: common=%d personalized=%d listed=%zu",
              (int)s_tickets.common_total,
              (int)s_tickets.personalized_total,
              s_tickets.count);
}

static void load_gamecard(void) {
    gamecard_probe(&s_gc);
    s_gc_ready = true;
    if (!s_gc.inserted) {
        log_linef("gamecard: not inserted (%s)",
                  s_gc.error[0] ? s_gc.error : "n/a");
    } else if (s_gc.header_ok) {
        log_event("gamecard: HEAD ok package_id=0x%016llx rom_size=0x%02x",
                  (unsigned long long)s_gc.package_id,
                  (unsigned)s_gc.rom_size);
    } else {
        log_linef("gamecard: HEAD read FAIL (%s)",
                  s_gc.error[0] ? s_gc.error : "n/a");
    }
}

/* BIS mount helpers — upstream DBI opens the raw partition via
 * fsOpenBisFileSystem then walks it through the libnx devoptab glue
 * (fsdevMountDevice). We mount lazily on first entry and leave the
 * mount live; BIS reads are cheap and unmount is only interesting
 * on shutdown. */
static bool mount_bis(FsBisPartitionId part, const char *devname, bool *flag) {
    if (*flag) return true;
    FsFileSystem fs;
    Result rc = fsOpenBisFileSystem(&fs, part, "");
    if (R_FAILED(rc)) return false;
    if (fsdevMountDevice(devname, fs) == -1) {
        fsFsClose(&fs);
        return false;
    }
    *flag = true;
    return true;
}

static void load_bis(ui_state_t *st, FsBisPartitionId part,
                     const char *devname, bool *flag) {
    bool ok = mount_bis(part, devname, flag);
    snprintf(st->current_dir, sizeof st->current_dir, "%s:/", devname);
    if (ok) {
        fs_scan_list_dir(&s_sdlist, st->current_dir);
        browse_filter_folder_jpg(&s_sdlist);
        s_sdlist_ready = true;
        ui_set_status(st, "%s: %zu entries", st->current_dir, s_sdlist.count);
    } else {
        s_sdlist.count = 0;
        ui_set_status(st, "%s: mount failed (needs system access)", devname);
    }
    st->sd_sel = 0;
}

/* LOG: tail the last ~20 lines of the newest *.txt under `[General]/LogsFolder`.
 * DBI writes append-only logs there (FINDINGS.md Part 25), so lexicographic
 * max usually = newest (DBI uses YYYY-MM-DD.txt pattern). */
static void load_log_tail(void) {
    s_log_tail_cnt = 0;
    s_log_file[0] = 0;

    char logs_folder[160];
    resolve_folder("LogsFolder", "sdmc:/switch/DBI/logs",
                   logs_folder, sizeof logs_folder);

    DIR *d = opendir(logs_folder);
    if (!d) return;
    char best[128] = "";
    struct dirent *ent;
    while ((ent = readdir(d)) != NULL) {
        size_t l = strlen(ent->d_name);
        if (l < 4 || strcmp(ent->d_name + l - 4, ".txt") != 0) continue;
        if (strcmp(ent->d_name, best) > 0)
            snprintf(best, sizeof best, "%s", ent->d_name);
    }
    closedir(d);
    if (!best[0]) return;

    snprintf(s_log_file, sizeof s_log_file,
             "%s/%s", logs_folder, best);

    FILE *f = fopen(s_log_file, "rb");
    if (!f) return;
    fseek(f, 0, SEEK_END);
    long sz = ftell(f);
    long off = sz > 4096 ? sz - 4096 : 0;
    fseek(f, off, SEEK_SET);
    static char buf[4200];
    size_t n = fread(buf, 1, sizeof buf - 1, f);
    buf[n] = 0;
    fclose(f);

    char *p = buf;
    if (off > 0) {
        char *q = strchr(p, '\n');
        if (q) p = q + 1;  /* drop partial first line */
    }
    while (*p && s_log_tail_cnt < (int)(sizeof s_log_tail / sizeof s_log_tail[0])) {
        char *q = strchr(p, '\n');
        size_t len = q ? (size_t)(q - p) : strlen(p);
        if (len >= sizeof s_log_tail[0]) len = sizeof s_log_tail[0] - 1;
        memcpy(s_log_tail[s_log_tail_cnt], p, len);
        s_log_tail[s_log_tail_cnt][len] = 0;
        s_log_tail_cnt++;
        if (!q) break;
        p = q + 1;
    }
}

/* -- extended painters ---------------------------------------------------- */

static void paint_tickets(ui_state_t *st) {
    (void)st;
    char hdr[96];
    snprintf(hdr, sizeof hdr,
             "common=%d  personalized=%d  listed=%zu",
             (int)s_tickets.common_total,
             (int)s_tickets.personalized_total,
             s_tickets.count);
    ui_goto(5, 4);
    printf(CSI_WHITE "%s" CSI_RESET, hdr);

    if (s_tickets.count == 0) {
        ui_goto(7, 4);
        printf(CSI_DIM "Press (A) to enumerate tickets." CSI_RESET);
        return;
    }

    /* Tickets listed 16-byte rights_id per row; first 8 bytes are the
     * title_id, remaining 8 identify the rights-key revision. */
    size_t n = s_tickets.count > 32 ? 32 : s_tickets.count;
    for (size_t i = 0; i < n; i++) {
        const uint8_t *r = s_tickets.items[i].rights_id;
        char line[96];
        snprintf(line, sizeof line,
            "%02x%02x%02x%02x%02x%02x%02x%02x"
            "%02x%02x%02x%02x%02x%02x%02x%02x",
            r[0],r[1],r[2],r[3],r[4],r[5],r[6],r[7],
            r[8],r[9],r[10],r[11],r[12],r[13],r[14],r[15]);
        ui_goto(7 + (int)i, 4);
        printf(CSI_AMBER "%s" CSI_RESET, line);
    }
}

static void paint_saves(ui_state_t *st) {
    bool hide_unknown = saves_hide_unknown();
    size_t visible = 0, hidden = 0;
    for (size_t i = 0; i < s_saves.count; i++) {
        if (hide_unknown && save_is_unknown_user(&s_saves.items[i])) hidden++;
        else                                                          visible++;
    }
    char hdr[120];
    if (hide_unknown) {
        snprintf(hdr, sizeof hdr,
                 "Saves: %zu shown  (%zu hidden — unknown user)",
                 visible, hidden);
    } else {
        snprintf(hdr, sizeof hdr, "Saves listed: %zu", s_saves.count);
    }
    ui_goto(5, 4);
    printf(CSI_WHITE "%.74s" CSI_RESET, hdr);

    if (s_saves.count == 0) {
        ui_goto(7, 4);
        printf(CSI_DIM "Press (A) to enumerate account saves." CSI_RESET);
        return;
    }

    int slot = 0;
    for (size_t i = 0; i < s_saves.count && slot < 32; i++) {
        const saves_entry_t *e = &s_saves.items[i];
        if (hide_unknown && save_is_unknown_user(e)) continue;

        /* FsSaveDataType: 1=Account, 2=Device, 5=Bcat — per libnx fs.h. */
        const char *t = (e->save_type == 1) ? "user" :
                       (e->save_type == 2) ? "dev"  :
                       (e->save_type == 5) ? "bcat" : "?";
        char line[140];
        snprintf(line, sizeof line,
            "%-4s %016llx %-36.36s %7.2f MB",
            t,
            (unsigned long long)e->app_id,
            e->title,
            (double)e->size / (1024.0 * 1024.0));
        ui_goto(7 + slot, 4);
        bool is_sel = ((int)i == st->save_sel);
        if (is_sel) printf(CSI_AMBER CSI_INVERT "%.74s" CSI_RESET, line);
        else        printf(CSI_AMBER "%.74s" CSI_RESET, line);
        slot++;
    }
}

static void paint_gamecard(ui_state_t *st) {
    (void)st;
    if (!s_gc_ready) {
        ui_goto(7, 4);
        printf(CSI_DIM "Press (A) to probe the game card slot." CSI_RESET);
        return;
    }
    if (!s_gc.inserted) {
        ui_goto(7, 4);
        printf(CSI_RED "%s" CSI_RESET,
               s_gc.error[0] ? s_gc.error : "no game card inserted");
        return;
    }

    int row = 7;
    char buf[200];

    /* XCI header — "HEAD" magic + RomSize + PackageId + used/capacity. */
    if (s_gc.header_ok) {
        snprintf(buf, sizeof buf,
                 "magic: 'HEAD' (0x%08x)  ver=%u  flags=0x%02x",
                 (unsigned)s_gc.magic,
                 (unsigned)s_gc.card_header_version,
                 (unsigned)s_gc.card_flags);
        ui_goto(row++, 4); printf(CSI_WHITE "%s" CSI_RESET, buf);

        snprintf(buf, sizeof buf,
                 "package_id: 0x%016llx",
                 (unsigned long long)s_gc.package_id);
        ui_goto(row++, 4); printf(CSI_WHITE "%s" CSI_RESET, buf);

        double used_gb = (double)s_gc.used_bytes     / (1024.0 * 1024.0 * 1024.0);
        double cap_gb  = (double)s_gc.capacity_bytes / (1024.0 * 1024.0 * 1024.0);
        if (s_gc.capacity_bytes)
            snprintf(buf, sizeof buf,
                     "rom_size: 0x%02x (%.0f GB)  used: %.2f GB / cap: %.0f GB",
                     (unsigned)s_gc.rom_size, cap_gb, used_gb, cap_gb);
        else
            snprintf(buf, sizeof buf,
                     "rom_size: 0x%02x (unknown)  used: %.2f GB",
                     (unsigned)s_gc.rom_size, used_gb);
        ui_goto(row++, 4); printf(CSI_WHITE "%s" CSI_RESET, buf);

        snprintf(buf, sizeof buf,
                 "valid_data_end: 0x%08x sectors (×0x200)  key_index: %u",
                 (unsigned)s_gc.valid_data_end_address,
                 (unsigned)s_gc.key_index);
        ui_goto(row++, 4); printf(CSI_WHITE "%s" CSI_RESET, buf);
    } else {
        ui_goto(row++, 4);
        printf(CSI_RED "XCI header: %s" CSI_RESET,
               s_gc.error[0] ? s_gc.error : "unavailable");
    }

    snprintf(buf, sizeof buf,
             "attribute: 0x%02x  (AutoBoot=%d HistoryErase=%d RepairTool=%d)",
             (unsigned)s_gc.attribute,
             !!(s_gc.attribute & 0x1),
             !!(s_gc.attribute & 0x2),
             !!(s_gc.attribute & 0x4));
    ui_goto(row++, 4); printf(CSI_WHITE "%s" CSI_RESET, buf);

    /* GameCardIdSet: 3 × 0x10 fingerprint. id1 is the most distinctive. */
    const uint8_t *id = s_gc.id_set;
    snprintf(buf, sizeof buf,
        "id1: %02x%02x%02x%02x%02x%02x%02x%02x"
             "%02x%02x%02x%02x%02x%02x%02x%02x",
        id[0], id[1], id[2], id[3], id[4], id[5], id[6], id[7],
        id[8], id[9], id[10], id[11], id[12], id[13], id[14], id[15]);
    ui_goto(row++, 4); printf(CSI_DIM "%s" CSI_RESET, buf);

    snprintf(buf, sizeof buf,
        "id2: %02x%02x%02x%02x%02x%02x%02x%02x"
             "%02x%02x%02x%02x%02x%02x%02x%02x",
        id[16],id[17],id[18],id[19],id[20],id[21],id[22],id[23],
        id[24],id[25],id[26],id[27],id[28],id[29],id[30],id[31]);
    ui_goto(row++, 4); printf(CSI_DIM "%s" CSI_RESET, buf);
}

/* Curated set of boolean toggles exposed by the Settings screen.
 * Upstream DBI's Settings draws many more rows, but these are the keys
 * the fork's code paths actually observe, so they are the only ones
 * worth offering a toggle for. Further keys live in dbi.config as text
 * and can still be edited with a PC; that matches upstream's behaviour
 * for the long tail of keys too. */
typedef struct {
    const char *section;
    const char *key;
    const char *help;
    bool        default_true;   /* upstream ships key=true ⇒ blank means on */
} settings_toggle_t;

static const settings_toggle_t s_settings_toggles[] = {
    { "General",     "MoveDownAfterX",       "Install (X) also advances to next row",  false },
    { "General",     "Autorepeat",           "Hold D-pad to autorepeat",                true  },
    { "General",     "BrowseAppsFromFiles",  "Press (L) in SD browser → Apps list",     true  },
    { "Applications","ShowCombinedNSP",      "Show [B/U/D] group tag on Apps",          true  },
    { "General",     "HighlightUpdates",     "Mark titles with newer titledb patch",    true  },
    { "Filtering",   "FilterDuplicateTitles","Hide duplicate Applications",             false },
};
static const int s_settings_toggles_n =
    (int)(sizeof s_settings_toggles / sizeof s_settings_toggles[0]);

/* Upstream dbi.config values for booleans are the literal strings
 * `true` / `false` (lowercase). Missing => per-key default. */
static bool settings_read_bool(const settings_toggle_t *t) {
    const dbi_config_entry_t *e = dbi_config_find(&s_cfg, t->section, t->key);
    if (!e) return t->default_true;
    return strcasecmp(e->value, "true") == 0;
}

static void paint_settings(ui_state_t *st) {
    (void)st;
    char hdr[120];
    snprintf(hdr, sizeof hdr, "entries: %zu   path: %.60s",
             s_cfg.count, s_cfg.path);
    ui_goto(5, 4);
    printf(CSI_WHITE "%.74s" CSI_RESET, hdr);

    ui_goto(6, 4);
    printf(CSI_DIM
        "(A) toggle   (Y) save to disk   (L) reload from disk"
        CSI_RESET);

    int row = 8;
    for (int i = 0; i < s_settings_toggles_n; i++, row++) {
        const settings_toggle_t *t = &s_settings_toggles[i];
        bool on = settings_read_bool(t);
        char line[140];
        snprintf(line, sizeof line, "%-7s [%s]  %s.%s",
                 on ? "  ON" : "  off",
                 on ? "*" : " ",
                 t->section, t->key);
        draw_menu_row(row, 4, i == s_settings_sel, line);
    }

    row += 1;
    if (row < 38) {
        ui_goto(row++, 4);
        printf(CSI_DIM "--- raw dbi.config (read-only, first 16) ---" CSI_RESET);
        size_t max = s_cfg.count > 16 ? 16 : s_cfg.count;
        for (size_t i = 0; i < max && row < 40; i++, row++) {
            const dbi_config_entry_t *e = &s_cfg.entries[i];
            char line[200];
            snprintf(line, sizeof line, "[%s] %s = %s",
                     e->section, e->key, e->value);
            ui_goto(row, 4);
            printf(CSI_AMBER "%.74s" CSI_RESET, line);
        }
    }
}

static void paint_log(ui_state_t *st) {
    (void)st;
    ui_goto(6, 4);
    if (!s_log_file[0]) {
        char logs_folder[160];
        resolve_folder("LogsFolder", "sdmc:/switch/DBI/logs",
                       logs_folder, sizeof logs_folder);
        printf(CSI_DIM "no logs found (expected: %s/*.txt)" CSI_RESET,
               logs_folder);
        return;
    }
    printf(CSI_WHITE "%.74s" CSI_RESET, s_log_file);

    int row = 8;
    for (int i = 0; i < s_log_tail_cnt && row < 40; i++, row++) {
        ui_goto(row, 4);
        printf(CSI_DIM "%.74s" CSI_RESET, s_log_tail[i]);
    }
}

/* -- USB Mass Storage screen -------------------------------------------- */

/* Close any LUN handles we opened, then zero the array. Called before
 * re-probing or on stop. */
static void usbms_unload(void) {
    for (uint32_t i = 0; i < s_usbms_n_luns; i++) {
        usbms_lun_close(&s_usbms_luns[i]);
    }
    memset(s_usbms_luns, 0, sizeof s_usbms_luns);
    s_usbms_n_luns = 0;
    s_usbms_configured = false;
}

/* Open the 8 BIS LUNs (System/User/Safe/Cal0/CalF/Boot0/Boot1/Pkg2). All are
 * read-only in this drop. Upstream DBI adds SD as a 9th slot via a
 * filesystem-backed image — we skip that here. Failures on individual LUNs
 * are logged but don't abort — hw configs that lack a given partition still
 * get the remaining LUNs. */
static Result usbms_load(ui_state_t *st) {
    usbms_unload();
    struct { const char *label; Result (*open)(usbms_lun_t *); } providers[] = {
        { "System",   usbms_lun_bis_system },
        { "User",     usbms_lun_bis_user   },
        { "Safe",     usbms_lun_bis_safe   },
        { "Prodinfo", usbms_lun_bis_cal0   },
        { "ProdinfoF",usbms_lun_bis_calf   },
        { "Boot0",    usbms_lun_bis_boot0  },
        { "Boot1",    usbms_lun_bis_boot1  },
        { "Pkg2",     usbms_lun_bis_pkg2   },
    };
    s_usbms_n_luns = 0;
    for (unsigned i = 0; i < sizeof providers / sizeof providers[0]; i++) {
        usbms_lun_t tmp = { 0 };
        Result rc = providers[i].open(&tmp);
        if (R_FAILED(rc)) {
            log_linef("usbms: %s open failed 0x%x", providers[i].label, rc);
            continue;
        }
        s_usbms_luns[s_usbms_n_luns++] = tmp;
    }
    if (s_usbms_n_luns == 0) {
        ui_set_status(st, "no BIS partitions could be opened");
        return MAKERESULT(Module_Libnx, LibnxError_NotFound);
    }
    s_usbms_configured = true;
    return 0;
}

static void paint_usbms(ui_state_t *st) {
    (void)st;
    int row = 6;
    bool running = usbms_is_running();

    ui_goto(row++, 4);
    if (running) printf(CSI_GREEN "state: RUNNING (host bulk endpoints active)" CSI_RESET);
    else         printf(CSI_DIM   "state: stopped" CSI_RESET);

    ui_goto(row++, 4);
    printf(CSI_WHITE "VID 0x057E  PID 0x3001  class 0x08/0x06/0x50 (BOT)" CSI_RESET);

    row++;
    if (!s_usbms_configured) {
        ui_goto(row++, 4);
        printf(CSI_DIM "Press (X) to probe BIS LUNs, then (A) to start." CSI_RESET);
    } else {
        char buf[160];
        ui_goto(row++, 4);
        snprintf(buf, sizeof buf, "LUNs configured: %u", (unsigned)s_usbms_n_luns);
        printf(CSI_WHITE "%s" CSI_RESET, buf);

        for (uint32_t i = 0; i < s_usbms_n_luns; i++, row++) {
            const usbms_lun_t *L = &s_usbms_luns[i];
            double gb = (double)(L->block_count * USBMS_BLOCK_SIZE)
                      / (1024.0 * 1024.0 * 1024.0);
            snprintf(buf, sizeof buf,
                     " LUN %u  %s  %s  %.2f GB  %s",
                     (unsigned)i,
                     L->vendor_id  ? L->vendor_id  : "?",
                     L->product_id ? L->product_id : "?",
                     gb,
                     L->writable ? "RW" : "RO");
            ui_goto(row, 4);
            printf(CSI_WHITE "%s" CSI_RESET, buf);
        }
    }

    row++;
    usbms_stats_t stats;
    usbms_get_stats(&stats);
    char sbuf[200];

    ui_goto(row++, 4);
    snprintf(sbuf, sizeof sbuf,
             "CBWs: %llu   read: %.2f MB   write: %.2f MB",
             (unsigned long long)stats.cbw_count,
             (double)stats.bytes_read    / (1024.0 * 1024.0),
             (double)stats.bytes_written / (1024.0 * 1024.0));
    printf(CSI_WHITE "%s" CSI_RESET, sbuf);

    ui_goto(row++, 4);
    snprintf(sbuf, sizeof sbuf, "last_opcode: 0x%02x",
             (unsigned)stats.last_opcode);
    printf(CSI_DIM "%s" CSI_RESET, sbuf);

    if (stats.last_err[0]) {
        ui_goto(row++, 4);
        printf(CSI_RED "last_err: %.74s" CSI_RESET, stats.last_err);
    }
}

static void on_usbms_btn(ui_state_t *st, u64 d) {
    if (d & HidNpadButton_X) {
        Result rc = usbms_load(st);
        if (R_SUCCEEDED(rc))
            ui_set_status(st, "USB-MS: %u LUN(s) ready", (unsigned)s_usbms_n_luns);
        return;
    }
    if (d & HidNpadButton_A) {
        if (usbms_is_running()) {
            usbms_stop();
            ui_set_status(st, "USB-MS stopped");
            log_linef("usbms: stop");
            return;
        }
        if (!s_usbms_configured) {
            Result rc = usbms_load(st);
            if (R_FAILED(rc)) return;
        }
        Result rc = usbms_start(s_usbms_luns, s_usbms_n_luns);
        if (R_FAILED(rc)) {
            ui_set_status(st, "usbms_start failed: 0x%08x", rc);
            log_linef("usbms: start FAIL rc=0x%08x", rc);
        } else {
            ui_set_status(st, "USB-MS running (%u LUN)", (unsigned)s_usbms_n_luns);
            log_linef("usbms: start OK luns=%u", (unsigned)s_usbms_n_luns);
        }
    }
}

/* Tools sub-menu — DBI upstream groups these under the "Tools" main-menu
 * entry instead of bloating the top-level menu. Fork keeps the same
 * hierarchy. */
typedef struct {
    ui_screen_t screen;             /* UI_SCREEN_MAIN => inline action, no transition */
    const char *label;
    void       (*action)(ui_state_t *);
} tools_entry_t;

static void action_ips_scan(ui_state_t *st);
static void action_commit_config(ui_state_t *st);
static void action_titledb_update(ui_state_t *st);
static void action_selfupdate(ui_state_t *st);

static const tools_entry_t s_tools_menu[] = {
    { UI_SCREEN_GAMECARD,        "Game card probe",            NULL },
    { UI_SCREEN_NETWORK,         "Network",                    NULL },
    { UI_SCREEN_BROWSE_SYSTEM,   "Browse System NAND (BIS)",   NULL },
    { UI_SCREEN_BROWSE_USER,     "Browse User NAND (BIS)",     NULL },
    { UI_SCREEN_USBMS,           "USB Mass Storage",           NULL },
    { UI_SCREEN_BACKEND_INSTALL, "Install source picker",      NULL },
    { UI_SCREEN_MAIN,            "Scan exefs patches (IPS)",   action_ips_scan },
    { UI_SCREEN_MAIN,            "Commit dbi.config to disk",  action_commit_config },
    { UI_SCREEN_MAIN,            "Update titledb cache",       action_titledb_update },
    { UI_SCREEN_MAIN,            "Self-update DBI NRO",        action_selfupdate },
};
static const int s_tools_menu_n = (int)(sizeof s_tools_menu / sizeof s_tools_menu[0]);

static void paint_tools(ui_state_t *st) {
    (void)st;
    ui_goto(5, 4);
    printf(CSI_WHITE "Select a tool and press (A):" CSI_RESET);

    int row = 7;
    for (int i = 0; i < s_tools_menu_n; i++, row++) {
        draw_menu_row(row, 6, i == s_tools_sel, s_tools_menu[i].label);
    }
}

static void nav_updown(int *sel, int count, u64 d);

/* -- BackendInstall source picker ---------------------------------------- */

/* Upstream exposes an install-source list aggregated from [Network sources],
 * [Local sources], [MTP custom storages] and the built-in SD + USB + HTTP
 * backends. Fork routes every entry to the concrete backend screen where
 * possible; pure stubs (MTP/FTP) surface a status note until implemented. */

typedef struct {
    const char *label;
    const char *hint;
    ui_screen_t next;         /* UI_SCREEN_MAIN => stub, stay put */
    bool        stay_on_pick;
} backend_pick_t;

static const backend_pick_t s_backend_picks[] = {
    { "SD card",         "browse sdmc:/",          UI_SCREEN_BROWSE_SD, false },
    { "USB Host (DBI0)", "Python dbibackend on PC", UI_SCREEN_USB_HOST,  false },
    { "Network",         "HTTP / remote sources",   UI_SCREEN_NETWORK,   false },
    { "Game card (XCI)", "dump cartridge",          UI_SCREEN_GAMECARD,  false },
    { "MTP server",      "stub — server not built",  UI_SCREEN_MAIN,      true  },
    { "FTP server",      "stub — server not built",  UI_SCREEN_MAIN,      true  },
};
static const int s_backend_picks_n =
    (int)(sizeof s_backend_picks / sizeof s_backend_picks[0]);
static int s_backend_sel = 0;

static void paint_backend_install(ui_state_t *st) {
    (void)st;
    ui_goto(5, 4);
    printf(CSI_WHITE "Pick where to install from (A=select, B=back):" CSI_RESET);

    int row = 7;
    for (int i = 0; i < s_backend_picks_n; i++, row++) {
        char line[120];
        snprintf(line, sizeof line, "%-22s  %s",
                 s_backend_picks[i].label,
                 s_backend_picks[i].hint);
        draw_menu_row(row, 6, i == s_backend_sel, line);
    }
}

static void on_backend_install_btn(ui_state_t *st, u64 d) {
    nav_updown(&s_backend_sel, s_backend_picks_n, d);
    if (!(d & HidNpadButton_A)) return;

    const backend_pick_t *p = &s_backend_picks[s_backend_sel];
    if (p->stay_on_pick) {
        ui_set_status(st, "%s: %s", p->label, p->hint);
        return;
    }
    if (p->next == UI_SCREEN_BROWSE_SD) {
        strcpy(st->current_dir, "sdmc:/");
        fs_scan_list_dir(&s_sdlist, st->current_dir);
        browse_filter_folder_jpg(&s_sdlist);
        s_sdlist_ready = true;
        st->sd_sel = 0;
    } else if (p->next == UI_SCREEN_USB_HOST) {
        Result rc = dbi0_init();
        if (R_FAILED(rc)) {
            ui_set_status(st, "dbi0_init failed: 0x%08x", rc);
            return;
        }
        ui_set_status(st, "USB ready, awaiting PC");
        s_usb_names_cnt = 0;
    } else if (p->next == UI_SCREEN_GAMECARD) {
        load_gamecard();
    }
    st->screen = p->next;
}

/* -- frame dispatcher ----------------------------------------------------- */

/* Map screen → captured upstream paint trace (defined in ui_traces_gen.c).
 * When a trace is available we use it as the single source of truth for
 * static cells (chrome + body) — guarantees 1:1 byte parity with upstream
 * 887/891 rendering, since the traces are recorded directly from what
 * DBI emits at paint time (see scripts/gen_ui_traces.py). */
static const ui_layout_t *trace_for(ui_screen_t s) {
    switch (s) {
        case UI_SCREEN_MAIN:             return &UI_TRACE_MAIN;
        case UI_SCREEN_BROWSE_SD:        return &UI_TRACE_BROWSE_SD;
        case UI_SCREEN_BROWSE_SYSTEM:    return &UI_TRACE_BROWSE_SYSTEM;
        case UI_SCREEN_BROWSE_USER:      return &UI_TRACE_BROWSE_USER;
        case UI_SCREEN_USB_HOST:         return &UI_TRACE_USB_HOST;
        case UI_SCREEN_BACKEND_INSTALL:  return &UI_TRACE_BACKEND_INSTALL;
        case UI_SCREEN_GAMECARD:         return &UI_TRACE_GAMECARD;
        case UI_SCREEN_NETWORK:          return &UI_TRACE_NETWORK;
        case UI_SCREEN_BROWSE_APPS:      return &UI_TRACE_BROWSE_APPS;
        case UI_SCREEN_TOOLS:            return &UI_TRACE_TOOLS;
        case UI_SCREEN_TICKETS:          return &UI_TRACE_TICKETS;
        case UI_SCREEN_SAVES:            return &UI_TRACE_SAVES;
        case UI_SCREEN_MTP:              return &UI_TRACE_MTP;
        case UI_SCREEN_FTP:              return &UI_TRACE_FTP;
        case UI_SCREEN_HTTP:             return &UI_TRACE_HTTP;
        case UI_SCREEN_LOG:              return &UI_TRACE_LOG;
        case UI_SCREEN_SETTINGS:         return &UI_TRACE_SETTINGS;
        case UI_SCREEN_INFO:             return &UI_TRACE_INFO;
        case UI_SCREEN_INSTALL:          return &UI_TRACE_INSTALL;
        default:                         return NULL;
    }
}

/* Paint one screen. Strategy: emit the static cells via
 * ui_paint_layout(), then layer on any dynamic content. */
static void draw_screen(ui_state_t *st) {
    const ui_layout_t *trace = trace_for(st->screen);
    if (trace) {
        /* Trace-driven path: 1:1 byte parity with upstream paint output. */
        ui_paint_trace(trace);
    } else {
        /* Legacy path for screens without a captured trace (USBMS, EXIT). */
        const ui_layout_t *layout = layout_for(st->screen);
        if (layout) ui_paint_layout(layout);
    }

    switch (st->screen) {
        case UI_SCREEN_MAIN:          paint_main_menu(st);   break;
        case UI_SCREEN_BROWSE_SD:
        case UI_SCREEN_BROWSE_SYSTEM:
        case UI_SCREEN_BROWSE_USER:   paint_browse_sd(st);   break;
        case UI_SCREEN_USB_HOST:      paint_usb_host(st);    break;
        case UI_SCREEN_BROWSE_APPS:   paint_browse_apps(st); break;
        case UI_SCREEN_INFO:          paint_info(st);        break;
        case UI_SCREEN_INSTALL:       paint_install(st);     break;
        case UI_SCREEN_NETWORK:       paint_network(st);     break;
        case UI_SCREEN_TICKETS:       paint_tickets(st);     break;
        case UI_SCREEN_SAVES:         paint_saves(st);       break;
        case UI_SCREEN_GAMECARD:      paint_gamecard(st);    break;
        case UI_SCREEN_SETTINGS:      paint_settings(st);    break;
        case UI_SCREEN_LOG:           paint_log(st);         break;
        case UI_SCREEN_TOOLS:         paint_tools(st);       break;
        case UI_SCREEN_USBMS:         paint_usbms(st);       break;
        case UI_SCREEN_BACKEND_INSTALL: paint_backend_install(st); break;
        default: break;  /* pure static layouts need no dynamic content */
    }
}

/* -- input handlers ------------------------------------------------------- */

static void nav_updown(int *sel, int count, u64 d) {
    if (count <= 0) return;
    if (d & (HidNpadButton_AnyUp   | HidNpadButton_StickLUp))   *sel = (*sel - 1 + count) % count;
    if (d & (HidNpadButton_AnyDown | HidNpadButton_StickLDown)) *sel = (*sel + 1) % count;
}

static void nav_menu_updown(int *sel, u64 d) {
    if (!(d & (HidNpadButton_AnyUp | HidNpadButton_AnyDown |
               HidNpadButton_StickLUp | HidNpadButton_StickLDown))) return;
    if (s_menu_n == 0) return;
    int step = (d & (HidNpadButton_AnyDown | HidNpadButton_StickLDown)) ? 1 : -1;
    int i = *sel;
    for (int safety = 0; safety < s_menu_n; safety++) {
        i = (i + step + s_menu_n) % s_menu_n;
        if (!menu_rt_is_spacer(i) && !menu_rt_is_hidden(i)) { *sel = i; return; }
    }
}

static void on_main_btn(ui_state_t *st, u64 d) {
    if (s_menu_n == 0) build_runtime_menu();
    if (menu_rt_is_spacer(st->menu_sel) || menu_rt_is_hidden(st->menu_sel)) {
        for (int i = 0; i < s_menu_n; i++)
            if (!menu_rt_is_spacer(i) && !menu_rt_is_hidden(i)) { st->menu_sel = i; break; }
    }
    nav_menu_updown(&st->menu_sel, d);
    if (d & HidNpadButton_A) {
        ui_screen_t next = s_menu[st->menu_sel].screen_id;
        const char *dyn_path = s_menu[st->menu_sel].sd_path[0]
                             ? s_menu[st->menu_sel].sd_path : NULL;
        switch (next) {
            case UI_SCREEN_BROWSE_SD:
                /* Dynamic [Local sources] row carries a custom path; the
                 * static row always opens at the SD root. */
                if (dyn_path)
                    snprintf(st->current_dir, sizeof st->current_dir,
                             "%s%s", dyn_path,
                             dyn_path[strlen(dyn_path) - 1] == '/' ? "" : "/");
                else
                    strcpy(st->current_dir, "sdmc:/");
                fs_scan_list_dir(&s_sdlist, st->current_dir);
                browse_filter_folder_jpg(&s_sdlist);
                s_sdlist_ready = true;
                ui_set_status(st, "%s: %zu entries", st->current_dir, s_sdlist.count);
                st->sd_sel = 0;
                break;
            case UI_SCREEN_USB_HOST: {
                Result rc = dbi0_init();
                if (R_FAILED(rc)) ui_set_status(st, "dbi0_init failed: 0x%08x", rc);
                else              ui_set_status(st, "USB ready, awaiting PC");
                st->menu_sel = 0;
                s_usb_names_cnt = 0;
                break;
            }
            case UI_SCREEN_BROWSE_APPS:
                st->app_sel = 0;
                ui_set_status(st, "press A to enumerate ns:am records");
                break;
            case UI_SCREEN_TICKETS:
                load_tickets();
                ui_set_status(st, "tickets: common=%d personalized=%d",
                              (int)s_tickets.common_total,
                              (int)s_tickets.personalized_total);
                break;
            case UI_SCREEN_SAVES:
                load_saves();
                ui_set_status(st, "saves: %zu entries", s_saves.count);
                break;
            case UI_SCREEN_SETTINGS:
                load_config();
                ui_set_status(st, "dbi.config: %zu entries", s_cfg.count);
                break;
            case UI_SCREEN_LOG:
                load_log_tail();
                if (s_log_file[0]) ui_set_status(st, "tail: %s", s_log_file);
                else               ui_set_status(st, "no logs found");
                break;
            case UI_SCREEN_TOOLS:
                s_tools_sel = 0;
                ui_set_status(st, "Tools submenu");
                break;
            case UI_SCREEN_EXIT:
                break;
            default:
                ui_set_status(st, "%s: not implemented yet",
                              menu_label(st->menu_sel));
                break;
        }
        st->screen = next;
    }
}

static void on_browse_sd_btn(ui_state_t *st, u64 d) {
    int total = sd_display_total(st);
    nav_updown(&st->sd_sel, total, d);

    bool at_root = sd_is_root(st->current_dir);
    int  off     = at_root ? 0 : 1;

    /* Upstream DBI: L = jump to Apps list from file browser when
     * [General]/BrowseAppsFromFiles=true. Default upstream value is false
     * (FINDINGS Part 38.2 + dbi.config:50). */
    if (d & HidNpadButton_L) {
        const dbi_config_entry_t *e =
            dbi_config_find(&s_cfg, "General", "BrowseAppsFromFiles");
        bool enabled = e && strcasecmp(e->value, "true") == 0;
        if (enabled) {
            st->app_sel = 0;
            st->screen = UI_SCREEN_BROWSE_APPS;
            ui_set_status(st, "Apps list (from L in file browser)");
            return;
        }
    }

    /* Upstream DBI: X = install + cursor auto-advance
     * ([General]/MoveDownAfterX=true, dbi.config:36). The fork used X as a
     * "rescan" button — that's non-upstream. Match the upstream batch-install
     * quickflow: X on a file runs install_sd, then nav_updown moves down. */
    if (d & HidNpadButton_X) {
        if (at_root || st->sd_sel != 0) {
            int idx = st->sd_sel - off;
            if (idx >= 0 && idx < (int)s_sdlist.count) {
                const fs_scan_entry_t *e = &s_sdlist.items[idx];
                if (!e->is_dir) {
                    strncpy(st->target_path, e->path, sizeof st->target_path - 1);
                    st->target_path[sizeof st->target_path - 1] = 0;
                    install_source_t src; install_source_sd(&src, st->target_path);
                    run_install(st, &src, st->target_path);
                    const dbi_config_entry_t *m =
                        dbi_config_find(&s_cfg, "General", "MoveDownAfterX");
                    bool move = !m || strcasecmp(m->value, "false") != 0;
                    if (move && st->sd_sel + 1 < total) st->sd_sel++;
                    return;
                }
            }
        }
        /* Fall through when X pressed without a valid file target: keep the
         * fork-local rescan affordance so rescan isn't orphaned entirely. */
        fs_scan_list_dir(&s_sdlist, st->current_dir);
        browse_filter_folder_jpg(&s_sdlist);
        s_sdlist_ready = true;
        ui_set_status(st, "%s: %zu entries", st->current_dir, s_sdlist.count);
        st->sd_sel = 0;
        return;
    }

    if (d & HidNpadButton_A) {
        if (!at_root && st->sd_sel == 0) {
            sd_go_up(st->current_dir);
            fs_scan_list_dir(&s_sdlist, st->current_dir);
            browse_filter_folder_jpg(&s_sdlist);
            ui_set_status(st, "%s: %zu entries", st->current_dir, s_sdlist.count);
            st->sd_sel = 0;
            return;
        }
        int idx = st->sd_sel - off;
        if (idx < 0 || idx >= (int)s_sdlist.count) return;
        const fs_scan_entry_t *e = &s_sdlist.items[idx];
        if (e->is_dir) {
            sd_enter_dir(st->current_dir, sizeof st->current_dir, e->name);
            fs_scan_list_dir(&s_sdlist, st->current_dir);
            browse_filter_folder_jpg(&s_sdlist);
            ui_set_status(st, "%s: %zu entries", st->current_dir, s_sdlist.count);
            st->sd_sel = 0;
        } else {
            strncpy(st->target_path, e->path, sizeof st->target_path - 1);
            st->target_path[sizeof st->target_path - 1] = 0;
            FILE *f = fopen(st->target_path, "rb");
            s_info_meta_ready = false;
            if (f) {
                static uint8_t hdr[8192];
                size_t n = fread(hdr, 1, sizeof hdr, f);
                s_info_pfs0_ready = R_SUCCEEDED(pfs0_parse_header(&s_info_pfs0, hdr, n));
                if (s_info_pfs0_ready) {
                    s_info_meta_ready =
                        R_SUCCEEDED(nsp_info_probe(&s_info_meta, &s_info_pfs0, f));
                }
                fclose(f);
            } else {
                s_info_pfs0_ready = false;
            }
            st->screen = UI_SCREEN_INFO;
        }
        return;
    }

    if (d & HidNpadButton_Y) {
        if (!at_root && st->sd_sel == 0) return;
        int idx = st->sd_sel - off;
        if (idx < 0 || idx >= (int)s_sdlist.count) return;
        const fs_scan_entry_t *e = &s_sdlist.items[idx];
        if (e->is_dir) { ui_set_status(st, "'%s' is a directory", e->name); return; }
        strncpy(st->target_path, e->path, sizeof st->target_path - 1);
        st->target_path[sizeof st->target_path - 1] = 0;
        install_source_t src; install_source_sd(&src, st->target_path);
        run_install(st, &src, st->target_path);
    }
}

static void on_usb_host_btn(ui_state_t *st, u64 d) {
    nav_updown(&st->menu_sel, s_usb_names_cnt, d);
    if (d & HidNpadButton_A) {
        if (!dbi0_is_inited()) {
            Result rc = dbi0_init();
            if (R_FAILED(rc)) { ui_set_status(st, "dbi0_init err 0x%08x", rc); return; }
        }
        size_t got = 0;
        Result rc = dbi0_request_nsp_list(s_list_buf, sizeof s_list_buf, &got);
        if (R_FAILED(rc)) ui_set_status(st, "LIST err 0x%08x", rc);
        else { split_names(s_list_buf, got); ui_set_status(st, "LIST ok: %d items", s_usb_names_cnt); }
    } else if ((d & HidNpadButton_Y) && s_usb_names_cnt > 0) {
        install_source_t src; install_source_dbi0(&src);
        run_install(st, &src, s_usb_names[st->menu_sel]);
    } else if (d & HidNpadButton_X) {
        if (dbi0_is_inited()) { dbi0_send_exit(); ui_set_status(st, "EXIT sent"); }
    }
}

static bool s_title_delete_armed;
static u64  s_title_delete_at;

static bool in_sel_range(const ui_state_t *st) {
    return s_titles_ready && st->app_sel >= 0 &&
           (size_t)st->app_sel < s_titles.count;
}

static void on_apps_btn(ui_state_t *st, u64 d) {
    nav_updown(&st->app_sel, (int)s_titles.count, d);

    /* Disarm delete confirmation after 3s or on other input. */
    if (s_title_delete_armed && (armTicksToNs(armGetSystemTick()) - s_title_delete_at) > 3000000000ULL)
        s_title_delete_armed = false;

    if (d & HidNpadButton_ZL) {
        if (s_titles_ready) titles_free(&s_titles);
        Result rc = titles_collect(&s_titles, 512);
        if (R_FAILED(rc)) {
            ui_set_status(st, "ns:am err 0x%08x (hbmenu: no ns: access)", rc);
            s_titles_ready = false;
        } else {
            sort_titles(&s_titles);
            s_titles_ready = true;
            ui_set_status(st, "apps: %zu records", s_titles.count);
            st->app_sel = 0;
        }
        s_title_delete_armed = false;
        return;
    }

    if (!s_titles_ready) {
        if (d & (HidNpadButton_A | HidNpadButton_X | HidNpadButton_Y)) {
            Result rc = titles_collect(&s_titles, 512);
            if (R_FAILED(rc)) {
                ui_set_status(st, "ns:am err 0x%08x (hbmenu: no ns: access)", rc);
            } else {
                sort_titles(&s_titles);
                s_titles_ready = true;
                ui_set_status(st, "apps: %zu records — (A) launch (X) save (Y) delete",
                              s_titles.count);
            }
        }
        return;
    }

    if (!in_sel_range(st)) return;
    const title_entry_t *e = &s_titles.items[st->app_sel];

    if (d & HidNpadButton_A) {
        Result rc = titles_launch(e->app_id);
        if (R_FAILED(rc))
            ui_set_status(st, "launch 0x%016llx failed: 0x%08x",
                          (unsigned long long)e->app_id, rc);
        else
            ui_set_status(st, "launching 0x%016llx...",
                          (unsigned long long)e->app_id);
        s_title_delete_armed = false;
    } else if (d & HidNpadButton_X) {
        AccountUid primary = {0};
        accountInitialize(AccountServiceType_Application);
        accountGetPreselectedUser(&primary);
        accountExit();
        uint64_t files = 0, bytes = 0;
        char err[96] = {0};
        char saves_folder[160];
        resolve_folder("SavesFolder", "sdmc:/switch/DBI/saves",
                       saves_folder, sizeof saves_folder);
        Result rc = saves_export_zip(e->app_id,
                                     primary.uid[0], primary.uid[1],
                                     saves_folder,
                                     &files, &bytes, err, sizeof err);
        if (R_FAILED(rc))
            ui_set_status(st, "save-export err 0x%08x%s%s", rc,
                          err[0] ? " — " : "", err);
        else
            ui_set_status(st, "save exported: %llu files, %.2f MB (zip)",
                          (unsigned long long)files,
                          (double)bytes / (1024.0 * 1024.0));
        s_title_delete_armed = false;
    } else if (d & HidNpadButton_Y) {
        if (!s_title_delete_armed) {
            s_title_delete_armed = true;
            s_title_delete_at = armTicksToNs(armGetSystemTick());
            ui_set_status(st, "press (Y) again within 3s to DELETE 0x%016llx",
                          (unsigned long long)e->app_id);
        } else {
            uint64_t aid = e->app_id;
            Result rc = titles_delete(aid);
            s_title_delete_armed = false;
            if (R_FAILED(rc)) {
                ui_set_status(st, "delete 0x%016llx err 0x%08x",
                              (unsigned long long)aid, rc);
            } else {
                ui_set_status(st, "deleted 0x%016llx — press ZL to rescan",
                              (unsigned long long)aid);
                titles_free(&s_titles);
                s_titles_ready = false;
                st->app_sel = 0;
            }
        }
    }
}

static void on_tickets_btn(ui_state_t *st, u64 d) {
    if (d & HidNpadButton_A) {
        load_tickets();
        ui_set_status(st, "tickets: common=%d personalized=%d listed=%zu",
                      (int)s_tickets.common_total,
                      (int)s_tickets.personalized_total,
                      s_tickets.count);
    }
}

static void on_saves_btn(ui_state_t *st, u64 d) {
    nav_updown(&st->save_sel, (int)s_saves.count, d);
    if (d & HidNpadButton_A) {
        load_saves();
        st->save_sel = 0;
        ui_set_status(st, "saves: %zu entries", s_saves.count);
    } else if ((d & HidNpadButton_X) && s_saves_ready &&
               st->save_sel >= 0 && (size_t)st->save_sel < s_saves.count) {
        const saves_entry_t *e = &s_saves.items[st->save_sel];
        uint64_t files = 0, bytes = 0;
        char err[96] = {0};
        char saves_folder[160];
        resolve_folder("SavesFolder", "sdmc:/switch/DBI/saves",
                       saves_folder, sizeof saves_folder);
        Result rc = saves_export_zip(e->app_id, e->uid_low, e->uid_high,
                                     saves_folder,
                                     &files, &bytes, err, sizeof err);
        if (R_FAILED(rc))
            ui_set_status(st, "save-export 0x%08x%s%s", rc,
                          err[0] ? " — " : "", err);
        else
            ui_set_status(st, "exported %016llx: %llu files, %.2f MB",
                          (unsigned long long)e->app_id,
                          (unsigned long long)files,
                          (double)bytes / (1024.0 * 1024.0));
    }
}

static int xci_dump_progress(uint64_t done, uint64_t total, void *ctx) {
    ui_state_t *st = (ui_state_t *)ctx;
    double pct = total ? (100.0 * (double)done / (double)total) : 0.0;
    ui_set_status(st, "XCI dump: %.1f%%  (%.2f / %.2f GB)",
                  pct,
                  (double)done  / (1024.0 * 1024.0 * 1024.0),
                  (double)total / (1024.0 * 1024.0 * 1024.0));
    return 0;   /* non-zero to abort */
}

static void on_gamecard_btn(ui_state_t *st, u64 d) {
    if (d & HidNpadButton_A) {
        load_gamecard();
        if (!s_gc.inserted) {
            ui_set_status(st, "%s", s_gc.error[0] ? s_gc.error : "no card");
        } else if (s_gc.header_ok) {
            ui_set_status(st, "gamecard: HEAD ok, package_id=0x%016llx",
                          (unsigned long long)s_gc.package_id);
        } else {
            ui_set_status(st, "gamecard: %s",
                          s_gc.error[0] ? s_gc.error : "header unavailable");
        }
        return;
    }
    if (d & HidNpadButton_Y) {
        if (!s_gc_ready || !s_gc.inserted) {
            ui_set_status(st, "XCI dump: no gamecard (press A to probe first)");
            return;
        }
        if (!s_gc.header_ok) {
            ui_set_status(st, "XCI dump: header invalid, aborting");
            return;
        }
        /* Upstream DBI writes "<DumpsFolder>/<package_id>.xci". Trimmed dump
         * by default (valid_only=true) — matches dbi.config
         * [General]/TrimXCIDump=true. */
        const dbi_config_entry_t *trim =
            dbi_config_find(&s_cfg, "General", "TrimXCIDump");
        bool valid_only = !trim || strcasecmp(trim->value, "false") != 0;

        char dumps_folder[160];
        resolve_folder("DumpsFolder", "sdmc:/switch/DBI/dumps",
                       dumps_folder, sizeof dumps_folder);
        ensure_dir_chain(dumps_folder);

        char xci_path[256];
        snprintf(xci_path, sizeof xci_path,
                 "%s/%016llx.xci",
                 dumps_folder,
                 (unsigned long long)s_gc.package_id);

        ui_set_status(st, "XCI dump: starting → %s", xci_path);
        Result rc = gamecard_dump_xci(xci_path, valid_only,
                                      xci_dump_progress, st);
        if (R_FAILED(rc)) {
            ui_set_status(st, "XCI dump: FAIL 0x%x (%s)", rc, xci_path);
        } else {
            ui_set_status(st, "XCI dump: OK → %s", xci_path);
        }
    }
}

static void on_settings_btn(ui_state_t *st, u64 d) {
    nav_updown(&s_settings_sel, s_settings_toggles_n, d);

    if (d & HidNpadButton_A) {
        const settings_toggle_t *t = &s_settings_toggles[s_settings_sel];
        bool cur = settings_read_bool(t);
        const char *next = cur ? "false" : "true";
        if (dbi_config_set(&s_cfg, t->section, t->key, next)) {
            ui_set_status(st, "%s.%s = %s (in memory; press Y to save)",
                          t->section, t->key, next);
        } else {
            ui_set_status(st, "%s.%s: set FAILED", t->section, t->key);
        }
        return;
    }

    if (d & HidNpadButton_Y) {
        if (s_cfg.path[0] == 0) {
            snprintf(s_cfg.path, sizeof s_cfg.path,
                     "sdmc:/switch/DBI/dbi.config");
        }
        if (dbi_config_save(&s_cfg, s_cfg.path)) {
            ui_set_status(st, "dbi.config: saved %zu entries to %s",
                          s_cfg.count, s_cfg.path);
        } else {
            ui_set_status(st, "dbi.config: save FAILED (%s)", s_cfg.path);
        }
        return;
    }

    if (d & HidNpadButton_L) {
        load_config();
        ui_set_status(st, "dbi.config: reloaded (%zu entries)", s_cfg.count);
        return;
    }
}

static void on_log_btn(ui_state_t *st, u64 d) {
    if (d & HidNpadButton_A) {
        load_log_tail();
        if (s_log_file[0]) {
            ui_set_status(st, "tail: %s", s_log_file);
        } else {
            char logs_folder[160];
            resolve_folder("LogsFolder", "sdmc:/switch/DBI/logs",
                           logs_folder, sizeof logs_folder);
            ui_set_status(st, "no logs under %s/", logs_folder);
        }
    }
}

static void on_network_btn(ui_state_t *st, u64 d) {
    if (d & HidNpadButton_A) { do_ntp_sync(st); return; }
    if (d & HidNpadButton_Y) {
        const dbi_config_entry_t *inst =
            dbi_config_find(&s_cfg, "Network sources", "InstallURL");
        if (!inst || !inst->value[0]) {
            ui_set_status(st, "HTTP install: set [Network sources]/InstallURL");
            return;
        }
        (void)ensure_net_for_ntp();    /* lazy socket init */
        strncpy(st->target_path, inst->value, sizeof st->target_path - 1);
        st->target_path[sizeof st->target_path - 1] = 0;
        install_source_t src; install_source_http(&src);
        run_install(st, &src, st->target_path);
    }
}

static void action_ips_scan(ui_state_t *st) {
    static ips_scan_t s_scan;
    if (!ips_scan(&s_scan, "sdmc:/atmosphere/exefs_patches")) {
        ui_set_status(st, "IPS scan: %s not readable",
                      "sdmc:/atmosphere/exefs_patches");
        return;
    }
    size_t total_recs = 0;
    uint64_t total_bytes = 0;
    size_t n_ips = 0, n_ips32 = 0, n_pch = 0, n_bad = 0;
    for (size_t i = 0; i < s_scan.count; i++) {
        const ips_patch_t *p = &s_scan.items[i];
        total_recs  += p->count;
        total_bytes += p->total_bytes;
        switch (p->format) {
            case IPS_FMT_IPS:    n_ips++;   break;
            case IPS_FMT_IPS32:  n_ips32++; break;
            case IPS_FMT_PCHTXT: n_pch++;   break;
            default:             n_bad++;   break;
        }
    }
    ui_set_status(st,
        "IPS scan: %zu file(s) [ips=%zu ips32=%zu pchtxt=%zu bad=%zu] "
        "%zu recs, %llu B",
        s_scan.count, n_ips, n_ips32, n_pch, n_bad,
        total_recs, (unsigned long long)total_bytes);
}

static void action_commit_config(ui_state_t *st) {
    if (!s_cfg.loaded || s_cfg.path[0] == 0) {
        ui_set_status(st, "dbi.config: nothing to commit (not loaded)");
        return;
    }
    if (dbi_config_save(&s_cfg, s_cfg.path)) {
        ui_set_status(st, "dbi.config: saved %zu entries to %s",
                      s_cfg.count, s_cfg.path);
    } else {
        ui_set_status(st, "dbi.config: save FAILED (%s)", s_cfg.path);
    }
}

/* Resolve the versions.txt URL: config key overrides default. Upstream
 * puts VersionsURL / TitleDB under [General] (dbi.config:24-28 in
 * 887-ru). `[Network]/VersionsURL` is accepted as a legacy alias for
 * pre-existing fork configs — should be removed once users migrate. */
static const char *resolve_versions_url(void) {
    const dbi_config_entry_t *e = dbi_config_find(&s_cfg, "General", "VersionsURL");
    if (!e) e = dbi_config_find(&s_cfg, "Network", "VersionsURL");
    if (e && e->value[0]) return e->value;
    return TITLEDB_DEFAULT_URL;
}

static const char *resolve_dbi_update_url(void) {
    const dbi_config_entry_t *e = dbi_config_find(&s_cfg, "General", "DBIUpdateURL");
    if (!e) e = dbi_config_find(&s_cfg, "Network", "DBIUpdateURL");
    if (e && e->value[0]) return e->value;
    return NULL;
}

static void action_titledb_update(ui_state_t *st) {
    (void)ensure_net_for_ntp();
    const char *url = resolve_versions_url();
    ui_set_status(st, "titledb: downloading from %.40s...", url);
    Result rc = titledb_download(url);
    if (R_FAILED(rc)) {
        ui_set_status(st, "titledb: download FAILED 0x%x (%s)",
                      rc, url);
        return;
    }
    /* Re-parse the new cache in place. */
    titledb_free(&s_titledb);
    rc = titledb_load_cache(&s_titledb);
    if (R_FAILED(rc) || s_titledb.count == 0) {
        s_titledb_loaded = false;
        ui_set_status(st, "titledb: cache reload FAILED 0x%x", rc);
        return;
    }
    s_titledb_loaded = true;
    ui_set_status(st, "titledb: %zu entries cached", s_titledb.count);
}

static void action_selfupdate(ui_state_t *st) {
    const char *url = resolve_dbi_update_url();
    if (!url) {
        ui_set_status(st, "selfupdate: set Network/DBIUpdateURL in dbi.config");
        return;
    }
    (void)ensure_net_for_ntp();
    ui_set_status(st, "selfupdate: downloading listing from %.32s...", url);
    selfupdate_result_t r = {0};
    Result rc = selfupdate_run(url, &r);
    if (R_FAILED(rc) || r.status != 0) {
        ui_set_status(st, "selfupdate: FAIL %s (zip=%llu B)",
                      r.err[0] ? r.err : "unknown",
                      (unsigned long long)r.zip_bytes);
        return;
    }
    ui_set_status(st, "selfupdate: OK %s v%u.%u.%u-%u (%llu B NRO) — reboot",
                  r.chosen_filename, r.chosen_major, r.chosen_minor,
                  r.chosen_patch, r.chosen_build,
                  (unsigned long long)r.nro_bytes);
}

static void on_tools_btn(ui_state_t *st, u64 d) {
    nav_updown(&s_tools_sel, s_tools_menu_n, d);
    if (d & HidNpadButton_A) {
        const tools_entry_t *e = &s_tools_menu[s_tools_sel];
        if (e->action) {
            e->action(st);
            return;     /* inline action — stay on Tools screen */
        }
        ui_screen_t next = e->screen;
        switch (next) {
            case UI_SCREEN_GAMECARD:
                load_gamecard();
                break;
            case UI_SCREEN_BROWSE_SYSTEM:
                load_bis(st, FsBisPartitionId_System,
                         "bis-system", &s_bis_system_mounted);
                break;
            case UI_SCREEN_BROWSE_USER:
                load_bis(st, FsBisPartitionId_User,
                         "bis-user", &s_bis_user_mounted);
                break;
            case UI_SCREEN_USBMS:
                if (!s_usbms_configured) {
                    Result rc = usbms_load(st);
                    if (R_SUCCEEDED(rc))
                        ui_set_status(st, "USB-MS: %u LUN(s) ready",
                                      (unsigned)s_usbms_n_luns);
                } else {
                    ui_set_status(st, "USB-MS: %u LUN(s) %s",
                                  (unsigned)s_usbms_n_luns,
                                  usbms_is_running() ? "RUNNING" : "stopped");
                }
                break;
            default:
                ui_set_status(st, "%s", e->label);
                break;
        }
        st->screen = next;
    }
}

/* Autorepeat for nav buttons — matches upstream DBI behaviour
 * ([General]/Autorepeat=true per dbi.config:40; FINDINGS Part 38.2). If a
 * nav direction is held, synthesize additional "down" pulses into `d` after
 * an initial 400 ms delay, then every ~66 ms. Keys involved: Up/Down/Left/
 * Right on both D-pad and left stick. Set Autorepeat=false to opt out. */
static uint64_t ar_nav_mask(void) {
    return HidNpadButton_AnyUp | HidNpadButton_AnyDown
         | HidNpadButton_AnyLeft | HidNpadButton_AnyRight
         | HidNpadButton_StickLUp | HidNpadButton_StickLDown
         | HidNpadButton_StickLLeft | HidNpadButton_StickLRight;
}

static u64 apply_autorepeat(PadState *pad, u64 d) {
    const dbi_config_entry_t *e =
        dbi_config_find(&s_cfg, "General", "Autorepeat");
    bool enabled = !e || strcasecmp(e->value, "false") != 0;
    if (!enabled) return d;

    u64 held = padGetButtons(pad);  /* libnx 4.12.0: current-state getter */
    u64 nav  = ar_nav_mask();
    u64 held_nav = held & nav;

    static u64      s_last_nav  = 0;
    static uint32_t s_hold_frames = 0;
    if (held_nav == 0 || held_nav != s_last_nav) {
        s_last_nav = held_nav;
        s_hold_frames = 0;
        return d;
    }
    s_hold_frames++;
    /* 60 Hz frame cadence: initial 24 frames (~400 ms), repeat every 4
     * frames (~66 ms). At 120 Hz the repeat just feels twice as fast,
     * which matches how upstream's autorepeat degrades on higher-FPS
     * applet scheduling — good enough without reading armGetSystemTick. */
    if (s_hold_frames < 24) return d;
    if ((s_hold_frames - 24) % 4 != 0) return d;
    return d | held_nav;
}

void ui_tick(ui_state_t *st, PadState *pad) {
    u64 d = padGetButtonsDown(pad);
    d = apply_autorepeat(pad, d);
    if (d & HidNpadButton_Plus) { st->screen = UI_SCREEN_EXIT; return; }
    bool is_browse =
        st->screen == UI_SCREEN_BROWSE_SD ||
        st->screen == UI_SCREEN_BROWSE_SYSTEM ||
        st->screen == UI_SCREEN_BROWSE_USER;
    if ((d & HidNpadButton_B) && st->screen != UI_SCREEN_MAIN) {
        if (is_browse && !sd_is_root(st->current_dir)) {
            sd_go_up(st->current_dir);
            fs_scan_list_dir(&s_sdlist, st->current_dir);
            browse_filter_folder_jpg(&s_sdlist);
            ui_set_status(st, "%s: %zu entries", st->current_dir, s_sdlist.count);
            st->sd_sel = 0;
            d &= ~HidNpadButton_B;
        } else {
            if (st->screen == UI_SCREEN_USB_HOST && dbi0_is_inited()) dbi0_exit();
            /* BIS mounts leak safely — leaving them mounted is cheaper than
             * re-opening fsOpenBisFileSystem on every entry. */
            bool to_tools =
                st->screen == UI_SCREEN_GAMECARD ||
                st->screen == UI_SCREEN_NETWORK ||
                st->screen == UI_SCREEN_BROWSE_SYSTEM ||
                st->screen == UI_SCREEN_BROWSE_USER ||
                st->screen == UI_SCREEN_USBMS ||
                st->screen == UI_SCREEN_BACKEND_INSTALL;
            st->screen = to_tools ? UI_SCREEN_TOOLS : UI_SCREEN_MAIN;
        }
    }

    static uint32_t tick = 0;
    if ((++tick & 0x3f) == 0) sys_info_refresh();

    switch (st->screen) {
        case UI_SCREEN_MAIN:          on_main_btn     (st, d); break;
        case UI_SCREEN_BROWSE_SD:
        case UI_SCREEN_BROWSE_SYSTEM:
        case UI_SCREEN_BROWSE_USER:   on_browse_sd_btn(st, d); break;
        case UI_SCREEN_USB_HOST:      on_usb_host_btn (st, d); break;
        case UI_SCREEN_BROWSE_APPS:   on_apps_btn     (st, d); break;
        case UI_SCREEN_TICKETS:       on_tickets_btn  (st, d); break;
        case UI_SCREEN_SAVES:         on_saves_btn    (st, d); break;
        case UI_SCREEN_GAMECARD:      on_gamecard_btn (st, d); break;
        case UI_SCREEN_SETTINGS:      on_settings_btn (st, d); break;
        case UI_SCREEN_LOG:           on_log_btn      (st, d); break;
        case UI_SCREEN_TOOLS:         on_tools_btn    (st, d); break;
        case UI_SCREEN_USBMS:         on_usbms_btn    (st, d); break;
        case UI_SCREEN_NETWORK:       on_network_btn  (st, d); break;
        case UI_SCREEN_BACKEND_INSTALL: on_backend_install_btn(st, d); break;
        default: break;
    }

    fputs(CSI_HOME CSI_CLEAR CSI_RESET, stdout);
    /* draw_chrome() draws frame + centered title + status row.  When a
     * trace exists for the current screen, the trace already includes
     * the frame and chrome cells (captured directly from upstream paint),
     * so we skip our chrome path to avoid double-painting. */
    if (trace_for(st->screen) == NULL) draw_chrome(st);
    draw_screen(st);
}
