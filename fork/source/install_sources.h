#pragma once
#include "install.h"

/* SD-card source: nsp_name is the absolute sdmc:/... path. Random-access reads. */
void install_source_sd(install_source_t *out, const char *sd_path_buf);

/* DBI0 USB source: nsp_name is the name advertised by the PC (LIST payload entry).
 * Uses dbi0_stream_file_range; requires dbi0_init() to have succeeded first. */
void install_source_dbi0(install_source_t *out);

/* URL source: `nsp_name` is used as-is as a libcurl URL. Any scheme that
 * devkitPro libcurl supports works — HTTP(S), FTP(S), FILE, TFTP, RTSP,
 * SMTP… — with ranged reads routed through `Range: bytes=` (HTTP) or
 * `REST n` (FTP). Intended for both HTTP-server installs (Tinfoil-style)
 * and the upstream `[Network sources]` key which accepts ftp:// URLs too. */
void install_source_http(install_source_t *out);

/* Fetch the PFS0 header from an install_source_t into a caller-owned buffer,
 * then parse. Handles the two-pass read (header + stringtab). Returns 0 on OK.
 * hdr_cap must be >= 4 KB; on success, bytes_read contains how many header bytes
 * were actually consumed. */
Result install_fetch_pfs0(const install_source_t *src, const char *name,
                          pfs0_t *out, uint8_t *hdr_buf, size_t hdr_cap);
