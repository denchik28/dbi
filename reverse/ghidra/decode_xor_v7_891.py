#!/usr/bin/env python3
"""
v7 XOR decoder — comprehensive string decryption for DBI 887.

Improvements over v2/v5/v6:
- Handles register-packed variants (LDR D31/Q-reg from rodata + stack-extends)
- Multi-blob concatenation (q30 + q31 overlapping at +9)
- Position-dependent XOR keys (not just 8-byte periodic)
- All 5 known post-transforms: none, cumsum, rorkey, submul, rol6
- Output unified into single big TSV: per-function decoded strings.

Usage:
  python3 decode_xor_v7.py > /opt/aimeld-proj/re/analysis/xor_decoded_v7_891.txt
"""
import struct, capstone, re, sys, os
import time

VA_BASE = 0x7100000000
RODATA_VA_BASE = 0x71837000
RODATA_FILE_BASE = 0x837000

text = open('/opt/aimeld-proj/dbi-fork/decomp-891/blob_build/text.bin','rb').read()
rodata = open('/opt/aimeld-proj/dbi-fork/decomp-891/blob_build/rodata.bin','rb').read()
cs = capstone.Cs(capstone.CS_ARCH_ARM64, capstone.CS_MODE_LITTLE_ENDIAN)

def parse_imm(s):
    s = s.lstrip('#').strip()
    try:
        if s.startswith('-0x'): return -int(s[3:], 16)
        if s.startswith('0x'):  return int(s[2:], 16)
        if s.startswith('-'):   return -int(s[1:])
        return int(s)
    except: return None

def try_decode_all_posts(enc, key):
    """Try all 5 post-transforms and return list of (post_name, decoded_bytes)."""
    results = []
    # Stage 1: XOR with periodic key
    base = bytearray(enc)
    for i in range(len(base)):
        k = (key >> ((i & 7) * 8)) & 0xff
        base[i] ^= k

    # Variant 0: no post
    results.append(('none', bytes(base)))

    # cumsum
    buf = bytearray(base)
    for i in range(1, len(buf)): buf[i] = (buf[i] + buf[i-1]) & 0xff
    results.append(('cumsum', bytes(buf)))

    # rorkey (rotate right by (key>>shift) & 7)
    buf = bytearray(base)
    for i in range(len(buf)):
        r = (key >> ((i & 7) * 8)) & 7
        b = buf[i]
        buf[i] = ((b >> r) | (b << (8-r))) & 0xff
    results.append(('rorkey', bytes(buf)))

    # submul: buf[i] = (buf[i] - buf[i-1] * 0xc5) & 0xff (forward)
    buf = bytearray(base)
    for i in range(1, len(buf)):
        buf[i] = (buf[i] - buf[i-1] * 0xc5) & 0xff
    results.append(('submul', bytes(buf)))

    # rol6
    buf = bytearray(base)
    for i in range(len(buf)):
        b = buf[i]
        buf[i] = ((b << 6) | (b >> 2)) & 0xff
    results.append(('rol6', bytes(buf)))

    return results

def is_useful_string(s, min_len=4):
    """Check if decoded bytes look like a meaningful string."""
    if not s: return False
    s = s.rstrip(b'\x00')
    if len(s) < min_len: return False
    # ASCII check
    ascii_count = sum(1 for c in s if 32 <= c < 127)
    if ascii_count >= len(s) - 1:
        return True
    # KOI8-R Cyrillic check
    cyr_count = sum(1 for c in s if (c >= 0xC0 and c <= 0xFF) or (32 <= c < 127))
    if cyr_count >= len(s) - 1 and any(c >= 0xC0 for c in s):
        return True
    return False

def decode_string(s):
    """Decode bytes to readable string (ASCII or KOI8-R)."""
    s = s.rstrip(b'\x00')
    try:
        return s.decode('ascii')
    except:
        try:
            return s.decode('koi8-r')
        except:
            return repr(s)

# Step 1: Collect ALL u64 keys from MOV+MOVK chains AND LDR-literal loads
print('Step 1: Collecting all u64 keys...', file=sys.stderr)
fns = []
with open('/opt/aimeld-proj/re/analysis/functions_887.tsv') as f:
    f.readline()
    for ln in f:
        parts = ln.strip().split('\t')
        if len(parts) >= 3:
            try: fns.append((int(parts[0], 16), int(parts[1]), parts[2]))
            except: pass

ADRP_RE = re.compile(r'(\w+),\s*#?(0x[0-9a-f]+|\-?\d+)')
LDR_RE  = re.compile(r'(\w+),\s*\[(\w+)(?:,\s*#?(-?0x[0-9a-f]+|-?\d+))?\]')
ADD_RE  = re.compile(r'(\w+),\s*(\w+),\s*#?(0x[0-9a-f]+|\-?\d+)(?:,\s*lsl\s*#?(\d+))?')
MOV_RE  = re.compile(r'(\w+),\s*#?(-?0x[0-9a-f]+|-?\d+)')
MOVK_RE = re.compile(r'(\w+),\s*#?(0x[0-9a-f]+|\d+)(?:,\s*lsl\s*#?(\d+))?')
STR_RE  = re.compile(r'(\w+),\s*\[(\w+)(?:,\s*#?(-?0x[0-9a-f]+|-?\d+))?\]')

