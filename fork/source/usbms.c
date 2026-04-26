#include "usbms.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/* Bulk-Only Transport framing — Universal Serial Bus Mass Storage Class
 * Bulk-Only Transport Rev 1.0, §5.1. */
#define CBW_SIGNATURE     0x43425355u   /* "USBC" */
#define CSW_SIGNATURE     0x53425355u   /* "USBS" */

#define CSW_PASSED        0x00
#define CSW_FAILED        0x01
#define CSW_PHASE_ERROR   0x02

#define DIR_OUT           0x00          /* host -> device (write) */
#define DIR_IN            0x80          /* device -> host (read)  */

typedef struct __attribute__((packed)) {
    uint32_t dCBWSignature;
    uint32_t dCBWTag;
    uint32_t dCBWDataTransferLength;
    uint8_t  bmCBWFlags;
    uint8_t  bCBWLUN;
    uint8_t  bCBWCBLength;
    uint8_t  CBWCB[16];
} cbw_t;
_Static_assert(sizeof(cbw_t) == 31, "CBW must be 31 bytes");

typedef struct __attribute__((packed)) {
    uint32_t dCSWSignature;
    uint32_t dCSWTag;
    uint32_t dCSWDataResidue;
    uint8_t  bCSWStatus;
} csw_t;
_Static_assert(sizeof(csw_t) == 13, "CSW must be 13 bytes");

/* Sense keys (SPC-4 §4.5). Key in byte 2, ASC/ASCQ in bytes 12/13. */
typedef struct {
    uint8_t key;
    uint8_t asc;
    uint8_t ascq;
} sense_t;

#define SENSE_OK            (sense_t){0x00, 0x00, 0x00}
#define SENSE_LBA_RANGE     (sense_t){0x05, 0x21, 0x00}  /* ILLEGAL REQUEST, LBA OUT OF RANGE */
#define SENSE_INVALID_CMD   (sense_t){0x05, 0x20, 0x00}  /* ILLEGAL REQUEST, INVALID COMMAND OPCODE */
#define SENSE_INVALID_FIELD (sense_t){0x05, 0x24, 0x00}  /* ILLEGAL REQUEST, INVALID FIELD IN CDB */
#define SENSE_MEDIUM_NOT_PRESENT (sense_t){0x02, 0x3A, 0x00} /* NOT READY */
#define SENSE_WRITE_PROTECT (sense_t){0x07, 0x27, 0x00}  /* DATA PROTECT, WRITE PROTECTED */
#define SENSE_READ_FAIL     (sense_t){0x03, 0x11, 0x00}  /* MEDIUM ERROR, UNRECOVERED READ ERROR */
#define SENSE_WRITE_FAIL    (sense_t){0x03, 0x0C, 0x00}  /* MEDIUM ERROR, WRITE ERROR */

/* SCSI opcodes we handle. */
#define SCSI_TEST_UNIT_READY      0x00
#define SCSI_REQUEST_SENSE        0x03
#define SCSI_INQUIRY              0x12
#define SCSI_MODE_SENSE_6         0x1A
#define SCSI_START_STOP_UNIT      0x1B
#define SCSI_MEDIUM_REMOVAL       0x1E
#define SCSI_READ_FORMAT_CAPS     0x23
#define SCSI_READ_CAPACITY_10     0x25
#define SCSI_READ_10              0x28
#define SCSI_WRITE_10             0x2A
#define SCSI_SYNCHRONIZE_CACHE    0x35
#define SCSI_MODE_SENSE_10        0x5A
#define SCSI_READ_16              0x88
#define SCSI_WRITE_16             0x8A
#define SCSI_READ_CAPACITY_16     0x9E

#define XFER_BUF_SIZE  (128 * 1024)
#define STAGE_BUF_SIZE (4 * 1024)

static const usbms_lun_t *g_luns = NULL;
static uint32_t           g_n_luns = 0;
static Thread             g_thread;
static bool               g_running = false;
static bool               g_should_stop = false;
static Mutex              g_stats_mtx;
static usbms_stats_t      g_stats;
static sense_t            g_sense[USBMS_MAX_LUNS];
static uint8_t            *g_xfer_buf = NULL;   /* 128 KB, page-aligned — SCSI data */
static uint8_t            *g_stage_buf = NULL;  /* 4 KB, page-aligned — bounce for stack bufs */

/* usb:ds session state. */
static UsbDsInterface *g_iface   = NULL;
static UsbDsEndpoint  *g_ep_in   = NULL;
static UsbDsEndpoint  *g_ep_out  = NULL;
static UEvent          g_stop_uevent;
static bool            g_stop_uevent_init = false;

static inline uint16_t be16(const uint8_t *p) { return ((uint16_t)p[0] << 8) | p[1]; }
static inline uint32_t be32(const uint8_t *p) {
    return ((uint32_t)p[0] << 24) | ((uint32_t)p[1] << 16) |
           ((uint32_t)p[2] << 8)  | p[3];
}
static inline uint64_t be64(const uint8_t *p) {
    return ((uint64_t)be32(p) << 32) | be32(p + 4);
}
static inline void wr_be32(uint8_t *p, uint32_t v) {
    p[0] = v >> 24; p[1] = v >> 16; p[2] = v >> 8; p[3] = v;
}
static inline void wr_be64(uint8_t *p, uint64_t v) {
    wr_be32(p, (uint32_t)(v >> 32));
    wr_be32(p + 4, (uint32_t)v);
}

static void set_err(const char *fmt, ...) {
    mutexLock(&g_stats_mtx);
    va_list ap;
    va_start(ap, fmt);
    vsnprintf(g_stats.last_err, sizeof g_stats.last_err, fmt, ap);
    va_end(ap);
    mutexUnlock(&g_stats_mtx);
}

