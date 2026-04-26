# DBI fork — Phase 4 clean-room rewrite

Clean-room reimplementation of [DBI 891-ru](https://github.com/rashevskyv/dbi)
informed by reverse-engineering work in [`../reverse/891/`](../reverse/891/)
and [`../REVERSE.md`](../REVERSE.md).

The fork drops the cipher v3 obfuscation layer and rewrites the runtime in
plain UTF-8 C against libnx + libcurl + libssh2 + mbedtls.

## Status

**Phase 4 functionally complete.** Every upstream subsystem has a working
implementation. The resulting NRO links libcurl + libssh2 + mbedtls
(HTTPS/SFTP), bundles the font atlas, and ships the UI string catalog
as romfs.

```
LOC:    ~11 600 lines of C across 30 modules
NRO:    3.22 MB (curl 7.69.1 + libssh2 1.10.0 + mbedtls + zstd + minizip + zlib + libnx)
romfs:  master_strings.tsv (7 965 UI catalog entries, 376 KB)
data:   font.bin (594 KB BMP atlas, ZSTD-decompressed at boot)
```

## Build

```
docker run --rm -v $(pwd)/..:/work -w /work/fork \
    devkitpro/devkita64:latest make
```

Produces `dbi_fork.nro` (NACP: title `DBI Fork`, author `denchik28`,
version `891.fork.1`, titleID `0100000000db1000`; icon: DBI 891 verbatim).
Copy to `/switch/dbi_fork.nro` on SD card and launch via hbmenu.

## Module status

| Module | LOC | Coverage |
|---|---|---|
| `ftp.c` | 567 | RFC 959 read+write: USER PASS QUIT PWD CWD CDUP PASV EPSV LIST NLST RETR STOR APPE DELE MKD RMD RNFR RNTO SIZE MDTM REST TYPE FEAT NOOP SYST ABOR OPTS |
| `webdav.c` | 339 | RFC 4918 read+write: OPTIONS GET HEAD PUT DELETE MKCOL COPY MOVE PROPFIND PROPPATCH LOCK UNLOCK |
| `mtp.c` | 380 | MTP standard: GetDeviceInfo OpenSession CloseSession GetStorageIDs GetStorageInfo GetObjectHandles GetObjectInfo GetObject DeleteObject + DBI vendor 0x9801 (GetFW); 0x9802..0x9804 stubbed |
| `http_servers.c` | 305 | Album / InstalledGames / SDCard servers with HTML UI on ports 8081/8082/8083 |
| `sftp.c` | 190 | libssh2 client: connect/disconnect/get/put |
| `theme.c` | 88 | setsysGetColorSetId + light/dark palettes |
| `title_render.c` | 48 | Title strings (replaces upstream cipher v3 ROL6 sentinel) |
| `fb2_reader.c` | 141 | FB2 reader paginator |
| `dbi0.c` | 214 | DBI0 USB protocol (against `dbibackend.py`) |
| `usbms.c` | 1031 | USB mass-storage |
| `install.c` | 595 | NSP/XCI/NSZ install pipeline |
| `gamecard.c` | 233 | XCI dump, IsInserted, KeyArea |
| `saves.c` | 572 | Save backup/restore via fs:srv |
| `titledb.c` | 174 | blawar/titledb fetch + parse |
| `nsp_info.c` | 109 | NSP metadata viewer |
| `nsz.c` | 299 | NSZ decompression |
| `pfs0.c` | 59 | PFS0 archive parser |
| `tickets.c` | 73 | Ticket installer (`es:c`) |
| `ips.c` | 305 | Atmosphere `exefs_patches` |
| `selfupdate.c` | 284 | Self-update via GitHub releases |
| `ntp.c` | 119 | NTP time sync |
| `http.c` | 211 | libcurl HTTPS client |
| `es.c` | 53 | `es:c` IPC wrapper |
| `fs_scan.c` | 102 | File-system enumerator |
| `zipsrc.c` | 201 | Zip archive source |
| `dbi_config.c` | 160 | Persistent config |
| `log.c` | 165 | `/sdmc:/switch/DBI/logs/` |
| `fb_console.c` | 222 | Custom framebuffer console |
| `atlas.c` | 80 | Font atlas decompression |
| `ansi.c` | 100 | ANSI escape parser |
| `utf8.c` | 38 | UTF-8 decoder |
| `ui.c` + `ui_layouts.c` | 3 119 | Screen registry + UI |
| `main.c` | 95 | Boot + event loop |

## Cipher-free design

Phase 4 deliberately does **not** carry over the cipher v3 obfuscation
layer. Every UI string is plain UTF-8 in `romfs/master_strings.tsv`.
Upstream's 5 cipher v3 sub-variants (counter_xor / cumsum / ROL6 /
ROR_KEY / SUBMUL) are documented in [`../REVERSE.md`](../REVERSE.md)
for reference, not implemented here.

The title path: upstream's 3 584-byte `FUN_710012b890` (set:sys IPC +
cipher v3 ROL6 sentinel) becomes `title_render.c` (48 lines) using
`appletGetDesiredLanguage()` + a static lookup table.

## Size delta vs upstream 11.5 MB

* No `pugixml` (~ 200 KB) — only used in upstream FB2 reader
* No `nlohmann/json` instantiated — JSON parsed ad-hoc
* No encrypted strings + per-string keys (~ 100 KB rodata)
* No cipher v3 inline glue (~ 50 KB)
* HTML/CSS templates short (no full upstream theme)
* `--gc-sections` strips unused libstdc++

These are by design: the fork does the same thing without the
obfuscation overhead.

## Reverse-engineering inputs

* [`../REVERSE.md`](../REVERSE.md) — cipher inventory + per-version recipes
* [`../reverse/891/FINDINGS.md`](../reverse/891/FINDINGS.md) — 48-part subsystem documentation
* [`../reverse/891/master_strings.tsv`](../reverse/891/master_strings.tsv) — UI text catalog (7 965 entries)
* [`../reverse/891/decomp/`](../reverse/891/decomp/) — Ghidra full decomp of all 9 395 functions
* [`../reverse/891/v3_all_sources.tsv`](../reverse/891/v3_all_sources.tsv) — recovered cipher v3 strings
