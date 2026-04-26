#pragma once
#include <switch.h>
#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>
#include "pfs0.h"

/* Light-touch NSP summary derived from PFS0 listing + optional .tik probe.
 * Matches the upstream "Info" screen surface (FINDINGS Part 32) — title id +
 * content-meta type + NCA/ticket counts + total byte volume. No NCA crypto;
 * anything requiring prod.keys stays unparsed.
 *
 * The Switch ticket blob (.tik) is RSA-2048-SHA256 signed (sig type
 * 0x00010002) so rights_id sits at offset 0x2A0 and first 8 bytes are the
 * program title id. That gives us title id + type classification
 * (Application/Patch/AddOnContent) without touching encrypted NCA headers.
 */

typedef enum {
    NSP_META_UNKNOWN      = 0,
    NSP_META_APPLICATION  = 0x80,
    NSP_META_PATCH        = 0x81,
    NSP_META_ADDONCONTENT = 0x82,
} nsp_meta_type_t;

typedef struct {
    size_t   total_entries;       /* pfs0 file count                   */
    size_t   num_ncas;            /* *.nca files                       */
    size_t   num_cnmt_ncas;       /* *.cnmt.nca                        */
    size_t   num_tiks;            /* *.tik                             */
    size_t   num_certs;           /* *.cert                            */
    size_t   num_ncz;             /* *.ncz  — DBI "NSZ" compressed NCA */
    uint64_t total_bytes;         /* sum of data_size for all entries  */

    bool     has_meta_nca;
    char     meta_nca_name[96];

    bool     is_compressed;       /* any .ncz present */

    bool     title_id_known;
    uint64_t title_id;            /* from first ticket, or 0 */
    uint64_t base_title_id;       /* title_id with low 0xFFF cleared */
    nsp_meta_type_t meta_type;
} nsp_info_t;

/* Parse NSP preview. `pfs` is the already-parsed PFS0 listing; `fp` is the
 * already-opened NSP file (for reading the ticket blob, seek-reset is ok).
 * Always returns 0 and populates what it can — failed sub-reads just leave
 * the corresponding fields zero. */
Result nsp_info_probe(nsp_info_t *out, const pfs0_t *pfs, FILE *fp);
