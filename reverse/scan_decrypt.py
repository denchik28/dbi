#!/usr/bin/env python3
"""Sliding-window decrypt of DBI's encrypted-string region.

For each (key, file offset) pair, applies the cipher and checks whether the
result looks like a real plaintext (printable, has alphas, has punctuation,
non-trivial). Useful for building a per-version decoded-string corpus.

Usage:
    python3 scan_decrypt.py <DBI.nro> <keys.tsv> [--cipher 1|2] [--start 0xXX] [--end 0xXX]

Default cipher is v2 (DBI 846+). Default scan range is the .rodata segment.
"""
import argparse
import struct
import sys

def parse_keys_tsv(path):
    keys = []
    with open(path) as f:
        first = f.readline()
        # Skip header if present
        if 'key' in first.lower() or 'offset' in first.lower():
            pass
        else:
            f.seek(0)
        for line in f:
            parts = line.rstrip().split('\t')
            for p in parts:
                p = p.strip()
                if p.startswith('0x') or p.startswith('0X'):
                    try:
                        keys.append(int(p, 16))
                    except ValueError:
                        pass
    return list({k for k in keys})

def cipher_decrypt(ct, key, version):
    kb = key.to_bytes(8, 'little')
    out = bytearray()
    for i, c in enumerate(ct):
        v = c ^ kb[i % 8]
        if version == 2:
            rot = kb[i % 8] & 7
            if rot:
                v = ((v >> rot) | (v << (8 - rot))) & 0xff
        out.append(v)
    return bytes(out)

def scan(data, keys, start, end, cipher_version, window=24):
    """For each key + offset, decrypt window bytes; emit plausible plaintexts."""
    for ki, k in enumerate(keys):
        kb = k.to_bytes(8, 'little')
        for off in range(start, min(end, len(data)) - window):
            # Inline decrypt for speed
            run = 0
            alpha = 0
            alpha_set = 0
            has_punct = False
            best = None
            for i in range(window):
                v = data[off + i] ^ kb[i & 7]
                if cipher_version == 2:
                    rot = kb[i & 7] & 7
                    if rot:
                        v = ((v >> rot) | (v << (8 - rot))) & 0xff
                if 0x20 <= v < 0x7f:
                    run = i + 1
                    if (0x41 <= v <= 0x5a) or (0x61 <= v <= 0x7a):
                        bit = 1 << (v & 0x1f)
                        if not (alpha_set & bit):
                            alpha_set |= bit
                        alpha += 1
                    if v in b' :/-_,.{}[]%':
                        has_punct = True
                else:
                    break
            if run >= 16 and alpha >= 6 and bin(alpha_set).count('1') >= 4 and has_punct:
                # Reconstruct plaintext bytes for output
                pt = cipher_decrypt(data[off:off+run], k, cipher_version)
                yield off, k, run, pt[:run]
        if ki % 100 == 0:
            print(f'  scanned key {ki}/{len(keys)}', file=sys.stderr)

if __name__ == '__main__':
    ap = argparse.ArgumentParser()
    ap.add_argument('nro')
    ap.add_argument('keys')
    ap.add_argument('--cipher', type=int, default=2, choices=[1, 2])
    ap.add_argument('--start', type=lambda s: int(s, 0), default=None)
    ap.add_argument('--end', type=lambda s: int(s, 0), default=None)
    ap.add_argument('--window', type=int, default=24)
    args = ap.parse_args()

    with open(args.nro, 'rb') as f:
        data = f.read()

    # Default scan range is .rodata
    ro_off, ro_size = struct.unpack_from('<II', data, 0x28)
    start = args.start if args.start is not None else ro_off
    end = args.end if args.end is not None else ro_off + ro_size

    keys = parse_keys_tsv(args.keys)
    print(f'NRO: {len(data):,} B  scan: 0x{start:x}..0x{end:x}  '
          f'keys: {len(keys)}  cipher: v{args.cipher}', file=sys.stderr)

    print('offset\tkey\trun\ttext')
    for off, k, run, pt in scan(data, keys, start, end, args.cipher, args.window):
        # Escape
        s = ''.join(chr(b) if 0x20 <= b < 0x7f else f'\\x{b:02x}' for b in pt)
        print(f'{off:#x}\t{k:#018x}\t{run}\t{s}')
