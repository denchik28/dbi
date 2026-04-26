#pragma once
#include "install.h"
#include "pfs0.h"

/* NSZ/XCZ support — the Switch-community compressed form of NSP/XCI where
 * each NCA is replaced by a .ncz file that wraps the NCA in a ZSTD stream
 * plus per-section AES-CTR key/counter, so re-assembly at install time
 * yields a byte-identical original NCA.
 *
 * Wire format (from Blawar's nsz tool, cross-checked with upstream DBI's
 * decompression path — see FINDINGS.md Part 33):
 *
 *    0x0000 .. 0x3FFF : raw NCA header (verbatim — NOT inside the ZSTD stream)
 *    0x4000           : "NCZSECTN" magic (8 B)
 *                       u64 sectionCount
 *                       sectionCount * 0x38 bytes of ncz_section_t
 *    then (optional)  : "NCZBLOCK" skippable-frame with block offsets for
 *                       random access — we skip it, we stream linearly.
 *    then             : ZSTD frames whose decompressed output is the
 *                       concatenation of each section's plaintext bytes
 *                       in section-table order.
 *
 * We re-encrypt CTR sections on-the-fly and write into the ncm placeholder
 * at section->offset_in_nca. The first 0x4000 bytes (raw header) are
 * passed through unchanged. */

#define NCZ_HEADER_SIZE  0x4000ULL
#define NCZ_MAGIC        "NCZSECTN"
#define NCZ_MAGIC_LEN    8
#define NCZ_BLOCK_MAGIC  "NCZBLOCK"

/* Install one .ncz entry. Reads the NCZ stream from `src` (via stream cb),
 * decompresses + re-encrypts, writes a raw .nca to the ncm placeholder.
 * `cid` is the 16-byte content id derived from the .ncz filename stem.
 * Returns 0 on success. */
Result nsz_install_one(const char *nsp_name, const pfs0_file_t *f,
                       NcmContentStorage *cs, NcmContentId *cid,
                       const install_source_t *src, const install_opts_t *opts);

/* Recognize `.ncz` / `.nsz` / `.xcz` suffixes (case-insensitive). */
bool  nsz_is_compressed(const char *name);
