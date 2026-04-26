#include "dbi0.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#define CHUNK_MAX 0x400000u
#define STREAM_BUF_SZ 0x100000u

static bool g_inited = false;
static Mutex g_mtx;

static Result usb_write_all(const void *buf, size_t len) {
    const uint8_t *p = (const uint8_t *)buf;
    size_t off = 0;
    while (off < len) {
        size_t want = len - off;
        if (want > CHUNK_MAX) want = CHUNK_MAX;
        size_t wrote = usbCommsWrite(p + off, want);
        if (wrote == 0) return MAKERESULT(Module_Libnx, LibnxError_BadUsbCommsWrite);
        off += wrote;
    }
    return 0;
}

static Result usb_read_exact(void *buf, size_t len) {
    uint8_t *p = (uint8_t *)buf;
    size_t off = 0;
    while (off < len) {
        size_t want = len - off;
        if (want > CHUNK_MAX) want = CHUNK_MAX;
        size_t got = usbCommsRead(p + off, want);
        if (got == 0) return MAKERESULT(Module_Libnx, LibnxError_BadUsbCommsRead);
        off += got;
    }
    return 0;
}

static Result dbi0_send_cmd(uint32_t cmd_id, const void *data, uint32_t data_size,
                            dbi0_header_t *out_resp) {
    dbi0_header_t hdr = {DBI0_MAGIC, DBI0_TYPE_REQUEST, cmd_id, data_size};
    Result rc = usb_write_all(&hdr, sizeof hdr);
    if (R_FAILED(rc)) return rc;

    if (data_size != 0) {
        dbi0_header_t ack;
        rc = usb_read_exact(&ack, sizeof ack);
        if (R_FAILED(rc)) return rc;
        if (ack.magic != DBI0_MAGIC || ack.cmd_type != DBI0_TYPE_ACK
            || ack.cmd_id != cmd_id || ack.data_size != data_size) {
            return MAKERESULT(Module_Libnx, LibnxError_BadGfxEventWait);
        }
        rc = usb_write_all(data, data_size);
        if (R_FAILED(rc)) return rc;
    }

    rc = usb_read_exact(out_resp, sizeof *out_resp);
    if (R_FAILED(rc)) return rc;
    if (out_resp->magic != DBI0_MAGIC || out_resp->cmd_type != DBI0_TYPE_RESPONSE
        || out_resp->cmd_id != cmd_id) {
        return MAKERESULT(Module_Libnx, LibnxError_BadGfxEventWait);
    }
    return 0;
}

Result dbi0_init(void) {
    if (g_inited) return 0;
    mutexInit(&g_mtx);

    UsbCommsInterfaceInfo iface = {
        .bInterfaceClass    = 0xFF,
        .bInterfaceSubClass = 0xFF,
        .bInterfaceProtocol = 0xFF,
    };
    Result rc = usbCommsInitializeEx(1, &iface, 0x057e, 0x3000);
    if (R_FAILED(rc)) return rc;
    usbCommsSetErrorHandling(false);
    g_inited = true;
    return 0;
}

void dbi0_exit(void) {
    if (!g_inited) return;
    usbCommsExit();
    g_inited = false;
}

bool dbi0_is_inited(void) { return g_inited; }

Result dbi0_request_nsp_list(char *out, size_t out_cap, size_t *out_len) {
    if (!g_inited) return MAKERESULT(Module_Libnx, LibnxError_NotInitialized);
    mutexLock(&g_mtx);
    *out_len = 0;

    dbi0_header_t resp;
    Result rc = dbi0_send_cmd(DBI0_CMD_LIST, NULL, 0, &resp);
    if (R_FAILED(rc)) { mutexUnlock(&g_mtx); return rc; }

    uint32_t n = resp.data_size;
    if (n == 0) { mutexUnlock(&g_mtx); return 0; }
    if (n >= out_cap) { mutexUnlock(&g_mtx); return MAKERESULT(Module_Libnx, LibnxError_HeapAllocFailed); }

    dbi0_header_t ack = {DBI0_MAGIC, DBI0_TYPE_ACK, DBI0_CMD_LIST, n};
    rc = usb_write_all(&ack, sizeof ack);
    if (R_FAILED(rc)) { mutexUnlock(&g_mtx); return rc; }

    rc = usb_read_exact((uint8_t *)out, n);
    if (R_FAILED(rc)) { mutexUnlock(&g_mtx); return rc; }
    out[n] = 0;
    *out_len = n;
    mutexUnlock(&g_mtx);
    return 0;
}

