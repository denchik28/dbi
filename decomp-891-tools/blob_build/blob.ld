OUTPUT_ARCH(aarch64)
ENTRY(_start)

PHDRS
{
    code   PT_LOAD FLAGS(5);
    rodata PT_LOAD FLAGS(4);
    data   PT_LOAD FLAGS(6);
}

SECTIONS
{
    PROVIDE_HIDDEN( __start__ = 0x0 );
    . = __start__;

    .text : { *(.text) *(.text.*) } :code

    . = ALIGN(0x1000);
    .rodata : { *(.rodata) *(.rodata.*) } :rodata

    . = ALIGN(0x1000);
    .data : { *(.data) *(.data.*) } :data

    .bss : { *(.bss) *(.bss.*) *(COMMON) } :data

    /DISCARD/ : {
        *(.comment) *(.note*) *(.gnu*) *(.ARM.*) *(.debug*)
        *(.dynsym) *(.dynstr) *(.hash) *(.gnu.hash)
        *(.dynamic) *(.got) *(.got.plt) *(.plt) *(.rela.*) *(.rel.*)
        *(.interp)
    }
}
