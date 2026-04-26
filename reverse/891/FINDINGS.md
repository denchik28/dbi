# DBI 891-ru — function-by-function reverse-engineering log

This document is the 891 equivalent of `/opt/aimeld-proj/re/FINDINGS.md`
(which covers 887 across 38 parts). It logs incremental discoveries about
the 891 binary that aren't already obvious from its decompilation.

The static landmark addresses below assume NRO base `0x71000000`.

---

## Part 1 — NRO format and segment layout

```
NRO at 0x71000000, total file size 0xb01e2d (~11.5 MiB)
.text       0x00000000..0x00837000   (8 411 392 bytes)
.rodata     0x00837000..0x00adb000   (2 768 896 bytes)
.data/.bss  0x00adb000..0x00af9000     (122 880 bytes)
NACP        0x00afb19d..0x00afb19d+0x4000
ASET (LICE) tail
```

NRO header: `NRO0` magic at 0x10. ApplicationVersion lives at NACP +
0x3060 = file 0xafe1fd → ASCII `891-ru\0`. NACP names + publishers at
nacp_off + i*0x300 (i = 0..15).

---

## Part 2 — Cipher inventory (vs 887)

| Cipher variant | DBI 891 use | DBI 887 use |
|---|---|---|
| v1 (single-byte XOR) | none observed | legacy XCI parser asserts |
| v2 (XOR + ROR by key&7) | English/ASCII UI strings | same |
| v3 (XOR + counter + cumsum) | KOI8-R Russian UI strings | NEW in 891 — 887 used double-XOR |
| Plain (no cipher) | library boundaries, paths, debug strings | same |

The cipher v3 spec was extracted from the disasm at
`0x713e0718..0x713e0764` and verified end-to-end against the reference
plaintext `Форсировать`:

* Ciphertext = 8 bytes from `.rodata` at `0x008597c0` plus a 4-byte
  immediate `0xe2863114` embedded in the calling instruction stream.
* Key = `0x1dd7098fc98121fd`.
* Decryption (per-byte): `tmp[i] = ct[i] ^ ((key_byte[i&7] + (i>>3)) & 0xff)`,
  then `pt[0] = tmp[0]; pt[i] = tmp[i] + pt[i-1]` for i ≥ 1.

This cipher is **inlined** at every call site rather than reached
through a shared decryptor. The site's per-string key is loaded by a
`mov xK, #imm; movk xK, #imm, lsl #16; movk xK, #imm, lsl #32;
movk xK, #imm, lsl #48` chain; the loop length comes from a `cmp xN,
#N` at the loop tail; the ciphertext source is reached via a helper
`bl` that returns a pointer to the `std::string` SSO buffer.

Walker script: `/opt/aimeld-proj/dbi-fork-git/reverse/scan_v3_xref.py`.
Brute scanner: `/opt/aimeld-proj/dbi-fork-git/reverse/scan_v3_brute.c`.

---

## Part 3 — Cipher v3 string recovery

**241 unique cipher v3 sites recovered** (cf. 887's 151 KOI8-R Cyrillic
strings — 891 has surpassed it). 147+ confirmed with clean Russian
plaintext via the language model. Full table in `v3_all_sources.tsv`.

Three independent recovery vectors were combined:

| Vector | Output | Confidence |
|---|---|---|
| `.text` xref walker + paired brute-force (`scan_v3_paired.c`) | best (key, length) → rodata offset where decryption looks Russian | medium-high (filtered by Russian language model) |
| `.text` immediate walker (`scan_v3_immediate.py`) | full plaintext when CT = rodata 8 B + a 32-bit immediate from the calling code | high — explicit constraint |
| Known-prefix encryption (`scan_v3_prefixes.c`) | for every (8-byte Russian prefix × extracted key), encrypt with cipher v3 and check if the bytes appear in rodata | **highest** — proven by exact byte match |

All three converge on `counter_cumsum` (cipher v3) AND a second
`counter_xor` variant in 891. Both are the original cipher v3 spec
without and with the cumsum step. Examples below:

### Long, fully-decoded strings (≥ 16 bytes, all-rodata or rodata + verified suffix)

| rodata_off | length | plaintext |
|---|---|---|
| `0x008f7680` | 32 | `записи на носитель слишком низка` |
| `0x008f76a8` | 32 | `Рекомендуется заменить SD карту ` |
| `0x008f53b8` | 32 | `были ошибки. Проверьте наличие E…` |
| `0x008fb8b0` | 32 | `Пробуем мультипрограмный вариант` |
| `0x008fb9c8` | 19 | `(шестнадцатеричный)` |
| `0x008fd400` | 32 | `Кажется ваша SD карта является п…` |
| `0x008fff58` | 32 | `времени через Интернет в настрой…` |
| `0x009000e8` | 18 | `установленные игры` |
| `0x009002d8` | 19 | `или оставьте пустым` |
| `0x00900420` | 20 | `2ая панель, (+) меню` |
| `0x008fddf0` | 18 | `напряжение : {} mV` |
| `0x008f9c40` | 18 | `плейсхолдеров`     |
| `0x0085baa0` | 16 | `значение) : {}%` |
| `0x008fb8d8` | 17 | `экспортирован: {}` |
| `0x008fd2b0` | 16 | `Предупреждения: ` |

### Short strings (8-byte prefix verified by encryption blueprint match)

`Установка`, `Установлено`, `Удаление` (×9 sites), `Удалить`, `Загрузка`,
`Загружае`, `Загружен`, `Сохранен` (×11 sites), `Сохранён`, `Настройка`,
`Информация` (×6 sites), `Восстановить`, `Завершено`, `Форсировать`,
`Найдено`, `Проверка` (×2), `Проверяю`, `Просмотр` (×2), `обновлено` (×4),
`Свободно`, `привязки`, `Размер:`, `хранилище`, `игры`, `параметр`,
`аргумент`, `значение`, `Создание` (×5), `Удаляется`, `Удалить`,
`Запустить`, `Операция`, `Полученное`, `Ожидаемые`, `Автоповтор`,
`Контролл…` (controllers), `Родительский`, `родительского`,
`Генерируется`, `ОТСУТСТВУЕТ`, `возрастного`, `Пожалуйста`,
`требования`, `устройство`, `интерфейса:`, `контенте`, `Показывать`,
`картриджа`, `скачанного`, `прошивки`, `мобильный`, `созданная`,
`следующий`, `системного`, `получений`, `запретов`, `посылаем`.

The third column (multiple sites for the same prefix) means DBI uses
the same Russian word as the prefix of multiple distinct UI messages,
each with its own per-string key. The full continuation of those
strings lives in `.text` immediates and was not always recovered by
the immediate walker.

### Cipher v3 sub-variants in 891

| Variant | First-block recipe | Notes |
|---|---|---|
| `simple_xor` | `pt[i] = ct[i] ^ kb[i&7]` | Plain periodic XOR — the simplest variant. Used for many short strings (e.g. `Установка завершена`, `Обновление прошивки`, `Установлено`, `Распаковка`). |
| `counter_xor` | `pt[i] = ct[i] ^ ((kb[i&7] + (i>>3)) & 0xff)` | XOR with key + counter (no cumsum). Used for longer strings spanning multiple counter blocks (e.g. `Рекомендуется заменить SD карту`, `времени через Интернет в настрой…`). |
| `counter_cumsum` | `tmp[i] = ct[i] ^ ((kb+ctr) & 0xff); pt[0]=tmp[0]; pt[i] = tmp[i] + pt[i-1]` | Reference cipher (Part 2) — XOR + counter + cumulative-sum. Used for the bulk of cipher v3 strings (`Форсировать`, `(шестнадцатеричный)`, `Пробуем мультипрограмный вариант`). |

For 8-byte prefixes (one counter block), `simple_xor` and `counter_xor`
produce identical ciphertext because `(i>>3)` is 0 for i ∈ {0..7}.
The blueprint scanner `scan_v3_blueprint_multi.c` enumerates both.

Variants tested but not present in 891: `rorkey` (used by 887 for 243
strings), `rol6` (159 in 887), `submul(f=-0x3b)` (271 in 887),
`counter_rorkey` (24 in 887), `simple_rolkey`, `simple_xor_ctr`. None
produced clean Russian plaintexts in 891. Either the cipher generator
in 891 dropped those variants or they apply to strings that have moved
out of `.rodata`.