Result dbi0_request_file_range(const char *name,
                               uint64_t offset, uint32_t range_size,
                               uint8_t *out_buf) {
    if (!g_inited) return MAKERESULT(Module_Libnx, LibnxError_NotInitialized);
    mutexLock(&g_mtx);

    uint32_t name_len = (uint32_t)strlen(name);
    uint32_t payload_size = 16 + name_len;
    uint8_t *payload = (uint8_t *)malloc(payload_size);
    if (!payload) { mutexUnlock(&g_mtx); return MAKERESULT(Module_Libnx, LibnxError_HeapAllocFailed); }

    dbi0_range_hdr_t *rh = (dbi0_range_hdr_t *)payload;
    rh->range_size  = range_size;
    rh->range_offset = offset;
    rh->name_len    = name_len;
    memcpy(payload + 16, name, name_len);

    dbi0_header_t resp;
    Result rc = dbi0_send_cmd(DBI0_CMD_FILE_RANGE, payload, payload_size, &resp);
    free(payload);
    if (R_FAILED(rc)) { mutexUnlock(&g_mtx); return rc; }

    if (resp.data_size == 0) { mutexUnlock(&g_mtx); return 0; }

    dbi0_header_t ack = {DBI0_MAGIC, DBI0_TYPE_ACK, DBI0_CMD_FILE_RANGE, resp.data_size};
    rc = usb_write_all(&ack, sizeof ack);
    if (R_FAILED(rc)) { mutexUnlock(&g_mtx); return rc; }

    rc = usb_read_exact(out_buf, resp.data_size);
    mutexUnlock(&g_mtx);
    return rc;
}

Result dbi0_stream_file_range(const char *name, uint64_t offset, uint64_t size,
                              dbi0_chunk_cb_t cb, void *ctx) {
    if (!g_inited) return MAKERESULT(Module_Libnx, LibnxError_NotInitialized);
    /* The range_size field is u32, so stream in <= 0x80000000-byte chunks. */
    const uint64_t MAX_RANGE = 0x40000000ULL; /* 1 GiB per request is plenty */
    uint8_t *buf = (uint8_t *)malloc(STREAM_BUF_SZ);
    if (!buf) return MAKERESULT(Module_Libnx, LibnxError_HeapAllocFailed);

    uint64_t remaining = size;
    uint64_t cur_off = offset;
    Result rc = 0;

    while (remaining > 0) {
        uint64_t this_range = remaining > MAX_RANGE ? MAX_RANGE : remaining;

        mutexLock(&g_mtx);
        uint32_t name_len = (uint32_t)strlen(name);
        uint32_t payload_size = 16 + name_len;
        uint8_t *payload = (uint8_t *)malloc(payload_size);
        if (!payload) { mutexUnlock(&g_mtx); rc = MAKERESULT(Module_Libnx, LibnxError_HeapAllocFailed); goto done; }

        dbi0_range_hdr_t *rh = (dbi0_range_hdr_t *)payload;
        rh->range_size  = (uint32_t)this_range;
        rh->range_offset = cur_off;
        rh->name_len    = name_len;
        memcpy(payload + 16, name, name_len);

        dbi0_header_t resp;
        rc = dbi0_send_cmd(DBI0_CMD_FILE_RANGE, payload, payload_size, &resp);
        free(payload);
        if (R_FAILED(rc)) { mutexUnlock(&g_mtx); goto done; }

        uint32_t got = resp.data_size;
        if (got == 0) { mutexUnlock(&g_mtx); rc = MAKERESULT(Module_Libnx, LibnxError_BadGfxEventWait); goto done; }

        dbi0_header_t ack = {DBI0_MAGIC, DBI0_TYPE_ACK, DBI0_CMD_FILE_RANGE, got};
        rc = usb_write_all(&ack, sizeof ack);
        if (R_FAILED(rc)) { mutexUnlock(&g_mtx); goto done; }

        uint32_t stream_off = 0;
        while (stream_off < got) {
            uint32_t want = got - stream_off;
            if (want > STREAM_BUF_SZ) want = STREAM_BUF_SZ;
            rc = usb_read_exact(buf, want);
            if (R_FAILED(rc)) { mutexUnlock(&g_mtx); goto done; }
            int cb_rc = cb(buf, want, ctx);
            if (cb_rc != 0) { mutexUnlock(&g_mtx); rc = MAKERESULT(Module_Libnx, LibnxError_BadInput); goto done; }
            stream_off += want;
        }
        mutexUnlock(&g_mtx);

        cur_off   += this_range;
        remaining -= this_range;
    }

done:
    free(buf);
    return rc;
}

Result dbi0_send_exit(void) {
    if (!g_inited) return MAKERESULT(Module_Libnx, LibnxError_NotInitialized);
    mutexLock(&g_mtx);
    dbi0_header_t resp;
    Result rc = dbi0_send_cmd(DBI0_CMD_EXIT, NULL, 0, &resp);
    mutexUnlock(&g_mtx);
    return rc;
}
