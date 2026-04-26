/* DBI 891 — FUN_71607d20 (gamecard_dump)
 *
 * Dumps the inserted GameCard to sdmc:/switch/DBI/dumps/<title>.xci
 *
 * Flow:
   1. fsOpenGameCardStorage() via fs:srv IPC.
   2. fsStorageGetSize() — get total cart capacity.
   3. Allocate 4 MiB scratch buffer.
   4. Loop: fsStorageRead(scratch, off, 4MB), fwrite(out, scratch).
   5. If trim mode: skip the unused tail (last 32 MB typically).
   6. Update progress UI via FUN_71411a80 (main-tick).
   7. fclose, fsStorageClose, return.
 *
 * Phase 4 plan: See test-app/source/gamecard.c — already implements equivalent.
 */
