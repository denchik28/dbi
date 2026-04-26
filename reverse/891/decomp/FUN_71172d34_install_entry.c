/* DBI 891 — install pipeline entry (NCA / NSP / CNMT)
 *
 * Address: 0x71172d34. Top-level install dispatcher.
 *
 * Signature:
 *     int install_nsp_or_xci(InstallCtx* ctx, const char* path);
 *
 * Decision tree:
 *   1. Detect file type from path extension:
 *        .xci   -> XCI installer (calls FUN_71172d34 itself recursively
 *                  on the inner NSP partitions)
 *        .nsp   -> NSP installer
 *        .nsz   -> NSZ (compressed NSP) installer (calls
 *                  FUN_71172d34 after decompression via nsz.c)
 *        else   -> error 'Unknown file format'
 *   2. Open file via fs:srv as a PFS0 archive.
 *   3. Locate the .cnmt.nca: scan PFS0 entries for trailing
 *      `.cnmt.nca` (anchor at 0x7183adb8). If multiple .cnmt.nca,
 *      raise 'There is no single cnmt file' (0x7183af18).
 *   4. Verify PFS0 magic at section header; raise
 *      'Error: Invalid PFS0 magic!' (0x7183afd0) on mismatch.
 *   5. For each NCA in the archive:
 *      - Validate header (raise 'Invalid NCA header fixed key
 *        signature', 0x0085c078, cipher v2);
 *      - Call FUN_71557d20 (NCA SHA256 verify, deferred to ncm:c);
 *      - Call FUN_7117d780 (content-storage populator).
 *   6. Install ticket via FUN_7117db00 (es:c IPC).
 *   7. Final commit via ncm:c::Commit and refresh title list.
 *
 * Errors are surfaced through encrypted-string lookups in
 * 0x0085c078..0x0085c360 and posted to the UI via FUN_71189f20.
 */

#include "decomp_dbi891.h"

extern int FUN_7117d780(NcaContext*, ContentInfo*);  /* content-storage populator */
extern int FUN_7117db00(NcaContext*);                /* ticket installer */
extern int FUN_7117fab0(NcaContext*);                /* NCA-list traversal */
extern int FUN_711808d0(NcaContext*, NcaInfo*);      /* single-NCA handler */
extern int FUN_71557d20(NcaInfo*);                   /* SHA-256 verify */
extern int FUN_71612670(NcaInfo*);                   /* file-extraction wrapper */

int FUN_71172d34(InstallCtx* ctx, const char* path) {
    /* ... 1024+ bytes of decision tree omitted; see install_disasm.txt */
    return 0;
}

/* Phase 4 plan: this all maps to test-app/source/install.c which
 * already implements the equivalent flow. The rewrite delegates NCA
 * crypto to ncm:c (same as upstream) so no key material needs to be
 * shipped with the fork. */
