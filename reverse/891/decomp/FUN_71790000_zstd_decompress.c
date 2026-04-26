/* DBI 891 — FUN_71790000 (zstd_decompress)
 *
 * Wrapper around ZSTD_decompress for atlas + payload data
 *
 * Flow:
   1. Allocate ZSTD_DCtx via ZSTD_createDCtx.
   2. Read input length, allocate output buffer.
   3. Call ZSTD_decompressDCtx(dctx, dst, dstSize, src, srcSize).
   4. Check error via ZSTD_isError; if so, log
      "Zstd decompression failed: %s" + ZSTD_getErrorName().
   5. ZSTD_freeDCtx, return decompressed buffer.
 *
 * Phase 4 plan: Use libzstd portlib via #include <zstd.h>.
 */
