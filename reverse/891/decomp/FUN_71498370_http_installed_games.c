/* DBI 891 — FUN_71498370 (http_installed_games)
 *
 * Renders installed-games HTML page for InstalledGamesHttpServer
 *
 * Flow:
   1. Walk title list via ns:am::ListContentMetaInfo.
   2. For each title:
        - Read NACP from ncm:c::ReadContent.
        - Format <li class="thumb"> entry with title + icon URL.
   3. Concatenate inline CSS at <link rel="stylesheet" href="/main.css">.
   4. Write Content-Length, then body, via http_serve_root.
   Inline strings (cipher v2):
        "<title>List of installed games</title>"
        "<link rel=...>"
        "li.thumb{display:inline-table;padding:5px}"
        "ul.app-list{display:flex;flex-direction:column;padding-left:0;}"
 *
 * Phase 4 plan: Already prototyped in test-app/source/http.c.
 */
