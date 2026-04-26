# Phase 3 — Feature decomposition (DBI 891)

Feature inventory derived from Phase 1 (decoded encrypted strings) and
Phase 2 (library identification). Each feature lists the strings that
anchor it and a rough address window.

The mapping is **string-driven**, not pure call-graph clustering — call
graph requires Ghidra-level static analysis. A string-driven feature map
is enough to drive Phase 4 (clean rewrite) because the rewrite re-implements
each feature from scratch; it only needs to know *what* to re-implement,
not the precise old layout.

## Top-level features

### 1. NSP / XCI installer

* Anchors:
  - `0x0085c078` `Invalid NCA header fixed key signature`
  - `0x0085c2a8` `FatFileSystem Corrupted`
  - `0x0085c360` `Invalid contentstorage base`
  - `0x0085c288` `BuiltInStorage Corrupted`
  - `0x0083adb8` `.cnmt.nca`
  - `0x0083af18` `There is no single cnmt file`
  - `0x0083b008` `ticket.tik`
* Subsystem of: DBI core
* Notes: handles NCA header verification, content-storage population, ticket installation, SaveDataTransfer (`SaveDataTransferVersion2` at `0x0083fad0`).

### 2. Save backup / restore

* Anchors:
  - `0x0083a938` `sdmc:/switch/DBI/saves/`
  - `0x0083aa98` `Skipping save backup`
* Subsystem of: DBI core
* Notes: save data IO, optional skip flag.

### 3. FTP server

* Anchors (encrypted Phase 1 hits):
  - `Service ready for new user.` `0x008f8dd0`
  - `File status okay; about to open data connection.` `0x008f8380`
  - `Can't open data connection.` `0x008f83d8`
  - `Requested action aborted. Failed to read file.` `0x008f8458`
  - `Connection closed; transfer aborted.` `0x008f84f0`
  - `Requested action not taken. File name not allowed.` `0x008f8810`, `0x008f8af0`
  - `Requested action not taken. File not available.` `0x008f8950`
  - `Syntax error in parameters or arguments.` `0x008f7e90`
* Subsystem of: DBI servers
* Notes: full RFC 959 server with PASV / PRET / PASS / standard reply codes.

### 4. HTTP / WebDAV / album server family

* Anchors:
  - `0x00840438` `AlbumHttpServer`
  - `0x00840448` `InstalledGamesHttpServer`
  - `0x00840468` `SDCardHttpServer`
  - `0x008f98c8` `<link rel="stylesheet" href="/main.css">`
  - `0x008f9cc8` `li.thumb{display:inline-table;padding:5px}`
  - `0x008fa150` `<title>List of installed games</title>`
* Subsystem of: DBI servers
* Notes: three independent HTTP virtual servers serving different views; styled by inline CSS shipped at `0x008f9cc8` etc.

### 5. MTP server

* Anchors:
  - `0x008378c0` `MTP custom storages`
  - `0x0083b4e0` `DBI MTP`
  - `0x0083d408` `MTP Browser`
  - `0x0083e5f8` `MTP Storages`
  - `0x008f6e48` (symbol-string) `N3dbi3mtp21MtpInitiatorExceptionE`
* Subsystem of: DBI servers
* Notes: namespace `dbi::mtp::*`. Used as the desktop "USB transfer" feature.

### 6. TitleDB sync

* Anchors:
  - `0x0083e468` `https://raw.githubusercontent.com/blawar/titledb/master/versions.txt`
  - `0x00840820` `TitleDB`
  - `0x00840890` `sdmc:/tmp_titledb.json`
  - `0x00837998` `titledbfixed`
* Subsystem of: DBI core
* Notes: pulls game metadata from blawar's repo on demand.

### 7. PNG / JPEG decode (game-icon rendering)

* Anchors:
  - `0x00837de8` `bad png sig`
  - `0x00838b50` `jpegdec`
  - `0x00845190` `image/gif` / `0x008451a0` `image/jpeg` / `0x008451b0` `image/png`
* Subsystem of: DBI render
* Notes: decodes thumbnails for the title list view.

