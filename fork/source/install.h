#pragma once
#include <switch.h>
#include <stdint.h>
#include "pfs0.h"

/* Progress reporter for long-running install ops. */
typedef void (*install_progress_cb_t)(const char *phase, uint64_t done, uint64_t total, void *ctx);

typedef struct {
    install_progress_cb_t cb;
    void                 *ctx;
    NcmStorageId          storage;
    /* [Install]/EnableNSZ — when false AND applet_mode, reject any .ncz
     * PFS0 entry upfront. NCZ decompression peaks ~80 MB heap which the
     * 96 MB applet sandbox can't always afford; title mode always allows. */
    bool                  applet_mode;
    bool                  enable_nsz;
    /* [Install]/CreateLFS — after a successful Application install, create
     * `sdmc:/atmosphere/contents/<TID>/` as an empty override marker so
     * the user can drop exefs/romfs patches without locating the folder
     * manually. Patch / DLC installs never touch LFS. */
    bool                  create_lfs;
} install_opts_t;

/* Source adapter: reads `len` bytes at `offset` within one of the NSP's files by name.
 * Used by install_nsp_from_source to abstract over SD-file vs USB-stream vs HTTP. */
typedef int (*install_source_read_t)(const char *nsp_name, uint64_t offset, size_t len,
                                     uint8_t *out, void *ctx);

/* Optional streaming variant: the source writes the file's bytes into a user-provided
 * sink, possibly in multiple chunks, without exposing random-access reads. For NCAs we
 * fall back to this when random access isn't viable. */
typedef int (*install_source_stream_t)(const char *nsp_name, uint64_t offset, uint64_t size,
                                       int (*sink)(const uint8_t *, size_t, void *),
                                       void *sink_ctx, void *src_ctx);

typedef struct {
    install_source_read_t   read;    /* may be NULL — then stream must be non-null */
    install_source_stream_t stream;  /* may be NULL — then read must be non-null */
    void                   *ctx;
} install_source_t;

/* Install an NSP by walking its PFS0 entries, streaming each NCA into ncm placeholders.
 * CNMT is parsed from the *.cnmt.nca and used to compose the content-meta DB entry.
 * Returns 0 on success. */
Result install_nsp(const char *nsp_name, const pfs0_t *pfs0,
                   const install_source_t *src, const install_opts_t *opts);

/* Iterate every .nsp/.nsz/.xci/.xcz entry inside a zip archive and install each
 * via install_nsp(). Entries that fail to parse are logged and skipped — the
 * function returns 0 if at least one entry installed cleanly, else the last
 * error seen. */
Result install_from_zip(const char *zip_path, const install_opts_t *opts);
