#!/bin/bash
# DBI 891 byte-identical NRO build.
# Run from /opt/aimeld-proj/dbi-fork/decomp-891/ via:
#   docker run --rm -v /opt/aimeld-proj:/work devkitpro/devkita64:latest \
#       bash -c 'cd /work/dbi-fork/decomp-891 && bash blob_build/build.sh'

set -euo pipefail
cd "$(dirname "${BASH_SOURCE[0]}")/.."

DKA=/opt/devkitpro/devkitA64/bin
OUT=blob_build

# 1. Assemble the segment-blob (text + rodata + data via .incbin).
$DKA/aarch64-none-elf-as -o $OUT/base_blob.o $OUT/base_blob.s

# 2. Link with custom script, no stdlib.
$DKA/aarch64-none-elf-ld \
    -T $OUT/blob.ld \
    -nostdlib --no-dynamic-linker -static \
    -z max-page-size=0x1000 \
    -o $OUT/dbi891_blob.elf \
    $OUT/base_blob.o

# 3. Wrap to NRO with extracted ASET (NACP+icon+romfs).
elf2nro $OUT/dbi891_blob.elf $OUT/dbi891_full.nro \
    --nacp=base/dbi891.nacp \
    --icon=base/dbi891.icon.jpg \
    --romfs=base/dbi891.romfs

# 4. Patch bss_size (header offset 0x38..0x40) + build_id (offset 0x40..0x54)
#    from the original NRO. elf2nro does not preserve these because they
#    come from the ELF's link-time NOTE section; our minimal blob.ld does
#    not synthesise an equivalent. Patching from the source NRO is the
#    cleanest fix.
python3 -c "
with open('base/dbi891.nro','rb') as f: o = f.read()
with open('$OUT/dbi891_full.nro','rb') as f: n = bytearray(f.read())
n[0x38:0x40] = o[0x38:0x40]   # bss_size
n[0x40:0x54] = o[0x40:0x54]   # build_id
with open('$OUT/dbi891.nro','wb') as f: f.write(n)
import hashlib
ho = hashlib.sha256(o).hexdigest()
hn = hashlib.sha256(bytes(n)).hexdigest()
print(f'Source SHA256:  {ho}')
print(f'Built  SHA256:  {hn}')
print(f'IDENTICAL: {ho == hn}')
"

ls -la $OUT/dbi891.nro