/* Pad `src` into `dst[len]` with spaces for SCSI INQUIRY string fields. */
static void pad_ascii(char *dst, size_t len, const char *src) {
    memset(dst, ' ', len);
    if (!src) return;
    size_t n = strlen(src);
    if (n > len) n = len;
    memcpy(dst, src, n);
}

/* -------- SCSI helpers -------- */

static void scsi_fill_inquiry(const usbms_lun_t *lun, uint8_t *buf) {
    memset(buf, 0, 36);
    buf[0] = 0x00;  /* peripheral type: direct-access block device */
    buf[1] = 0x80;  /* removable medium */
    buf[2] = 0x06;  /* SPC-4 */
    buf[3] = 0x02;  /* response format 2 */
    buf[4] = 31;    /* additional length */
    pad_ascii((char *)(buf + 8),  8,  lun->vendor_id  ? lun->vendor_id  : "DBI-FORK");
    pad_ascii((char *)(buf + 16), 16, lun->product_id ? lun->product_id : "MassStorage");
    pad_ascii((char *)(buf + 32), 4,  lun->revision   ? lun->revision   : "0.1");
}

static void scsi_fill_sense(const sense_t *s, uint8_t *buf) {
    memset(buf, 0, 18);
    buf[0]  = 0x70;          /* current error, fixed format */
    buf[2]  = s->key & 0x0F; /* sense key */
    buf[7]  = 10;            /* additional sense length */
    buf[12] = s->asc;
    buf[13] = s->ascq;
}

static void scsi_fill_capacity10(const usbms_lun_t *lun, uint8_t *buf) {
    uint64_t last = (lun->block_count == 0) ? 0 : (lun->block_count - 1);
    if (last > 0xFFFFFFFFull) last = 0xFFFFFFFFull;
    wr_be32(buf + 0, (uint32_t)last);
    wr_be32(buf + 4, USBMS_BLOCK_SIZE);
}

static void scsi_fill_capacity16(const usbms_lun_t *lun, uint8_t *buf) {
    memset(buf, 0, 32);
    uint64_t last = (lun->block_count == 0) ? 0 : (lun->block_count - 1);
    wr_be64(buf + 0, last);
    wr_be32(buf + 8, USBMS_BLOCK_SIZE);
}

static void scsi_fill_mode_sense6(uint8_t *buf, bool writable) {
    memset(buf, 0, 4);
    buf[0] = 3;               /* mode data length (excludes this byte) */
    buf[1] = 0;               /* medium type */
    buf[2] = writable ? 0x00 : 0x80;  /* bit 7 = write-protected */
    buf[3] = 0;               /* block descriptor length */
}

static void scsi_fill_mode_sense10(uint8_t *buf, bool writable) {
    memset(buf, 0, 8);
    buf[1] = 6;               /* mode data length low */
    buf[3] = writable ? 0x00 : 0x80;
}

static void scsi_fill_format_caps(const usbms_lun_t *lun, uint8_t *buf) {
    memset(buf, 0, 12);
    buf[3] = 8;               /* capacity list length */
    uint64_t blocks = lun->block_count;
    if (blocks > 0xFFFFFFFFull) blocks = 0xFFFFFFFFull;
    wr_be32(buf + 4, (uint32_t)blocks);
    buf[8]  = 0x02;           /* formatted media descriptor code */
    buf[9]  = 0;
    buf[10] = (USBMS_BLOCK_SIZE >> 8) & 0xFF;
    buf[11] = USBMS_BLOCK_SIZE & 0xFF;
}

/* -------- usb:ds setup-packet handling ----------------------------------- */

/* BOT class-specific control requests (Universal Serial Bus Mass Storage
 * Class Bulk-Only Transport §3):
 *   GET_MAX_LUN     0xFE  dir=IN  recipient=interface  wLength=1
 *   RESET           0xFF  dir=OUT recipient=interface  wLength=0
 * Anything else we stall so the host can recover. */
static void handle_setup_packet(void) {
    if (!g_iface) return;
    eventClear(&g_iface->SetupEvent);

    struct usb_control_setup setup = { 0 };
    if (R_FAILED(usbDsInterface_GetSetupPacket(g_iface, &setup, sizeof setup))) {
        usbDsInterface_StallCtrl(g_iface);
        return;
    }

    const uint8_t dir   = setup.bmRequestType & 0x80;
    const uint8_t type  = (setup.bmRequestType >> 5) & 0x03;
    const uint8_t recip =  setup.bmRequestType       & 0x1F;

    if (type != USB_REQUEST_TYPE_CLASS >> 5 || recip != USB_RECIPIENT_INTERFACE) {
        usbDsInterface_StallCtrl(g_iface);
        return;
    }

    switch (setup.bRequest) {
    case 0xFE: {  /* Get Max LUN */
        if (dir != USB_ENDPOINT_IN || setup.wLength < 1) {
            usbDsInterface_StallCtrl(g_iface);
            return;
        }
        g_stage_buf[0] = g_n_luns > 0 ? (uint8_t)(g_n_luns - 1) : 0;
        u32 urbId = 0;
        if (R_FAILED(usbDsInterface_CtrlInPostBufferAsync(g_iface, g_stage_buf, 1, &urbId))) {
            usbDsInterface_StallCtrl(g_iface);
            return;
        }
        eventWait(&g_iface->CtrlInCompletionEvent, 1000000000ULL);
        eventClear(&g_iface->CtrlInCompletionEvent);
        UsbDsReportData r = { 0 };
        usbDsInterface_GetCtrlInReportData(g_iface, &r);
        (void)r;
        break;
    }

    case 0xFF: {  /* Bulk-Only Mass Storage Reset */
        if (dir != USB_ENDPOINT_OUT) {
            usbDsInterface_StallCtrl(g_iface);
            return;
        }
        /* Zero-length status stage on the OUT side. */
        u32 urbId = 0;
        if (R_FAILED(usbDsInterface_CtrlOutPostBufferAsync(g_iface, g_stage_buf, 0, &urbId))) {
            usbDsInterface_StallCtrl(g_iface);
            return;
        }
        eventWait(&g_iface->CtrlOutCompletionEvent, 1000000000ULL);
        eventClear(&g_iface->CtrlOutCompletionEvent);
        /* Reset device-side sense state — per BOT spec §3.1 the reset clears
         * in-flight transfers; the endpoint stalls are cleared separately by
         * CLEAR_FEATURE requests on each endpoint, which the kernel handles. */
        for (uint32_t i = 0; i < g_n_luns; i++) g_sense[i] = SENSE_OK;
        break;
    }

    default:
        usbDsInterface_StallCtrl(g_iface);
        break;
    }
}

