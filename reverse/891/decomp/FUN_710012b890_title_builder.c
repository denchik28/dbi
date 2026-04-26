/* DBI 891 — title builder with cipher v3 inline (Item #1 finding)
 *
 * Address: 0x710012b890 (size 3584 bytes).
 * Caller:  FUN_71001a17f0 (title slot setter at 0x71001a17f0).
 *
 * Signature (Ghidra-recovered):
 *     void FUN_710012b890(undefined8 *param_1, long *param_2);
 *
 * Build flow:
 *   1. FUN_710075d350 — initialise set:sys IPC (magic "set:sys" reversed
 *      = 0x7379733a746573).
 *   2. FUN_710075d910(&local_100) — read FW version via set:sys
 *      (FUN_7100769b90 = GetFirmwareVersion); branches at 0x2ffff (3.0.0).
 *   3. FUN_71001249f0(&local_120, ...) — assign std::string from buffer.
 *   4. Output to *param_1: the version string ("16.0.3-r..." or similar).
 *   5. FUN_710075d9c0(&local_140) — read firmware variant from
 *      tpidrro_el0+0x14 IPC structure (SystemFirmwareConfigurationInfo).
 *   6. Output to *param_2: a 0x18-byte locale/variant string.
 *
 * The cipher v3 inline at param_2-length-14 path (~0x710012c200):
 *
 *     uVar12 = 0x4917052b0359016d;       // CT bytes 0..7 (LE)
 *     uStack_f8 = 0xc45a026e;             // CT bytes 8..11 (LE)
 *     // CT total = 6d 01 59 03 2b 05 17 49 6e 02 5a c4
 *
 *     uVar19 = 0x89d7c5ebc399c1ad;        // KEY (8 bytes, periodic)
 *     for (i = 0; i < 12; i++) {
 *         counter = i >> 3;
 *         key_byte = (uVar19 >> ((i & 7) * 8)) & 0xff;
 *         ct[i] ^= (counter + key_byte) & 0xff;     // stage 1: XOR
 *     }
 *     for (i = 0; i < 12; i++) {
 *         ct[i] = (ct[i] << 6) | (ct[i] >> 2);      // stage 2: ROL6
 *     }
 *
 * Decrypts to:  "00000000000\0"   (11 zero ASCII chars + NUL)
 *
 * This is a SERIAL-NUMBER SENTINEL — checks whether the firmware-variant
 * string from set:sys IPC equals "00000000000" (i.e. dev/null serial).
 * If yes, takes the alternative path to build a fallback path string
 * starting "sdmc:" + "SDCar..." (filesystem path, not title).
 *
 * The actual TITLE content (what flows into FUN_71001a17f0 as
 * local_43 = version handle) comes from the NORMAL non-sentinel branch
 * which combines firmware version (param_1) + locale code (param_2).
 *
 * Phase 4 plan:
 *   - Replace this whole path with a static `snprintf`:
 *       snprintf(buf, sizeof(buf), "dbi 891 fork-%s", "ru");
 *   - No cipher v3, no IPC dance, no sentinel check.
 *   - The fork's title is simple, public, configurable.
 *
 * Cipher v3 variant identified: counter_xor + ROL6 post-transform.
 * This is a NEW variant for 891 not previously documented in our
 * cipher inventory (extends Part 3 of FINDINGS.md).
 */
