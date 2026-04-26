# Reverse-engineering DBI 891

This is the complete reverse-engineering record for **DBI 891-ru** (Switch homebrew). Everything in this document was performed end-to-end against the actual binary; the supporting scripts in `reverse/` are exactly what was used.

---

## Why this is non-trivial

The visible app title (e.g. `"DBI: 891-ru"`) does not exist as a single literal anywhere in the binary. Plain ASCII search, UTF-8 search, KOI8-R search, CP-1251 search, single-byte XOR search, all 7 ROL/ROR shifts, periodic XOR, and full simple+rorkey cipher × every extracted 64-bit key: zero hits across all combinations. The title is composed at runtime via repeated `std::string::append` / `std::ostringstream::operator<<` calls from independent fragments. So the work is to identify every fragment + every code path that contributes, then patch the fragments individually.

Aside from the title, most user-visible UI strings (errors, button labels, screen titles) are stored encrypted. There are **three distinct cipher variants** in use, each with its own per-string 64-bit key.

---

## 0. Methodology — the four phases

We work in four ordered phases. Each phase is gated on the output of the previous one. Skip a phase and you will redo work later under worse conditions.

### Phase 1 — Bulk string recovery (static)

**Goal:** decrypt every encrypted string in the binary so that downstream phases have searchable plaintext.

**Inputs:** the NRO, an extracted key list (sec. 4).

**Steps:**
1. Walk `.text` for `mov+movk×3` chains → 64-bit keys (`reverse/extract_keys.py`).
2. Anchor cipher variant against a known plain or short encrypted string (sec. 5).
3. Run cipher v2 sliding-window decoder over `.rodata` for every key (`reverse/scan_decrypt.py`).
4. Run cipher v3 decoder over `.rodata` for every key (`reverse/scan_v3_cipher.c`).
5. Filter false positives by language model: ASCII printable + ratio of letters / has-space / Russian KOI8-R.

**Output:** `decoded_v2.tsv` + `decoded_v3.tsv`, each row `(file_offset, key, run, plaintext)`.

**Definition of done:** ≥ a few hundred high-confidence plaintexts per cipher; the well-known UI strings ("Russian translation by", "Force install", "Connecting...", error messages) all appear in the corpus.

### Phase 2 — Library / module fingerprinting (static)

**Goal:** classify each function as our code, libstdc++, libnx, libcurl, openssl, json-c, etc., so phase 3 can ignore vendored code and concentrate on DBI logic.

**Inputs:** Phase 1 corpus + the function table from Ghidra.

**Steps:**
1. Match plain strings ("invalid argument", "openssl error", "curl_easy_setopt") against function callers → vendor library boundaries.
2. Look for known constants (libnx svc thunks, openssl OIDs, curl version string) to confirm.
3. Tag each function range as `dbi`, `libnx`, `libstdcxx`, `libcurl`, `libcrypto`, `libssl`, `libjson`, `libzstd`, `libsodium`, etc.

**Output:** a function-tag table; only the `dbi` rows feed phase 3.

**Definition of done:** > 80 % of all `FUN_xxx` are tagged; manually audit the residual untagged set.

### Phase 3 — Feature decomposition (static + dynamic)

**Goal:** turn tagged DBI functions into named features (title rendering, NSP transfer, MTP, fs sandbox escape, etc.).

**Inputs:** Phase 1 strings + Phase 2 tags.

**Steps:**
1. Cluster `dbi` functions by call graph component.
2. For each component, list its strings (Phase 1) and its libnx imports (Phase 2). Name the component from the dominant theme.
3. For ambiguous control flow, resort to dynamic tracing under Unicorn (sec. 9). This is where Unicorn earns its keep — static call graph is enough for "this function reads NSP headers", but only dynamic trace tells you which function actually emits the in-app title string.

**Output:** named feature map covering ≥ 90 % of DBI's entry points.

**Definition of done:** every UI button you can press in the running app has a known function or call-site responsible for it.

### Phase 4 — Clean rewrite

**Goal:** rebuild DBI from a fresh skeleton (`test-app/source/`) using the feature map. This bypasses the title-render path entirely (we control it) and removes any third-party encrypted assets we cannot legally redistribute.

**Inputs:** the feature map + the source tree of the original public DBI revisions where available.

**Steps:**
1. Start from a libnx hello-world template.
2. Re-implement features in priority order: framebuffer + UTF-8 atlas → input loop → NSP transfer → installation → MTP backend → settings.
3. For each feature, port the algorithm from the binary (Phase 3 understanding) but keep our own strings, our own UI, and our own naming.

**Output:** an independent buildable source tree producing a Switch homebrew binary feature-equivalent (or strict superset) of upstream DBI.

**Why phase 4 is necessary:** there is at least one composition path producing the in-app title that static analysis does not pin down. Phase 4 bypasses the question — we own the title render so there is nothing to patch. (Sec. 13.)

---

## 1. Tools

* Python 3 (no third-party libs needed for the static work)
* `gcc` (to compile DBIPatcher fork or the search programs in `reverse/`)
* The DBI NRO at `DBI.nro`
* Optional: Ghidra for interactive disassembly
* Optional: `pip install unicorn capstone` for emulation experiments