/* -------- BOT I/O (blocking, with setup multiplexing) -------------------- */

/* Core sync transfer. `buf` must be page-aligned (0x1000) and reside in
 * heap-backed memory. Returns 0 on success; writes the actual transferred
 * size to *done. */
static Result ep_post_sync(UsbDsEndpoint *ep, void *buf, size_t size, size_t *done) {
    u32 urbId = 0;
    Result rc = usbDsEndpoint_PostBufferAsync(ep, buf, size, &urbId);
    if (R_FAILED(rc)) return rc;

    /* Wait for either: completion, setup packet, or stop signal. */
    Waiter waiters[3];
    int n = 0;
    waiters[n++] = waiterForEvent(&ep->CompletionEvent);
    if (g_iface) waiters[n++] = waiterForEvent(&g_iface->SetupEvent);
    if (g_stop_uevent_init) waiters[n++] = waiterForUEvent(&g_stop_uevent);

    for (;;) {
        s32 idx = -1;
        rc = waitObjects(&idx, waiters, n, UINT64_MAX);
        if (R_FAILED(rc)) {
            usbDsEndpoint_Cancel(ep);
            return rc;
        }
        if (idx == 0) {
            eventClear(&ep->CompletionEvent);
            break;
        }
        if (idx == 1 && g_iface) {
            handle_setup_packet();
            continue;
        }
        /* stop */
        usbDsEndpoint_Cancel(ep);
        return MAKERESULT(Module_Libnx, LibnxError_BadInput);
    }

    UsbDsReportData rpt = { 0 };
    rc = usbDsEndpoint_GetReportData(ep, &rpt);
    if (R_FAILED(rc)) return rc;
    u32 req = 0, got = 0;
    rc = usbDsParseReportData(&rpt, urbId, &req, &got);
    if (R_FAILED(rc)) return rc;
    (void)req;
    if (done) *done = got;
    return 0;
}

/* Bulk READ from host: always bounce when buf isn't page-aligned, otherwise
 * post the caller's buffer directly (hot path uses g_xfer_buf which is). */
static bool bulk_read(void *buf, size_t len) {
    uint8_t *p = (uint8_t *)buf;
    size_t off = 0;
    bool aligned = ((uintptr_t)p & 0xFFF) == 0;
    while (off < len) {
        size_t want = len - off;
        size_t got = 0;
        if (aligned) {
            Result rc = ep_post_sync(g_ep_out, p + off, want, &got);
            if (R_FAILED(rc) || got == 0) return false;
            off += got;
            continue;
        }
        if (want > STAGE_BUF_SIZE) want = STAGE_BUF_SIZE;
        Result rc = ep_post_sync(g_ep_out, g_stage_buf, want, &got);
        if (R_FAILED(rc) || got == 0) return false;
        memcpy(p + off, g_stage_buf, got);
        off += got;
    }
    return true;
}

static bool bulk_write(const void *buf, size_t len) {
    const uint8_t *p = (const uint8_t *)buf;
    size_t off = 0;
    bool aligned = ((uintptr_t)p & 0xFFF) == 0;
    while (off < len) {
        size_t want = len - off;
        size_t got = 0;
        if (aligned) {
            Result rc = ep_post_sync(g_ep_in, (void *)(p + off), want, &got);
            if (R_FAILED(rc) || got == 0) return false;
            off += got;
            continue;
        }
        if (want > STAGE_BUF_SIZE) want = STAGE_BUF_SIZE;
        memcpy(g_stage_buf, p + off, want);
        Result rc = ep_post_sync(g_ep_in, g_stage_buf, want, &got);
        if (R_FAILED(rc) || got == 0) return false;
        off += got;
    }
    return true;
}

static bool send_csw(uint32_t tag, uint32_t residue, uint8_t status) {
    csw_t csw = {
        .dCSWSignature   = CSW_SIGNATURE,
        .dCSWTag         = tag,
        .dCSWDataResidue = residue,
        .bCSWStatus      = status,
    };
    return bulk_write(&csw, sizeof csw);
}

/* Drain or discard leftover host data for a failed transfer. */
static void drain_out(uint32_t len) {
    uint8_t tmp[4096];
    while (len) {
        size_t chunk = len > sizeof tmp ? sizeof tmp : len;
        if (!bulk_read(tmp, chunk)) return;
        len -= chunk;
    }
}

static void zero_pad_in(uint32_t len) {
    static const uint8_t zero[4096];
    while (len) {
        size_t chunk = len > sizeof zero ? sizeof zero : len;
        if (!bulk_write(zero, chunk)) return;
        len -= chunk;
    }
}

/* Dispatch a single CBW. Returns the CSW status to send; `out_residue`
 * is the unsent/uneaten byte count (per BOT spec). */
