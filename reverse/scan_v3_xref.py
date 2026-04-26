#!/usr/bin/env python3
"""Walk DBI 891 `.text` for every cipher v3 inline decrypt call site.

Cipher v3 in DBI 891 is **inlined per call site**, not reached through a
shared decryptor. Each site has the same instruction backbone (per
REVERSE.md sec. 3.3 reference at 0x713e0718):

    mov   xK, #imm16                 ; bits  0..15 of key
    movk  xK, #imm16, lsl #16        ; bits 16..31
    movk  xK, #imm16, lsl #32        ; bits 32..47
    movk  xK, #imm16, lsl #48        ; bits 48..63
    mov   x1, #0                     ; counter init
    nop                              ; padding (sometimes absent)
loop_top:                            ;
    ubfiz x?, x1, #3, #3             ; (i & 7) * 8
    bl    HELPER                     ; dest-buffer accessor / std::string::op[]
    ...                              ; address arithmetic
    lsr   x?, xK, x?                 ; key_byte = key >> ((i&7)*8)
    lsr   w?, w?, #3                 ; counter = (i >> 3)
    add   w?, w?, w?                 ; key_byte + counter
    ldrb  w?, [x?, x?]               ; ct[i]
    eor   w?, w?, w?                 ; XOR
    strb  w?, [x?, x?]               ; tmp[i]
    add   x1, x1, #1
    cmp   x1, #N                     ; <- string length N
    b.ne  loop_top

The script:
1. Finds every `lsr w?, w?, #3` because that opcode is rare outside this
   cipher (counter = i >> 3 is unusual elsewhere).
2. Within the next 4 instructions, requires the `add → ldrb → eor → strb`
   triplet that completes the cipher body.
3. Walks back to find the `ubfiz xN, xM, #3, #3` that begins the loop.
4. Walks back from the ubfiz to find the most recent `mov + movk*3`
   chain into a single x register — that is the per-string key.
5. Walks forward to find the loop tail `add x?, x?, #1; cmp x?, #N;
   b.ne loop_top` to recover the string length N.
6. Walks the basic block before the loop for the `adrp + add` (or
   `adrp + ldr`) that constructs the .rodata pointer used as ct source.

Output: rows are emitted only when ALL of the above are present, plus
the decoded plaintext is at least 50% KOI8-R Cyrillic.

Usage:
    python3 scan_v3_xref.py [DBI.nro] > v3_xref.tsv
"""
import struct
import sys

NRO_BASE = 0x71000000

def insn(data, off):
    return struct.unpack_from('<I', data, off)[0]

def is_ubfiz_3_3(raw):     return (raw & 0xfffffc00) == 0xd37d0800
def is_lsr_w_imm3(raw):
    """Match UBFM/UBFX/LSR wd, wn, #3, #imms — the cipher v3 counter
    extract uses ubfx w0, w1, #3, #8 (encoded with immr=3, imms=10),
    not lsr-to-31. So fix only sf=0, opc=10, N=0, immr=3 and let imms
    vary."""
    return (raw & 0xffff0000) == 0x53030000
def is_lsr_xN_xK_xN(raw):  return (raw & 0xffe0fc00) == 0x9ac02400
def is_add_w(raw):         return (raw & 0xff00fc00) == 0x0b000000
def is_ldrb_reg(raw):      return (raw & 0xffe0ec00) == 0x38606800
def is_strb_reg(raw):      return (raw & 0xffe0ec00) == 0x38206800
def is_eor_w(raw):         return (raw & 0xff200000) == 0x4a000000
def is_mov_imm16_64(raw):  return (raw & 0xff800000) == 0xd2800000
def is_movk_imm16_64(raw): return (raw & 0xff800000) == 0xf2800000
def is_adrp(raw):          return (raw & 0x9f000000) == 0x90000000
def is_add_imm(raw):       return (raw & 0xff800000) == 0x91000000
def is_b_ne(raw):          return (raw & 0xff00001f) == 0x54000001
def is_cmp_imm(raw):
    if (raw & 0xff800000) != 0xf1000000: return None
    if (raw & 0x1f) != 31: return None
    return ((raw >> 10) & 0xfff) << (((raw >> 22) & 1) * 12)

