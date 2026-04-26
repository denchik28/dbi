/* DBI 891 — FUN_71060790 (inflate_extract)
 *
 * zlib inflate driver for installer archives
 *
 * Flow:
   1. Initialise z_stream via inflateInit2(stream, MAX_WBITS).
   2. Loop:
        a. Read 64 KiB from input source.
        b. Call inflate(stream, Z_NO_FLUSH).
        c. If Z_STREAM_END, write remaining out-buf.
        d. Update progress.
   3. inflateEnd, return total bytes written.
 *
 * Phase 4 plan: Standard zlib usage; trivial.
 */