static uint8_t dispatch(const cbw_t *cbw, uint32_t *out_residue) {
    const uint8_t *cdb = cbw->CBWCB;
    uint8_t   op  = cdb[0];
    uint8_t   lun = cbw->bCBWLUN;
    uint32_t  len = cbw->dCBWDataTransferLength;
    bool      dir_in = (cbw->bmCBWFlags & 0x80) != 0;
    *out_residue = len;

    mutexLock(&g_stats_mtx);
    g_stats.last_opcode = op;
    mutexUnlock(&g_stats_mtx);

    if (lun >= g_n_luns) {
        if (dir_in)  zero_pad_in(len);
        else         drain_out(len);
        return CSW_FAILED;
    }
    const usbms_lun_t *L = &g_luns[lun];
    sense_t *sense = &g_sense[lun];

    switch (op) {
    case SCSI_TEST_UNIT_READY:
        return CSW_PASSED;

    case SCSI_REQUEST_SENSE: {
        uint8_t sbuf[18];
        scsi_fill_sense(sense, sbuf);
        *sense = SENSE_OK;
        size_t n = cdb[4] < sizeof sbuf ? cdb[4] : sizeof sbuf;
        if (n > len) n = len;
        if (!bulk_write(sbuf, n)) return CSW_PHASE_ERROR;
        if (len > n) zero_pad_in(len - n);
        *out_residue = 0;
        return CSW_PASSED;
    }

    case SCSI_INQUIRY: {
        if (cdb[1] & 1) {  /* EVPD — VPD page, not supported */
            *sense = SENSE_INVALID_FIELD;
            zero_pad_in(len);
            return CSW_FAILED;
        }
        uint8_t ibuf[36];
        scsi_fill_inquiry(L, ibuf);
        size_t n = len < sizeof ibuf ? len : sizeof ibuf;
        if (!bulk_write(ibuf, n)) return CSW_PHASE_ERROR;
        if (len > n) zero_pad_in(len - n);
        *out_residue = 0;
        return CSW_PASSED;
    }

    case SCSI_MODE_SENSE_6: {
        uint8_t mbuf[4];
        scsi_fill_mode_sense6(mbuf, L->writable);
        size_t n = len < sizeof mbuf ? len : sizeof mbuf;
        if (!bulk_write(mbuf, n)) return CSW_PHASE_ERROR;
        if (len > n) zero_pad_in(len - n);
        *out_residue = 0;
        return CSW_PASSED;
    }

    case SCSI_MODE_SENSE_10: {
        uint8_t mbuf[8];
        scsi_fill_mode_sense10(mbuf, L->writable);
        size_t n = len < sizeof mbuf ? len : sizeof mbuf;
        if (!bulk_write(mbuf, n)) return CSW_PHASE_ERROR;
        if (len > n) zero_pad_in(len - n);
        *out_residue = 0;
        return CSW_PASSED;
    }

    case SCSI_START_STOP_UNIT:
    case SCSI_MEDIUM_REMOVAL:
    case SCSI_SYNCHRONIZE_CACHE:
        return CSW_PASSED;

    case SCSI_READ_CAPACITY_10: {
        uint8_t cbuf[8];
        scsi_fill_capacity10(L, cbuf);
        if (!bulk_write(cbuf, sizeof cbuf)) return CSW_PHASE_ERROR;
        *out_residue = (len > sizeof cbuf) ? len - sizeof cbuf : 0;
        if (len > sizeof cbuf) zero_pad_in(*out_residue);
        *out_residue = 0;
        return CSW_PASSED;
    }

    case SCSI_READ_CAPACITY_16: {
        uint8_t cbuf[32];
        scsi_fill_capacity16(L, cbuf);
        size_t n = len < sizeof cbuf ? len : sizeof cbuf;
        if (!bulk_write(cbuf, n)) return CSW_PHASE_ERROR;
        if (len > n) zero_pad_in(len - n);
        *out_residue = 0;
        return CSW_PASSED;
    }

    case SCSI_READ_FORMAT_CAPS: {
        uint8_t rbuf[12];
        scsi_fill_format_caps(L, rbuf);
        size_t n = len < sizeof rbuf ? len : sizeof rbuf;
        if (!bulk_write(rbuf, n)) return CSW_PHASE_ERROR;
        if (len > n) zero_pad_in(len - n);
        *out_residue = 0;
        return CSW_PASSED;
    }

    case SCSI_READ_10:
    case SCSI_READ_16: {
        uint64_t lba     = (op == SCSI_READ_10) ? be32(cdb + 2) : be64(cdb + 2);
        uint32_t nblocks = (op == SCSI_READ_10) ? be16(cdb + 7) : be32(cdb + 10);
        if ((uint64_t)lba + nblocks > L->block_count) {
            *sense = SENSE_LBA_RANGE;
            zero_pad_in(len);
            return CSW_FAILED;
        }
        uint32_t remaining = nblocks;
        uint32_t sent = 0;
        while (remaining) {
            uint32_t chunk = remaining;
            if (chunk * USBMS_BLOCK_SIZE > XFER_BUF_SIZE)
                chunk = XFER_BUF_SIZE / USBMS_BLOCK_SIZE;
            Result rc = L->read_blocks(L->ctx, lba, chunk, g_xfer_buf);
            if (R_FAILED(rc)) {
                set_err("READ rc=0x%08x lba=%llu", rc,
                        (unsigned long long)lba);
                *sense = SENSE_READ_FAIL;
                if (len > sent) zero_pad_in(len - sent);
                return CSW_FAILED;
            }
            size_t bytes = chunk * USBMS_BLOCK_SIZE;
            if (sent + bytes > len) bytes = len - sent;
            if (bytes && !bulk_write(g_xfer_buf, bytes)) return CSW_PHASE_ERROR;
            sent      += bytes;
            lba       += chunk;
            remaining -= chunk;
            mutexLock(&g_stats_mtx);
            g_stats.bytes_read += bytes;
            mutexUnlock(&g_stats_mtx);
            if (sent >= len) break;
        }
        if (sent < len) zero_pad_in(len - sent);
        *out_residue = 0;
        return CSW_PASSED;
    }

    case SCSI_WRITE_10:
    case SCSI_WRITE_16: {
        uint64_t lba     = (op == SCSI_WRITE_10) ? be32(cdb + 2) : be64(cdb + 2);
        uint32_t nblocks = (op == SCSI_WRITE_10) ? be16(cdb + 7) : be32(cdb + 10);
        if (!L->writable || !L->write_blocks) {
            *sense = SENSE_WRITE_PROTECT;
            drain_out(len);
            return CSW_FAILED;
        }
        if ((uint64_t)lba + nblocks > L->block_count) {
            *sense = SENSE_LBA_RANGE;
            drain_out(len);
            return CSW_FAILED;
        }
        uint32_t remaining = nblocks;
        uint32_t recv = 0;
        while (remaining) {
            uint32_t chunk = remaining;
            if (chunk * USBMS_BLOCK_SIZE > XFER_BUF_SIZE)
                chunk = XFER_BUF_SIZE / USBMS_BLOCK_SIZE;
            size_t bytes = chunk * USBMS_BLOCK_SIZE;
            if (recv + bytes > len) bytes = len - recv;
            if (bytes && !bulk_read(g_xfer_buf, bytes)) return CSW_PHASE_ERROR;
            Result rc = L->write_blocks(L->ctx, lba, chunk, g_xfer_buf);
            if (R_FAILED(rc)) {
                set_err("WRITE rc=0x%08x lba=%llu", rc,
                        (unsigned long long)lba);
                *sense = SENSE_WRITE_FAIL;
                if (len > recv + bytes) drain_out(len - recv - bytes);
                return CSW_FAILED;
            }
            recv      += bytes;
            lba       += chunk;
            remaining -= chunk;
            mutexLock(&g_stats_mtx);
            g_stats.bytes_written += bytes;
            mutexUnlock(&g_stats_mtx);
            if (recv >= len) break;
        }
        if (recv < len) drain_out(len - recv);
        *out_residue = 0;
        return CSW_PASSED;
    }

    default:
        set_err("unsupported SCSI op 0x%02x", op);
        *sense = SENSE_INVALID_CMD;
        if (dir_in)  zero_pad_in(len);
        else         drain_out(len);
        return CSW_FAILED;
    }
}

