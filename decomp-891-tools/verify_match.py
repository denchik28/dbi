#!/usr/bin/env python3
"""For each compiled .o in build/, look up its individual function
symbols (via objdump --syms + section bytes) and check whether the
compiled bytes are present verbatim in base/dbi891.nro's .text segment.

Each function's compiled bytes are extracted from the corresponding
.text.<sym> section in the ELF .o; we then run a single contiguous
match against the 891 .text blob.

Reports per-symbol match_status: ok / missing / drift.
"""
import os
import struct
import subprocess
import sys

DKA = '/opt/devkitpro/devkitA64/bin'
NRO = 'base/dbi891.nro'
BUILD = 'build'

def load_text():
    with open(NRO, 'rb') as f:
        d = f.read()
    text_size = struct.unpack_from('<I', d, 0x24)[0]
    return d[:text_size]

def get_sections(o_path):
    """Return list of (section_name, offset, size, bytes) for every .text.* section."""
    out = subprocess.check_output([
        f'{DKA}/aarch64-none-elf-objdump', '-h', o_path
    ]).decode()
    sections = []
    for line in out.splitlines():
        parts = line.split()
        if len(parts) < 4: continue
        if not parts[1].startswith('.text'): continue
        # idx name size addr off align
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
    print(f'.text size: {len(text):#x} bytes')
    print()
    print('object\tsection\tsize\tmatch')

    n_total = 0
    n_match = 0
    n_drift = 0
    o_files = sorted([f for f in os.listdir(BUILD) if f.endswith('.o')])
    for o in o_files:
        path = os.path.join(BUILD, o)
        try:
            sections = get_sections(path)
        except subprocess.CalledProcessError:
            continue
        for name, size, bytes_ in sections:
            n_total += 1
            idx = text.find(bytes_)
            if idx >= 0:
                # Also check if this is the unique match
                idx2 = text.find(bytes_, idx + 1)
                tag = 'ok' if idx2 < 0 else 'ok-multi'
                n_match += 1
            else:
                tag = 'drift'
                n_drift += 1
            print(f'{o}\t{name}\t{size}\t{tag}')

    print()
    print(f'  total sections: {n_total}', file=sys.stderr)
    print(f'  match: {n_match}', file=sys.stderr)
    print(f'  drift: {n_drift}', file=sys.stderr)

if __name__ == '__main__':
    main()
