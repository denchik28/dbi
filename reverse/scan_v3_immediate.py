#!/usr/bin/env python3
"""For every cipher v3 inline call site found by scan_v3_xref.py, walk
the basic block leading up to the cipher loop and extract:
  - the .rodata pointer (adrp + add or adrp + ldr → 8-byte CT prefix)
  - the inline `mov w?, #imm; movk w?, #imm, lsl 16` pair → 32-bit
    immediate that supplies CT bytes 8..11 (or further pairs for longer
    strings)

Then concatenate (rodata 8 bytes) ++ (immediate bytes, little-endian)
into the full ciphertext, run cipher v3 with the recovered key, and
emit the plaintext.

This is what makes the difference between recovering "Форсиров" (8 B
from rodata only) and the full "Форсировать" (8 B rodata + 4 B
immediate).

Usage:
    python3 scan_v3_immediate.py [DBI.nro] > full_strings.tsv

Output rows:
    text_pc, key, length, rodata_off, immediates, hex_ct, plaintext
"""
import struct
import sys

NRO_BASE = 0x71000000

def insn(data, off):
    return struct.unpack_from('<I', data, off)[0]

def is_ubfiz_3_3(raw):     return (raw & 0xfffffc00) == 0xd37d0800
def is_lsr_w_imm3(raw):    return (raw & 0xffff0000) == 0x53030000
def is_lsr_xN_xK_xN(raw):  return (raw & 0xffe0fc00) == 0x9ac02400
def is_add_w(raw):         return (raw & 0xff00fc00) == 0x0b000000
def is_ldrb_reg(raw):      return (raw & 0xffe0ec00) == 0x38606800
def is_strb_reg(raw):      return (raw & 0xffe0ec00) == 0x38206800
def is_eor_w(raw):         return (raw & 0xff200000) == 0x4a000000
def is_mov_imm16_64(raw):  return (raw & 0xff800000) == 0xd2800000
def is_movk_imm16_64(raw): return (raw & 0xff800000) == 0xf2800000
def is_movz_imm16_32(raw): return (raw & 0xff800000) == 0x52800000
def is_movk_imm16_32(raw): return (raw & 0xff800000) == 0x72800000
def is_adrp(raw):          return (raw & 0x9f000000) == 0x90000000
def is_add_imm(raw):       return (raw & 0xff800000) == 0x91000000
def is_ldr_imm(raw):       return (raw & 0xffc00000) == 0xf9400000
def is_ldr_d(raw):         return (raw & 0xffc00000) == 0xfd400000  # ldr d?, [x?, #imm]
def is_ldr_q(raw):         return (raw & 0xffc00000) == 0x3dc00000  # ldr q?, [x?, #imm] (16B)
def is_b_ne(raw):          return (raw & 0xff00001f) == 0x54000001
def is_call_bl(raw):       return (raw & 0xfc000000) == 0x94000000
def is_ret(raw):           return (raw & 0xfffffc1f) == 0xd65f0000
def is_cmp_imm(raw):
    if (raw & 0xff800000) != 0xf1000000: return None
    if (raw & 0x1f) != 31: return None
    return ((raw >> 10) & 0xfff) << (((raw >> 22) & 1) * 12)

def decode_movk(raw):
    return raw & 0x1f, (raw >> 5) & 0xffff, ((raw >> 21) & 0x3) * 16

def decode_movz_w(raw):
    """Return (rd, imm16, shift_bits). 32-bit movz."""
    rd = raw & 0x1f
    imm = (raw >> 5) & 0xffff
    sh = ((raw >> 21) & 0x3) * 16
    return rd, imm, sh

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

def decode_ldr(raw):
    """Decode ldr/ldrsw with positive immediate offset (post-shift)."""
    rt = raw & 0x1f
    rn = (raw >> 5) & 0x1f
    imm = ((raw >> 10) & 0xfff)
    sf = (raw >> 30) & 1
    return rt, rn, imm * (8 if sf else 4)

def decode_ldr_d(raw):
    """ldr d?, [x?, #imm] (load 8 bytes into NEON register).
    Encoding: 0xfd_400000 base, sf=1 (64-bit), imm12 << 3."""
    rt = raw & 0x1f
    rn = (raw >> 5) & 0x1f
    imm = ((raw >> 10) & 0xfff) << 3
    return rt, rn, imm

