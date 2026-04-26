#!/usr/bin/env python3
"""Relaxed byte-match: for each function in build/*.o, mask off the
immediate fields of adrp/add/ldr/movz/movk instructions and look for
the masked sequence in dbi891.nro's .text. Functions that have only
moved (rodata pointers shifted) but kept identical opcode + register
pattern will match here even though they failed the strict byte-match.
"""
import os
import struct
import subprocess
import sys

DKA = '/opt/devkitpro/devkitA64/bin'
NRO = 'base/dbi891.nro'
BUILD = 'build'

# Mask out immediates of position-dependent instructions
def mask_insn(raw):
    op = raw & 0xff000000
    # ADRP: bits 31..24 = 1??1_0000 (mask 0x9f000000, value 0x90000000)
    if (raw & 0x9f000000) == 0x90000000:
        return raw & 0x9f00001f  # keep rd only
    # ADD/SUB immediate: bits 30..24 = 0010001 (mask 0xff800000, value 0x91000000 / 0xd1000000)
    if (raw & 0x7f800000) == 0x11000000:
        return raw & 0xff8003ff  # mask out imm12 + sh
    # LDR immediate: bits 31..22 (mask 0xffc00000)
    if (raw & 0xffc00000) in (0xf9400000, 0xb9400000):
        return raw & 0xffc003ff  # mask out imm12
    # MOVZ/MOVK: bits 30..23
    if (raw & 0x7f800000) == 0x12800000:
        return raw & 0xff8001ff  # keep rd, mask imm + hw
    # B/BL: branches with 26-bit imm
    if (raw & 0x7c000000) == 0x14000000:
        return raw & 0xfc000000  # opcode only
    # CBZ/CBNZ
    if (raw & 0x7e000000) == 0x34000000:
        return raw & 0xff00001f
    # B.cond
    if (raw & 0xff000010) == 0x54000000:
        return raw & 0xff00001f
    return raw

def mask_bytes(b):
    out = bytearray()
    for i in range(0, len(b), 4):
        if i + 4 > len(b): break
        raw = struct.unpack_from('<I', b, i)[0]
        masked = mask_insn(raw)
        out += struct.pack('<I', masked)
    return bytes(out)

def load_text():
    with open(NRO, 'rb') as f:
        d = f.read()
    text_size = struct.unpack_from('<I', d, 0x24)[0]
    return d[:text_size]

def get_sections(o_path):
    out = subprocess.check_output([
        f'{DKA}/aarch64-none-elf-objdump', '-h', o_path
    ]).decode()
    sections = []
    for line in out.splitlines():
        parts = line.split()
        if len(parts) < 4: continue
        if not parts[1].startswith('.text'): continue
        try:
            size = int(parts[2], 16)
            offset = int(parts[5], 16)
        except (ValueError, IndexError):
            continue
        if size == 0: continue
        with open(o_path, 'rb') as f:
            f.seek(offset)
            bytes_ = f.read(size)
        sections.append((parts[1], size, bytes_))
    return sections

def main():
    text = load_text()
    text_masked = mask_bytes(text)
    print(f'.text size: {len(text):#x} bytes', file=sys.stderr)

    n_total = 0
    n_strict = 0
    n_relaxed = 0
    n_drift = 0

    print('object\tsection\tsize\tstatus')
    for o in sorted(os.listdir(BUILD)):
        if not o.endswith('.o'): continue
        path = os.path.join(BUILD, o)
        try:
            sections = get_sections(path)
        except subprocess.CalledProcessError:
            continue
        for name, size, bytes_ in sections:
            n_total += 1
            # Strict: exact bytes
            if text.find(bytes_) >= 0:
                tag = 'strict'; n_strict += 1
            else:
                masked = mask_bytes(bytes_)
                if text_masked.find(masked) >= 0:
                    tag = 'relaxed'; n_relaxed += 1
                else:
                    tag = 'drift'; n_drift += 1
            print(f'{o}\t{name}\t{size}\t{tag}')

    print(f'  total: {n_total}', file=sys.stderr)
    print(f'  strict matches: {n_strict}', file=sys.stderr)
    print(f'  relaxed matches: {n_relaxed}', file=sys.stderr)
    print(f'  drift: {n_drift}', file=sys.stderr)

if __name__ == '__main__':
    main()