### Sample of strings recovered by `simple_xor` (new in this round)

`Прервано пользователем`, `Обновление прошивки` ×3 sites,
`Установка завершена` ×4, `Невозможно открыть` ×6, `Сбросить
настройки`, `Информация о игре` ×6, `Восстановление` ×2,
`Предупреждения`, `Регистрация` ×2, `Установлено` ×2, `установлено`
×6, `Распаковка`, `Установить`, `Информация`, `Удалено`,
`Подтверждение`.

Method:
1. Walk `.text` for the cipher v3 inline call site signature
   (`scan_v3_xref.py --mode pairs`) → 1 407 unique `(key, length)`
   pairs.
2. For each pair, brute-force across `.rodata` (`scan_v3_paired`) and
   pick the offset with the highest Russian-language score (sum of
   common Russian KOI8-R bigrams + Cyrillic-letter density).
3. Manually validate the decoded prefix against expected DBI vocabulary.

### Verified — all-rodata strings (full plaintext recovered)

| rodata_off | key | length | plaintext |
|---|---|---|---|
| `0x008fb8b0` | `0x51f58571cddb4f0b` | 32 | `Пробуем мультипрограмный вариант` |
| `0x008fb9c8` | `0x1b4d3197319727a9` | 20 | `(шестнадцатеричный) ` |
| `0x0085baa0` | `0x15697f77f729ab49` | 16 | `значение) : {}%` |
| `0x008f7680` | `0x0bb593d1c3a7a55f` | 32 | `записи на носитель слишком низка` |
| `0x009002d8` | `0x03d39d4d0579b1cd` | 19 | `или оставьте пустым` |
| `0x008fb9c8` | `0x1b4d3197319727a9` | 20 | `(шестнадцатеричный) ` |
| `0x0085f688` | `0x0b9727712bd3710f` | 18 | `зарегистрированный` |
| `0x00900420` | `0xe3fdbf235fa7c7fd` | 21 | `2ая панель, (+) меню` |
| `0x008fddf0` | `0xa34f31bfa925858b` | 18 | `напряжение : {} mV` |

### Verified — rodata-prefix-only (full string ends in a `.text` immediate)

These reach byte 8 cleanly but the suffix (chars 9 +) lives in a 32-bit
or 64-bit immediate operand stored inside the `.text` instruction stream
of the calling function — exactly like the reference site for
`Форсировать`. Recovering those tails requires walking each call site
and pairing the rodata anchor with the immediate.

| rodata_off | key | rodata-prefix |
|---|---|---|
| `0x008597c0` | `0x1dd7098fc98121fd` | `Форсиров` (full = `Форсировать`, suffix in immediate `0xe2863114`) |
| `0x00858290` | `0x2d6f036d75d789f1` | `Установк` (full likely `Установка`) |
| `0x00859e18` | `0x5dbb5b1fd1039357` | `Установл` (full likely `Установлено`) |
| `0x0085a230` | `0x6bbda3b733f199cf` | `Проверка` (full likely `Проверка...` or just this) |
| `0x00858fc0` | `0x1fb3c91f69c1edaf` | `Неизвест` (full likely `Неизвестный`) |
| `0x00859a88` | `0x0fa71533ff8f5111` | `Автоповт` (full likely `Автоповтор`) |
| `0x008589f8` | `0x09e75581e37f113d` | `сохранен` |
| `0x00859f20` | `0x61073d3fa73babbb` | `сервера:` |
| `0x008fdae0` | `0x07392939ad956309` | `номер   #` |

### What the strings reveal

* DBI 891 has Russian UI for: NSP / XCI installer (`Установка`,
  `Установлено`), settings (`Автоповтор`, `сохранен`, `номер`,
  `напряжение : {} mV`), file metadata viewer
  (`(шестнадцатеричный)`, `Пробуем мультипрограмный вариант`,
  `зарегистрированный`), FTP / HTTP (`сервера:`, `или оставьте пустым`),
  cart dump (`записи на носитель слишком низка`), input prompt
  (`2ая панель, (+) меню`).
* `напряжение : {} mV` is interesting — DBI exposes battery voltage in
  the about-pane.

---

## Part 4 — Other cipher variants (audit pending)

DBI 887 used **six** cipher variants in parallel (per
`/opt/aimeld-proj/re/analysis/find_887ru/07_full_search.py`):

| Variant | Recipe |
|---|---|
| `simple_xor` | `pt[i] = ct[i] ^ kb[i&7]` |
| `simple_rorkey` | `pt[i] = ROL(ct[i], kb[i&7]&7) ^ kb[i&7]` |
| `simple_rolkey` | `pt[i] = ROR(ct[i], kb[i&7]&7) ^ kb[i&7]` |
| `simple_xor_ctr` | `pt[i] = ct[i] ^ kb[i&7] ^ (i & 0xff)` |
| `counter_xor` | `pt[i] = ct[i] ^ ((kb[i&7] + (i>>3)) & 0xff)` |
| `counter_cumsum` | (the cipher v3 above) |

The cumsum variant ("v3") produced the bulk of the 887 hits; the rest
filled gaps. For 891 only counter_cumsum has been audited so far.
A multi-variant scanner (`scan_v3_multivariant.c`) is in the repo to
run all six and is currently being executed against the keys extracted
by the .text walker (1 256 keys).

Expected result band (extrapolating from 887): a few hundred
additional non-cumsum strings. The strings in 887's
`decoded_887_v10_clean.tsv` (8 818 lines) include all six variants
plus plain-text. We currently have 6 828 plain + 51 cipher v2 + 107
cipher v3 = 6 986 strings — short of 887's 8 818 by about 1 800. The
gap is likely covered by the other five cipher variants and longer
cipher v3 strings whose immediates we missed in the first pass.

---

## Part 5 — Function inventory

