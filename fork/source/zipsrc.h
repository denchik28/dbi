#pragma once
#include "install.h"
#include <stdint.h>
#include <stdbool.h>

/* zipsrc — install_source_t backed by an uncompressed pass over a .zip archive
 * (FINDINGS.md Part 27: DBI treats a .zip containing one or more NSP/NSZ as a
 * valid install source).
 *
 * Random-access reads are emulated by reopening the entry from offset 0 and
 * decompressing-and-discarding until the target cursor. In practice the
 * install pipeline only ever reads the PFS0 header twice at offset 0, then
 * streams the NCA payloads in file order — exactly the access pattern that
 * DEFLATE streams support cheaply. */

typedef struct zipsrc_s zipsrc_t;   /* opaque */

Result zipsrc_open(zipsrc_t **out, const char *zip_path);
void   zipsrc_close(zipsrc_t *z);

/* Iterate entries that look like install payloads (.nsp / .nsz / .xci / .xcz).
 * Returns 0 if `out_name` was populated, 1 on end-of-list, <0 on error.
 * On success, the entry is the current entry — pass its `out_name` as
 * `nsp_name` to install_nsp. */
int    zipsrc_first(zipsrc_t *z, char out_name[256], uint64_t *out_size);
int    zipsrc_next (zipsrc_t *z, char out_name[256], uint64_t *out_size);

/* Build an install_source_t view over this zip. The install_source_t must
 * outlive itself — i.e. don't close the zipsrc_t while install_nsp is using
 * the source. */
void   zipsrc_as_source(zipsrc_t *z, install_source_t *out);
