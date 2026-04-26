# Phase 4 Blueprint — clean rewrite of DBI 891 from scratch

This document is the bridge between Phases 1-3 (analysis) and Phase 4
(implementation). It maps the analytical findings to the concrete
modules of `/opt/aimeld-proj/dbi-fork/reference/test-app/`, the
clean-rewrite skeleton.

## Goal

Produce a Switch homebrew `.nro` that is **feature-equivalent** to DBI
891-ru but built from independent code we can publish without legal
risk. The fork keeps the user-visible behaviour (UI flow, USB
protocol, file-system layout) but rewrites every line of source — no
copy-paste of upstream.

## Inputs from Phases 1-3

| Source | Used for |
|---|---|
| Plain string corpus (`plain_strings.txt`, 6 828 strings) | UI text recreation; library identification |
| Cipher v2 corpus (`decoded_v2_clean.tsv`, 51 strings) | English UI text |
| Cipher v3 corpus (`v3_all_sources.tsv` + `v3_blueprint_*.tsv`, 241 unique sites, 147+ confirmed Russian) | Russian UI text — the user-visible labels we need to render |
| Subsystem map (`string_xrefs.tsv`, FINDINGS Parts 12-23) | Implementation priority list |
| Function categorization (`fn_categories_891_v2.tsv`) | Per-feature scope estimation |
| Byte-match decomp (`decomp-891-tools/match_ok.tsv`, 230 symbols) | Reuse leaf functions verbatim where compatible licensing applies |

## Mapping to the test-app skeleton

The skeleton at `dbi-fork/reference/test-app/source/` already has the
structure the rewrite needs:

| Module | Phase 4 implementation source | Findings to apply |
|---|---|---|
| `main.c` | New, written for our fork | Boot flow comparable to upstream's `init_array` |
| `fb_console.c` | Reimplements upstream's render pipeline | Part 22 (render/UI) — atlas + UTF-8 console |
| `atlas.c` | Bundled font atlas (ZSTD-decompress at boot) | REVERSE.md §8 — font atlas is plain ZSTD blob in rodata |
| `ui.c` / `ui_layouts.c` | Clean rewrite | Part 12-22 string corpus — all visible labels |
| `dbi0.c` | DBI0 USB protocol implementation | Part 14 (MTP) and 887's Part 8 docs |
| `usbms.c` | USB mass-storage backend | Part 14 |
| `install.c` / `install_sources.c` | NSP / XCI installer | Part 16 |
| `nsp_info.c` | Info viewer for NSP metadata | Part 23 + cipher v3 strings (`(шестнадцатеричный)`, `значение) : {}%`) |
| `gamecard.c` | Cart dump | Part 18 |
| `saves.c` | Save backup / restore | Part 17 |
| `titledb.c` | TitleDB sync | Part 15 |
| `selfupdate.c` | DBI self-update | n/a — fork should NOT self-update from upstream |
| `http.c` | HTTP file serving | Part 13 |
| `ips.c` | Atmosphere IPS / cheat installer | Part 21 |
| `ntp.c` | NTP time sync | n/a in 891 — required for HTTPS cert validation |
| `tickets.c` | Ticket installer | Part 16 |
| `pfs0.c` / `nsz.c` | File-format parsers | Part 16 |
| `zipsrc.c` | Zip archive helpers | n/a in 891 directly; used by NSP source |
| `fs_scan.c` | File-system enumerate | helper |
| `dbi_config.c` / `log.c` | Config + logging | helper |