/* Thread body: CBW → dispatch → CSW loop. */
static void worker(void *arg) {
    (void)arg;
    /* usbDsWaitReady blocks until the host has configured the device (state
     * == USB_STATE_CONFIGURED). Allow up to 10 s; if the host never shows
     * up, quit gracefully. */
    Result rc = usbDsWaitReady(10ULL * 1000 * 1000 * 1000);
    if (R_FAILED(rc)) {
        set_err("usbDsWaitReady 0x%08x", rc);
        g_running = false;
        return;
    }
    while (!g_should_stop) {
        cbw_t cbw;
        if (!bulk_read(&cbw, sizeof cbw)) break;
        if (cbw.dCBWSignature != CBW_SIGNATURE) {
            /* Protocol desync — stall the OUT endpoint and drop the CBW.
             * Host should respond by issuing a Bulk-Only Mass Storage Reset
             * (0xFF) which our setup handler will catch. */
            set_err("CBW desync sig=0x%08x", cbw.dCBWSignature);
            if (g_ep_out) usbDsEndpoint_Stall(g_ep_out);
            break;
        }
        mutexLock(&g_stats_mtx);
        g_stats.cbw_count++;
        mutexUnlock(&g_stats_mtx);

        uint32_t residue = 0;
        uint8_t  status  = dispatch(&cbw, &residue);
        if (!send_csw(cbw.dCBWTag, residue, status)) break;
    }
    g_running = false;
}

/* -------- usb:ds init helpers -------------------------------------------- */

/* Build descriptor blocks for each speed and feed them into usb:ds. This
 * mirrors the layout libnx's usb_comms uses internally, which is the only
 * shape the Switch USB stack accepts:
 *
 *   HS:  iface + ep_in(BULK, wMaxPacketSize=0x200)
 *                + ep_out(BULK, wMaxPacketSize=0x200)
 *   FS:  iface + ep_in(BULK, wMaxPacketSize=0x40)
 *                + ep_out(BULK, wMaxPacketSize=0x40)
 *   SS:  iface + ep_in(BULK, wMaxPacketSize=0x400) + ss_companion
 *                + ep_out(BULK, wMaxPacketSize=0x400) + ss_companion
 *
 * Endpoint addresses are auto-allocated by the kernel when bEndpointAddress
 * is passed as just the direction bit. */
