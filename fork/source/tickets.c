#include "tickets.h"
#include "es.h"
#include <stdlib.h>
#include <string.h>

/* libnx es:ListCommonTicket / ListPersonalizedTicket return FsRightsId
 * arrays. The bulk walker writes a single contiguous buffer; we reuse it
 * for both calls via a u8 scratch of `max * 0x10` bytes. */

Result tickets_collect(tickets_list_t *out, size_t max) {
    memset(out, 0, sizeof *out);
    out->cap   = max;
    out->items = calloc(max, sizeof(tickets_entry_t));
    if (!out->items) return MAKERESULT(Module_Libnx, LibnxError_HeapAllocFailed);

    Result rc = esInitialize();
    if (R_FAILED(rc)) { free(out->items); out->items = NULL; return rc; }

    /* Common count + list */
    Result cc_rc = esCountCommonTicket(&out->common_total);
    if (R_FAILED(cc_rc)) out->common_total = 0;

    if (out->common_total > 0 && out->count < max) {
        s32 wanted = out->common_total;
        s32 slots  = (s32)(max - out->count);
        s32 want   = wanted < slots ? wanted : slots;
        FsRightsId *buf = calloc(want, sizeof *buf);
        if (buf) {
            s32 got = 0;
            Result r = esListCommonTicket(&got, buf, want * (s32)sizeof *buf);
            if (R_SUCCEEDED(r)) {
                for (s32 i = 0; i < got && out->count < max; i++) {
                    memcpy(out->items[out->count++].rights_id,
                           &buf[i], 16);
                }
            }
            free(buf);
        }
    }

    /* Personalized count + list */
    Result pc_rc = esCountPersonalizedTicket(&out->personalized_total);
    if (R_FAILED(pc_rc)) out->personalized_total = 0;

    if (out->personalized_total > 0 && out->count < max) {
        s32 wanted = out->personalized_total;
        s32 slots  = (s32)(max - out->count);
        s32 want   = wanted < slots ? wanted : slots;
        FsRightsId *buf = calloc(want, sizeof *buf);
        if (buf) {
            s32 got = 0;
            Result r = esListPersonalizedTicket(&got, buf, want * (s32)sizeof *buf);
            if (R_SUCCEEDED(r)) {
                for (s32 i = 0; i < got && out->count < max; i++) {
                    memcpy(out->items[out->count++].rights_id,
                           &buf[i], 16);
                }
            }
            free(buf);
        }
    }

    esExit();
    return 0;
}

void tickets_free(tickets_list_t *lst) {
    if (!lst) return;
    free(lst->items);
    lst->items = NULL;
    lst->count = 0;
    lst->cap   = 0;
}
