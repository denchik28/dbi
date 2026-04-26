#!/usr/bin/env python3
"""For each string anchor in DBI 891 .rodata, find every .text site
that references it via adrp + add #imm12 (or adrp + ldr).

Output: TSV (rodata_off, string_preview, n_xrefs, sample_text_pcs)

This is the 891 equivalent of 887's per-subsystem string-anchor work
(FINDINGS Parts 14, 24, 26, 27 etc). Use the output to cluster
functions by feature.
"""
import struct
import sys
import re

NRO_BASE = 0x71000000

def insn_at(data, off):
    return struct.unpack_from('<I', data, off)[0]

def is_adrp(raw):
    return (raw & 0x9f000000) == 0x90000000

def decode_adrp(raw, pc):
    immlo = (raw >> 29) & 0x3
    immhi = (raw >> 5) & 0x7ffff
    imm = ((immhi << 2) | immlo) << 12
    if imm & (1 << 32): imm -= 1 << 33
    return raw & 0x1f, (pc & ~0xfff) + imm

def is_add_imm(raw):
    return (raw & 0xff800000) == 0x91000000

def decode_add_imm(raw):
    rd = raw & 0x1f
    rn = (raw >> 5) & 0x1f
    imm = ((raw >> 10) & 0xfff) << (((raw >> 22) & 1) * 12)
    return rd, rn, imm

def is_ldr(raw):
    return ((raw & 0xff000000) == 0xf9400000) or ((raw & 0xff000000) == 0xb9400000)

def decode_ldr(raw):
    rt = raw & 0x1f
    rn = (raw >> 5) & 0x1f
    sf = (raw >> 30) & 1
    imm = ((raw >> 10) & 0xfff) * (8 if sf else 4)
    return rt, rn, imm

def main():
    nro = sys.argv[1] if len(sys.argv) > 1 else '/tmp/dbi891/DBI.nro'
    with open(nro, 'rb') as f: data = f.read()
    text_size = struct.unpack_from('<I', data, 0x24)[0]
    ro_off = struct.unpack_from('<I', data, 0x28)[0]
    ro_size = struct.unpack_from('<I', data, 0x2c)[0]

    # Build address -> [text_pc] index by walking .text for adrp + (add | ldr) chains
    ref_map = {}  # rodata_va -> list of text_va
    n = (text_size // 4) * 4
    i = 0
    while i + 8 <= n:
        raw = insn_at(data, i)
        pc = NRO_BASE + i
        if is_adrp(raw):
            rd, page = decode_adrp(raw, pc)
            for k in range(1, 6):
                r2 = insn_at(data, i + k*4)
                if is_add_imm(r2):
                    rd2, rn2, imm = decode_add_imm(r2)
                    if rn2 == rd:
                        addr = page + imm
                        if NRO_BASE + ro_off <= addr < NRO_BASE + ro_off + ro_size:
                            ref_map.setdefault(addr, []).append(pc)
                            break
                if is_ldr(r2):
                    rt, rn, imm = decode_ldr(r2)
                    if rn == rd:
                        addr = page + imm
                        if NRO_BASE + ro_off <= addr < NRO_BASE + ro_off + ro_size:
                            ref_map.setdefault(addr, []).append(pc)
                            break
        i += 4

    # Load anchor strings from plain_strings.txt
    anchors = {}  # rodata_va -> string preview
    try:
        with open('/opt/aimeld-proj/re/analysis/891/plain_strings.txt') as f:
            for line in f:
                m = re.match(r'^0x([0-9a-fA-F]+)\t(.*)$', line.rstrip())
                if m:
                    file_off = int(m.group(1), 16)
                    text = m.group(2)
                    if len(text) >= 6:
                        anchors[NRO_BASE + file_off] = text
    except FileNotFoundError:
        print('  warning: plain_strings.txt not found', file=sys.stderr)

    print('rodata_va\tn_refs\tstring\tsample_text_pcs')
    for va, refs in sorted(ref_map.items()):
        if va not in anchors: continue
        s = anchors[va]
        # Limit string preview
        s_preview = s[:60].replace('\t', ' ')
        sample = ','.join(f'{p:#x}' for p in refs[:5])
        print(f'{va:#x}\t{len(refs)}\t{s_preview}\t{sample}')

    print(f'  total adrp+add refs: {sum(len(v) for v in ref_map.values())}', file=sys.stderr)
    print(f'  unique rodata targets: {len(ref_map)}', file=sys.stderr)
    print(f'  matched against anchor strings: {sum(1 for v in ref_map if v in anchors)}', file=sys.stderr)

if __name__ == '__main__':
    main()
