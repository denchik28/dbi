/* DBI 891 — FUN_71158870 (save_restore)
 *
 * Restores save data from sdmc:/switch/DBI/saves/<title>_<user>.zip
 *
 * Flow:
   1. Parse zip filename for title-id + user-id.
   2. Open save data via fsOpenSaveDataFileSystem(MODE_RW).
   3. minizip-iterate the zip, recreating each file via fsfsCreate*.
   4. Commit save via fsSaveDataCommit().
   5. fsdevUnmount, free zip handle, return.
 *
 * Phase 4 plan: test-app/source/saves.c equivalent.
 */