static Result append_iface_descriptors(UsbDsInterface *iface,
                                       UsbDeviceSpeed speed,
                                       u16 ep_packet_size,
                                       bool with_ss_companion) {
    struct usb_interface_descriptor idesc = {
        .bLength            = USB_DT_INTERFACE_SIZE,
        .bDescriptorType    = USB_DT_INTERFACE,
        .bInterfaceNumber   = USBDS_DEFAULT_InterfaceNumber,
        .bNumEndpoints      = 2,
        .bInterfaceClass    = 0x08,  /* Mass Storage */
        .bInterfaceSubClass = 0x06,  /* SCSI transparent */
        .bInterfaceProtocol = 0x50,  /* Bulk-Only Transport */
    };
    Result rc = usbDsInterface_AppendConfigurationData(iface, speed,
                    &idesc, USB_DT_INTERFACE_SIZE);
    if (R_FAILED(rc)) return rc;

    struct usb_endpoint_descriptor ep_in = {
        .bLength          = USB_DT_ENDPOINT_SIZE,
        .bDescriptorType  = USB_DT_ENDPOINT,
        .bEndpointAddress = USB_ENDPOINT_IN,
        .bmAttributes     = USB_TRANSFER_TYPE_BULK,
        .wMaxPacketSize   = ep_packet_size,
    };
    rc = usbDsInterface_AppendConfigurationData(iface, speed,
                    &ep_in, USB_DT_ENDPOINT_SIZE);
    if (R_FAILED(rc)) return rc;

    if (with_ss_companion) {
        struct usb_ss_endpoint_companion_descriptor comp = {
            .bLength          = USB_DT_SS_ENDPOINT_COMPANION_SIZE,
            .bDescriptorType  = USB_DT_SS_ENDPOINT_COMPANION,
            .bMaxBurst        = 0x0F,
            .bmAttributes     = 0x00,
            .wBytesPerInterval = 0,
        };
        rc = usbDsInterface_AppendConfigurationData(iface, speed,
                    &comp, USB_DT_SS_ENDPOINT_COMPANION_SIZE);
        if (R_FAILED(rc)) return rc;
    }

    struct usb_endpoint_descriptor ep_out = {
        .bLength          = USB_DT_ENDPOINT_SIZE,
        .bDescriptorType  = USB_DT_ENDPOINT,
        .bEndpointAddress = USB_ENDPOINT_OUT,
        .bmAttributes     = USB_TRANSFER_TYPE_BULK,
        .wMaxPacketSize   = ep_packet_size,
    };
    rc = usbDsInterface_AppendConfigurationData(iface, speed,
                    &ep_out, USB_DT_ENDPOINT_SIZE);
    if (R_FAILED(rc)) return rc;

    if (with_ss_companion) {
        struct usb_ss_endpoint_companion_descriptor comp = {
            .bLength          = USB_DT_SS_ENDPOINT_COMPANION_SIZE,
            .bDescriptorType  = USB_DT_SS_ENDPOINT_COMPANION,
            .bMaxBurst        = 0x0F,
            .bmAttributes     = 0x00,
            .wBytesPerInterval = 0,
        };
        rc = usbDsInterface_AppendConfigurationData(iface, speed,
                    &comp, USB_DT_SS_ENDPOINT_COMPANION_SIZE);
        if (R_FAILED(rc)) return rc;
    }
    return 0;
}

static Result setup_usb_device(void) {
    Result rc = usbDsClearDeviceData();
    if (R_FAILED(rc)) return rc;

    /* String table. Kernel assigns 1-based indices; cache the returned
     * indices into the device descriptor. */
    const u16 lang = 0x0409;  /* English (US) */
    u8 lang_idx = 0, manu_idx = 0, prod_idx = 0, ser_idx = 0;
    usbDsAddUsbLanguageStringDescriptor(&lang_idx, &lang, 1);
    usbDsAddUsbStringDescriptor(&manu_idx, "DBI-FORK");
    usbDsAddUsbStringDescriptor(&prod_idx, "DBI-FORK Mass Storage");
    usbDsAddUsbStringDescriptor(&ser_idx,  "SN000000");

    /* Per-speed device descriptors. bMaxPacketSize0 must be 0x40 for FS/HS
     * and 0x09 (meaning 2^9 = 512) for SuperSpeed. */
    struct usb_device_descriptor ddesc_base = {
        .bLength            = USB_DT_DEVICE_SIZE,
        .bDescriptorType    = USB_DT_DEVICE,
        .bDeviceClass       = 0x00,
        .bDeviceSubClass    = 0x00,
        .bDeviceProtocol    = 0x00,
        .idVendor           = 0x057E,
        .idProduct          = 0x3001,
        .bcdDevice          = 0x0100,
        .iManufacturer      = manu_idx,
        .iProduct           = prod_idx,
        .iSerialNumber      = ser_idx,
        .bNumConfigurations = 1,
    };

    struct usb_device_descriptor ddesc_fs = ddesc_base;
    ddesc_fs.bcdUSB         = 0x0110;
    ddesc_fs.bMaxPacketSize0 = 0x40;
    rc = usbDsSetUsbDeviceDescriptor(UsbDeviceSpeed_Full, &ddesc_fs);
    if (R_FAILED(rc)) return rc;

    struct usb_device_descriptor ddesc_hs = ddesc_base;
    ddesc_hs.bcdUSB         = 0x0200;
    ddesc_hs.bMaxPacketSize0 = 0x40;
    rc = usbDsSetUsbDeviceDescriptor(UsbDeviceSpeed_High, &ddesc_hs);
    if (R_FAILED(rc)) return rc;

    struct usb_device_descriptor ddesc_ss = ddesc_base;
    ddesc_ss.bcdUSB         = 0x0300;
    ddesc_ss.bMaxPacketSize0 = 0x09;
    rc = usbDsSetUsbDeviceDescriptor(UsbDeviceSpeed_Super, &ddesc_ss);
    if (R_FAILED(rc)) return rc;

    /* BOS: BOS header + USB 2.0 Extension + SuperSpeed USB Device Capability. */
    static const u8 bos[0x16] = {
        0x05, USB_DT_BOS, 0x16, 0x00, 0x02,             /* BOS header */
        0x07, USB_DT_DEVICE_CAPABILITY, 0x02, 0x02, 0x00, 0x00, 0x00,
        0x0A, USB_DT_DEVICE_CAPABILITY, 0x03, 0x00,
        0x0E, 0x00, 0x03, 0x00, 0x0A, 0x00
    };
    rc = usbDsSetBinaryObjectStore(bos, sizeof bos);
    if (R_FAILED(rc)) return rc;

    return 0;
}

/* -------- Public API -------- */

