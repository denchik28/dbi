/* DBI 891 — locale-code mapper, reverse-engineered from .text disasm.
 *
 * Address: 0x7113c4e0 (file offset 0x13c4e0), 1360 bytes / 340 instructions.
 *
 * Signature (from prolog and tail):
 *     std::string* locale_code(uint32_t lang_bitmask, std::string* out);
 *
 * AArch64 ABI: x8 = out (return slot for sret), w0 = lang_bitmask.
 * Returns x0 = out.
 *
 * Behaviour:
 *   - For each bit set in lang_bitmask (bits 0..14), the function picks
 *     the corresponding locale string and writes it via the encrypted
 *     std::string-from-bytes path. A "tbnz w19, #N" jump table at the
 *     entry dispatches to one branch per locale slot.
 *   - The locale-code table base is at .rodata 0x83a280; each slot is
 *     8 bytes (en-US, ja-JP, fr-FR, ..., ru-RU).
 *   - Slot 7 (file 0x83a2b8) is "ru\0\0\0\0\0\0".
 *   - The locale-mapper is one of the helpers used by the
 *     title-composition path (see FUN_713e0650 reference at
 *     ~0x713e06b8 — a `bl FUN_7113c4e0` immediately before the
 *     cipher v3 inline loop that decrypts "Форсировать").
 *
 * Pseudocode reconstruction:
 */

#include "decomp_dbi891.h"  /* hypothetical project header */

extern std::string* fnSetLocaleSlot(std::string* out, const char* a,
                                    const char* b);                    /* 0x711249f0 */
extern std::string* fnAppendLocale(std::string* out, std::string* in);  /* 0x7113c440 */

std::string* FUN_7113c4e0(uint32_t lang_bitmask, std::string* out) {
    /* Initialise out as empty std::string (SSO buffer cleared) */
    *(uint64_t*)((char*)out)        = 0;   /* SSO len */
    *(uint64_t*)((char*)out + 8)    = 0;   /* SSO cap or capacity */
    *(uint64_t*)((char*)out + 16)   = 0;   /* terminator + reserved */

    /* tbnz dispatcher: pick the first set bit in lang_bitmask 0..14 */
    if (lang_bitmask & 0x0001) goto SLOT_0;   /* en-US */
    if (lang_bitmask & 0x0002) goto SLOT_1;   /* en-GB */
    if (lang_bitmask & 0x0004) goto SLOT_2;   /* ja-JP */
    if (lang_bitmask & 0x0008) goto SLOT_3;   /* fr-FR */
    if (lang_bitmask & 0x0010) goto SLOT_4;   /* de-DE */
    if (lang_bitmask & 0x0020) goto SLOT_5;   /* es-ES */
    if (lang_bitmask & 0x0040) goto SLOT_6;   /* it-IT */
    if (lang_bitmask & 0x0080) goto SLOT_7;   /* ru-RU         <- here */
    if (lang_bitmask & 0x0100) goto SLOT_8;   /* ko-KR */
    if (lang_bitmask & 0x0200) goto SLOT_9;
    if (lang_bitmask & 0x0400) goto SLOT_A;
    if (lang_bitmask & 0x0800) goto SLOT_B;
    if (lang_bitmask & 0x1000) goto SLOT_C;
    if (lang_bitmask & 0x2000) goto SLOT_D;
    if (lang_bitmask & 0x4000) goto SLOT_E;
    /* No bit set — return empty std::string */
    return out;

SLOT_D: {  /* example slot — illustrative */
    char buf_holder[16];
    std::string scratch;
    /* fnSetLocaleSlot reads from .rodata 0x7183a000 + offsets 0x2c8/0x2cf
     * and constructs an intermediate scratch std::string. */
    fnSetLocaleSlot(&scratch, ".../slot_2c8", ".../slot_2cf");
    fnAppendLocale(out, &scratch);
    return out;  /* via the common epilog at 0x7113c53c */
}

    /* Other slots follow the same shape with different .rodata offsets.
     * SLOT_7 (ru) at 0x7113c804 — ru-RU branch; reads 0x83a2b8 ("ru"). */

SLOT_7: {
    char buf_holder[16];
    std::string scratch;
    fnSetLocaleSlot(&scratch, "ru", "");
    fnAppendLocale(out, &scratch);
    return out;
}

    /* Epilog (shared, at 0x7113c53c):
     *     ldp x19, x20, [sp, #16]
     *     mov x0, x22                    ; x0 = out
     *     ldp x21, x22, [sp, #32]
     *     ldp x29, x30, [sp], #80
     *     ret
     */
}

/* Notes for Phase 4 (clean rewrite):
 *
 * - Replace this whole function with a static lookup table:
 *     static const char *const LOCALE_CODES[] = {
 *         "en-US", "en-GB", "ja-JP", "fr-FR", "de-DE",
 *         "es-ES", "it-IT", "ru-RU", "ko-KR", "zh-CN",
 *         "zh-TW", "nl-NL", "pt-BR", "pt-PT", "fr-CA",
 *     };
 *     std::string locale_code(uint32_t mask) {
 *         for (int i = 0; i < 15; i++)
 *             if (mask & (1u << i)) return LOCALE_CODES[i];
 *         return "";
 *     }
 *
 * - This bypasses the cipher v3 path entirely, since clean-rewrite
 *   doesn't need to obfuscate locale codes — the strings are
 *   self-evidently public.
 */
