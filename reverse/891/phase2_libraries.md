# Phase 2 — Library / module fingerprinting (DBI 891)

Library boundaries identified from `.rodata` plain-string scan over
`0x00837000..0x00adb000`. Each entry: name, version (if known), evidence,
and approximate role inside DBI.

## Vendored libraries

| Library | Version | Evidence | Role in DBI |
|---|---|---|---|
| **libcurl** | 7.69.1 | `0x008481b0`, `0x00848228`, `0x00848258` `CLIENT libcurl 7.69.1`; ~80 distinct error / status strings | HTTP, FTP, SFTP client (TitleDB sync, WebDAV uploads) |
| **libssh2** | unknown | `0x00845ae8` `Unknown error in libssh2`; `0x00846830` `Failed to free libssh2 session`; `0x0084c380` `_libssh2_transport_read() bailed out!` | SFTP / SCP transport for libcurl |
| **zlib** | unknown | `0x00837bb0` `bad zlib header`; `0x00837be0` `zlib corrupt` | Generic decompress |
| **zstd** | unknown | `0x00855310` `Zstd decompression failed: %s` | Font atlas, NSP/XCI inner data |
| **nlohmann/json** | recent (header-only) | `0x0083c490` `[json.exception.`; `0x00838888` `attempting to parse an empty input` | JSON parsing for TitleDB and config |
| **libnx** | upstream | TLS via Switch ssl service (`0x008458a0` `Error importing ca cert file %s - libnx: 0x%X`); svc thunks; framebuffer | OS abstractions (full Switch SDK shim) |
| **libstdc++** | gcc-paired | `basic_string::*`, `std::bad_alloc`, `std::vector<bool>::_M_*`, `std::deque` | C++ runtime |
| **PNG decoder** | unknown | `0x00837de8` `bad png sig`; mime types `image/png` / `image/jpeg` / `image/gif` | Game icon decoding |
| **JPEG decoder** | unknown (libjpeg-turbo or stb_image) | `0x00838b50` `jpegdec`; `JPEG 2000`, `Motion JPEG` | Game icon decoding |

The strings `Apache HTTP` / `WebDAV` / `webdavs://` and the `mtp-server-nx`
labels are **DBI's own modules**, not vendored implementations — DBI ships
its own FTP, WebDAV, MTP, and HTTP servers and merely uses Apache-style
status banners for client compatibility.

## DBI's own modules (identified by anchor strings)

| Module | Anchor strings | Notes |
|---|---|---|
| FTP server | `0x008437d8` `FTP: The server failed to connect to data port` and the `Service ready / Connection closed / Requested action not taken` family decoded in Phase 1 | Pure RFC 959 server in DBI |
| WebDAV server | `0x00837a78` `ApacheHTTP`; `0x00837a88` `WebDAV`; `webdavs://` | DBI's own WebDAV |
| MTP server | `0x008378c0` `MTP custom storages`; `0x0083b4e0` `DBI MTP`; `0x008f6e48` symbol `N3dbi3mtp21MtpInitiatorExceptionE` | Custom MTP server, namespace `dbi::mtp::` |
| HTTP serve-trees | `0x00840438` `AlbumHttpServer`; `0x00840448` `InstalledGamesHttpServer`; `0x00840468` `SDCardHttpServer` | One HTTP endpoint per virtual resource tree |
| TitleDB sync | `0x0083e468` `https://raw.githubusercontent.com/blawar/titledb/master/versions.txt`; `0x00840820` `TitleDB` | Pulls metadata from blawar's TitleDB |
| Save backup / restore | `0x0083a938` `sdmc:/switch/DBI/saves/`; `0x0083aa98` `Skipping save backup` | Save data backup feature |
| Patch / cheat install | `0x0083a090` `/atmosphere/exefs_patches/` | Atmosphere mod installer |
| Settings / atmosphere bridge | `0x0083ad58` `daybreak.nro` references | OFW updater integration |

## Internal directory layout (DBI runtime paths)

```
sdmc:/switch/DBI/saves/   - save data backups
sdmc:/switch/DBI/dumps/   - cart/title dumps
sdmc:/switch/DBI/temp/    - scratch
sdmc:/switch/DBI/logs/    - mtp_debug.log etc.
sdmc:/tmp_titledb.json    - cached TitleDB
```

## Notable observations

* DBI links **statically** — every library above lives inside the NRO; there is no runtime loader for shared objects on Switch homebrew anyway.
* All HTTPS goes through libnx's `ssl-service`, **not** OpenSSL/mbedTLS — so any cert troubleshooting points at `0x00845660..0x00845ad0`. There is no bundled CA store; libnx expects it loaded by the system.
* `libssh2` plus `libcurl` give DBI free SFTP/SCP support that mirrors its FTP server.
* `Telegram` / `Discord` / similar messengers have **no string presence** — DBI does not phone home or integrate with chat platforms.
* The **TitleDB URL is hard-coded** at `0x0083e468`. Phase 4 should make this configurable.

## What Phase 2 still does NOT determine

* Exact version of zlib / zstd / libssh2 / libpng / libjpeg.
* Whether the PNG/JPEG decoder is libpng+libjpeg-turbo or a single-header library (stb_image).
* Whether `pugixml`, `tinyxml`, or another XML parser is in use (some XML-shaped errors at `0x0083d6d0` suggest yes — `Error parsing start element tag`).
* Function-level boundaries — for that, run the next phase and fold each library's `.text` range into the function-tag table.