Modules NOT yet in the skeleton that 891 needs:
* `ftp.c` — FTP server (Part 12 — ~ 13 entry functions, 35 anchor strings)
* `webdav.c` — WebDAV server (Part 13 — `WebDAV` / `webdav://` handlers)
* `mtp.c` — MTP server (Part 14 — `dbi::mtp::*` namespace)
* `theme.c` — UI theming (887's Part 29)
* `ipc.c` — Switch IPC framework wrapper (887's Part 5)
* `fb2_reader.c` — FictionBook reader (887's Part 30) — optional
* `cheats.c` — Cheat installer (887's Part 28)
* `ssh.c` — SFTP / SCP via libssh2 (Part 20 — ~ 165 functions footprint)

## Localisation strategy for Phase 4

Phase 1 produced a curated KOI8-R + UTF-8 string table for 891. The
rewrite should:

1. Adopt **UTF-8 internally** (current Switch toolchain default) and
   render via the test-app `atlas.c` font path. Avoid KOI8-R entirely
   inside the new fork.
2. For each Russian label found in `v3_clean_all.tsv`, store the UTF-8
   text in a per-locale resource file (`romfs:/locale/ru.json` or
   similar), keyed by symbolic name.
3. Default the locale dispatch from `appletGetDesiredLanguage()` —
   replaces `FUN_7113c4e0` and the cipher v3 obfuscation entirely.
4. Phase 4 ships **no encrypted strings**. The cipher path was upstream's
   anti-leak measure for unreleased translation — the fork doesn't need
   it.

## Toolchain matching

* Toolchain: devkitA64 / GCC 13.x — same as upstream 887/891.
* Flags: `-O2 -fPIE -ffunction-sections -fdata-sections
  -fno-stack-protector -march=armv8-a+crc -mtune=cortex-a57 -mtp=soft`
  (extracted from upstream's PT_NOTE; see `re/analysis/toolchain_887.md`).
* Linker: `-Wl,--no-gc-sections` for parity with byte-matched decomp.

## Open questions for Phase 4

* What's the legal status of the upstream 891 `.nacp` file? The
  fork's `.nacp` is bespoke (`title_id = 0100000000DB1000` is reused;
  we own the title, publisher, version fields via 887's
  `dbiforkgit.nacp`).
* Does the upstream use `dynamic_cast` vtables we need to replicate
  exactly, or are virtual interfaces newly designed in the rewrite?
* Should the rewrite ship its own libcurl/libssh2/zlib/zstd/pugixml
  builds, or link against the devkitPro `portlibs` versions? (Phase 2
  results suggest portlibs are byte-compatible with upstream's; saves
  re-shipping vendored copies.)

## Status of Phase 4

The skeleton compiles to a 1.6 MB `.nro` (`dbi0_test.nro`) that
already implements the DBI0 protocol against the upstream
`dbibackend.py` PC tool. The rewrite is in early-stage; the analytical
inputs above are now sufficient to drive the remaining feature
implementation.


---

## Phase 4 — completion status (2026-04-26)

Phase 4 is now COMPLETE for the top-level feature set. All modules
listed as "TODO" in the original blueprint are present in the
`fork/source/` tree and build cleanly.

| Module | Status | LOC | Notes |
|---|---|---|---|
| `ftp.c` | NEW (this round) | 523 | RFC 959, PASV-only, LIST/RETR/CWD/PWD work |
| `webdav.c` | NEW | 243 | RFC 4918 read-only (OPTIONS/GET/HEAD/PROPFIND) |
| `mtp.c` | NEW | 172 | USB MTP, container header + OpenSession; ops TODO |
| `sftp.c` | NEW | 190 | libssh2 client (password auth + get/put) |
| `theme.c` | NEW | 88 | setsysGetColorSetId + light/dark palette |
| `title_render.c` | NEW | 48 | replaces FUN_710012b890 cipher v3 ROL6 sentinel |
| `fb2_reader.c` | NEW | 141 | FB2 reader skeleton + paginator |

Plus updates to `main.c` to wire the new servers into the event loop.

Build verified: 1.7 MB dbi0_test.nro under devkitpro/devkita64 docker.

## Post-Phase-4 roadmap

The skeletons above need polish to reach upstream feature parity:

1. **MTP**: full operation set (GetDeviceInfo / GetStorageIDs /
   GetObjectHandles / GetObjectInfo / GetObject / SendObject /
   DeleteObject / vendor extensions 0x9801..0x9804). Currently only
   OpenSession returns OK; everything else is 0x2005
   (OperationNotSupported).
2. **FTP STOR/APPE/DELE/MKD/RMD/MOVE**: write-side commands.
3. **WebDAV PUT/MKCOL/DELETE/MOVE/COPY**: write-side methods.
4. **SFTP listing**: implement libssh2_sftp_opendir / readdir loop.
5. **Locale JSON**: per-language UI text in `romfs:/locale/<lang>.json`.
6. **Settings UI**: theme override, server toggles, port configuration.
7. **HTTP**: Album / InstalledGames / SDCard endpoint trees (currently
   just basic GET).
8. **NSZ**: full decompression integration with install pipeline.

Each item is an incremental pull request against the fork; the
architecture is in place.
