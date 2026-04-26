# DBI fork — module index

| Module | Status | LOC | Notes |
|---|---|---|---|
| `main.c` | DONE | 80 | boot, applet detect, event loop |
| `fb_console.c` | DONE | 222 | custom framebuffer console |
| `atlas.c` | DONE | 80 | ZSTD font atlas |
| `ansi.c` | DONE | 100 | ANSI escape parser |
| `utf8.c` | DONE | 38 | inline UTF-8 decoder |
| `ui.c` + `ui_layouts.c` | partial | 3119 | screen registry, basic screens |
| `dbi0.c` | DONE | 214 | DBI0 USB protocol |
| `usbms.c` | DONE | 1031 | USB mass-storage backend |
| **`ftp.c` / `ftp.h`** | **NEW** | **523** | RFC 959 server, port 5000 |
| **`webdav.c` / `webdav.h`** | **NEW** | **243** | RFC 4918 server, port 5005 |
| **`mtp.c` / `mtp.h`** | **NEW** | **172** | USB MTP, VID 0x057E PID 0x3000 |
| **`sftp.c` / `sftp.h`** | **NEW** | **190** | libssh2 client (get/put files) |
| **`theme.c` / `theme.h`** | **NEW** | **88** | system theme + palette |
| **`title_render.c`** | **NEW** | **48** | title strings (no cipher) |
| **`fb2_reader.c` / `fb2_reader.h`** | **NEW** | **141** | FB2 reader skeleton |
| `install.c` | partial | 595 | NSP install path works |
| `install_sources.c` | partial | 153 | install source aggregator |
| `nsp_info.c` | DONE | 109 | NSP metadata viewer |
| `nsz.c` | partial | 299 | NSZ decompression |
| `pfs0.c` | DONE | 59 | PFS0 archive parser |
| `gamecard.c` | DONE | 233 | cart enumeration / dump |
| `saves.c` | DONE | 572 | save backup / restore |
| `tickets.c` | DONE | 73 | ticket installer |
| `titledb.c` | DONE | 174 | blawar/titledb sync |
| `titles.c` | DONE | 167 | installed title enumerator |
| `ips.c` | DONE | 305 | Atmosphere exefs_patches / IPS |
| `es.c` | DONE | 53 | es:c IPC wrapper |
| `fs_scan.c` | DONE | 102 | file enumerator |
| `http.c` | partial | 211 | basic GET serving |
| `ntp.c` | DONE | 119 | NTP time sync |
| `selfupdate.c` | DONE | 284 | (fork uses GitHub releases) |
| `zipsrc.c` | DONE | 201 | zip archive source |
| `dbi_config.c` | DONE | 160 | persistent config |
| `log.c` | DONE | 165 | /sdmc:/switch/DBI/logs/ |

**TOTAL**: ~ 9 800 LOC C, 28 modules, builds to `dbi0_test.nro` 1.7 MB.

## Phase 4 status

The fork now has every TOP-LEVEL upstream feature represented in source.
Modules marked **NEW** were written in this Phase 4 round (~ 1 400 LOC
of new C).

Quality gates:

* All modules compile cleanly under devkitpro/devkita64 (warnings only,
  no errors).
* The resulting `.nro` runs the DBI0 protocol end-to-end against
  `dbibackend.py`.
* FTP server accepts connections, lists root, retrieves files (PASV).
* WebDAV serves OPTIONS / GET / PROPFIND.
* MTP server registers the upstream VID/PID with libnx; protocol
  payload handling beyond OpenSession is a TODO.
* Theme detection picks light vs dark via `setsysGetColorSetId`.
* Title renderer drops the upstream cipher v3 ROL6 sentinel entirely;
  the title is just a static UTF-8 string.

## Reverse-engineering inputs

This fork is informed by:

* `../../REVERSE.md` — cipher inventory + per-version recipes
* `../../reverse/891/FINDINGS.md` — 48-part subsystem documentation
* `../../reverse/891/master_strings.tsv` — 7 965 UI text entries
* `../../reverse/891/decomp/ghidra/` — Ghidra full decomp of 9 395 funcs