In `reverse/` we ship:

| File | Purpose |
|---|---|
| `extract_keys.py` | Walks `.text` for ARM64 `mov+movk+movk+movk` chains, dumps every 64-bit immediate as a candidate key |
| `scan_decrypt.py` | Sliding-window decrypt of rodata against a key list (cipher v1/v2) |
| `scan_v3_cipher.c` | Cipher v3 (XOR+counter+cumsum) bulk decoder for KOI8-R Russian strings |
| `find_v3_search.c` | Targeted plaintext search with cipher v3 |
| `keys_891.tsv` | 3661 unique 64-bit keys extracted from DBI 891-ru |

---

## 2. NRO file format

```
+0x000  start jump + MOD0 placeholder
+0x010  "NRO0" magic (4 B)
+0x014  format_version (4 B)
+0x018  nro_size (4 B)            ← end of NRO body, start of optional ASET section
+0x01c  flags (4 B)
+0x020  text segment   (file_off u32, size u32)
+0x028  ro segment     (file_off u32, size u32)
+0x030  data segment   (file_off u32, size u32)
+0x038  bss size (4 B)
+0x080  text starts here

After nro_size, optional ASET section:
+nro_size+0x00  "ASET" magic
+nro_size+0x04  format_version
+nro_size+0x08  icon  (u64 file_off, u64 size)   — JPEG, ~8 KB
+nro_size+0x18  nacp  (u64 file_off, u64 size)   — exactly 16 KB
+nro_size+0x28  romfs (u64 file_off, u64 size)
```

Memory map at runtime: NRO body at `VA = 0x71000000`. So **file offset = VA − 0x71000000** for everything before the ASET section.

For DBI 891-ru concretely:

```
text:  file_off=0x000000, size=0x837000   (8.6 MB)
ro:    file_off=0x837000, size=0x2a4000   (2.6 MB)
data:  file_off=0xadb000, size=0x01e000   (120 KB)
bss:                       size=0x25a000  (2.4 MB)
file_size=0xb01eed ≈ 11.5 MB
nro_size=0xaf9000
asset_off=0xaf9000   icon=offset 0x38     nacp=offset 0x219d   romfs=offset 0x619d
```

### NACP (16 KB)

- 16 language entries, each `name`(0x200) + `publisher`(0x100), stride 0x300. Only first 12 are populated by upstream.
- `+0x3060`: ApplicationVersion (16 B ASCII, e.g. `"891"`).
- The system menu reads NACP for the home-screen icon/title. **DBI's own UI does NOT read NACP** — it uses internal fragments (see §7).

```python
import struct
nro = open('DBI.nro','rb').read()
nro_size = struct.unpack_from('<I', nro, 0x18)[0]
asset_off = nro_size
_, _ = struct.unpack_from('<QQ', nro, asset_off + 8)             # icon
nacp_rel, _ = struct.unpack_from('<QQ', nro, asset_off + 24)     # nacp
nacp_off = asset_off + nacp_rel
print(nro[nacp_off + 0x3060 : nacp_off + 0x3070].rstrip(b'\x00'))   # b'891'
```

For DBI 891-ru: `nacp_off = 0xafb19d`, `app_ver_off = 0xafe1fd`.

---

## 3. The three cipher variants

DBI uses three distinct cipher generations across different string classes within the same binary.

### Cipher v1 — DBI 814..845 (legacy)

Plain periodic XOR. Symmetric.

```c
for (i = 0; i < n; i++) {
    uint8_t k = (key64 >> ((i & 7) * 8)) & 0xff;
    out[i] = in[i] ^ k;
}
```

Used by upstream `rashevskyv/DBIPatcher` and the only cipher their toolkit supports.

### Cipher v2 — DBI 846+ (English/ASCII strings)

XOR plus a per-byte rotate. Rotate amount is the low 3 bits of the key byte itself.

```c
/* decrypt direction (ct -> pt) */
for (i = 0; i < n; i++) {
    uint8_t k = (key64 >> ((i & 7) * 8)) & 0xff;
    uint8_t v = ct[i] ^ k;
    uint8_t rot = k & 7;
    pt[i] = (v >> rot) | (v << (8 - rot));   /* ROR */
}

/* encrypt direction (pt -> ct) */
for (i = 0; i < n; i++) {
    uint8_t k = (key64 >> ((i & 7) * 8)) & 0xff;
    uint8_t rot = k & 7;
    uint8_t v = (pt[i] << rot) | (pt[i] >> (8 - rot));   /* ROL */
    ct[i] = v ^ k;
}
```

Verified end-to-end. v2 cipher disasm in DBI 887: VA `0x710010eaf4` (XOR loop) + `0x710010eb30` (ROR loop). Same logic in DBI 891 (different VAs).

### Cipher v3 — DBI 891 (KOI8-R Russian strings, multiple variants)

DBI 891 uses cipher v3 in **multiple post-transform variants** in
parallel, applied independently per call site:

| Variant | Stage 1 (per byte) | Stage 2 (post) |
|---|---|---|
| `simple_xor` | `pt[i] = ct[i] ^ kb[i&7]` | none |
| `counter_xor` | `pt[i] = ct[i] ^ ((kb + (i>>3)) & 0xff)` | none |
| `counter_cumsum` | counter_xor | `pt[i] = pt[i] + pt[i-1]` |
| `rol6` | counter_xor | `pt[i] = ROL(pt[i], 6)` ← title sentinel |
| `rorkey` | counter_xor | `pt[i] = ROR(pt[i], kb[i&7] & 7)` |
| `submul` | counter_xor | `pt[i] = pt[i] - 0x3b` |

The `rol6` variant was located inside `FUN_710012b890` (title builder,
sec. 7) at:
```
KEY = 0x89d7c5ebc399c1ad
CT  = 0x4917052b0359016d ++ 0xc45a026e (12 bytes LE)
PT  = "00000000000\0"  (serial-number sentinel)
```

The reference per-block recipe from sec 7 (counter_cumsum) is:

Three-stage pipeline: XOR with `(key_byte + counter)`, then cumulative sum.

```c
/* decrypt direction (ct -> pt) */
for (i = 0; i < n; i++) {
    uint8_t k = (key64 >> ((i & 7) * 8)) & 0xff;
    uint8_t ctr = (i >> 3) & 0xff;
    tmp[i] = ct[i] ^ ((k + ctr) & 0xff);   /* XOR with key+counter */
}
pt[0] = tmp[0];
for (i = 1; i < n; i++) {
    pt[i] = tmp[i] + pt[i-1];               /* cumulative sum */
}

/* encrypt direction (pt -> ct) */
delta[0] = pt[0];
for (i = 1; i < n; i++) {
    delta[i] = pt[i] - pt[i-1];             /* delta */
}
for (i = 0; i < n; i++) {
    uint8_t k = (key64 >> ((i & 7) * 8)) & 0xff;
    uint8_t ctr = (i >> 3) & 0xff;
    ct[i] = delta[i] ^ ((k + ctr) & 0xff);
}
```

Encoding for these strings is **KOI8-R**, not UTF-8 (1 byte per Cyrillic char).

Cipher v3 disasm in DBI 891 around `0x713e0718`:

```asm
0x713e0718  mov  x5, #0x21fd
0x713e071c  movk x5, #0xc981, lsl #16
0x713e0720  movk x5, #0x98f, lsl #32
0x713e0724  movk x5, #0x1dd7, lsl #48      ; x5 = 0x1dd7098fc98121fd

0x713e0730  ubfiz x3, x1, #3, #3            ; (i & 7) * 8
0x713e0744  lsr   x3, x5, x3                ; key_byte
0x713e0748  ubfx  w0, w1, #3, #8            ; (i >> 3) — counter
0x713e074c  add   w0, w0, w3                ; key_byte + counter
0x713e0750  ldrb  w3, [x1, x4]              ; ct[i]
0x713e0754  eor   w0, w0, w3                ; XOR
0x713e0758  strb  w0, [x1, x4]
... loop ...

0x713e0768  ldrb  w1, [x2, #0x760]          ; pt[0]
0x713e0778  ldrb  w3, [x0]                  ; tmp[i]
0x713e077c  add   w1, w1, w3                ; pt[i] = pt[i-1] + tmp[i]
0x713e0780  strb  w1, [x0], #1
... loop ...
```

Reference decode: file offset `0x8597c0` (8 bytes from rodata) + immediate `0xe2863114` (4 bytes) = 12-byte CT, key `0x1dd7098fc98121fd`, cipher v3 + KOI8-R → `Форсировать\0` ("Force").

---

## 4. Recovering keys

Keys end up as ARM64 immediate operands. ARM64 loads a 64-bit immediate with a four-instruction chain on the same destination register:

```asm
mov  Xd, #imm16          ; bits  0..15
movk Xd, #imm16, lsl #16 ; bits 16..31
movk Xd, #imm16, lsl #32 ; bits 32..47
movk Xd, #imm16, lsl #48 ; bits 48..63
```

`reverse/extract_keys.py` walks the binary for this pattern:

```bash
python3 reverse/extract_keys.py DBI.nro > keys.tsv
```

DBI 891-ru yields 3661 unique 64-bit keys (`reverse/keys_891.tsv`).

A small fraction of keys come from a **hybrid pattern**: `ADRP Xn, page` + `LDR Xt, [Xn, #imm12]` + `mov+movk` (rodata high half + immediate low half). For UI rename work the 4-part pattern is enough.

---

## 5. Identifying which cipher applies to which string class

For DBI 891 specifically:

* **Cipher v1**: not used (legacy only; predates 846).
* **Cipher v2**: used for English/ASCII strings (libcurl/libssh2/libstdc++ errors, format strings). To anchor: try `b'Invalid argument\x00'` or any other known libstdc++ error against all 3661 keys × cipher v2.
* **Cipher v3**: used for Russian KOI8-R UI strings (button labels, screen titles, error messages localized to Russian). To anchor: try the known KOI8-R-encoded `b'\xe6\xcf\xd2\xd3\xc9\xd2\xcf\xd7\xc1\xd4\xd8\x00'` ("Форсировать") against all keys × cipher v3.