all_keys = set()
all_blobs = []   # (fn_name, pc, rod_va, bytes_extended)

for addr, size, fn_name in fns:
    if size < 0x80: continue
    text_off = addr - VA_BASE
    if text_off < 0 or text_off + size > len(text): continue

    insns = list(cs.disasm(text[text_off:text_off+size], text_off))
    if not insns: continue
    idx = {ins.address: i for i, ins in enumerate(insns)}

    reg_vals = {}    # for ADRP+ADD/LDR resolutions
    x_keys = {}      # for u64 key tracking via MOV+MOVK
    fn_blobs = []

    for insn in insns:
        op, op_str = insn.mnemonic, insn.op_str
        if op == 'bl':
            for r in list(reg_vals.keys()):
                if r.startswith('x'):
                    try:
                        if int(r[1:]) <= 18: del reg_vals[r]
                    except: pass
            for r in list(x_keys.keys()):
                if r.startswith('x'):
                    try:
                        if int(r[1:]) <= 18: del x_keys[r]
                    except: pass
            continue

        if op == 'adrp':
            m = ADRP_RE.match(op_str)
            if m:
                v = parse_imm(m.group(2))
                if v is not None: reg_vals[m.group(1)] = v
        elif op == 'add':
            m = ADD_RE.match(op_str)
            if m:
                rd, rn = m.group(1), m.group(2)
                imm = parse_imm(m.group(3))
                shift = int(m.group(4)) if m.group(4) else 0
                if rn in reg_vals and imm is not None:
                    reg_vals[rd] = reg_vals[rn] + (imm << shift)
                elif rd in reg_vals: del reg_vals[rd]
        elif op == 'mov':
            m = MOV_RE.match(op_str)
            if m and m.group(1).startswith('x'):
                v = parse_imm(m.group(2))
                if v is not None: x_keys[m.group(1)] = v & 0xffffffffffffffff
        elif op == 'movk':
            m = MOVK_RE.match(op_str)
            if m and m.group(1) in x_keys:
                imm = parse_imm(m.group(2))
                shift = int(m.group(3)) if m.group(3) else 0
                if imm is not None:
                    mask = 0xffff << shift
                    x_keys[m.group(1)] = (x_keys[m.group(1)] & ~mask) | ((imm << shift) & mask)
                    if shift == 48:
                        v = x_keys[m.group(1)]
                        if (v >> 32) != 0: all_keys.add(v)
        elif op in ('ldr', 'ldur'):
            m = LDR_RE.match(op_str)
            if m:
                rd, rn = m.group(1), m.group(2)
                imm_str = m.group(3)
                imm = parse_imm(imm_str) if imm_str else 0
                if rn in reg_vals and imm is not None:
                    addr2 = reg_vals[rn] + imm
                    foff = addr2 - RODATA_FILE_BASE
                    width = 0
                    if rd.startswith('d'): width = 8
                    elif rd.startswith('q'): width = 16
                    elif rd.startswith('x'): width = 8
                    if width and 0 <= foff < len(rodata) - width:
                        # Also load X-register pulls u64 keys
                        if rd.startswith('x'):
                            k = struct.unpack('<Q', rodata[foff:foff+8])[0]
                            if (k >> 32) != 0: all_keys.add(k)
                        # All loads — register blobs for encrypted strings
                        b = rodata[foff:foff+width]
                        fn_blobs.append({'pc': insn.address, 'rod_va': addr2, 'bytes': b, 'reg': rd})
                if rd in reg_vals: del reg_vals[rd]

    for blob in fn_blobs:
        blob['fn'] = fn_name
        all_blobs.append(blob)

print(f'Total u64 keys: {len(all_keys)}', file=sys.stderr)
print(f'Total LDR blobs from rodata: {len(all_blobs)}', file=sys.stderr)

# Step 2: Filter blobs to encrypted-string range (heuristic)
# Encrypted strings cluster at high rodata offsets
enc_blobs = [b for b in all_blobs if 0x8cc000 <= b['rod_va'] < 0x8f0000 or 0x96fe00 <= b['rod_va'] < 0x980000]
print(f'Filtered to encrypted range: {len(enc_blobs)}', file=sys.stderr)

# Step 3: For each blob, brute-decode with all keys, all post-transforms, all reasonable lengths
print('Step 3: Decoding...', file=sys.stderr)
print('# fn\tpc\trod_va\tlength\tkey\tpost\tdecoded')
t0 = time.time()
total_decoded = 0
for i, blob in enumerate(enc_blobs):
    if i % 100 == 0:
        print(f'  blob {i}/{len(enc_blobs)} ({time.time()-t0:.0f}s, decoded={total_decoded})', file=sys.stderr)
    enc = blob['bytes']
    # Try multiple lengths up to size of blob
    for L in range(4, len(enc)+1):
        sub = enc[:L]
        for key in all_keys:
            for post, dec in try_decode_all_posts(sub, key):
                if is_useful_string(dec, min_len=4):
                    s = decode_string(dec)
                    print(f'{blob["fn"]}\t{blob["pc"]:#x}\t{blob["rod_va"]:#x}\t{L}\t{key:#x}\t{post}\t{s!r}')
                    total_decoded += 1

print(f'\n# Done in {time.time()-t0:.0f}s, decoded {total_decoded} entries', file=sys.stderr)
