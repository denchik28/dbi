#!/usr/bin/env python3
"""Extract 64-bit cipher keys from a DBI NRO.

Walks the .text segment for the standard ARM64 4-instruction immediate-load
pattern that DBI uses for its per-string XOR keys:

    mov  Xd, #imm16          ; bits  0..15
    movk Xd, #imm16, lsl #16 ; bits 16..31
    movk Xd, #imm16, lsl #32 ; bits 32..47
    movk Xd, #imm16, lsl #48 ; bits 48..63

Output: TSV with columns (offset, key) for every chain found.

Usage:
    python3 extract_keys.py <DBI.nro> > keys.tsv
"""
import struct
import sys

INST_MOV_BASE  = 0xD2800000
INST_MOV_MASK  = 0xFFE00000
INST_MOVK_BASE = 0xF2800000
INST_MOVK_MASK = 0xFF800000

def decode(raw):
    if (raw & INST_MOV_MASK) == INST_MOV_BASE:
        return ('MOV', (raw >> 5) & 0xFFFF, raw & 0x1F, 0)
    if (raw & INST_MOVK_MASK) == INST_MOVK_BASE:
        return ('MOVK', (raw >> 5) & 0xFFFF, raw & 0x1F, ((raw >> 21) & 0x3) * 16)
    return (None, 0, 0, 0)

def extract(data):
    """Return list of (file_offset, key64) tuples."""
    expected = [('MOV', 0), ('MOVK', 16), ('MOVK', 32), ('MOVK', 48)]
    state = 0
    cur_key = 0
    cur_reg = 0
    seq_start = 0
    out = []

    n = (len(data) // 4) * 4
    i = 0
    while i < n:
        raw = struct.unpack_from('<I', data, i)[0]
        t, imm, rd, sh = decode(raw)
        et, esh = expected[state]
        if t == et and sh == esh:
            if state == 0:
                cur_reg = rd
                cur_key = imm
                seq_start = i
            elif rd != cur_reg:
                state = 0
                cur_key = 0
                continue
            else:
                cur_key |= imm << sh
            state += 1
            if state == len(expected):
                out.append((seq_start, cur_key))
                state = 0
                cur_key = 0
        else:
            if state != 0:
                i = seq_start + 4
                state = 0
                cur_key = 0
                continue
        i += 4
    return out

if __name__ == '__main__':
    if len(sys.argv) != 2:
        print(f'usage: {sys.argv[0]} <DBI.nro>', file=sys.stderr)
        sys.exit(1)

    with open(sys.argv[1], 'rb') as f:
        data = f.read()
    print(f'Loaded {len(data):,} bytes', file=sys.stderr)

    pairs = extract(data)
    print(f'Found {len(pairs)} mov+movk+movk+movk chains', file=sys.stderr)
    print(f'Unique keys: {len({k for _, k in pairs})}', file=sys.stderr)

    print('offset\tkey')
    for off, k in pairs:
        print(f'{off:#x}\t{k:#018x}')
