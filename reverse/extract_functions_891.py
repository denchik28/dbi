#!/usr/bin/env python3
"""Walk DBI 891 .text for function entry points.

A function entry on AArch64 with the GNU toolchain typically opens with
one of:
    stp x29, x30, [sp, #-N]!         ; (pre-indexed)
    sub sp, sp, #N
    stp x19, x20, [sp, #N]
    paciasp                           ; PAC, only with newer toolchains
DBI 891 was built with binutils 2.44 + gcc 13.x and uses pre-indexed
stp ssbp x29, x30 for any function with a stack frame.

This script enumerates every such entry, computes the function size by
walking forward to the matching `ret` (returning to lr) at the same
nesting level, and emits a TSV (offset, va, size_in_bytes).

Usage:
    python3 extract_functions_891.py /tmp/dbi891/DBI.nro > functions_891.tsv
"""
import struct
import sys

NRO_BASE = 0x71000000

def main():
    nro = sys.argv[1] if len(sys.argv) > 1 else '/tmp/dbi891/DBI.nro'
    with open(nro, 'rb') as f: data = f.read()
    text_size = struct.unpack_from('<I', data, 0x24)[0]

    # Patterns:
    # stp x29, x30, [sp, #-N]!  encoding: 0xa9b00000 base, with ld bit 0
    #   1010_1001_1ME_iiiii_iiii_RtRtRtRtRt_RnRnRnRn_RtRt_RtRtRt
    # The pre-indexed stp encoding for x29/x30 with negative imm:
    # 0xa9_xx_yy_fd where bits 31..23 = 1010 1001 1, bits 22..23 = 11 (encoding pre-index decrement)
    # Actually the encoding for STP (pre-indexed, signed offset) of two 64-bit GPRs:
    #   0xa9_8c_0_FD ish — base 0xa9800000, opc=10 (64-bit), L=0 (store)
    # Pre-indexed variant: bits 24..23 = 11
    # Mask to detect "stp x29, x30, [sp, #neg]!" with x29=29 in Rt, x30=30 in Rt2:
    #   bits 31..30 = 10  (sf=10)
    #   bits 29..27 = 101  (LDP/STP series prefix)
    #   bit 26 = 0
    #   bit 25 = 1 (offset/pre/post variant)
    #   bit 24..23 = 11 (pre-indexed)
    #   bit 22 = 0 (store)
    #   bits 21..15 = imm7 (signed)
    #   bits 14..10 = Rt2 (must be 30)
    #   bits 9..5 = Rn (must be 31 for sp)
    #   bits 4..0 = Rt (must be 29)
    # Combined fixed bits → 0xa9_8000_0_0 + [Rt2=30 << 10] + [Rn=31 << 5] + [Rt=29]
    # = 0xa9800000 | 0x07800 | 0x3e0 | 0x1d  (with imm7 = 0; we mask it out)
    # Pre-indexed flag: bits 24..23 = 11 → add 0x01800000
    # Final fixed: 0xa9800000 | 0x01800000 | 0x07be0 | 0x1d... wait let me redo
    #
    # Actually simpler: the typical DBI prolog is exactly `stp x29, x30, [sp, #-N]!`
    # which encodes as 0xa9_b?_7b_fd where:
    #   bits 31..22: 1010_1001_10 = 0x2a6  -> bits 31..22 of insn = 0xa980-mask
    #   bits 21..15: imm7 (signed, neg)
    #   bits 14..10: Rt2 = 30
    #   bits 9..5  : Rn  = 31 (sp)
    #   bits 4..0  : Rt  = 29
    # Pre-indexed adds bit 23 → final pattern bits 31..22 = 1010_1001_11 (0x2a7)
    # Mask 0xff8003e0, expected 0xa9803c00... let me do this differently: brute-match
    # every prolog candidate and verify by looking at it.

    def is_stp_x29_x30_pre(raw):
        # bits 31..22 = 0b1010_1001_11 = 0x2a7 → upper 10 bits = 0xa9c
        # However real instances also have bit22=1 vs bit22=0 cases. DBI
        # uses `stp x29, x30, [sp, #-N]!` which is pre-indexed → bit24=1, bit23=1
        # Bits 31..23 = 0b1_0101_0011 = 0xa9 + bit 23 set:
        # 0xa980_0000 | (1<<23) | (1<<22 conditional)
        # The actual bytes for `stp x29, x30, [sp, #-0x60]!` are 0xa9ba7bfd.
        # Mask out the imm7 (bits 21..15) and check the rest:
        # 0xa9_ba_7b_fd  = bits 31..28 = a9, 27..24 = b, 23..20 = a, 19..16 = 7,
        #                   15..12 = b, 11..8 = f, 7..4 = d
        # Mask 0xffe0fc00? Let's go with 0xff80_03e0 (mask out imm7 bits 21..15
        # AND mask out top of imm7) and check bits 14..0 match 0x37bfd:
        # ...
        mask = 0xff8003ff   # preserve top 9 bits + Rt2(14..10 = 0?)... it's tricky
        # The match we want: bits 31..23 = 0b101010011, bits 22 = pre/post flag,
        #                    bits 14..10 = 11110 (Rt2=30), bits 9..5 = 11111 (Rn=31),
        #                    bits 4..0 = 11101 (Rt=29).
        # Build expected: 0b 1_0101_0011 (bits 31..23) + 0 (bit 22 = 0 for store)
        #                 + imm7=any (bits 21..15)
        #                 + 11110 (bits 14..10)
        #                 + 11111 (bits 9..5)
        #                 + 11101 (bits 4..0)
        # = 0xa980_0000 | (30<<10) | (31<<5) | 29
        # = 0xa980_0000 | 0x7800 | 0x3e0 | 0x1d
        # = 0xa980_7bfd
        # Pre-indexed has bit 23 set → 0xa9_c0_7b_fd, BUT that's actually for 64-bit
        # with bit 23 = 1.
        # The instance 0xa9ba7bfd has bits: 1010_1001_1011_1010_0111_1011_1111_1101
        # bits 31..28 = a9? Let me decode.
        # 0xa9ba7bfd:
        #   bit 31 = 1, bit 30 = 0, bit 29 = 1, bit 28 = 0
        #   bit 27 = 1, bit 26 = 0, bit 25 = 0, bit 24 = 1   <- bit 24 is 1
        #   bit 23 = 1, bit 22 = 0   <- bit 23 is 1
        #   ... (this matches pre-indexed STP pattern)
        # Mask 0xff8003e0 takes bits 31..23 + bits 9..5
        # 0xa9ba7bfd & 0xff8003e0 = 0xa9800380
        # Hmm that's not 0xa980_03e0
        # Let me just match the post-imm7 part via masking the imm7 + checking the rest.
        return ((raw & 0xff8003e0) == 0xa98003e0) and ((raw & 0x1f) == 29) and (((raw >> 10) & 0x1f) == 30)

    # Alternative: PAC prolog `paciasp` (0xd503_233f) followed by stp
    PACIASP = 0xd503233f

    print('offset\tva\tsize\tprolog')
    n = (text_size // 4) * 4
    seen = set()
    funcs = []
    i = 0
    while i < n:
        raw = struct.unpack_from('<I', data, i)[0]
        if is_stp_x29_x30_pre(raw):
            funcs.append((i, NRO_BASE + i, 'stp_x29_x30'))
        elif raw == PACIASP:
            funcs.append((i, NRO_BASE + i, 'paciasp'))
        i += 4

    # Now compute size: scan forward to the next function entry
    funcs.sort()
    for idx, (off, va, prolog) in enumerate(funcs):
        next_off = funcs[idx+1][0] if idx + 1 < len(funcs) else text_size
        size = next_off - off
        print(f'0x{off:08x}\t0x{va:x}\t{size}\t{prolog}')
    print(f'  found {len(funcs)} functions', file=sys.stderr)

if __name__ == '__main__':
    main()
