#pragma once
#include <stdint.h>
#include <stddef.h>
#include <switch.h>

#define PFS0_MAGIC 0x30534650u  // "PFS0" LE

typedef struct {
    uint32_t magic;
    uint32_t num_files;
    uint32_t string_table_size;
    uint32_t reserved;
} __attribute__((packed)) pfs0_header_t;

typedef struct {
    uint64_t data_offset;   // relative to start of data section
    uint64_t data_size;
    uint32_t string_offset; // offset into string table
    uint32_t reserved;
} __attribute__((packed)) pfs0_entry_t;

typedef struct {
    char     name[256];
    uint64_t offset;   // absolute offset within the PFS0 blob
    uint64_t size;
} pfs0_file_t;

typedef struct {
    pfs0_header_t hdr;
    pfs0_file_t  *files;     // allocated
    size_t        num_files;
    uint64_t      data_base; // file offset (within PFS0 container) where data begins
} pfs0_t;

/* Parse PFS0 header (header + entries + string table) from the first `hdr_size` bytes.
 * Call pfs0_header_required_size first to know how many bytes you need.
 */
size_t pfs0_header_required_size(const pfs0_header_t *h);

Result pfs0_parse_header(pfs0_t *out, const uint8_t *header_buf, size_t header_len);

void   pfs0_free(pfs0_t *p);

/* Find a file entry by name; returns NULL if not found */
const pfs0_file_t *pfs0_find(const pfs0_t *p, const char *name);