Result usbms_start(const usbms_lun_t *luns, uint32_t n_luns) {
    if (g_running) return MAKERESULT(Module_Libnx, LibnxError_AlreadyInitialized);
    if (!luns || n_luns == 0 || n_luns > USBMS_MAX_LUNS)
        return MAKERESULT(Module_Libnx, LibnxError_BadInput);

    g_luns    = luns;
    g_n_luns  = n_luns;
    memset(&g_stats, 0, sizeof g_stats);
    for (uint32_t i = 0; i < n_luns; i++) g_sense[i] = SENSE_OK;
    mutexInit(&g_stats_mtx);
    g_should_stop = false;

    if (!g_xfer_buf) {
        g_xfer_buf = (uint8_t *)aligned_alloc(0x1000, XFER_BUF_SIZE);
        if (!g_xfer_buf) return MAKERESULT(Module_Libnx, LibnxError_HeapAllocFailed);
    }
    if (!g_stage_buf) {
        g_stage_buf = (uint8_t *)aligned_alloc(0x1000, STAGE_BUF_SIZE);
        if (!g_stage_buf) return MAKERESULT(Module_Libnx, LibnxError_HeapAllocFailed);
    }

    ueventCreate(&g_stop_uevent, true);
    g_stop_uevent_init = true;

    Result rc = usbDsInitialize();
    if (R_FAILED(rc)) { set_err("usbDsInitialize 0x%08x", rc); return rc; }

    rc = setup_usb_device();
    if (R_FAILED(rc)) { set_err("usb descriptors 0x%08x", rc); usbDsExit(); return rc; }

    rc = usbDsRegisterInterface(&g_iface);
    if (R_FAILED(rc)) { set_err("RegisterInterface 0x%08x", rc); usbDsExit(); return rc; }

    rc = append_iface_descriptors(g_iface, UsbDeviceSpeed_Full,  0x40,  false);
    if (R_SUCCEEDED(rc)) rc = append_iface_descriptors(g_iface, UsbDeviceSpeed_High,  0x200, false);
    if (R_SUCCEEDED(rc)) rc = append_iface_descriptors(g_iface, UsbDeviceSpeed_Super, 0x400, true);
    if (R_FAILED(rc)) { set_err("AppendConfig 0x%08x", rc); usbDsExit(); return rc; }

    rc = usbDsInterface_RegisterEndpoint(g_iface, &g_ep_in,  USB_ENDPOINT_IN);
    if (R_SUCCEEDED(rc)) rc = usbDsInterface_RegisterEndpoint(g_iface, &g_ep_out, USB_ENDPOINT_OUT);
    if (R_FAILED(rc)) { set_err("RegisterEndpoint 0x%08x", rc); usbDsExit(); return rc; }

    rc = usbDsInterface_EnableInterface(g_iface);
    if (R_FAILED(rc)) { set_err("EnableInterface 0x%08x", rc); usbDsExit(); return rc; }

    rc = usbDsEnable();
    if (R_FAILED(rc)) { set_err("usbDsEnable 0x%08x", rc); usbDsExit(); return rc; }

    rc = threadCreate(&g_thread, worker, NULL, NULL, 0x8000, 0x2C, -2);
    if (R_FAILED(rc)) { usbDsExit(); return rc; }
    g_running = true;
    rc = threadStart(&g_thread);
    if (R_FAILED(rc)) {
        usbDsExit();
        threadClose(&g_thread);
        g_running = false;
        return rc;
    }
    return 0;
}

void usbms_stop(void) {
    if (!g_running && !g_should_stop) return;
    g_should_stop = true;
    if (g_stop_uevent_init) ueventSignal(&g_stop_uevent);

    /* Bring the endpoints down first so any in-flight URBs complete with
     * cancellation; then disable the interface and the usb:ds session. */
    if (g_ep_in)  { usbDsEndpoint_Cancel(g_ep_in);  }
    if (g_ep_out) { usbDsEndpoint_Cancel(g_ep_out); }

    usbDsDisable();
    usbDsExit();
    g_iface = NULL;
    g_ep_in = NULL;
    g_ep_out = NULL;

    threadWaitForExit(&g_thread);
    threadClose(&g_thread);
    g_running = false;
    g_stop_uevent_init = false;

    if (g_xfer_buf)  { free(g_xfer_buf);  g_xfer_buf  = NULL; }
    if (g_stage_buf) { free(g_stage_buf); g_stage_buf = NULL; }
    g_luns = NULL;
    g_n_luns = 0;
}

bool usbms_is_running(void) { return g_running; }

void usbms_get_stats(usbms_stats_t *out) {
    mutexLock(&g_stats_mtx);
    *out = g_stats;
    mutexUnlock(&g_stats_mtx);
}

/* -------- BIS LUN backends -------- */

typedef struct {
    FsStorage st;
    bool      open;
} bis_ctx_t;

static bis_ctx_t g_bis_sys, g_bis_user;
static bis_ctx_t g_bis_safe, g_bis_cal0, g_bis_calf;
static bis_ctx_t g_bis_boot0, g_bis_boot1, g_bis_pkg2;

static Result bis_read(void *ctx, uint64_t lba, uint32_t count, void *buf) {
    bis_ctx_t *c = (bis_ctx_t *)ctx;
    if (!c->open) return MAKERESULT(Module_Libnx, LibnxError_NotInitialized);
    return fsStorageRead(&c->st,
                         (s64)(lba * USBMS_BLOCK_SIZE),
                         buf,
                         (u64)count * USBMS_BLOCK_SIZE);
}

/* Writes are deliberately disabled — modifying System/User BIS partitions
 * over USB without vetting could brick the console. Left as a stub so the
 * LUN advertises writable=false (upstream also read-only by default). */

static Result open_bis(bis_ctx_t *c, FsBisPartitionId id) {
    Result rc = fsInitialize();
    if (R_FAILED(rc)) return rc;
    rc = fsOpenBisStorage(&c->st, id);
    if (R_FAILED(rc)) { fsExit(); return rc; }
    c->open = true;
    return 0;
}

static void close_bis(bis_ctx_t *c) {
    if (!c->open) return;
    fsStorageClose(&c->st);
    fsExit();
    c->open = false;
}