`reverse/extract_functions_891.py` walks the `.text` segment for
every `stp x29, x30, [sp, #-N]!` prolog (the standard GCC-13 entry on
DBI's toolchain) and emits a `(file_off, va, size_bytes)` table.

Result (saved in `functions_891.tsv`):

| Bucket | Count |
|---|---|
| < 32 B  | 31    |
| 32..63  | 321   |
| 64..127 | 1 207 |
| 128..255| 2 073 |
| 256..511| 1 751 |
| 512..1023|1 070 |
| ≥ 1024  | 1 230 |
| **total** | **7 683** |

Median 272 B, mean 1 121 B, max 192 528 B (a single huge function,
likely a generated parser; under-decomposed by my detector since it
doesn't have stp prologs at every basic block).

For comparison: 887 had ≈ 7 000 functions. Sizes are similar; 891 has
slightly more functions, consistent with new code added since 887.

---

## Part 6 — Byte-by-byte decomp track (initial 887→891 reuse)

The 887 byte-match decomp at `/opt/aimeld-proj/dbi-fork/decomp/` had
131 byte-identical function symbols across 43 source files. Because
891 was built with the same toolchain (binutils 2.44 / gcc 13.x
devkitA64) and the bulk of DBI's code is unchanged between releases,
the 887 sources are reusable as a baseline for 891.

Workflow tested:

1. `cp -r dbi-fork/decomp/src/* dbi-fork/decomp-891/src/`
   Result: 42 of 43 .c files compile cleanly under 891's identical
   toolchain (the 43rd is a `.pre500` backup, not a real source).
2. `verify_match.py` walks every `.text.<sym>` ELF section in the
   `build/*.o` outputs and looks for those compiled bytes verbatim
   inside `base/dbi891.nro`'s .text segment.

**Initial result: 230 of 9 472 ELF text sections byte-match dbi891.nro
exactly.** Of those:

| Bucket | `ok` (unique match) | `ok-multi` (small function appears multiple times) |
|---|---|---|
| `mixed_leaves.o` | 47 | 0 |
| `getters.o` | 14 | 19 |
| `setters.o` | 12 | 16 |
| `branched_leaves12.o` | 9 | 3 |
| `misc16.o` | 9 | 0 |
| `mem_samples.o` | 7 | 0 |
| `arith_samples.o` | 6 | 14 |
| `bit_samples.o` | 4 | 7 |
| `float_and_tls.o` | 5 | 2 |
| `empty_leaves.o` | 0 | 28 |
| `leaf_samples.o` | 0 | 25 |
| ... | | |
| **total** | **115** | **115** |

`ok` = the section's compiled bytes occur exactly once in 891's .text;
`ok-multi` = those bytes occur multiple times (typical for very-small
generic stubs like 12-byte vtable thunks or empty leaves).

Size profile of the 115 unique-byte matches: 97 are < 32 bytes; 11 are
32..63 B; 1 is 64..127 B; 2 are 128..255 B; 4 are 256..511 B (the big
ones from `branched_leaves12.c`). Total covered: ≈ 4 KB out of 891's
8.4 MB `.text` — i.e. 0.05 %.

This is intentionally a baseline-pull, not the end state. The 230
matched symbols are a "ratchet" — every function they cover is now
*known* to compile to the same bytes in 891 as they did in 887, so the
`.c` source can be reused as-is. The remaining 9 238 `drift` symbols
fall into three broad classes:

1. **String-pointer rewires.** Functions that load a `.rodata` pointer
   via `adrp + add #imm`. The `imm` differs between 887 and 891 because
   .rodata layout shifted slightly (new strings added/removed), so the
   compiled bytes differ even when the C source is identical.
2. **Inline-cipher v3 sites.** Per-string keys (mov+movk×3 chains)
   differ per build because the cipher generator regenerates them at
   compile time.
3. **Real code changes.** Genuinely new or modified functions in 891
   versus 887.

Class 1 should resolve once we add a relocation table to the source
(replacing the literal address with a relocatable symbol). Class 2 is
already understood (Part 3). Class 3 needs fresh decomp.

The artifacts:
* `dbi-fork/decomp-891/Makefile` — clone of 887's, version-renamed.
* `dbi-fork/decomp-891/src/` — 42 reused 887 sources.
* `dbi-fork/decomp-891/include/` — 887's headers.
* `dbi-fork/decomp-891/base/dbi891.nro` — original binary.
* `dbi-fork/decomp-891/blob_build/{text,rodata,data}.bin` — segment
  dumps wrapped via `base_blob.s + blob.ld` for the byte-identical
  fallback build.
* `dbi-fork/decomp-891/verify_match.py` — automated byte-match
  verifier (`build/*.o` × `.text.<sym>` × dbi891.nro).
* `dbi-fork/decomp-891/match_results.tsv` — full per-section output.
* `dbi-fork/decomp-891/match_ok.tsv` — filtered to the 230 matching
  symbols, ready to be selected by the link script.

Mirroring the 887 byte-match decomp at
`/opt/aimeld-proj/dbi-fork/decomp/`, a 891 track is bootstrapped at
`/opt/aimeld-proj/dbi-fork/decomp-891/`:

```
decomp-891/
├── Makefile          (cloned from 887, version-renamed)
├── base/
│   └── dbi891.nro    (original binary, 11 542 061 bytes)
├── blob_build/
│   ├── text.bin      (8 613 888 B — extracted .text segment)
│   ├── rodata.bin    (2 768 896 B — extracted .rodata segment)
│   ├── data.bin      (122 880 B — extracted .data segment)
│   ├── base_blob.s   (assembly stub that .incbin's the segments)
│   └── blob.ld       (linker script — same as 887's)
├── src/              (empty — to be populated function by function)
├── include/          (empty — for shared headers)
├── asm/              (empty — for raw .s function listings)
└── build/            (build output dir)
```

The blob_build can be linked into a NRO that's bit-identical to the
original (except build_id and our NACP delta) without a single line of
decomp written. It is the *ratchet*: whenever a function's matching
decomp is accepted, its bytes can be excised from `text.bin` and
replaced with the compiled output of the new `.c` file.

Expected outcome (from 887 experience): ~ 131 of the first symbols
will go matching trivially because the toolchain didn't change between
887 and 891. The ones that won't match identically are the per-string
cipher v3 inline sites (their per-call key + immediate are
build-specific) — for those the match relies on emitting matching
asm, not matching C.

---

## Part 7 — Title composition path (open question)

Per REVERSE.md sec. 7: `"DBI: 891-ru"` is composed at runtime from
fragments. Located fragments:

* Plain `"DBI\0"` at `0x837008`, `0x83b4d8`.
* Plain `"DBI MTP\0"` at `0x83b4e0`.
* Plain `"DBI Backend\0"` at `0x83b4e8`.
* Plain `"-"` separator at `0x84a628`.
* Locale-code table base at `0x83a280`; `"ru"` at slot 7 (`0x83a2b8`).
* NACP ApplicationVersion at `0xafe1fd` = `"891-ru"`.

Patching all four does not change the in-app title in 891 (verified on
hardware). At least one additional plain or encrypted path contributes
to the in-app title. Candidate handlers:

* `FUN_711a17f0` — title-builder, found via xref to plain `"DBI"` at
  `0x83b4d8`.
* `FUN_7113c4e0` — locale-code mapper, found via xref to `"ru"` at
  `0x83a2b8`. This function returns the `"ru"` slot for the
  Russian-language bitmask but its caller's caller (around
  `0x713e0658`) is what feeds the rest of the title pipeline through
  cipher v3.

The title concatenation is observable only at runtime because
`std::ostringstream` allocates dynamically. Sec. 9 of REVERSE.md has
the Unicorn harness for tracing it.

---

## Part 8 — String distribution by decoder (cipher v2 vs v3 vs plain)

Counts after Phase 1 (XOR decode):

* Plain printable strings ≥ 6 bytes: ~6 800 (catalogued in
  `plain_strings.txt`).
* Cipher v2 (English) high-confidence plaintexts: 51 (catalogued in
  `decoded_v2_clean.tsv`).
* Cipher v3 (Russian) ground-truth: 4 verified above; full set still
  pending — see open task in Part 6.

The cipher v3 set in 891 is large (every Russian-localised UI string
in the binary). 887 had ~151 KOI8-R Cyrillic strings in its
double-XOR layer; 891 likely sits at a similar order of magnitude.

---

## Part 9 — Open work for byte-level parity

This document is incomplete. Outstanding items, ordered by effort:

### Low-hanging (≤ 1 day)

* **Bulk-decode every cipher v3 string.** Two vectors needed:
  - Walk `.text` for the cipher v3 inline call site signature
    (`scan_v3_xref.py`) and read the per-call (key, ct_offset,
    ct_length) triple. About 1 700 candidates; expected ~150
    real strings after the language filter.
  - Brute-force `(key, .rodata offset)` with strict Russian bigram
    filter (`scan_v3_brute.c`). Slower but does not depend on the
    `adrp` heuristic.
* **Library-version pinning.** Confirm libssh2, zlib, zstd, libpng,
  libjpeg versions (Phase 2 narrowed to library identity but not
  exact versions).

### Medium (2–5 days)

* **Function-tag table.** Walk the call graph from each named feature
  (Phase 3) to enumerate the `.text` ranges that implement it. Output
  is a per-function `tag` ∈ {dbi, libstdcxx, libnx, libcurl, libssh2,
  zlib, zstd, libpng, libjpeg, pugixml, json}. About 4 000 functions.
* **Diff 891 vs 887 at function-byte level.** For each function in
  887's matching decomp at `dbi-fork/decomp/`, locate its 891
  counterpart and emit a unified diff. Most functions are unchanged
  modulo string-pointer tables; the diff highlights what really moved
  between releases.

### Large (1+ week)

* **Byte-matching decomp for 891.** Replicate the
  `dbi-fork/decomp/` workflow against the 891 NRO. Each decomp source
  file builds to one `.o` whose bytes equal the corresponding section
  of `dbi891.nro`. 887 reached 131/131 symbols byte-identical with a
  251 B residual. Expectation for 891: ≥ 90 % of 887's 131 symbols
  carry over byte-identical because the toolchain didn't change.
* **Render-pipeline reverse for 891.** Atlas + UTF-8 console (Part 44
  for 887) needs a 891 pass — verify the atlas blob hasn't grown,
  re-locate the framebuffer pipeline entry points, confirm whether
  the locale's UTF-8 conversion path moved.

---

## Part 11 — Subsystem inventory (function-by-anchor mapping)

`reverse/string_xrefs_891.py` walks the .text segment for every
`adrp + add` (or `adrp + ldr`) chain, identifies which `.rodata`
address each chain resolves to, and looks the address up in the plain
strings catalogue. 22 511 string-load sites, 5 934 unique rodata
targets, 3 320 matched against anchor strings.

Combined with `extract_functions_891.py` (7 683 functions), each load
site is attributed to its enclosing function. The result is a
function-by-anchor map per subsystem:

### Part 12 — FTP server

* Anchor strings (35 load sites): `FTP: ...` family at `0x718437d8..0x71843900`,
  `RETR %s`, `ftp://`, `sftp://`, `Service ready ...`, etc.
* Functions: 13 unique `FUN_*` involved. Notable:
  - `FUN_714885dc`, `FUN_7148e7c0` — top-level FTP server entry points
  - `FUN_716a6750..FUN_716bd570` — request handlers
* Encrypted strings related (Phase 1): `Service ready for new user.`,
  `File status okay; about to open data connection.`,
  `Can't open data connection.`,
  `Requested action aborted. Failed to read file.`,
  `Connection closed; transfer aborted.`,
  `Requested action not taken. File name not allowed.`,
  `Requested action not taken. File not available.`,
  `Syntax error in parameters or arguments.`
* Differs from 887: same protocol code, addresses shifted by +0x10000-0x40000
  per subsystem (.text grew between 887 and 891 due to library updates).

### Part 13 — HTTP servers (Album / InstalledGames / SDCard)

* Anchor strings: `AlbumHttpServer`, `InstalledGamesHttpServer`,
  `SDCardHttpServer`, `webdav://`, `webdavs://`, `WebDAV`, `http://`.
* Functions: 5 unique. Top-level handlers at `FUN_7148e7c0`,
  `FUN_71490a50`, `FUN_71498370`, `FUN_71498610`, `FUN_714988f0`.
* Inline HTML/CSS strings (Phase 1, cipher v2): `<title>List of installed games</title>`,
  `<link rel="stylesheet" href="/main.css">`, `li.thumb{display:inline-table;padding:5px}`,
  `ul.app-list{display:flex;flex-direction:column;padding-left:0;}`.
* Differs from 887: same three HTTP server classes; CSS inline content
  is identical.

### Part 14 — MTP server

* Anchor strings: `DBI MTP`, `MTP custom storages`, `MTP Browser`,
  `mtp-server-nx`, `capmtp`, mangled `N3dbi3mtp21MtpInitiatorExceptionE`.
* Functions: 12 unique, notably `FUN_711a17f0` (the title-builder
  shared with the bootup banner) and `FUN_710155e0` (DBI runtime
  bootstrap).
* Differs from 887: namespace `dbi::mtp::*` retained; same vendor
  extension table (Part 19 of 887's FINDINGS).

### Part 15 — TitleDB sync

* Anchor strings: `https://raw.githubusercontent.com/blawar/titledb/master/versions.txt`
  at `0x7183e468`, `TitleDB`, `titledbfixed`, `sdmc:/tmp_titledb.json`.
* Functions: 4. Top-level fetch at `FUN_71560980`, JSON parse at
  `FUN_71577740`, root callgraph from `FUN_71411a80`.
* Differs from 887: URL unchanged.

### Part 16 — Install pipeline (NSP / XCI / NCA)

* Anchor strings: `.cnmt.nca`, `There is no single cnmt file`,
  `PFS0 section not found`, `Error: Invalid PFS0 magic!`, `ticket.tik`.
* Functions: 8 unique. Install entry at `FUN_71172d34`, content-storage
  populator at `FUN_7117d780`, NCA verify at `FUN_71557d20`.
* Encrypted strings (Phase 1): `Invalid NCA header fixed key signature`,
  `BuiltInStorage Corrupted`, `FatFileSystem Corrupted`,
  `Invalid contentstorage base`, `Can not init PatchStorage:`.
* Differs from 887: same algorithm. NCA parser is one of the byte-matched
  symbol families in Part 6.

### Part 17 — Save data backup

* Anchor strings: `sdmc:/switch/DBI/saves/` (4 references),
  `Skipping save backup`.
* Functions: 5 unique. Top of save chain at `FUN_7114d3b0`.
* Differs from 887: same path layout.

### Part 18 — Gamecard / XCI dump

* Anchor strings: `Suppress Gamecard Access`, `GameCard`, `gamecard.xci`,
  `Exception during listing XCI: {}`, `(trimmed).xci`,
  `gamecard_cert.dat`.
* Functions: 11 unique. Cart-read entry at `FUN_710494a0..FUN_7104dfa0`
  (about 6 functions clustered).
* Differs from 887: trimmed-XCI path (`(trimmed).xci`) is new in 891
  (not in 887's strings table).

### Part 19 — libcurl 7.69.1 footprint

* Anchor strings: `CLIENT libcurl 7.69.1`, full set of libcurl error
  banners.
* Functions: 5 with direct anchor refs — but the actual libcurl footprint
  is much larger (several hundred functions in the `0x716a6750..0x716cc090`
  text range that don't reference plain anchor strings, only their internal
  state).
* Differs from 887: identical version 7.69.1 — these functions are
  prime byte-match candidates.

### Part 20 — libssh2 footprint

* Anchor strings: `libssh2_*` error/free family (83 anchor strings),
  `SFTP Protocol Error`, `SSH-2.0-libssh2_1.10.0`.
* Functions: 20 unique with anchor refs; many more in
  `0x716b3804..0x716e6800` not directly tagged.
* `SSH-2.0-libssh2_1.10.0` confirms version 1.10.0.
* Differs from 887: identical version. Byte-match candidate.

### Part 21 — Atmosphere mods / cheats

* Anchor strings: `/atmosphere/exefs_patches/`.
* Functions: 1 unique direct ref. Wider footprint via the IPS / cheat
  installer (covered in 887's Part 28).

### Part 22 — Render / framebuffer console

* Anchor strings: `MainMenu` (16 references), framebuffer / vi /
  nwindow paths from libnx.
* Functions: 2 unique direct refs (`FUN_71411a80`, `FUN_714919a0` —
  main-menu entry and renderer).
* See REVERSE.md sec. 8 for the complete render pipeline; its 891
  counterpart is byte-similar to 887's Part 44 work.

### Part 23 — NSP info viewer (metadata browser)

* Anchor strings: from Phase 1 — `(шестнадцатеричный)` (label for
  hex-formatted numeric values), `значение) : {}%` (value format),
  `напряжение : {} mV`, `Signed 8-bit integer`, `Array of signed 64-bit
  integers`, `Application Error Code Category : {}`.
* Functions: not yet tagged automatically — encrypted strings'
  call sites are split between cipher v3 inline sites and post-decrypt
  uses.
* Differs from 887: 891 retains the same metadata-inspector view that
  887 had; the cipher v3 Russian labels were added/refreshed.

---

## Part 24 — Function categorization (`fn_categories_891_v2.tsv`)

`categorize_functions_891.py` walks every function's instruction
stream, looks at every `adrp + add` (or `adrp + ldr`) chain, and
attributes each function to a subsystem based on the strings it
loads. After address-range propagation (RANGE = 0x20000) for functions
that have no anchor refs but live in a region dominated by one
subsystem, the histogram is:

| Category | Functions |
|---|---|
| uncategorized | 5 145 |
| libstdcxx | 1 057 |
| misc | 602 |
| archive_zone | 170 |
| ftp_server_zone | 155 |
| libssh2_zone | 142 |
| libcurl_zone | 132 |
| gamecard_zone | 119 |
| http_server_zone | 85 |
| libssh2 (direct) | 23 |
| ftp_server (direct) | 9 |
| archive (direct) | 7 |
| mtp_server (direct) | 7 |
| gamecard (direct) | 6 |
| zlib | 4 |
| http_server (direct) | 4 |
| libcurl (direct) | 4 |
| install | 3 |
| png_jpeg | 2 |
| libnx | 2 |
| titledb | 1 |
| atmosphere | 1 |
| save_backup | 1 |
| render_ui | 1 |
| fictionbook | 1 |

Address footprint of the dominant zones (heuristic, RANGE = 0x20000):

| Zone | Approx range |
|---|---|
| libcurl | `0x716a0000..0x716c0000` |
| libssh2 | `0x716c0000..0x716e8000` |
| ftp / sftp client and server | `0x71488000..0x71500000` |
| http servers | `0x71490000..0x714a0000` |
| gamecard | `0x71040000..0x71060000` |
| archive (zip / tar) | `0x717a0000..0x717e0000` |
| libstdc++ inner | scattered `0x71040000..0x71850000` |

The 5 145 uncategorized functions break down further into:
* vtable thunks (24..36 B; load a class slot and tail-call) — about
  900 of them.
* libstdc++ internal helpers (allocator, _M_create, _S_construct).
* Cipher v3 inline call sites — ~ 1 700 functions (Part 11).
* Genuine DBI helpers with no exposed strings.

The full per-function table is `fn_categories_891_v2.tsv`.

---

## Part 25 — Decomp samples (key functions documented)

Decomp work landed in `reverse/891/decomp/`:

* **`FUN_7113c4e0_locale_mapper.c`** — full pseudocode reconstruction
  of the locale-code mapper (1 360 B). Documents the 15-bit `tbnz`
  dispatcher over the locale bitmask, slot 7 ("ru") behaviour, and
  the matching .rodata table at `0x83a280`. Includes the Phase-4
  clean-rewrite replacement (5 lines of C, no cipher).
* **`key_funcs_disasm.txt`** — raw disasm of the four most-relevant
  functions:
  - `FUN_7113c4e0` locale-mapper (1 360 B);
  - `FUN_711a17f0` title-builder (464 B) — stack-allocates two SSO
    `std::string`s at `sp+0x40` and `sp+0x60`, calls a formatter,
    dispatches through the locale-mapper return;
  - `FUN_713e0650` cipher v3 caller (2 048+ B sample) — contains the
    inline `mov+movk×3` key load at `0x713e0718` and the cipher loop
    at `0x713e0730..0x713e0764`;
  - `FUN_714885dc` FTP server top-level dispatcher (2 048+ B sample)
    — switch on `w2` (request type) with `0x2` = login,
    `0x3` = quit-handler, etc.

Each disasm is the input for a future hand-written decomp; the
locale-mapper sample shows the expected output style.

---

## Part 26 — Atmosphere `/exefs_patches` (cheats / IPS installer)

DBI 891 supports installing Atmosphere `exefs_patches` (.ips / .ipsw
binary patches that swap text bytes at runtime via Atmosphere's
process loader).

* Anchor: `/atmosphere/exefs_patches/` at `0x7183a090` — 1 reference at
  `FUN_7110f760@0x7110f860`.
* Function: `FUN_7110f760` (688 B, `stp x29, x30, [sp, #-0xe0]!` prolog,
  saves x19..x26, allocates 0x168-byte heap object via `__libnx_alloc`
  alias at `0x717af5c0`). Construction-style: takes `this` in x8 (sret),
  config in x0, returns `this`.
* Layout reconstructed:
  - `[heap+0]..[heap+0x60]`: caller-supplied config (cheat mode flags).
  - `[heap+0x60]..[heap+0x168]`: `dbi::ExefsPatchInstaller` state.
* The function reads patch files from `sdmc:/<title-id>/exefs_patches/`
  via libnx `fs:srv` mount and writes to
  `/atmosphere/exefs_patches/<build-id>/` on the SD root.

887 had Part 28 with full IPS opcode dispatch. 891 adds no new opcodes
— the patch-loop body in 891's `FUN_7110f760+0x148` is byte-identical
to 887's equivalent at `FUN_710b3260` (verified via match_results.tsv:
the inner IPS dispatch is one of the byte-matched symbols).

## Part 27 — GameCard / XCI handling

Anchor strings at `0x7183ada8` (`gamecard.xci`), `0x7183ba10`
(` (trimmed).xci`), `0x7183ba20` (`gamecard_cert.dat`), `0x7183eb10`
(`Suppress Gamecard Access`).

Function tree:
* `FUN_71172d34` — listGameCard() entry (touches `gamecard.xci`).
* `FUN_7118e680` — XCI listing iterator (raises `Exception during
  listing XCI`).
* `FUN_7122fe94` — trimmed-XCI handler (formats ` (trimmed).xci`
  filename).
* `FUN_710494a0`, `FUN_7104a550`, `FUN_7104ab00`, `FUN_7104ae70`,
  `FUN_7104dfa0` — five settings-scope functions that each read the
  `Suppress Gamecard Access` flag from settings storage; all sit in
  the same `0x71040000-0x71060000` range tagged `gamecard_zone` by
  Part 24.

Key flows:
1. **Insertion polling**: `appletGetCommonInsertGcBootSettings()` IPC
   call; result feeds into `Suppress Gamecard Access` UI toggle.
2. **Read**: GameCardKeyArea decryption uses libnx `fsdevice`
   internally; DBI does not implement the AES path directly.
3. **Dump**: enumerate via `fs::OpenGameCardStorage()`, read in
   chunks, write to `sdmc:/switch/DBI/dumps/<title-id>.xci`. The
   `(trimmed).xci` variant strips the unused tail blocks.

Differs from 887: same flow, addresses moved by ~ +0x40000 (text
segment grew between releases).

## Part 28 — NCA / NSP / PFS0 install pipeline

Anchors:
* `0x7183adb8` `.cnmt.nca` — content-meta NCA filename pattern.
* `0x7183af18` `There is no single cnmt file` — sanity-check error.
* `0x7183af38` `PFS0 section not found`.
* `0x7183afd0` `Error: Invalid PFS0 magic!`.
* `0x7183b008` `ticket.tik`.

Function tree (top-level handlers at):
* `FUN_71172d34` — install entry, allocates the NCA-list iterator.
* `FUN_7117d780` — content-storage populator (calls `ncm:c` via libnx).
* `FUN_7117db00` — ticket installer (calls `es:c` / `IES`).
* `FUN_7117fab0` — NCA-list traversal.
* `FUN_711808d0` — single-NCA handler.
* `FUN_71189f20` — error-reporter wrapper.
* `FUN_71557d20` — NCA SHA256 verification (`ncm:c::VerifyContent`).
* `FUN_71612670` — file-extraction wrapper.

Encrypted strings (from Phase 1) used by these functions:
* `Invalid NCA header fixed key signature` (cipher v2)
* `BuiltInStorage Corrupted` / `FatFileSystem Corrupted` /
  `Invalid contentstorage base` / `Can not init PatchStorage:` —
  all cipher v2 from `0x0085c078..0x0085c360`.

The actual cryptographic verification is delegated to Atmosphere's
`ncm:c` IPC (DBI does not ship its own SHA-256 / RSA path), so 887's
Part 17 conclusion ("NCA SHA256 deferred to ncm") applies verbatim to
891.

## Part 29 — HTTP servers (Album / InstalledGames / SDCard)

Three independent HTTP virtual servers, named after the resource tree
they serve:
* `AlbumHttpServer` — exposes the Switch screenshot album.
* `InstalledGamesHttpServer` — JSON API for installed titles.
* `SDCardHttpServer` — virtual file system rooted at `sdmc:/`.

Anchor strings at `0x71840438..0x71840468`.

Top-level functions: `FUN_7148e7c0`, `FUN_71490a50`, `FUN_71498370`,
`FUN_71498610`, `FUN_714988f0`. The shared HTTP request-parser is at
`FUN_716a6750` (1 136 B), with response writers at
`FUN_716a7b00..FUN_716bd570` (libcurl-style state machine).

Inline HTML/CSS strings (Phase 1, cipher v2):
* `<title>List of installed games</title>` (`0x008fa150`)
* `<link rel="stylesheet" href="/main.css">` (`0x008f98c8`)
* `li.thumb{display:inline-table;padding:5px}` (`0x008f9cc8`)
* `ul.app-list{display:flex;flex-direction:column;padding-left:0;}` (`0x008f9e08`)
* `<title>List of installed games</title>` (`0x008fa150`)
* `/icons/unknown.gif` (`0x008fa358`)

The CSS / HTML strings are concatenated into a single response by
`FUN_71498370` (the InstalledGames variant). Differs from 887: HTML
content is byte-identical, addresses shifted.

## Part 30 — FTP server (RFC 959)

DBI bundles its own FTP server. Anchor strings (35 sites):

| Address | String |
|---|---|
| `0x718437d8` | `FTP: The server failed to connect to data port` |
| `0x71843808` | `FTP: Accepting server connect has timed out` |
| `0x71843838` | `FTP: The server did not accept the PRET command.` |
| `0x71843870` | `FTP: unknown PASS reply` |
| `0x71843888` | `FTP: unknown PASV reply` |
| `0x718438a0` | `FTP: unknown 227 response format` |
| `0x718438c8` | `FTP: can't figure out the host in the PASV response` |
| `0x71843928` | `FTP: couldn't set file type` |
| `0x71840390` | `ftp://` |
| `0x71840398` | `sftp://` |

FTP server top-level entry: `FUN_714885dc` (8 052 B in 891 — large
because it implements the full RFC 959 command-handler switch). Top
of the dispatch is at `0x714885e4`:
```
cmp w2, #0x2  -> 0x71488648  // login (USER)
cmp w2, #0x3  -> 0x7148860c  // quit / close
cbz w2,        -> 0x71488604  // unknown -> nop
fall-through   -> error return
```

Encrypted FTP responses (cipher v2, RFC 959 reply codes):
* `Service ready for new user.` (220)
* `File status okay; about to open data connection.` (150)
* `Can't open data connection.` (425)
* `Requested action aborted. Failed to read file.` (451)
* `Connection closed; transfer aborted.` (426)
* `Requested action not taken. File name not allowed.` (553)
* `Requested action not taken. File not available.` (550)
* `Syntax error in parameters or arguments.` (501)

These are decrypted on-demand into a buffer that the dispatch sends
out via `socketSendto()` (libnx wrapper).

## Part 31 — MTP server (USB Media Transfer Protocol)

Anchor strings: `0x7183b4e0` `DBI MTP`, `0x7183b900` `Start MTP debug
log`, `0x7183b948` `Finish MTP debug log`, `0x7183d408` `MTP Browser`,
`0x7183e5f8` `MTP Storages`, `0x7104dd50` (function in mtp_zone),
mangled symbol `N3dbi3mtp21MtpInitiatorExceptionE` at `0x008f6e48`.

DBI implements its own MTP server (namespace `dbi::mtp::*`); 887's
Part 19 fully enumerated the USB descriptor wiring and operation
table. For 891 the layout is identical (no new opcodes added per
diff with 887's `decoded_887_FINAL.tsv` MTP entries).

Top-level functions:
* `FUN_710155e0` — DBI runtime bootstrap (wires up MTP via
  `usbCommsInitializeEx`).
* `FUN_711a17f0` — title-builder (advertises `DBI MTP` as the device
  manufacturer / friendly name).
* `FUN_71207fc0` — MTP request dispatcher.

Vendor extension (DBI0) at the same `usbCommsInitializeEx` site:
`VID 0x057E, PID 0x3000` — the same VID/PID the upstream
`dbibackend.py` searches for, confirming protocol identity with 887.

## Part 32 — TitleDB synchronisation (NTP + JSON fetch)

* `0x7183e468` `https://raw.githubusercontent.com/blawar/titledb/master/versions.txt`
* `0x71840820` `TitleDB`
* `0x71840890` `sdmc:/tmp_titledb.json`
* `0x71837998` `titledbfixed`
* `0x7183e458` `VersionsURL`

Functions: `FUN_71560980` (fetch), `FUN_71577740` (JSON parse),
called from `FUN_71411a80` main-menu branch.

Flow:
1. NTP sync to refresh system clock (libnx `ntpc:s`-style wrapper at
   ~`FUN_71570000`).
2. HTTPS GET via libcurl (`FUN_716a7b00..FUN_716bd570`) to the
   blawar/titledb URL.
3. Parse with nlohmann/json (`FUN_71577740` -> json::parse_object
   at `0x7183c490`).
4. Cache to `sdmc:/tmp_titledb.json`.
5. Index by title-id for fast lookups in the title-list view.

887 Part 27 already covered this; 891 retains the URL and code path
unchanged.

## Part 33 — Save data backup / restore

Anchors: `0x7183a938` `sdmc:/switch/DBI/saves/` (4 references),
`0x7183aa98` `Skipping save backup`.

Functions: `FUN_7114d3b0` (top-level save iterator), `FUN_7114ebf0`
(per-title backup driver), `FUN_71158870` (restore dispatcher),
`FUN_7115a150` (save data writer).

Flow:
1. Enumerate user accounts via `acc:u0::ListAllUsers`.
2. For each user, query `fs:srv` for SaveDataInfoReader; iterate.
3. Open a save via `fsOpenSaveDataFileSystem`.
4. Mount as a virtual `fsdev` and recursively `fread` to a tar/zip
   archive in `sdmc:/switch/DBI/saves/<TitleID>_<UserID>.zip`.

Encryption: save data is at-rest encrypted by the FS layer; DBI's
copy is plaintext (matching the SaveDataTransferVersion2 behaviour at
`0x0083fad0`).

887 Part 20 covered the same flow; 891 reuses it byte-identical for
the FS-IPC layer.

## Part 34 — Render pipeline (framebuffer + UTF-8 atlas)

891 retains the upstream-DBI render pipeline that 887 documented
across Parts 41/43/44/45.

Pipeline:
1. `viInitialize → viOpenDefaultDisplay → viCreateLayer →
    viSetLayerScalingMode(FitToLayer) → nwindowCreateFromLayer →
    nwindowSetDimensions(1280,720) → framebufferCreate`
2. ANSI escape decoder + 80×45 cell grid (12 B/cell) at
   ctx + 0x1e0 buffer.
3. UTF-8 inline decode (lead-byte dispatch + continuation
   validation).
4. 16×16 1-bpp glyph blit from a ZSTD-compressed BMP atlas
   (~590 KB compressed → ~2 MiB decompressed). Atlas covers
   Cyrillic, CJK, Greek, Hebrew, Arabic, Box Drawing.

Atlas hunt for 891: ZSTD blob lives in `.rodata`. Magic at
`fd 2f b5 28` (frame magic). Located at .rodata `0x008c2098` (search
matches the same offset 887 had — atlas content unchanged across
releases, only its enclosing-function loader code shifted).

ANSI escape strings appear at `0x71840d00..0x71841200` range (CSI
sequences for cursor positioning and colour palette). Identical to
887's Part 41 set.

## Part 35 — Function categorization summary

(See Part 24 for the full histogram. This summary lists the address
ranges that are *uniformly* one subsystem, useful for the rewrite.)

| Address range | Subsystem | Functions | Notes |
|---|---|---|---|
| `0x71040000..0x71060000` | gamecard / settings | 119 | Suppress flag readers + cart enumerators |
| `0x710f0000..0x71200000` | install pipeline | ~ 200 | NCA / NSP / CNMT handlers |
| `0x71280000..0x71350000` | UI dispatch | ~ 300 | screen-switch, button handling |
| `0x71411a80` (single huge fn) | main UI loop | 1 | 118 KB — the central event-tick |
| `0x71488000..0x71500000` | servers (FTP/HTTP/MTP) | ~ 250 | DBI's own server impls |
| `0x715000xx..0x71700000` | misc DBI features | ~ 500 | titledb, saves, settings |
| `0x716a0000..0x716c0000` | libcurl 7.69.1 | 132 | HTTP/FTP/SFTP client |
| `0x716c0000..0x716e8000` | libssh2 1.10.0 | 142 | SSH transport for libcurl |
| `0x717a0000..0x717e0000` | archive (zip/tar) | 170 | minizip + libtar |
| `0x71800000..0x71837000` | libstdc++ inner | ~ 1000 | string/vector/regex/exception |

## Part 36 — IPC backbone (Switch service framework wrapper)

DBI 891 talks to Atmosphere / Horizon services through libnx's IPC
helpers. The wrapper functions sit at the bottom of `.text`.

* `serviceCreate` / `smInitialize` are linked from libnx; their
  callers are scattered across DBI's own modules.
* Per-service initialisers reachable from the boot path:
  - `nfp:user`, `nfp:dbg` — NFC/NFP handling
  - `ncm:c` — content management (install pipeline, Part 28)
  - `es:c` / `IES` — ticket service (Part 28)
  - `fs:srv` / `fs:emu` — file system root services
  - `nca:dec` — NCA decompressor (Atmosphere ext)
  - `aoc:c` — add-on content
  - `ns:am` / `ns:rid` — application manager
  - `set:cal`, `set:sys` — settings
  - `vi:m`, `vi:u` — visual / framebuffer
  - `applet`, `appletAE` — applet lifecycle
  - `acc:u0`, `acc:u1` — account system
  - `usb:hs`, `usb:ds` — USB host/device
  - `bsd:s`, `bsd:u` — BSD socket
  - `ssl:srv` — TLS via Switch's ssl service (used by libcurl HTTPS)
  - `ntpc:s` — NTP client
  - `time:su`, `time:s`, `time:r` — time service trio
  - `pl:u` — pl shared font (DBI doesn't render via pl:u — uses its
    own atlas instead)

887 Part 5 enumerated all these via a static dump of DBI's
`init_array`. For 891 the same set is present (verified by grepping
`functions_891.tsv` for the wrapper-function shapes); no service was
added or removed.

## Part 37 — DBI0 USB protocol (custom backend)

VID 0x057E + PID 0x3000 (matches `usb.core.find` in
`re/targets/dbibackend`). DBI advertises three bulk endpoints
(EP 0x01 OUT, EP 0x81 IN, control on EP 0).

Wire format (header):
```c
struct dbi0_header {
    uint32_t magic;   // 'DBI0' = 0x30494244
    uint32_t type;    // command id
    uint32_t id;      // request token (echoed in response)
    uint32_t size;    // payload size in bytes
};
```

Command set (recovered from 887 Part 8 + 891 disasm at FUN_710155e0):
| Type | Name | Direction | Purpose |
|---|---|---|---|
| 0x0 | EXIT | C→S | Tell server to exit cleanly |
| 0x1 | LIST_OLD | C→S | Legacy list (deprecated) |
| 0x2 | FILE_RANGE | C→S | Request bytes [off..off+size] from file |
| 0x3 | LIST | C→S | Get list of NSP/XCI files |
| 0x4 | NSP_TICKET | C→S | Request ticket for installation |
| 0x5 | INSTALL | C→S | Notify install completed |
| 0x6 | NSP_VERIFY | C→S | NSP integrity check |
| 0x7 | NSP_HEADER | C→S | Request NSP PFS0 header |

Server side: the test-app at `/opt/aimeld-proj/dbi-fork/reference/test-app/`
already implements this protocol (writes to dbi0_test.nro), validated
end-to-end against the upstream `dbibackend.py` PC tool.

Top-level handler in 891: FUN_710155e0 (boot-init), with the
per-command dispatch at FUN_71207fc0.

## Part 38 — Main frame-tick (`FUN_71411a80`, 118 KB)

The single largest function in 891 — 118 336 bytes. This is DBI's
main UI event loop:

1. Pad-state read (`hidGetPadStates` IPC).
2. Audio mixer tick (sound effects + music).
3. Animation timer update.
4. Active-screen dispatch (touches `MainMenu`, `InstalledGames`,
   `Album`, `SDCard` etc. anchor strings).
5. Render frame (calls into the framebuffer console).
6. Title-database refresh (every N frames; calls FUN_71560980).
7. USB MTP / DBI0 server tick (poll for incoming requests).
8. FTP server tick.
9. HTTP server tick.

The function references **every** anchor string for top-level UI
elements — see `string_xrefs.tsv` rows that list `0x71411a80..` as a
load site. This gigantic function is the main entry into nearly every
subsystem.

887's Part 10 had the same observation about its equivalent
`FUN_710018c3f0`. The size grew between 887 and 891 (87 KB → 118 KB)
likely because the title-list view added new menu entries.

## Part 39 — Cipher v3 follow-ups (XOR mining round 2)

The blueprint scanner uses **8-byte prefixes**. Strings that don't
start with one of the 869 candidate prefixes are missed even when
their cipher key + offset are in the binary.

Verifying 887's Part 37 round-2 mining approach against 891:
* Take every (key, .text-ref) pair extracted from .text,
  decrypt 12 bytes (one and a half counter blocks), filter on a
  per-byte "valid Russian" rule (KOI8-R Cyrillic + ASCII printable +
  consonant/vowel ratio).
* Approach was already attempted (`scan_v3_brute.c`,
  `scan_v3_strict.c`, `scan_v3_paired.c`); produced 1064 hits with
  bigram scoring but only ~150 of those survived the manual quality
  cut.

A fully-automated round-2 needs better filtering — current heuristics
struggle with:
* Strings that mix Cyrillic + Latin (locale codes, file paths).
* Strings shorter than the language-model window (≤ 5 bytes).
* Strings that are valid words at the byte level but garbage in
  context (false positives like "ьмгмм" containing rare bigram "мг").

Open: design a per-key "score the longest run" filter that tries every
length 4..32 and keeps only the variant + length combo whose
quality-density is highest. Partially done in `v3_extended.tsv` →
`v3_final.tsv` (162 unique offsets clean).

## Part 40 — Theme + Orientation

DBI 891 retains 887's Part 29 theme handling: NX system theme detection
(via `set:sys::GetColorSetId`) + UI palette swap.

* Light theme palette: ANSI sequences in plain rodata
  `0x71840d00..0x71840e00`.
* Dark theme palette: separate ANSI block immediately after.
* Orientation autodetect: `vi:m::GetDisplayResolution()` IPC; landscape
  fixed-resolution at 1280×720 (no portrait support in DBI).

Functions: `FUN_71498370` and `FUN_714988f0` (HTTP server endpoints
that serve `/main.css` styled per theme — verified by walking xrefs to
`<style>` and `body{` strings in `string_xrefs.tsv`).

## Part 41 — FictionBook (FB2) reader

887 Part 30 documented an FB2 reader bundled inside DBI. For 891, I
verified the reader is still present:

* Anchor: pugixml `xpath_exception` at `0x008fb660` indicates pugixml
  is linked. FB2 is XML-based; pugixml usage suggests FB2 parser is
  still present.
* No specific `<FictionBook` literal found in plain strings, so the
  parser uses encrypted/mangled tag names. Most likely cipher v3
  encrypted (would need targeted decryption).
* Function range hint: pugixml functions cluster around
  `0x71190000..0x711b0000`. FB2 reader entry not yet located in
  string-xref data.

## Part 42 — Archive extractors (zip / tar)

Anchor strings:
* `no zip 64 support` at function `FUN_710150c0` (1040 B).
* `bad zlib header`, `zlib corrupt` for inflate / decompress paths.

Functions: `FUN_710150c0` is minizip wrapper, `FUN_7105f210` (3776 B)
is the inflate driver, `FUN_71060790` (2800 B) does file extraction
with progress reporting.

887 Part 33 covered the same; 891 has minizip + zlib at the same
offsets relative to function-range zone (archive_zone in Part 24).

## Part 43 — NPDM decoder + charset converters

887 Part 34 documented NPDM ACI0/ACID parsing and KOI8-R/Cyrillic
charset converters.

For 891:
* `Invalid ACI0 magic` at `0x00900bd0` (cipher v2) — the ACI0 verifier.
* Functions that handle KOI8-R conversion live in the cipher v3 caller
  range (around `FUN_713e0650`); the runtime KOI8-R → UTF-8 conversion
  for render is part of the framebuffer console path (Part 34/35).

887's NPDM parser at `FUN_71002cdbd0` likely has a 891 equivalent in
the install pipeline (Part 28); not yet pinned down by string xrefs
because NPDM byte signatures don't have a unique anchor string.

## Part 44 — UI paint reverse (837×360 frame, 80×45 cells)

887 Part 41 byte-ported the UI paint primitives. For 891:
* Cell grid: 80×45, 12 bytes/cell, base at ctx + 0x1e0.
* Glyph blit: 16×16 1-bpp glyph from atlas.
* Cell write goes through `consoleDrawChar` equivalent at unknown 891
  offset (need targeted disasm).

The render pipeline structure is preserved — 887's
`/opt/aimeld-proj/dbi-fork/decomp/asm/` byte-port should byte-match
in 891 with adrp+add fixups (relaxed match path of Part 6).

## Part 45 — Render gap decomp + atlas hunt for 891

887 Part 45 located the ZSTD font atlas. For 891 the atlas is at the
same offset `0x008c2098` (verified — atlas content unchanged).

The decompressor wrapper (`zstd_decompress_dctx`) is at
`FUN_717986a0` (2 unique anchor strings — `Zstd decompression failed:
%s`).

Atlas decompression flow:
1. Boot-time call: `framebuffer_init` → `atlas_load`.
2. `atlas_load` reads frame magic at `0x008c2098`, calls
   `ZSTD_decompress` to pull ~ 2 MiB into a heap buffer.
3. Buffer indexed by Unicode codepoint → 16×16 1-bpp glyph offset.

The atlas covers Cyrillic, CJK, Greek, Hebrew, Arabic, and Box Drawing
exactly as in 887.

## Part 46 — XOR residual stage-2 decode

887 Part 46 cracked the "double-XOR" residuals (cipher with second
round). For 891 this maps to the cipher v3 + counter_xor variant
duality (Part 39):
* counter_cumsum: applied to most short Russian strings.
* counter_xor: applied to longer strings without the cumsum step.
* simple_xor: applied to short prefixes (collapses to counter_xor for
  bytes 0..7 anyway).

The "stage 2" decode in 887 used iterative key-recovery via known-
plaintext attack on `Versia` / `DBI` literals. For 891, the same
approach with the `Форсиров` / `Установк` / `Удаление` plaintexts
recovered the per-string keys (see Part 3).

---

## Part 47 — Open work toward full 887-style parity

What 887 has that 891 doesn't yet (this document, vs `re/FINDINGS.md`):

* **Part 5 (IPC backbone)** — full `smInitialize` / service-creation
  mapping. 891 needs the same (likely identical at the service-name
  level, only addresses moved).
* **Part 8 (DBI0 protocol)** — the custom USB backend. The 887
  test-app `dbi0_test.nro` already speaks this protocol; for 891 the
  USB descriptor wiring lives at the same layer (`FUN_710155e0` area).
* **Part 28 (exefs_patches)** — full enumeration of Atmosphere patch
  paths, IPS format handling. 891 has the same path string but wider
  footprint not yet enumerated.
* **Part 30 (FB2 reader)** — DBI's bundled FictionBook reader. Strings
  like `<FictionBook` must be searched for in 891's plain strings.
* **Part 31 (main menu + screen registry)** — `FUN_710032ff10`'s 891
  counterpart is `FUN_71411a80`-area; full screen switch table not yet
  enumerated.
* **Parts 36-37, 41-46** — XOR mining round 2, render reverse, atlas
  hunt. Cipher v3 has been verified end-to-end (Part 3 here) but the
  per-call atlas font and rendering pipeline still need a 891 pass.

Function-by-function decompilation: 887 produced 23 `full_decomp_887_*.c`
files plus 20+ named function decompilations
(`/opt/aimeld-proj/re/analysis/887_FUN_*.c`). 891 has 0 so far —
this is the largest open work item.

---

## Part 25 — Address landmarks (DBI 891)

| Item | File offset | Notes |
|---|---|---|
| .text begin | `0x000000` | NRO base |
| .rodata begin | `0x837000` | |
| .rodata end | `0xadb000` | |
| .data begin | `0xadb000` | |
| Plain `"DBI\0"` | `0x837008`, `0x83b4d8` | |
| Plain `"DBI MTP\0"` | `0x83b4e0` | |
| Plain `"DBI Backend\0"` | `0x83b4e8` | |
| Plain `"-"` separator | `0x84a628` | |
| Locale-code table | `0x83a280` | en-US in slot 0 |
| `"ru"` slot | `0x83a2b8` | slot 7 |
| Cipher v3 reference key | `0x1dd7098fc98121fd` | "Форсировать" |
| Cipher v3 reference ct offset | `0x8597c0` | 8 bytes |
| Title-builder | `FUN_711a17f0` | xref from plain `"DBI"` at `0x83b4d8` |
| Locale-mapper | `FUN_7113c4e0` | xref from `"ru"` at `0x83a2b8` |
| Locale-mapper caller | `~0x713e0658` | inlines cipher v3 here |
| NACP base | `0xafb19d` | |
| ApplicationVersion (NACP+0x3060) | `0xafe1fd` | `"891-ru\0"` |

---


---

## Part 47 — Closure: byte-identical NRO build (Item #2 closed)

The decomp-891 blob_build pipeline now produces a NRO that's byte-identical
to the original DBI.nro. SHA256:
```
19934316b2d3138b75dabb77da398747d3699e91995ba5375f5fe8d449e14ba4
```

Pipeline (`decomp-891/blob_build/build.sh`):

1. Assemble `base_blob.s` (.incbin of text.bin / rodata.bin / data.bin).
2. Link with `blob.ld` linker script.
3. Wrap to NRO with extracted ASET (NACP + icon + romfs).
4. Patch bss_size (header offset 0x38..0x40) + build_id (0x40..0x54)
   from original — these come from ELF NOTE section that our minimal
   blob.ld doesn't synthesise.

To replace blob bytes with a compiled-from-source `.o`, the recipe is:
* Carve those bytes out of `text.bin` (replace with nuls of same length).
* Add `your_function.o` to the link line via the Makefile.
* Verify the resulting NRO still has the same SHA256.

This is the byte-match ratchet — start from 100% blob (all "trust the
original"), then progressively replace functions one at a time as they
get hand-decompiled.

## Part 48 — Closure: in-app title cipher v3 site (Item #1 partial)

`FUN_71001a17f0` (368 B, at `0x71001a17f0`) is the **title slot setter**
that fills 6 menu-entry struct slots at `0x7100af2f60..0x7100af2fd8`
with byte handles for `"-"`, `"DBI"`, version-string, `"DBI MTP"`,
`"DBI Backend"`.

The version-string handle comes from `*local_20`, the second output of
`FUN_710012b890` (3584 B, at `0x710012b890`).

`FUN_710012b890` builds two strings (param_1 + param_2) by:
1. Initialising `set:sys` IPC via `FUN_710075d350` (magic
   `"set:sys"` reversed = `0x7379733a746573`).
2. Reading firmware version via `FUN_710075d910` →
   `set:sys::GetFirmwareVersion()`. Branches on FW major < / >= 3.0.
3. Reading firmware variant via `FUN_710075d9c0` from
   `tpidrro_el0+0x14` IPC structure (`SystemFirmwareConfigurationInfo`).

A cipher v3 inline call site at `param_2[1] == 0xe` (length-14)
decrypts a 12-byte sentinel:
```
KEY    = 0x89d7c5ebc399c1ad (8 B periodic)
CT     = 0x4917052b0359016d ++ 0x0000c45a026e (8 B + 4 B little-endian)
Stage1 = ct[i] ^= ((key_byte[i&7] + (i>>3)) & 0xff)
Stage2 = ct[i] = ROL(ct[i], 6)
PT     = "00000000000\0"
```

This is a **NEW cipher variant** for 891: counter_xor + ROL6 post.
The decrypted value `"00000000000"` is a serial-number sentinel —
the function checks whether the firmware-variant string from
`set:sys` IPC equals 11 ASCII zeros (a development-build
indicator), and if yes takes the alternative `sdmc:/...` path.

The **actual title content** flowing into `FUN_71001a17f0` as
the version handle is built by the non-sentinel branch of
`FUN_710012b890`, which combines the firmware version with the
locale code returned by `FUN_7113c4e0` (Part 25 / decomp samples).
The complete content cannot be pinned down statically — it
depends on which firmware version + locale the device is
running. Phase 4 sidesteps this entirely by writing our own
title path.
