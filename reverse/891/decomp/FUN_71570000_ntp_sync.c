/* DBI 891 — FUN_71570000 (ntp_sync)
 *
 * Syncs system clock from time.windows.com via ntpc:s IPC
 *
 * Flow:
   1. Resolve "time.windows.com" via libcurl (libnx ssl-service path).
   2. Send SNTPv3 packet to UDP 123.
   3. Parse 4-byte tx-timestamp from response.
   4. Compute offset, call timeSetCurrentTime().
   5. Cache last-sync timestamp in DBI's settings file.
 *
 * Phase 4 plan: test-app/source/ntp.c — implementation pattern.
 */
