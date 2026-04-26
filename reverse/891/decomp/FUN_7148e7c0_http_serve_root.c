/* DBI 891 — FUN_7148e7c0 (http_serve_root)
 *
 * Top-level HTTP request dispatcher (3 server classes share)
 *
 * Flow:
   1. Read request line (METHOD URL HTTP/1.1).
   2. Parse URL into path components.
   3. Look up handler in per-server-class table:
        Album:           /icons/<title>.gif → IconStore lookup
        InstalledGames:  /games.html → write CSS+HTML inline strings
        SDCard:          /<path>     → fsdevOpen + serve file bytes
   4. Write headers + body via socketSendto in chunks.
   5. Close connection on Content-Length transferred.
 *
 * Phase 4 plan: test-app/source/http.c basis (currently stub).
 */
