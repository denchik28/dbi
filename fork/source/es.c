#include "es.h"
#include <string.h>

static Service g_esSrv;
static u64     g_esRefCount = 0;

Result esInitialize(void) {
    if (g_esRefCount++ > 0) return 0;
    Result rc = smGetService(&g_esSrv, "es");
    if (R_FAILED(rc)) g_esRefCount = 0;
    return rc;
}

void esExit(void) {
    if (g_esRefCount == 0 || --g_esRefCount > 0) return;
    serviceClose(&g_esSrv);
}

Result esImportTicket(const void *tik, size_t tik_sz,
                      const void *cert, size_t cert_sz) {
    return serviceDispatch(&g_esSrv, 1,
        .buffer_attrs = {
            SfBufferAttr_In | SfBufferAttr_HipcMapAlias,
            SfBufferAttr_In | SfBufferAttr_HipcMapAlias,
        },
        .buffers = {
            { tik,  tik_sz  },
            { cert, cert_sz },
        },
    );
}

Result esCountCommonTicket(s32 *out_count) {
    return serviceDispatchOut(&g_esSrv, 9, *out_count);
}

Result esCountPersonalizedTicket(s32 *out_count) {
    return serviceDispatchOut(&g_esSrv, 10, *out_count);
}

Result esListCommonTicket(s32 *out_count, void *buf, s32 buf_sz) {
    return serviceDispatchOut(&g_esSrv, 11, *out_count,
        .buffer_attrs = { SfBufferAttr_Out | SfBufferAttr_HipcMapAlias },
        .buffers = { { buf, (size_t)buf_sz } },
    );
}

Result esListPersonalizedTicket(s32 *out_count, void *buf, s32 buf_sz) {
    return serviceDispatchOut(&g_esSrv, 12, *out_count,
        .buffer_attrs = { SfBufferAttr_Out | SfBufferAttr_HipcMapAlias },
        .buffers = { { buf, (size_t)buf_sz } },
    );
}
