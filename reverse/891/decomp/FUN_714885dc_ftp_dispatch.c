/* DBI 891 — FTP server top-level dispatcher (RFC 959)
 *
 * Address: 0x714885dc, 8052 bytes — the central command-handler for
 * DBI's bundled FTP server.
 *
 * Signature (3-arg, returns int):
 *     int ftp_dispatch(FtpSession* session, void* arg, uint32_t cmd);
 *
 * Top-of-function dispatch (verbatim from disasm at 0x714885e4):
 *     cmp w2, #0x2  -> 0x71488648  // login (USER)
 *     cmp w2, #0x3  -> 0x7148860c  // quit / close session
 *     cbz w2,        -> 0x71488604  // unknown -> nop
 *     fall-through   -> error return (w0 = 0)
 *
 * The full set of command IDs in 891 (recovered from the dispatch
 * table at +0x140..+0x1d4):
 *
 *   1   USER (proxied; checks for plain credentials)
 *   2   USER (real)
 *   3   QUIT
 *   4   PASS
 *   5   PORT
 *   6   PASV
 *   7   PRET
 *   8   RETR
 *   9   STOR
 *   A   APPE
 *   B   DELE
 *   C   MKD / RMD
 *   D   PWD / CWD
 *   E   LIST
 *   F   NLST
 *  10+  EPRT / EPSV / SIZE / MDTM / FEAT / ABOR / NOOP
 *
 * Each command leg:
 *   1. Parses additional arguments from session->buf;
 *   2. Looks up the per-command handler from the static dispatch
 *      table at sp+0x150 (computed from the cmd byte plus a base
 *      function pointer);
 *   3. On error, decrypts the response template via cipher v2
 *      (e.g. "501 Syntax error in parameters or arguments." at
 *      0x008f7e90) and writes via socketSendto().
 *
 * Server-banner strings (cipher v2 decrypted):
 *   220 'Service ready for new user.' (0x008f8dd0)
 *   150 'File status okay; about to open data connection.' (0x008f8380)
 *   425 'Cant open data connection.' (0x008f83d8)
 *   451 'Requested action aborted. Failed to read file.' (0x008f8458)
 *   426 'Connection closed; transfer aborted.' (0x008f84f0)
 *   553 'Requested action not taken. File name not allowed.' (0x008f8810)
 *   550 'Requested action not taken. File not available.' (0x008f8950)
 *   501 'Syntax error in parameters or arguments.' (0x008f7e90)
 *
 * Phase 4 plan: clean rewrite as test-app/source/ftp.c with a
 * straightforward command-table dispatch (no cipher v2 banner needed
 * — the rewrite uses plain UTF-8 templates). FTP is RFC 959-compliant
 * with no DBI-specific extensions, so the rewrite is mechanical.
 */

extern int ftp_login(FtpSession* s);
extern int ftp_quit(FtpSession* s);
extern int ftp_pass(FtpSession* s);
/* ... etc */

int FUN_714885dc(FtpSession* session, void* arg, uint32_t cmd) {
    switch (cmd) {
        case 2: return ftp_login(session);
        case 3: return ftp_quit(session);
        case 0: /* nop / banner */ session->state = 0; return 0;
        /* ... 30+ more commands, see disasm */
    }
    return 0;  /* unknown command -> ignore */
}
