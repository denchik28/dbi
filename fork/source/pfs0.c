#include "pfs0.h"
#include <stdlib.h>
#include <string.h>

size_t pfs0_header_required_size(const pfs0_header_t *h) {
    return sizeof(pfs0_header_t)
         + (size_t)h->num_files * sizeof(pfs0_entry_t)
         + h->string_table_size;
}

Result pfs0_parse_header(pfs0_t *out, const uint8_t *buf, size_t len) {
    memset(out, 0, sizeof *out);
    if (len < sizeof(pfs0_header_t))
        return MAKERESULT(Module_Libnx, LibnxError_BadInput);
    memcpy(&out->hdr, buf, sizeof out->hdr);
    if (out->hdr.magic != PFS0_MAGIC)
        return MAKERESULT(Module_Libnx, LibnxError_BadInput);

    size_t need = pfs0_header_required_size(&out->hdr);
    if (len < need) return MAKERESULT(Module_Libnx, LibnxError_BadInput);

    const pfs0_entry_t *ents = (const pfs0_entry_t *)(buf + sizeof(pfs0_header_t));
    const char *strtab = (const char *)(ents + out->hdr.num_files);
    out->data_base = (uint64_t)need;
    out->num_files = out->hdr.num_files;
    out->files = (pfs0_file_t *)calloc(out->num_files, sizeof(pfs0_file_t));
    if (!out->files) return MAKERESULT(Module_Libnx, LibnxError_HeapAllocFailed);

    for (size_t i = 0; i < out->num_files; i++) {
        const pfs0_entry_t *e = &ents[i];
        if (e->string_offset >= out->hdr.string_table_size) {
            free(out->files); out->files = NULL;
            return MAKERESULT(Module_Libnx, LibnxError_BadInput);
        }
        const char *nm = strtab + e->string_offset;
        size_t max = out->hdr.string_table_size - e->string_offset;
        size_t nl = strnlen(nm, max);
        if (nl >= sizeof out->files[i].name) nl = sizeof out->files[i].name - 1;
        memcpy(out->files[i].name, nm, nl);
        out->files[i].name[nl] = 0;
        out->files[i].offset = out->data_base + e->data_offset;
        out->files[i].size   = e->data_size;
    }
    return 0;
}

void pfs0_free(pfs0_t *p) {
    if (!p) return;
    free(p->files);
    p->files = NULL;
    p->num_files = 0;
}

const pfs0_file_t *pfs0_find(const pfs0_t *p, const char *name) {
    for (size_t i = 0; i < p->num_files; i++)
        if (strcmp(p->files[i].name, name) == 0)
            return &p->files[i];
    return NULL;
}
