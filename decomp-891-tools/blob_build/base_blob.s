/* DBI 891 byte-identical blob assembly stub.
 * The .text/.rodata/.data segments are read in via .incbin from the
 * matching binaries extracted from base/dbi891.nro. This makes the
 * decomp track build a full NRO that's byte-identical to the original
 * (up to the build_id and our NACP delta). */

.section .text
.globl _start
_start:
.incbin "blob_build/text.bin"

.section .rodata
.incbin "blob_build/rodata.bin"

.section .data
.incbin "blob_build/data.bin"