def decode_movk(raw):
    return raw & 0x1f, (raw >> 5) & 0xffff, ((raw >> 21) & 0x3) * 16

def decode_mov_imm(raw):
    return raw & 0x1f, (raw >> 5) & 0xffff

def decode_adrp(raw, pc):
    immlo = (raw >> 29) & 0x3
    immhi = (raw >> 5) & 0x7ffff
    imm = ((immhi << 2) | immlo) << 12
    if imm & (1 << 32): imm -= 1 << 33
    return raw & 0x1f, (pc & ~0xfff) + imm

def decode_add_imm(raw):
    rd = raw & 0x1f
    rn = (raw >> 5) & 0x1f
    imm = ((raw >> 10) & 0xfff) << (((raw >> 22) & 1) * 12)
    return rd, rn, imm

def find_inline_sites(data, text_size):
    """Return list of (loop_top_off, key_reg, length, lsr_off)."""
    sites = []
    end = (text_size // 4) * 4
    off = 0
    while off + 0x80 < end:
        raw = insn(data, off)
        if is_lsr_w_imm3(raw):
            # Check next 4 instructions for: add w → ldrb [x,x] → eor w → strb [x,x]
            seq_ok = (
                is_add_w(insn(data, off + 4)) and
                is_ldrb_reg(insn(data, off + 8)) and
                is_eor_w(insn(data, off + 12)) and
                is_strb_reg(insn(data, off + 16))
            )
            if seq_ok:
                # Find the lsr xN, xK, xN immediately before
                # Within 6 instructions back
                key_reg = None
                lsr_x_off = None
                for back in range(1, 8):
                    r = insn(data, off - back*4)
                    if is_lsr_xN_xK_xN(r):
                        key_reg = (r >> 5) & 0x1f
                        lsr_x_off = off - back*4
                        break
                if key_reg is None:
                    off += 4; continue

                # Find the ubfiz that begins the loop. The reference site
                # has the loop top only 5 instructions before lsr_x — start
                # at back=1, not back=8.
                ubfiz_off = None
                for back in range(1, 64):
                    r = insn(data, lsr_x_off - back*4)
                    if is_ubfiz_3_3(r):
                        ubfiz_off = lsr_x_off - back*4
                        break
                if ubfiz_off is None:
                    off += 4; continue

                # Find loop length: cmp x?, #N right after the strb
                length = None
                for fwd in range(0, 8):
                    r = insn(data, off + 16 + fwd*4)
                    v = is_cmp_imm(r)
                    if v is not None and 0 < v < 1024:
                        # require the next instruction to be b.ne backward to ubfiz
                        rb = insn(data, off + 16 + (fwd+1)*4)
                        if is_b_ne(rb):
                            length = v
                            break
                if length is None:
                    off += 4; continue

                sites.append((ubfiz_off, key_reg, length, lsr_x_off))
        off += 4
    return sites

def find_key_chain(data, search_end, want_reg, search_back=0x100):
    """Walk backward from search_end looking for mov + movk*3 into want_reg."""
    parts = {}
    found_movs = 0
    for back in range(0, search_back, 4):
        off = search_end - back
        if off < 0: break
        raw = insn(data, off)
        if is_mov_imm16_64(raw):
            rd, imm = decode_mov_imm(raw)
            if rd == want_reg:
                parts[0] = imm
                found_movs += 1
        elif is_movk_imm16_64(raw):
            rd, imm, sh = decode_movk(raw)
            if rd == want_reg:
                parts[sh] = imm
                found_movs += 1
        if all(s in parts for s in (0, 16, 32, 48)):
            return parts[0] | (parts[16] << 16) | (parts[32] << 32) | (parts[48] << 48)
    return None

def find_rodata_pointer(data, search_start, search_end):
    """Look in [search_start, search_end] for adrp + add (or adrp + ldr) into .rodata."""
    candidates = []
    for off in range(search_start, search_end, 4):
        raw = insn(data, off)
        pc = NRO_BASE + off
        if is_adrp(raw):
            rd, page = decode_adrp(raw, pc)
            for k in range(1, 8):
                r2 = insn(data, off + k*4)
                if is_add_imm(r2):
                    rd2, rn2, imm = decode_add_imm(r2)
                    if rn2 == rd:
                        addr = page + imm
                        if 0x71837000 <= addr < 0x71adb000:
                            candidates.append(addr - NRO_BASE)
                            break
                if (r2 & 0xff000000) in (0xf9000000, 0xb9000000):
                    rn2 = (r2 >> 5) & 0x1f
                    if rn2 == rd:
                        scale = 8 if (r2 & 0xff000000) == 0xf9000000 else 4
                        imm = ((r2 >> 10) & 0xfff) * scale
                        addr = page + imm
                        if 0x71837000 <= addr < 0x71adb000:
                            candidates.append(addr - NRO_BASE)
                            break
    return candidates

def v3_decrypt(ct, key):
    kb = key.to_bytes(8, 'little')
    n = len(ct)
    tmp = bytearray()
    for i, c in enumerate(ct):
        ctr = (i >> 3) & 0xff
        tmp.append(c ^ ((kb[i & 7] + ctr) & 0xff))
    pt = bytearray([tmp[0]])
    for i in range(1, n):
        pt.append((tmp[i] + pt[i-1]) & 0xff)
    return bytes(pt)

def main():
    import argparse
    ap = argparse.ArgumentParser()
    ap.add_argument('nro', nargs='?', default='/tmp/dbi891/DBI.nro')
    ap.add_argument('--mode', choices=['decode', 'pairs'], default='decode',
                    help='decode = print only sites with valid Russian; '
                         'pairs = dump every (key, length) pair (for paired '
                         'brute-force scanner)')
    args = ap.parse_args()
    with open(args.nro, 'rb') as f: data = f.read()
    text_size = struct.unpack_from('<I', data, 0x24)[0]

    sites = find_inline_sites(data, text_size)
    print(f'  found {len(sites)} cipher v3 inline sites with full signature',
          file=sys.stderr)

    if args.mode == 'pairs':
        seen = set()
        for ubfiz_off, key_reg, length, lsr_x_off in sites:
            key = find_key_chain(data, ubfiz_off, key_reg)
            if key is None: continue
            if (key, length) in seen: continue
            seen.add((key, length))
            print(f'0x{key:016x} {length}')
        print(f'  emitted {len(seen)} unique (key, length) pairs',
              file=sys.stderr)
        return

    print('site_pc\tkey\tlen\trodata_off\tkoi8r')
    used_keys = set()
    for ubfiz_off, key_reg, length, lsr_x_off in sites:
        key = find_key_chain(data, ubfiz_off, key_reg)
        if key is None: continue
        # find rodata pointer in basic block leading to ubfiz
        rodata_candidates = find_rodata_pointer(data, max(0, ubfiz_off - 0x200), ubfiz_off)
        # try each candidate, keep the one whose decryption is most Russian
        best = None
        for ct_off in rodata_candidates:
            ct = data[ct_off:ct_off + length]
            if len(ct) < length: continue
            pt = v3_decrypt(ct, key)
            if 0 in pt:
                pt = pt[:pt.index(0)]
            if not pt: continue
            cyr = sum(1 for b in pt if 0xc0 <= b <= 0xfe)
            score = cyr / len(pt)
            if score >= 0.5:
                if best is None or score > best[2]:
                    best = (ct_off, pt, score)
        if best is None: continue
        ct_off, pt, _ = best
        try:
            txt = pt.decode('koi8-r')
        except UnicodeDecodeError:
            txt = pt.hex()
        used_keys.add(key)
        print(f'0x{NRO_BASE+ubfiz_off:x}\t0x{key:016x}\t{length}\t0x{ct_off:x}\t{txt}')
    print(f'  unique keys with valid Russian: {len(used_keys)}', file=sys.stderr)

if __name__ == '__main__':
    main()
