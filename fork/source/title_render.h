/* DBI fork — title bar / banner renderer.
 *
 * Replaces the upstream runtime composition (FUN_71001a17f0 +
 * FUN_710012b890 with the cipher v3 ROL6 sentinel — see REVERSE.md
 * sec. 7 + 13). The fork owns its title content, so we simply
 * snprintf it.
 */
#ifndef DBI_FORK_TITLE_RENDER_H
#define DBI_FORK_TITLE_RENDER_H

#define DBI_FORK_NAME    "dbi-fork"
#define DBI_FORK_VERSION "1.0.0"

const char *title_get_main(void);   /* "dbi-fork 1.0.0" */
const char *title_get_mtp(void);    /* "dbi-fork MTP" */
const char *title_get_backend(void);/* "dbi-fork Backend" */

/* Locale-aware variant: returns "dbi-fork 1.0.0-{locale}" for the
 * main title. Locale comes from appletGetDesiredLanguage(). */
const char *title_get_main_localised(void);

#endif /* DBI_FORK_TITLE_RENDER_H */