### 8. Settings / config UI

* Anchors:
  - `0x008fe738` `  Application Error Code Category : {}`
  - `0x008fe8f0` `  Startup User Account Option     : `
  - `0x008fea58` `  Cache Storage Index Max         : {}`
  - `0x008fed08` `    Receivable group config: None`
  - `0x008ff3a8` `  Signature keygeneration: {:d}`
* Subsystem of: DBI UI
* Notes: padded labels are written with `std::format` / `fmt::format`-style placeholders. These render in the in-app application-info pane.

### 9. NCA / SDK metadata browser

* Anchors:
  - `0x008f6bc0` `Signed 8-bit integer`
  - `0x008f6d90` `Array of signed 64-bit integers`
  - `0x008f6db0` `Array of unsigned 64-bit integers`
  - `0x008f6f60` `Device property {} not available`
  - `0x008f7088` `Can not get storage IDs`
* Subsystem of: DBI UI / inspector
* Notes: low-level inspector for NCA metadata fields, displayed in the "info" pane.

### 10. Patch storage / cheat installer

* Anchors:
  - `0x008f4340` `Can not init PatchStorage:`
  - `0x008f3d58` `Can not open file. Path not found`
  - `0x0083a090` `/atmosphere/exefs_patches/`
* Subsystem of: DBI core
* Notes: writes Atmosphere `exefs_patches`.

### 11. Audit / event log

* Anchors:
  - `0x0085e638` `Events before filtering`
  - `0x0085e830` `{:>6}: Net time sync. Old user: {}, ...`
  - `0x0085e920` `RTC period. StartIndex: {}, length {}, ...`
* Subsystem of: DBI core / debug
* Notes: probably writes to `sdmc:/switch/DBI/logs/` (`0x0083e440`).

### 12. Boot / banner / version

* Anchors:
  - `0x0083fe10` `Licensed By Nintendo`
  - `0x0083fe28` `Distributed By Nintendo`
  - `0x0083bb70` `Nintendo` / `0x0083bb80` `Switch` / `0x0083c0c0` `Switch-DBI`
  - `0x00838d28` `SwitchPresence`
  - `0x008f9eb0`-area version-format `Format version  : ` / `Version         : `
* Subsystem of: DBI UI / about
* Notes: feeds the "About" / boot banner, including title-builder fragments tracked in REVERSE.md sec. 7.

## Feature → library use map

| Feature | Uses |
|---|---|
| NSP / XCI installer | libnx (fs/ncm/ns), zstd, zlib |
| Save backup | libnx (fs), zstd |
| FTP server | libnx (sockets) |
| HTTP / WebDAV | libnx (sockets), pugixml (WebDAV PROPFIND), nlohmann/json |
| MTP server | libnx (USB) |
| TitleDB sync | libcurl (HTTPS), nlohmann/json, libnx ssl-service |
| Save SFTP | libcurl + libssh2 |
| PNG/JPEG decode | bundled image decoders |
| Settings UI | libnx, libstdc++ regex |

## Tagged function-range estimates (heuristic)

| Range | Feature / library | Confidence |
|---|---|---|
| ~`0x71042000` | libcurl impl | high (string proximity) |
| ~`0x7104a000` | libssh2 impl | high |
| ~`0x711a1000` | DBI title-builder + UI string formatting (`FUN_711a17f0`) | high |
| ~`0x713e0000` | locale-mapper + cipher v3 caller | high |
| ~`0x71300000` | DBI core (NCA / fs services) | medium |
| ~`0x71450000` | DBI servers (FTP / HTTP / MTP) | medium |
| ~`0x71550000` | render / framebuffer console | medium |

These are tentative and still need a Ghidra-level call-graph pass to be made strict. They are fine as input for Phase 4 because Phase 4 rewrites everything anyway.

## What Phase 3 still does NOT determine

* Exact `FUN_xxx → feature` table for every DBI function.
* Whether some apparent features (e.g. WebDAV) share code with FTP.
* The full text of the in-app title — that requires the dynamic Unicorn trace described in REVERSE.md sec. 9.