static Result fill_bis_lun(usbms_lun_t *out, bis_ctx_t *ctx,
                           FsBisPartitionId id,
                           const char *product) {
    memset(out, 0, sizeof *out);
    Result rc = open_bis(ctx, id);
    if (R_FAILED(rc)) return rc;
    s64 sz = 0;
    rc = fsStorageGetSize(&ctx->st, &sz);
    if (R_FAILED(rc)) { close_bis(ctx); return rc; }
    out->vendor_id    = "DBI-FORK";
    out->product_id   = product;
    out->revision     = "0.1";
    out->writable     = false;
    out->block_count  = (uint64_t)sz / USBMS_BLOCK_SIZE;
    out->read_blocks  = bis_read;
    out->write_blocks = NULL;
    out->ctx          = ctx;
    return 0;
}

Result usbms_lun_bis_system(usbms_lun_t *out) {
    return fill_bis_lun(out, &g_bis_sys, FsBisPartitionId_System, "BIS_System_RO");
}

Result usbms_lun_bis_user(usbms_lun_t *out) {
    return fill_bis_lun(out, &g_bis_user, FsBisPartitionId_User, "BIS_User_RO");
}

Result usbms_lun_bis_safe(usbms_lun_t *out) {
    return fill_bis_lun(out, &g_bis_safe, FsBisPartitionId_SafeMode, "BIS_Safe_RO");
}

Result usbms_lun_bis_cal0(usbms_lun_t *out) {
    return fill_bis_lun(out, &g_bis_cal0, FsBisPartitionId_CalibrationBinary, "BIS_Prodinfo_RO");
}

Result usbms_lun_bis_calf(usbms_lun_t *out) {
    return fill_bis_lun(out, &g_bis_calf, FsBisPartitionId_CalibrationFile, "BIS_ProdinfoF_RO");
}

Result usbms_lun_bis_boot0(usbms_lun_t *out) {
    return fill_bis_lun(out, &g_bis_boot0, FsBisPartitionId_BootPartition1Root, "BIS_Boot0_RO");
}

Result usbms_lun_bis_boot1(usbms_lun_t *out) {
    return fill_bis_lun(out, &g_bis_boot1, FsBisPartitionId_BootPartition2Root, "BIS_Boot1_RO");
}

Result usbms_lun_bis_pkg2(usbms_lun_t *out) {
    return fill_bis_lun(out, &g_bis_pkg2, FsBisPartitionId_BootConfigAndPackage2Part1, "BIS_Pkg2_RO");
}

/* -------- File-backed LUN backend -------- */

typedef struct {
    FILE    *fp;
    bool     writable;
    uint64_t blocks;
    char     product[17];
} file_ctx_t;

static file_ctx_t g_file;

static Result file_read(void *ctx, uint64_t lba, uint32_t count, void *buf) {
    file_ctx_t *c = (file_ctx_t *)ctx;
    if (!c->fp) return MAKERESULT(Module_Libnx, LibnxError_NotInitialized);
    if (fseek(c->fp, (long)(lba * USBMS_BLOCK_SIZE), SEEK_SET) != 0)
        return MAKERESULT(Module_Libnx, LibnxError_IoError);
    size_t n = count * USBMS_BLOCK_SIZE;
    size_t got = fread(buf, 1, n, c->fp);
    if (got != n) return MAKERESULT(Module_Libnx, LibnxError_IoError);
    return 0;
}

static Result file_write(void *ctx, uint64_t lba, uint32_t count, const void *buf) {
    file_ctx_t *c = (file_ctx_t *)ctx;
    if (!c->fp || !c->writable) return MAKERESULT(Module_Libnx, LibnxError_NotInitialized);
    if (fseek(c->fp, (long)(lba * USBMS_BLOCK_SIZE), SEEK_SET) != 0)
        return MAKERESULT(Module_Libnx, LibnxError_IoError);
    size_t n = count * USBMS_BLOCK_SIZE;
    size_t w = fwrite(buf, 1, n, c->fp);
    if (w != n) return MAKERESULT(Module_Libnx, LibnxError_IoError);
    fflush(c->fp);
    return 0;
}

Result usbms_lun_file(usbms_lun_t *out, const char *path, bool writable,
                      const char *product_label) {
    memset(out, 0, sizeof *out);

    file_ctx_t *c = &g_file;
    if (c->fp) { fclose(c->fp); c->fp = NULL; }

    c->fp = fopen(path, writable ? "r+b" : "rb");
    if (!c->fp) return MAKERESULT(Module_Libnx, LibnxError_NotFound);

    if (fseek(c->fp, 0, SEEK_END) != 0) {
        fclose(c->fp); c->fp = NULL;
        return MAKERESULT(Module_Libnx, LibnxError_IoError);
    }
    long sz = ftell(c->fp);
    if (sz < USBMS_BLOCK_SIZE) {
        fclose(c->fp); c->fp = NULL;
        return MAKERESULT(Module_Libnx, LibnxError_BadInput);
    }
    c->blocks   = (uint64_t)sz / USBMS_BLOCK_SIZE;
    c->writable = writable;
    snprintf(c->product, sizeof c->product, "%-16.16s",
             product_label ? product_label : "FILE_IMAGE");

    out->vendor_id    = "DBI-FORK";
    out->product_id   = c->product;
    out->revision     = "0.1";
    out->writable     = writable;
    out->block_count  = c->blocks;
    out->read_blocks  = file_read;
    out->write_blocks = writable ? file_write : NULL;
    out->ctx          = c;
    return 0;
}

void usbms_lun_close(usbms_lun_t *lun) {
    if (!lun || !lun->ctx) return;
    /* File-backed ctx is a file pointer + metadata. BIS ctx starts with
     * FsStorage + bool. Detect by pointer identity to the singleton slot. */
    if (lun->ctx == &g_file) {
        if (g_file.fp) { fclose(g_file.fp); g_file.fp = NULL; }
    } else {
        bis_ctx_t *c = (bis_ctx_t *)lun->ctx;
        close_bis(c);
    }
    memset(lun, 0, sizeof *lun);
}