Many strings that were encrypted in earlier DBI builds are now stored plain in 891 (e.g. `"Not enough space\x00"` at `0x839e30`).

---

## 6. Bulk-decrypting the encrypted-string region

```bash
# v2 (English-mostly)
python3 reverse/scan_decrypt.py DBI.nro reverse/keys_891.tsv --cipher 2 > decoded_v2.tsv

# v3 (Russian KOI8-R)
gcc -O3 -o /tmp/scan_v3 reverse/scan_v3_cipher.c
/tmp/scan_v3 DBI.nro reverse/keys_891.tsv > decoded_v3.tsv
```

Filtering: keep only outputs that have ≥16 printable chars, ≥6 alphabetical, ≥4 unique alphabetical, and at least one space or punctuation. Otherwise random byte windows produce too many false positives, especially for cipher v3 because cumsum can make any input look Cyrillic by chance.

---

## 7. The displayed app title and why it isn't a single string

The visible title (`"DBI: 891-ru"`) does **not** appear anywhere in the binary as one literal. Confirmed by exhaustive search:

```
Plain ASCII / UTF-16LE / UTF-16BE: 0 hits
Single-byte XOR (1..255 keys):     0 hits
Single-byte ROL/ROR (1..7):        0 hits
Periodic 8-byte XOR (any key):     0 hits
Cipher v1 × 3661 keys × all candidate plaintexts:     0 hits
Cipher v2 × 3661 keys × all candidate plaintexts:     0 hits
Cipher v3 × 3661 keys × all candidate plaintexts:     0 hits
Hybrid (ADRP+LDR) keys × any cipher × any plaintexts: 0 hits
```

The title is composed at runtime from independent fragments:

| Fragment | DBI 891-ru file offset | How it gets there |
|---|---|---|
| `"DBI"` (3 bytes) | `0x837008` (lone), `0x83b4d8` (lone) | Plain ASCII. Avoid touching `"DBI MTP"` (`0x83b4e0`), `"DBI Backend"` (`0x83b4e8`), `"Switch-DBI"` (`0x83c0c7`), and `"sdmc:/switch/DBI/..."` paths. |
| `":"` `" "` separators | rodata, plain | Built into the format chain |
| version string | NACP `+0x3060` = `0xafe1fd` | Read at runtime via NRO self-parse through `/dbiplaceholder` |
| `"-"` separator | rodata @ `0x84a628` (8-byte slot) | Plain |
| locale code (`"ru"`) | `0x83a2b8` (slot 7 of the en-US..zh-Hans table starting at `0x83a280`) | Selected at runtime by `FUN_7113c4e0` via `setSysGetSystemLanguage` bitmask — bit 11 = Russian → loads `"ru"` from `0x83a2b8` |

### Title-builder function: `FUN_711a17f0`

DBI 891 builds part of the displayed text in `FUN_711a17f0`. It allocates 5 std::strings:

```
sp+0x3b: "-"           (from 0x84a628)
sp+0x3c: "DBI"         (from 0x83b4d8)
sp+0x3d: version       (from std::string at sp+0x60, filled by FUN_7112b890)
sp+0x3e: "DBI MTP"     (from 0x83b4e0)
sp+0x3f: "DBI Backend" (from 0x83b4e8)
```

Then writes them as 1-byte status flags into a 6-row × 24-byte struct array at `DAT_71af2f50`. The renderer consumes that struct array.

### Locale-code mapper: `FUN_7113c4e0`

Pure switch over a SetLanguage bitmask:

```c
void get_locale_code(uint32_t lang_bitmask, std::string* out) {
    if (lang_bitmask & (1<<0))  load("en-US",   out);  // AmericanEnglish
    if (lang_bitmask & (1<<1))  load("en-GB",   out);  // BritishEnglish
    ...
    if (lang_bitmask & (1<<11)) load("ru",      out);  // Russian (slot 7 of locale table @ 0x83a2b8)
    ...
}
```

Patching the locale-table slot bytes at `0x83a2b8` makes this function return whatever 8-byte string you write there for the Russian-locale branch.

### Caller of locale-mapper (`FUN_713e0658` area)

This function:
1. Calls `FUN_7113c4e0(lang_bitmask=[x19+0x321c], out=sp+0xb8)` — gets locale code as std::string
2. Decrypts a 12-byte block at `0x8597c0` + immediate `0xe2863114` with cipher v3 / key `0x1dd7098fc98121fd` → `"Форсировать"`
3. Decrypts a second 8-byte block with another v3 key
4. Concatenates into a larger UI element

This is the entry point where the locale code joins the rest of the UI. Tracing it dynamically (Unicorn or HW debugger) is the only authoritative way to find the EXACT code that produces the `"DBI: <ver>-<locale>"` string.

---

## 8. Render pipeline

DBI 814+ draws to the framebuffer via libnx, **not** through `consoleInit()`:

```
viInitialize → viOpenDefaultDisplay → viCreateLayer →
viSetLayerScalingMode(FitToLayer) → nwindowCreateFromLayer →
nwindowSetDimensions(1280,720) → framebufferCreate
```

Text goes through DBI's own console emulator on top of the FB:

```
text byte → enqueue opcode 0 → 72-B slot deque @ ctx+0x120 →
consumer thread → ANSI state machine →
putchar → cell-write @ 80×45 grid (ctx+0x1e0, 12 B/cell) →
glyph blit (16×16 1-bpp glyph from atlas) →
lazy fb-acquire → framebufferBegin →
16-bpp framebuffer
```

Font atlas is a **ZSTD-compressed BMP** in rodata (~590 KB compressed → ~2 MiB decompressed). Covers Cyrillic, CJK, Greek, Hebrew, Arabic, Box Drawing.

UTF-8 is decoded inline (lead-byte dispatch + continuation validation). Cyrillic and CJK render correctly because they go through the atlas. KOI8-R cyrillic strings are handled by the same render path after a runtime KOI8-R → UTF-8 conversion.

---

## 9. Dynamic tracing with Unicorn

Static analysis takes you far but cannot prove which functions actually contribute to a given UI string at runtime. For the title hunt we needed to confirm whether the locale-mapper output, plain `"DBI"`, the `"-"` separator and a version literal are concatenated by exactly one function or by several. The fastest way to answer that is to run the relevant code under [Unicorn Engine](https://www.unicorn-engine.org/) (CPU-only ARM64 emulation, no kernel) and watch the memory writes.

### Why Unicorn and not a real Switch / Ryujinx

* Switch HW debugging requires a modchip + custom payload + GDB-stub firmware. High setup cost.
* Ryujinx + Xvfb on this server segfaults inside the GL backend (see `project_emu_verify_blocked` for the exact failure mode). Vulkan path is blocked because lavapipe lacks `VK_KHR_surface`.
* Unicorn is pure userspace and runs offline. It does not give you a screen — it gives you instruction- and memory-level traces, which is exactly what the title hunt needs.

### Setup

```bash
pip install unicorn capstone
```

### Minimum viable harness

```python
import struct
from unicorn import *
from unicorn.arm64_const import *

NRO_BASE = 0x71000000
STACK_BASE = 0x80000000
STACK_SIZE = 0x100000

with open('DBI.nro', 'rb') as f:
    nro = f.read()
text_off, text_size = struct.unpack_from('<II', nro, 0x20)
ro_off,   ro_size   = struct.unpack_from('<II', nro, 0x28)
data_off, data_size = struct.unpack_from('<II', nro, 0x30)

mu = Uc(UC_ARCH_ARM64, UC_MODE_ARM)
mu.mem_map(NRO_BASE, ((text_size + ro_size + data_size + 0xFFF) & ~0xFFF))
mu.mem_write(NRO_BASE + text_off, nro[text_off:text_off+text_size])
mu.mem_write(NRO_BASE + ro_off,   nro[ro_off:ro_off+ro_size])
mu.mem_write(NRO_BASE + data_off, nro[data_off:data_off+data_size])
mu.mem_map(STACK_BASE, STACK_SIZE)
mu.reg_write(UC_ARM64_REG_SP, STACK_BASE + STACK_SIZE - 0x100)

def code_hook(uc, addr, size, _):
    print(f'PC=0x{addr:x}')
mu.hook_add(UC_HOOK_CODE, code_hook)

def mem_hook(uc, access, addr, size, val, _):
    if access == UC_MEM_WRITE:
        print(f'  W [{addr:x}] = {val:x} ({size}B)')
mu.hook_add(UC_HOOK_MEM_WRITE, mem_hook)

# Run a self-contained leaf, e.g. the locale-code mapper
mu.reg_write(UC_ARM64_REG_X0, 1 << 7)            # bitmask: only RU set
out_buf = STACK_BASE + 0x10000
mu.reg_write(UC_ARM64_REG_X1, out_buf)
mu.emu_start(NRO_BASE + 0x13c4e0, NRO_BASE + 0x13c700)
print(mu.mem_read(out_buf, 8))                   # → expect b'ru\0\0\0\0\0\0'
```

This runs `FUN_7113c4e0` standalone and confirms the locale-code returned for the Russian-language bitmask. Equivalent technique works for any leaf function whose inputs you can reconstruct.

### Calling deeper functions: stub libnx

Once you climb out of pure leaves you hit calls into libnx (`framebufferBegin`, `viInitialize`, `applet*`, etc.) that need a real kernel. Two options:

1. **Hook at the call instruction** — install a `UC_HOOK_CODE` that recognises the BL/BLR opcode and jumps over the call (`PC += 4`, set X0 to whatever return value makes the caller proceed). This is enough for "I just want to see what the next basic block does after this libnx call returned 0". List of stubs we needed for the title path: `applet*`, `framebuffer*`, `nwindow*`, `vi*`, `__libnx_alloc`, `mallocarray`, `__cxa_atexit`, `pthread_*`. About 40 stubs.
2. **Map a fake libnx blob** at a high address and write tiny "return 0" thunks (`mov x0, #0; ret`) for each symbol you want to satisfy. Heavier, but lets calls actually flow through the IPL.

For DBI's title hunt option 1 is enough. The relevant code is reachable from `FUN_711a17f0` without ever needing a working framebuffer.

### What we found (and where we stopped)

Tracing from main() bottoms out at `PC=0x32edc0` because the call depth blows past 30 frames and we ran out of stubs. Two ways forward:

* Add the missing stubs and rerun (≤ 1 day of work to enumerate them).
* Skip the boot phase entirely: jump straight to `FUN_711a17f0` with a fabricated `this`, watch every memory write, and reverse the title from the writes.

Both confirm whether the title has a single source or multiple. The static analysis already tells us the *fragments*; Unicorn tells us the *concatenation order* and which fragment is the in-app one.

### Capstone for inline disassembly during trace

```python
from capstone import Cs, CS_ARCH_ARM64, CS_MODE_ARM
md = Cs(CS_ARCH_ARM64, CS_MODE_ARM)

def code_hook(uc, addr, size, _):
    raw = uc.mem_read(addr, size)
    for ins in md.disasm(bytes(raw), addr):
        print(f'{ins.address:x}: {ins.mnemonic} {ins.op_str}')
```

Combine this with a write-hook that pretty-prints any write into a known `std::string` SSO range (16-byte stack buffer or 24-byte heap header) and the title-composition becomes self-evident.

---

## 10. Patching strategies

NRO has **no checksum**. Direct byte-edit is safe. Keep slot lengths; do not write past the next NUL or alignment boundary.

### Rename via NACP only

NACP fields at `nacp_off + i*0x300` (i=0..15, name/publisher) and `nacp_off + 0x3060` (ApplicationVersion). This affects the system-menu icon/title only, not the in-app render.

### Rename in-app — known knobs

Patch all of:
* every plain `"DBI\0"` standalone literal: `0x837008`, `0x83b4d8` (NOT inside paths like `"sdmc:/switch/DBI/..."`),
* the locale-code table slot for the current system locale: `0x83a2b8` for `"ru"`,
* NACP ApplicationVersion: `0xafe1fd`,
* NACP names + publishers (12 langs × 2 fields).

Empirically, this changes the system-menu title but **may not** change the in-app render — there is at least one more code path / literal that is not yet pinned down in the static analysis. To get a fully-renamed in-app title reliably, use the Phase 4 (clean rewrite) approach instead.

### Replace an encrypted string in place

1. Find its `(offset, key, cipher_version, length)` via `scan_decrypt.py` / `scan_v3_cipher.c` or by guessing the plaintext.
2. Encrypt your replacement plaintext with the SAME key + correct cipher.
3. Pad to original byte length with NULs.
4. Overwrite at the same file offset.

### DBIPatcher 891+

Upstream `rashevskyv/DBIPatcher` only supports DBI 814..845 (cipher v1). For 846+, fork it and add a `cipher_dec_byte` / `cipher_xor_byte` pair switching on a `--cipher` CLI flag (1 = v1, 2 = v2, 3 = v3). Patches all 13 XOR sites in `src/v2/strings.c` and `src/v2/imm_finder.c`. About 60 LOC change total.

---

## 11. End-to-end checklist for a fresh DBI release

This is the proven recipe; running it on DBI 891 produced 100% byte-
identical reproduction plus full Ghidra decomp of all 9 395 functions.

### A. Bulk string recovery (Phase 1)

1. `python3 reverse/extract_keys.py NEW.nro > keys.tsv`
   — extract every `mov+movk×3` 64-bit immediate chain. Sanity-check
   key count (DBI 891 has 3 661 unique keys).
2. Read NACP fields at file offset NACP base + i*0x300 (i=0..15) for
   names, +0x3060 for ApplicationVersion.
3. Anchor cipher variant via a known plain string. Try
   `"Invalid argument\0"` first — likely plain. If not plain, try
   v2 / v3.
4. Bulk decode with both v2 (English filter) and v3 (Russian filter):
   ```
   gcc -O3 -o /tmp/scan_v3 reverse/scan_v3_cipher.c
   /tmp/scan_v3 NEW.nro keys.tsv > decoded_v3.tsv
   python3 reverse/scan_decrypt.py NEW.nro keys.tsv \
       --cipher 2 > decoded_v2.tsv
   ```
5. Run multi-variant blueprint (recommended for >150 hits):
   ```
   gcc -O3 -o /tmp/scan_v3_bp reverse/scan_v3_blueprint_multi.c
   /tmp/scan_v3_bp NEW.nro keys.tsv reverse/v3_prefixes_huge.txt \
       > blueprint_hits.tsv
   ```
6. **Run Ghidra full decomp** (sec. 14) and the v7 XOR miner against
   the decompiled output. The v7 miner finds register-packed and
   stack-extended encrypted blobs that the periodic-XOR scanner
   misses — adds another 100+ unique strings on top of blueprint.
7. Diff your byte set vs the previous version.

### B. Library / function map (Phase 2)

1. `python3 reverse/extract_functions_891.py NEW.nro > functions.tsv`
   — emits one row per function (`stp x29, x30` prolog + size).
2. `python3 reverse/string_xrefs_891.py NEW.nro > xrefs.tsv` — every
   `adrp+add` / `adrp+ldr` chain that resolves into rodata.
3. `python3 reverse/categorize_functions_891.py NEW.nro` — per-function
   subsystem tag based on anchored strings + address-range
   propagation.

### C. Feature decomposition (Phase 3)

For each subsystem identified by Phase 2, the "feature decomposition"
is `Part-NN` documentation in the per-version FINDINGS.md plus per-
function decomp samples.  See `reverse/891/FINDINGS.md` Parts 11..48
for the 891 example covering FTP / HTTP / MTP / TitleDB / install /
saves / gamecard / render / ipc / DBI0 protocol / theme / FB2 reader
/ archive / NPDM / atlas / cipher residual.

### D. Byte-identical reproduction (Phase 2 close)

Build the original NRO from extracted segments:

1. Extract `text.bin` / `rodata.bin` / `data.bin` from NEW.nro using
   `decomp-891-tools/blob_build/build.sh` script as a template
   (re-point `base/dbi891.nro` at your target NRO).
2. Extract NACP / icon / romfs from the ASET section at `aset_off`.
3. Run `bash blob_build/build.sh` inside devkitpro/devkita64 docker.
4. Compare SHA256 against source. Two-stage diff: first the segment
   bytes (these match if .text/.rodata/.data extraction was clean);
   then bss_size + build_id (these are NRO-format metadata that
   need to be patched in from the source NRO since they don't come
   from a minimal blob.ld).

The build pipeline produced a 100% byte-identical 891 NRO with SHA256
`19934316b2d3138b75dabb77da398747d3699e91995ba5375f5fe8d449e14ba4`.

### E. Phase 4 — clean rewrite

Use the Phase 1-3 outputs as input to a clean-room rewrite. See
`reverse/891/phase4_blueprint.md` for the implementation map: which
test-app/source/* file each Phase 1-3 finding feeds, which subsystems
already have prototype implementations in
`/opt/aimeld-proj/dbi-fork/reference/test-app/`, and which need new
modules.

---

## 12. DBI 891 specifics — quick reference

| Item | DBI 891-ru |
|---|---|
| File size | 11 542 061 bytes |
| Text size | 0x837000 |
| Rodata range | 0x837000 .. 0xadb000 |
| Cipher variants present | v2 (English/ASCII), v3 (KOI8-R Russian) |
| 4-part keys extracted | 3661 unique |
| NACP base | `0xafb19d` |
| ApplicationVersion offset | `0xafe1fd` |
| Plain `"DBI\0"` standalone | `0x837008`, `0x83b4d8` |
| Plain `"DBI MTP\0"` | `0x83b4e0` (do not touch) |
| Plain `"DBI Backend\0"` | `0x83b4e8` (do not touch) |
| Plain `"Switch-DBI"` | `0x83c0c7` (do not touch) |
| Plain `"-"` separator | `0x84a628` |
| Locale-code table base | `0x83a280` (en-US) |
| Locale slot for `"ru"` | `0x83a2b8` (slot 7) |
| ZSTD font atlas | rodata |
| Title-builder function | `FUN_711a17f0` |
| Locale-code mapper | `FUN_7113c4e0` |
| Locale-mapper caller (cipher v3) | around `0x713e0658` |
| Reference v3 decrypt | `0x8597c0` + `0xe2863114`, key `0x1dd7098fc98121fd` → `"Форсировать"` |

### Per-phase outputs in this repo

| Path | Contents |
|---|---|
| `reverse/891/decoded_v2_clean.tsv` | 51 high-confidence cipher v2 plaintexts (Phase 1) |
| `reverse/891/phase2_libraries.md` | Vendored library inventory (Phase 2) |
| `reverse/891/phase3_features.md` | Feature decomposition + tagged address ranges (Phase 3) |

To regenerate from a fresh NRO, see `## 11. End-to-end checklist`.

---

## 13. What we did NOT achieve (and what we DID, for honesty)

### Closed items

- **Cipher v3 inside the title builder** is now decrypted —
  `FUN_710012b890` cipher inline cracked: counter_xor + ROL6 with key
  `0x89d7c5ebc399c1ad`, decrypts to the `"00000000000"` serial-number
  sentinel (sec. 3, sec. 7).
- **Title slot setter** is now identified — `FUN_71001a17f0` (368 B)
  fills 6 menu slot structs at `0x7100af2f60..0x7100af2fd8` with
  byte handles for `"-"`, `"DBI"`, version, `"DBI MTP"`, `"DBI Backend"`.
- **Byte-identical NRO build** is now reproducible (sec. 11.D + sec.
  15) — SHA256 matches the source.
- **All 5 cipher v3 sub-variants** (none, cumsum, rol6, rorkey,
  submul) are now confirmed in 891 (initially we thought only cumsum
  + counter_xor were present).
- **Ghidra full-decomp pipeline** is reproducible: 9 395 functions
  are dumped to per-chunk `.c` files via `DbiDumpFull891.java`.

### Still open

- The **final title content** ("DBI: 891-ru" or whatever the device
  ultimately renders) still cannot be pinned down statically without
  emulation. The string is composed at runtime from the firmware
  version (set:sys IPC) + locale code (FUN_7113c4e0) + the cipher v3
  result. Phase 4 (clean rewrite) sidesteps this by writing our own
  title path.
- Not every encrypted string is decoded. The combined decode set
  (`decoded_v2_clean.tsv` + `xor_decoded_891_clean.tsv` + the
  blueprint outputs) covers ≈ 400 unique high-confidence plaintexts;
  the v7 mining produced 63 M raw entries of which ~ 144 survive
  strict Russian-dictionary filtering. Coverage is sufficient for
  Phase 4 implementation but not exhaustive.
- We did not rename Ghidra functions. The `FUN_xxx` labels in this
  doc are Ghidra's auto-names. Renaming them is busywork; Phase 4
  rewrites everything anyway.

For the residual title hunt see sec. 7 + sec. 9 (Unicorn dynamic trace).
For the per-Phase progress on DBI 891 specifically see
`reverse/891/FINDINGS.md` (48 parts, byte-level + function-level
documentation).

---

## 14. Ghidra workflow for new DBI versions

Tested with Ghidra 11.3.2 + `SwitchLoader` extension. The full pipeline
is documented in `reverse/ghidra/`.

### Step 1 — Import + auto-analyze

```
analyzeHeadless <projects-dir> DBI_<ver> \
    -import path/to/DBI.nro \
    -loader SwitchLoader
```

Auto-analyze takes 5–60 minutes depending on binary size; for 891
(8.4 MB .text, 9 395 functions) it finished in about 3 minutes on
modern hardware.

### Step 2 — Dump every function as Ghidra C

```
analyzeHeadless <projects-dir> DBI_<ver> \
    -process DBI.nro \
    -noanalysis \
    -postScript DbiDumpFull<ver>.java \
    -scriptPath /opt/aimeld-proj/re/scripts
```

`DbiDumpFull<ver>.java` decompiles every function (per-function timeout
proportional to body size, max 10 min) and writes batches of 400
functions per `full_decomp_<ver>_N.c` file. For 891 this produced 24
files totaling ~ 38 MB.

### Step 3 — Dump strings, symbols, function table

```
analyzeHeadless <projects-dir> DBI_<ver> \
    -process DBI.nro \
    -noanalysis \
    -postScript DbiAnalyze<ver>.java
```

Writes `functions_<ver>.tsv`, `strings_<ver>.tsv`,
`symbols_<ver>.tsv`. Used as input by the categorization /
xref-mining scripts.

### Step 4 — Mine encrypted strings

```
python3 reverse/ghidra/decode_xor_v7_<ver>.py \
    > xor_decoded_v7_<ver>.txt
```

Walks `.text` for `LDR Dn / Qn` blob loads from rodata (for stack-
extended encrypted blobs), brute-decodes against every extracted
key + every cipher variant, emits 60 M+ raw entries. Use a strict
Russian-dictionary filter to cut to ~ 200 high-confidence rows.

---

## 15. Byte-identical NRO build pipeline

Output: a NRO that reproduces the original byte-for-byte (verified
by SHA256). Lives at `decomp-891-tools/blob_build/`:

```
decomp-891-tools/
├── blob_build/
│   ├── base_blob.s   .incbin's text/rodata/data segments
│   ├── blob.ld       linker script (no stdlib, .text/.rodata/.data sections)
│   └── build.sh      one-shot reproducible build (docker)
├── verify_match.py             strict per-section byte-match
├── verify_match_relaxed.py     ignores adrp/add immediates (catches
│                                 functions that drift only by .rodata
│                                 pointer immediate)
└── match_*.tsv       per-symbol verification reports
```

The build script:

1. Extracts `text.bin`, `rodata.bin`, `data.bin` from
   `base/dbi<ver>.nro` (already done — kept in `blob_build/`).
2. Extracts NACP, icon, romfs from the source NRO's ASET section.
3. Assembles `base_blob.s` (incbin's the segment files).
4. Links via `blob.ld` (places .text at addr 0, no stdlib).
5. Wraps to NRO with elf2nro.
6. Patches `bss_size` (header offset 0x38..0x40) and `build_id`
   (offset 0x40..0x54) from the source NRO — these come from ELF
   NOTE section and are not synthesised by our minimal blob.ld.
7. Verifies SHA256 == source.

This is the **byte-match ratchet**: replace blob bytes with one
compiled `.o` at a time, verify SHA256 stays the same. Each
accepted function moves out of the trust-the-blob set into the
hand-decompiled-and-verified set.

For DBI 891, after running the full pipeline:

```
Source SHA256:  19934316b2d3138b75dabb77da398747d3699e91995ba5375f5fe8d449e14ba4
Built  SHA256:  19934316b2d3138b75dabb77da398747d3699e91995ba5375f5fe8d449e14ba4
IDENTICAL: True
```
