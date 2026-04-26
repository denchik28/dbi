/* DBI 891 — FUN_71411a80 (main_event_loop)
 *
 * *** 118 KB main UI event-tick. Massive function ***
 *
 * Flow:
   See FINDINGS Part 38 for the full breakdown. Key sub-blocks:
   - 0x71411a80..0x71411dxx: pad + audio mixer tick.
   - 0x71411dxx..0x71414xxx: animation timer.
   - 0x71414xxx..0x71430xxx: active-screen dispatch.
   - 0x71430xxx..0x71440xxx: render frame.
   - 0x71440xxx..0x71450xxx: title-database refresh.
   - 0x71450xxx..0x71460xxx: USB MTP / DBI0 server tick.
   - 0x71460xxx..0x71478xxx: FTP server tick.
   - 0x71478xxx..0x7148xxxx: HTTP server tick.

   The function is intentionally not decomposed into smaller functions
   for performance (avoid stack frame overhead in hot path).
 *
 * Phase 4 plan: Phase 4 splits this into per-feature tick handlers via dbi0_tick(), ftp_tick(), http_tick(), mtp_tick() called from a slim main() loop.
 */