def find_call_sites(data, text_size):
    sites = []
    end = (text_size // 4) * 4
    off = 0
    while off + 0x80 < end:
        raw = insn(data, off)
        if is_lsr_w_imm3(raw):
            seq_ok = (
                is_add_w(insn(data, off + 4)) and
                is_ldrb_reg(insn(data, off + 8)) and
                is_eor_w(insn(data, off + 12)) and
                is_strb_reg(insn(data, off + 16))
            )
            if seq_ok:
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
                ubfiz_off = None
                for back in range(1, 64):
                    r = insn(data, lsr_x_off - back*4)
                    if is_ubfiz_3_3(r):
                        ubfiz_off = lsr_x_off - back*4
                        break
                if ubfiz_off is None:
                    off += 4; continue
                length = None
                for fwd in range(0, 8):
                    r = insn(data, off + 16 + fwd*4)
                    v = is_cmp_imm(r)
                    if v is not None and 0 < v < 1024:
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
    parts = {}
    for back in range(0, search_back, 4):
        off = search_end - back
        if off < 0: break
        raw = insn(data, off)
        if is_mov_imm16_64(raw):
            rd, imm, sh = decode_movk(raw)
            if rd == want_reg:
                parts[0] = imm
        elif is_movk_imm16_64(raw):
            rd, imm, sh = decode_movk(raw)
            if rd == want_reg:
                parts[sh] = imm
        if all(s in parts for s in (0, 16, 32, 48)):
            return parts[0] | (parts[16] << 16) | (parts[32] << 32) | (parts[48] << 48)
    return None

def find_basic_block_start(data, end_off):
    """Walk backward to the function prolog (`stp x29, x30, [sp, #-N]!`).
    The cipher v3 site's rodata/immediate setup happens earlier in the
    same function, before the std::string ctor bl call — so we have to
    walk through bl boundaries to find them."""
    for back in range(1, 0x300):
        off = end_off - back*4
        if off < 0: return 0
        r = insn(data, off)
        # stp x29, x30, [sp, #-N]! — function entry
        # encoding: 0xa9bf7bfd or similar (pre-indexed stp with negative imm)
        if (r & 0xff8003e0) == 0xa9800000 and ((r >> 10) & 0x1f) == 30 and ((r >> 0) & 0x1f) == 29:
            return off + 4
    return max(0, end_off - 0x300)

def find_rodata_anchor(data, bb_start, bb_end):
    """Look for adrp + (ldr_d|add+ldr|add) that resolves to .rodata."""
    candidates = []
    for off in range(bb_start, bb_end, 4):
        raw = insn(data, off)
        pc = NRO_BASE + off
        if is_adrp(raw):
            rd, page = decode_adrp(raw, pc)
            for k in range(1, 16):
                r2 = insn(data, off + k*4)
                if is_ldr_d(r2):
                    rt, rn, imm = decode_ldr_d(r2)
                    if rn == rd:
                        addr = page + imm
                        if 0x71837000 <= addr < 0x71adb000:
                            candidates.append((off + k*4, addr - NRO_BASE, 'ldr_d'))
                            break
                if is_add_imm(r2):
                    rd2, rn2, imm = decode_add_imm(r2)
                    if rn2 == rd:
                        addr = page + imm
                        if 0x71837000 <= addr < 0x71adb000:
                            candidates.append((off + k*4, addr - NRO_BASE, 'add'))
                            break
                if is_ldr_imm(r2):
                    rt, rn, imm = decode_ldr(r2)
                    if rn == rd:
                        addr = page + imm
                        if 0x71837000 <= addr < 0x71adb000:
                            candidates.append((off + k*4, addr - NRO_BASE, 'ldr'))
                            break
    return candidates

def find_immediates(data, bb_start, bb_end):
    """Find every 32-bit movz+movk pair in the basic block. Returns list
    of (off_of_movz, register, imm32)."""
    immediates = []
    for off in range(bb_start, bb_end - 4, 4):
        raw = insn(data, off)
        if is_movz_imm16_32(raw):
            rd, imm, sh = decode_movz_w(raw)
            if sh != 0: continue  # we want lsl 0 first
            # Look for movk lsl 16 to same register within 4 instructions
            full_imm = imm
            for k in range(1, 5):
                r2 = insn(data, off + k*4)
                if is_movk_imm16_32(r2):
                    rd2, imm2, sh2 = decode_movz_w(r2)
                    if rd2 == rd and sh2 == 16:
                        full_imm = imm | (imm2 << 16)
                        break
            immediates.append((off, rd, full_imm))
    return immediates

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
    nro = sys.argv[1] if len(sys.argv) > 1 else '/tmp/dbi891/DBI.nro'
    with open(nro, 'rb') as f: data = f.read()
    text_size = struct.unpack_from('<I', data, 0x24)[0]

    sites = find_call_sites(data, text_size)
    print(f'  found {len(sites)} cipher v3 inline sites', file=sys.stderr)

    print('text_pc\tkey\tlength\trodata_off\tnum_immediates\thex_ct\tplaintext')
    n_full = 0
    n_partial = 0
    for ubfiz_off, key_reg, length, lsr_x_off in sites:
        key = find_key_chain(data, ubfiz_off, key_reg)
        if key is None: continue
        bb_start = find_basic_block_start(data, ubfiz_off)
        rodata_candidates = find_rodata_anchor(data, bb_start, ubfiz_off)
        immediates = find_immediates(data, bb_start, ubfiz_off)

        # For each rodata candidate, build CT:
        # CT[0..7] = 8 bytes from rodata
        # CT[8..length-1] = bytes from immediates (little-endian, packed)
        # Then decrypt and check if plaintext is sensible.
        best = None
        for adrp_off, ct_off, kind in rodata_candidates:
            # rodata 8 bytes
            r8 = data[ct_off:ct_off+8]
            if len(r8) < 8: continue

            # Sometimes the whole CT is in rodata: try that first
            if length <= len(data) - ct_off:
                whole = data[ct_off:ct_off+length]
                pt_whole = v3_decrypt(whole, key)
                # Score by Russian-letter density + valid printable
                cyr = sum(1 for b in pt_whole if 0xc0 <= b <= 0xfe)
                bad = sum(1 for b in pt_whole if not (0xc0 <= b <= 0xfe or 0x20 <= b < 0x7f or b == 0))
                if bad == 0 and cyr * 2 >= length:
                    # Truncate at NUL
                    if 0 in pt_whole:
                        pt_whole = pt_whole[:pt_whole.index(0)]
                    if len(pt_whole) >= 4:
                        score = cyr * 10 - bad * 100
                        cand = (score, ct_off, 'rodata_only', whole, pt_whole, [])
                        if best is None or score > best[0]:
                            best = cand
                continue_to_immed = (length > 8)
            else:
                continue_to_immed = (length > 8)

            if not continue_to_immed:
                continue

            # Try each combination of immediates to fill CT[8..length-1]
            # length-8 bytes needed. Each immediate is 32-bit = 4 bytes.
            # length = 12: 1 immediate; length = 16: 2 immediates; etc.
            need_bytes = length - 8
            need_imm = (need_bytes + 3) // 4
            if need_imm == 0: continue
            if len(immediates) < need_imm: continue

            # Try all combinations of size need_imm from immediates list, in order
            from itertools import combinations
            for combo in combinations(immediates, need_imm):
                imm_bytes = bytearray()
                for off_imm, rd, imm32 in combo:
                    imm_bytes += imm32.to_bytes(4, 'little')
                ct = r8 + imm_bytes[:need_bytes]
                if len(ct) != length: continue
                pt = v3_decrypt(ct, key)
                cyr = sum(1 for b in pt if 0xc0 <= b <= 0xfe)
                bad = sum(1 for b in pt if not (0xc0 <= b <= 0xfe or 0x20 <= b < 0x7f or b == 0))
                if bad == 0 and cyr * 2 >= length:
                    if 0 in pt:
                        pt = pt[:pt.index(0)]
                    if len(pt) >= 4:
                        score = cyr * 10 - bad * 100
                        if best is None or score > best[0]:
                            best = (score, ct_off, 'rodata+imm', ct, pt, [(o,r,v) for o,r,v in combo])
                if best and best[0] >= length * 5:
                    break  # good enough

        if best:
            score, ct_off, kind, ct, pt, immlist = best
            try: txt = pt.decode('koi8-r')
            except: txt = pt.hex()
            n_imm = len(immlist) if immlist else 0
            print(f'0x{NRO_BASE+ubfiz_off:x}\t0x{key:016x}\t{length}\t0x{ct_off:x}\t{n_imm}\t{ct.hex()}\t{txt}')
            if n_imm > 0:
                n_full += 1
            else:
                n_partial += 1
    print(f'  full strings (rodata+immediates): {n_full}', file=sys.stderr)
    print(f'  rodata-only strings: {n_partial}', file=sys.stderr)

if __name__ == '__main__':
    main()
