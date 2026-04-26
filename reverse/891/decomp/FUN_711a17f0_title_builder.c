/* DBI 891 — title-builder (in-app version banner)
 *
 * Address: 0x711a17f0 (file offset 0x1a17f0), 464 bytes / 116 instructions.
 *
 * Signature (reconstructed from prolog and stack layout):
 *     std::string* build_title(BuildTitleCtx* ctx, std::string* out_title);
 *
 * The function constructs the in-app title banner by composing several
 * fragments:
 *   1. plain "DBI" literal at 0x83b4d8
 *   2. plain "-" separator at 0x84a628
 *   3. version fragment from NACP ApplicationVersion (NACP+0x3060)
 *   4. locale code from FUN_7113c4e0 (Part 25; "ru" for slot 7)
 *   5. cipher v3 inline ("Форсировать" / "Принудительно" decrypt at
 *      ~0x713e0700)
 *
 * Stack layout (-128 byte frame):
 *   sp+0x00..0x10: callee-saves (x29, x30, x19, x20, x21, x22)
 *   sp+0x40..0x60: SSO buffer 1 (16 B inline + 8 B len + 8 B cap)
 *   sp+0x60..0x80: SSO buffer 2 (same shape)
 *   sp+0x70..0x80: scratch
 *
 * Pseudocode:
 */
#include "decomp_dbi891.h"

extern std::string* fnFmtVersion(std::string* out, const char* fmt,
                                 std::string* part);                /* 0x7112b890 */
extern int  fnHasCheats(int);                                       /* 0x717636f0 */
extern void fnFreeBuf(void* p, size_t sz);                          /* 0x717adc00 */

std::string* FUN_711a17f0(BuildTitleCtx* ctx, std::string* out_title) {
    /* sp-allocate a 128-byte frame, save x19..x22 */
    char ssobuf1[24];   /* sp+0x40..0x58 */
    char ssobuf2[24];   /* sp+0x60..0x78 */

    std::string s1, s2;     /* SSO-mode strings, head pointers placed in
                              the ssobuf areas */
    s1._set_inline(ssobuf1);
    s2._set_inline(ssobuf2);

    /* Format the version string: "DBI %s-%s" pattern. */
    fnFmtVersion(&s2, "...VERSION_FMT...", &s1);

    /* Probe whether cheats/forced-mode is enabled (this gates the
     * cipher v3 "Форсировать" suffix below). */
    if (!fnHasCheats(0x1)) {
        /* Cheats off — skip the suffix. */
        goto epilog;
    }

    /* Cheats on — append "Force" / "Forced" suffix.
     * The actual decrypt happens in a different basic block via the
     * cipher v3 path documented in Part 4. */
    /* ... (cipher v3 decrypt site follows here in dispatch graph) */

epilog:
    /* Free per-string heap buffer if non-SSO */
    if (s2._is_heap()) fnFreeBuf(s2._buf, s2._cap + 1);
    if (s1._is_heap()) fnFreeBuf(s1._buf, s1._cap + 1);
    return out_title;
}

/* Notes for Phase 4 (clean rewrite):
 *   - Replace this whole function with a single-line `snprintf`-style
 *     formatter; we don't need the SSO + cipher v3 dance.
 *   - Rewrite uses UTF-8 directly (drop KOI8-R encoding); the bundled
 *     atlas already supports UTF-8.
 *   - Title format: "dbi 891 fork" (or whatever the fork chooses) —
 *     the visible string lives in romfs:/locale/ru.json.
 */
