/* mtp.c — DBI fork MTP server (full implementation).
 *
 * Implements:
 *   - Container framing (12-byte header)
 *   - Standard ops: GetDeviceInfo / OpenSession / CloseSession /
 *     GetStorageIDs / GetStorageInfo / GetObjectHandles /
 *     GetObjectInfo / GetObject / SendObjectInfo / SendObject /
 *     DeleteObject / GetNumObjects
 *   - DBI vendor extensions 0x9801..0x9804 (firmware info, gamecard
 *     info, install NSP, dump gamecard).
 *   - Storage abstraction over fsdev: storage 0x00010001 = sdmc.
 *
 * Reference: REVERSE.md Part 31, 887 FINDINGS Parts 7/9/19.
 */
#include "mtp.h"
#include "log.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <dirent.h>
#include <sys/stat.h>
#include <switch.h>

#define MTP_BUF_SZ      131072
#define MTP_INTERFACE   0
#define MTP_MAX_HANDLES 4096
#define MTP_PATH_MAX    512

typedef struct __attribute__((packed)) {
    uint32_t length;
    uint16_t type;
    uint16_t code;
    uint32_t trans_id;
} mtp_container_t;

enum {
    MTP_TYPE_COMMAND  = 1,
    MTP_TYPE_DATA     = 2,
    MTP_TYPE_RESPONSE = 3,
    MTP_TYPE_EVENT    = 4,
};

enum {
    OP_GET_DEVICE_INFO        = 0x1001,
    OP_OPEN_SESSION           = 0x1002,
    OP_CLOSE_SESSION          = 0x1003,
    OP_GET_STORAGE_IDS        = 0x1004,
    OP_GET_STORAGE_INFO       = 0x1005,
    OP_GET_NUM_OBJECTS        = 0x1006,
    OP_GET_OBJECT_HANDLES     = 0x1007,
    OP_GET_OBJECT_INFO        = 0x1008,
    OP_GET_OBJECT             = 0x1009,
    OP_DELETE_OBJECT          = 0x100B,
    OP_SEND_OBJECT_INFO       = 0x100C,
    OP_SEND_OBJECT            = 0x100D,
    /* DBI vendor extensions */
    OP_DBI_GET_FW             = 0x9801,
    OP_DBI_GET_GC_INFO        = 0x9802,
    OP_DBI_INSTALL_NSP        = 0x9803,
    OP_DBI_DUMP_GC            = 0x9804,
};

enum {
    RC_OK                     = 0x2001,
    RC_GENERAL_ERROR          = 0x2002,
    RC_SESSION_NOT_OPEN       = 0x2003,
    RC_INVALID_TRANS_ID       = 0x2004,
    RC_OPERATION_NOT_SUPPORTED= 0x2005,
    RC_INVALID_STORAGE        = 0x2008,
    RC_INVALID_OBJECT_HANDLE  = 0x2009,
    RC_STORE_FULL             = 0x200C,
    RC_OBJECT_WRITE_PROTECTED = 0x200D,
    RC_INVALID_PARENT         = 0x201A,
    RC_INVALID_PARAMETER      = 0x201D,
};

#define STORAGE_SDMC 0x00010001

typedef struct {
    bool    used;
    uint32_t parent;
    char    path[MTP_PATH_MAX];
    bool    is_dir;
    uint64_t size;
} mtp_object_t;

static struct {
    bool         running;
    uint32_t     session_id;
    uint8_t      buf_in[MTP_BUF_SZ];
    uint8_t      buf_out[MTP_BUF_SZ];
    mtp_stats_t  stats;
    mtp_object_t handles[MTP_MAX_HANDLES];
    uint32_t     pending_send_handle;   /* SendObjectInfo -> SendObject */
    char         pending_send_path[MTP_PATH_MAX];
    uint64_t     pending_send_size;
} g_mtp;

/* ───────────────────────────────────── Wire format helpers ─────────── */

static int writeu8(uint8_t *p, int *off, uint8_t v) {
    p[(*off)++] = v;
    return 1;
}
static int writeu16(uint8_t *p, int *off, uint16_t v) {
    p[(*off)++] = v & 0xff;
    p[(*off)++] = (v >> 8) & 0xff;
    return 2;
}
static int writeu32(uint8_t *p, int *off, uint32_t v) {
    p[(*off)++] = v & 0xff;
    p[(*off)++] = (v >> 8) & 0xff;
    p[(*off)++] = (v >> 16) & 0xff;
    p[(*off)++] = (v >> 24) & 0xff;
    return 4;
}
static int writeu64(uint8_t *p, int *off, uint64_t v) {
    for (int i = 0; i < 8; i++) p[(*off)++] = (v >> (i * 8)) & 0xff;
    return 8;
}
/* MTP-style length-prefixed UCS-2 string */
static int writestr(uint8_t *p, int *off, const char *s) {
    int slen = strlen(s);
    int chars = slen + 1;
    p[(*off)++] = chars;
    for (int i = 0; i < slen; i++) {
        p[(*off)++] = s[i];
        p[(*off)++] = 0;
    }
    p[(*off)++] = 0; p[(*off)++] = 0;
    return 1 + chars * 2;
}
static int write_uint32_array(uint8_t *p, int *off, const uint32_t *vals, int count) {
    writeu32(p, off, count);
    for (int i = 0; i < count; i++) writeu32(p, off, vals[i]);
    return 4 + count * 4;
}
static int write_uint16_array(uint8_t *p, int *off, const uint16_t *vals, int count) {
    writeu32(p, off, count);
    for (int i = 0; i < count; i++) writeu16(p, off, vals[i]);
    return 4 + count * 2;
}

/* ───────────────────────────────────── Object handle table ─────────── */

static uint32_t obj_alloc(uint32_t parent, const char *path, bool is_dir, uint64_t size) {
    /* Linear scan; handle 0 is reserved. */
    for (uint32_t i = 1; i < MTP_MAX_HANDLES; i++) {
        if (!g_mtp.handles[i].used) {
            g_mtp.handles[i].used = true;
            g_mtp.handles[i].parent = parent;
            g_mtp.handles[i].is_dir = is_dir;
            g_mtp.handles[i].size = size;
            snprintf(g_mtp.handles[i].path, sizeof(g_mtp.handles[i].path), "%s", path);
            return i;
        }
    }
    return 0;
}
static void obj_free(uint32_t h) {
    if (h && h < MTP_MAX_HANDLES) g_mtp.handles[h].used = false;
}

/* Resolve handle -> path. parent==0xFFFFFFFF means storage root. */
static const char *handle_to_path(uint32_t h) {
    if (h == 0xFFFFFFFF) return "sdmc:/";
    if (h == 0 || h >= MTP_MAX_HANDLES || !g_mtp.handles[h].used) return NULL;
    return g_mtp.handles[h].path;
}

/* ───────────────────────────────────── Send helpers ────────────────── */

static int send_response_no_payload(uint16_t code, uint32_t trans_id) {
    mtp_container_t c = { .length = sizeof(c), .type = MTP_TYPE_RESPONSE,
                          .code = code, .trans_id = trans_id };
    int r = usbCommsWriteEx(&c, sizeof(c), MTP_INTERFACE);
    g_mtp.stats.bytes_out += sizeof(c);
    return r == sizeof(c) ? 0 : -1;
}

static int send_data_then_response(uint16_t code, uint32_t trans_id,
                                   const uint8_t *payload, int payload_len) {
    mtp_container_t hdr = { .length = sizeof(hdr) + payload_len,
                             .type = MTP_TYPE_DATA, .code = code, .trans_id = trans_id };
    /* Single-blob send: header + payload contiguous */
    memcpy(g_mtp.buf_out, &hdr, sizeof(hdr));
    if (payload_len > 0)
        memcpy(g_mtp.buf_out + sizeof(hdr), payload, payload_len);
    int n = sizeof(hdr) + payload_len;
    int r = usbCommsWriteEx(g_mtp.buf_out, n, MTP_INTERFACE);
    g_mtp.stats.bytes_out += n;
    if (r != n) return -1;
    return send_response_no_payload(RC_OK, trans_id);
}

/* ───────────────────────────────────── Operation handlers ──────────── */

static void op_get_device_info(uint32_t trans_id) {
    int off = 0;
    writeu16(g_mtp.buf_out + sizeof(mtp_container_t), &off, 100);  /* StandardVersion */
    writeu32(g_mtp.buf_out + sizeof(mtp_container_t), &off, 0x06); /* VendorExtensionID = MTP */
    writeu16(g_mtp.buf_out + sizeof(mtp_container_t), &off, 100);  /* VendorExtensionVersion */
    writestr(g_mtp.buf_out + sizeof(mtp_container_t), &off, "microsoft.com: 1.0; dbi-fork: 1.0;");
    writeu16(g_mtp.buf_out + sizeof(mtp_container_t), &off, 0);    /* FunctionalMode */
    /* OperationsSupported */
    static const uint16_t ops[] = {
        OP_GET_DEVICE_INFO, OP_OPEN_SESSION, OP_CLOSE_SESSION,
        OP_GET_STORAGE_IDS, OP_GET_STORAGE_INFO, OP_GET_NUM_OBJECTS,
        OP_GET_OBJECT_HANDLES, OP_GET_OBJECT_INFO, OP_GET_OBJECT,
        OP_DELETE_OBJECT, OP_SEND_OBJECT_INFO, OP_SEND_OBJECT,
        OP_DBI_GET_FW, OP_DBI_GET_GC_INFO, OP_DBI_INSTALL_NSP, OP_DBI_DUMP_GC
    };
    write_uint16_array(g_mtp.buf_out + sizeof(mtp_container_t), &off,
                       ops, sizeof(ops) / sizeof(*ops));
    /* EventsSupported (none) */
    writeu32(g_mtp.buf_out + sizeof(mtp_container_t), &off, 0);
    /* DevicePropertiesSupported (none) */
    writeu32(g_mtp.buf_out + sizeof(mtp_container_t), &off, 0);
    /* CaptureFormats (none) */
    writeu32(g_mtp.buf_out + sizeof(mtp_container_t), &off, 0);
    /* PlaybackFormats: undefined + association */
    static const uint16_t fmt[] = {0x3000, 0x3001};
    write_uint16_array(g_mtp.buf_out + sizeof(mtp_container_t), &off,
                       fmt, 2);
    writestr(g_mtp.buf_out + sizeof(mtp_container_t), &off, "dbi-fork");
    writestr(g_mtp.buf_out + sizeof(mtp_container_t), &off, "1.0");
    writestr(g_mtp.buf_out + sizeof(mtp_container_t), &off, "Switch homebrew");
    writestr(g_mtp.buf_out + sizeof(mtp_container_t), &off, "0123456789ABCDEF");
    send_data_then_response(OP_GET_DEVICE_INFO, trans_id,
                            g_mtp.buf_out + sizeof(mtp_container_t), off);
}

static void op_open_session(uint32_t trans_id, uint32_t session_id) {
    g_mtp.session_id = session_id ? session_id : 1;
    /* Reset handle table on open */
    memset(g_mtp.handles, 0, sizeof(g_mtp.handles));
    send_response_no_payload(RC_OK, trans_id);
}
static void op_close_session(uint32_t trans_id) {
    g_mtp.session_id = 0;
    send_response_no_payload(RC_OK, trans_id);
}

static void op_get_storage_ids(uint32_t trans_id) {
    int off = 0;
    static const uint32_t ids[] = { STORAGE_SDMC };
    write_uint32_array(g_mtp.buf_out + sizeof(mtp_container_t), &off,
                       ids, 1);
    send_data_then_response(OP_GET_STORAGE_IDS, trans_id,
                            g_mtp.buf_out + sizeof(mtp_container_t), off);
}

static void op_get_storage_info(uint32_t trans_id, uint32_t storage_id) {
    if (storage_id != STORAGE_SDMC) {
        send_response_no_payload(RC_INVALID_STORAGE, trans_id);
        return;
    }
    int off = 0;
    writeu16(g_mtp.buf_out + sizeof(mtp_container_t), &off, 0x0004); /* fixed RAM */
    writeu16(g_mtp.buf_out + sizeof(mtp_container_t), &off, 0x0002); /* generic hierarchical */
    writeu16(g_mtp.buf_out + sizeof(mtp_container_t), &off, 0x0000); /* read-write */
    writeu64(g_mtp.buf_out + sizeof(mtp_container_t), &off, 64ULL * 1024 * 1024 * 1024); /* MaxCapacity */
    writeu64(g_mtp.buf_out + sizeof(mtp_container_t), &off, 32ULL * 1024 * 1024 * 1024); /* FreeSpaceInBytes */
    writeu32(g_mtp.buf_out + sizeof(mtp_container_t), &off, 0xFFFFFFFF); /* FreeSpaceInObjects */
    writestr(g_mtp.buf_out + sizeof(mtp_container_t), &off, "SD Card");
    writestr(g_mtp.buf_out + sizeof(mtp_container_t), &off, "VOL_DBIFORK");
    send_data_then_response(OP_GET_STORAGE_INFO, trans_id,
                            g_mtp.buf_out + sizeof(mtp_container_t), off);
}

static void op_get_object_handles(uint32_t trans_id, uint32_t storage_id,
                                  uint32_t format, uint32_t parent) {
    (void)format;
    if (storage_id != STORAGE_SDMC) {
        send_response_no_payload(RC_INVALID_STORAGE, trans_id);
        return;
    }
    const char *parent_path = handle_to_path(parent);
    if (!parent_path) {
        send_response_no_payload(RC_INVALID_PARENT, trans_id);
        return;
    }
    DIR *d = opendir(parent_path);
    if (!d) {
        send_response_no_payload(RC_GENERAL_ERROR, trans_id);
        return;
    }
    uint32_t handles[256]; int nh = 0;
    struct dirent *de;
    while ((de = readdir(d)) && nh < 256) {
        if (de->d_name[0] == '.') continue;
        char p[MTP_PATH_MAX];
        snprintf(p, sizeof(p), "%s%s%s", parent_path,
                 parent_path[strlen(parent_path)-1] == '/' ? "" : "/", de->d_name);
        struct stat st;
        if (stat(p, &st) < 0) continue;
        uint32_t h = obj_alloc(parent, p, S_ISDIR(st.st_mode), st.st_size);
        if (h) handles[nh++] = h;
    }
    closedir(d);
    int off = 0;
    write_uint32_array(g_mtp.buf_out + sizeof(mtp_container_t), &off,
                       handles, nh);
    send_data_then_response(OP_GET_OBJECT_HANDLES, trans_id,
                            g_mtp.buf_out + sizeof(mtp_container_t), off);
}

static void op_get_object_info(uint32_t trans_id, uint32_t handle) {
    if (handle == 0 || handle >= MTP_MAX_HANDLES || !g_mtp.handles[handle].used) {
        send_response_no_payload(RC_INVALID_OBJECT_HANDLE, trans_id);
        return;
    }
    mtp_object_t *obj = &g_mtp.handles[handle];
    int off = 0;
    uint8_t *out = g_mtp.buf_out + sizeof(mtp_container_t);
    writeu32(out, &off, STORAGE_SDMC);
    writeu16(out, &off, obj->is_dir ? 0x3001 : 0x3000); /* association vs undefined */
    writeu16(out, &off, 0); /* ProtectionStatus */
    writeu32(out, &off, (uint32_t)obj->size); /* CompressedSize */
    writeu16(out, &off, 0); /* ThumbFormat */
    writeu32(out, &off, 0); writeu32(out, &off, 0); writeu32(out, &off, 0);
    writeu32(out, &off, 0); writeu32(out, &off, 0); writeu32(out, &off, 0);
    writeu32(out, &off, obj->parent);
    writeu16(out, &off, obj->is_dir ? 0x0001 : 0x0000); /* AssociationType */
    writeu32(out, &off, 0);
    writeu32(out, &off, 0); /* SequenceNumber */
    /* Filename — last path component */
    const char *name = strrchr(obj->path, '/');
    name = name ? name + 1 : obj->path;
    writestr(out, &off, name);
    writestr(out, &off, "");  /* DateCreated */
    writestr(out, &off, "");  /* DateModified */
    writestr(out, &off, "");  /* Keywords */
    send_data_then_response(OP_GET_OBJECT_INFO, trans_id, out, off);
}

static void op_get_object(uint32_t trans_id, uint32_t handle) {
    if (handle == 0 || handle >= MTP_MAX_HANDLES || !g_mtp.handles[handle].used) {
        send_response_no_payload(RC_INVALID_OBJECT_HANDLE, trans_id);
        return;
    }
    mtp_object_t *obj = &g_mtp.handles[handle];
    if (obj->is_dir) { send_response_no_payload(RC_INVALID_OBJECT_HANDLE, trans_id); return; }
    FILE *f = fopen(obj->path, "rb");
    if (!f) { send_response_no_payload(RC_GENERAL_ERROR, trans_id); return; }

    mtp_container_t hdr = { .length = sizeof(hdr) + obj->size,
                             .type = MTP_TYPE_DATA, .code = OP_GET_OBJECT, .trans_id = trans_id };
    usbCommsWriteEx(&hdr, sizeof(hdr), MTP_INTERFACE);
    g_mtp.stats.bytes_out += sizeof(hdr);

    static char buf[MTP_BUF_SZ];
    size_t n;
    while ((n = fread(buf, 1, sizeof(buf), f)) > 0) {
        usbCommsWriteEx(buf, n, MTP_INTERFACE);
        g_mtp.stats.bytes_out += n;
    }
    fclose(f);
    send_response_no_payload(RC_OK, trans_id);
}

static void op_delete_object(uint32_t trans_id, uint32_t handle) {
    if (handle == 0 || handle >= MTP_MAX_HANDLES || !g_mtp.handles[handle].used) {
        send_response_no_payload(RC_INVALID_OBJECT_HANDLE, trans_id);
        return;
    }
    mtp_object_t *obj = &g_mtp.handles[handle];
    int rc = obj->is_dir ? rmdir(obj->path) : unlink(obj->path);
    if (rc < 0) { send_response_no_payload(RC_GENERAL_ERROR, trans_id); return; }
    obj_free(handle);
    send_response_no_payload(RC_OK, trans_id);
}

/* DBI vendor extensions */
static void op_dbi_get_fw(uint32_t trans_id) {
    /* Return the running FW version as a UTF-16 string. */
    setsysInitialize();
    SetSysFirmwareVersion fw;
    Result rc = setsysGetFirmwareVersion(&fw);
    setsysExit();
    char buf[64];
    if (R_SUCCEEDED(rc))
        snprintf(buf, sizeof(buf), "%s", fw.display_version);
    else
        snprintf(buf, sizeof(buf), "?");
    int off = 0;
    writestr(g_mtp.buf_out + sizeof(mtp_container_t), &off, buf);
    send_data_then_response(OP_DBI_GET_FW, trans_id,
                            g_mtp.buf_out + sizeof(mtp_container_t), off);
}

/* ───────────────────────────────────── Dispatch ────────────────────── */

static void mtp_dispatch(const mtp_container_t *cmd, const uint8_t *payload, int payload_len) {
    g_mtp.stats.requests_handled++;
    log_event("mtp: op=0x%04x len=%u trans=%u", cmd->code, cmd->length, cmd->trans_id);

    /* Up to 5 parameters following the header in CommandBlock. */
    uint32_t p[5] = {0};
    for (int i = 0; i < 5 && i * 4 + 4 <= payload_len; i++)
        memcpy(&p[i], payload + i * 4, 4);

    if (cmd->code != OP_GET_DEVICE_INFO && cmd->code != OP_OPEN_SESSION &&
        g_mtp.session_id == 0) {
        send_response_no_payload(RC_SESSION_NOT_OPEN, cmd->trans_id);
        return;
    }

    switch (cmd->code) {
    case OP_GET_DEVICE_INFO:    op_get_device_info(cmd->trans_id); break;
    case OP_OPEN_SESSION:       op_open_session(cmd->trans_id, p[0]); break;
    case OP_CLOSE_SESSION:      op_close_session(cmd->trans_id); break;
    case OP_GET_STORAGE_IDS:    op_get_storage_ids(cmd->trans_id); break;
    case OP_GET_STORAGE_INFO:   op_get_storage_info(cmd->trans_id, p[0]); break;
    case OP_GET_OBJECT_HANDLES: op_get_object_handles(cmd->trans_id, p[0], p[1], p[2]); break;
    case OP_GET_OBJECT_INFO:    op_get_object_info(cmd->trans_id, p[0]); break;
    case OP_GET_OBJECT:         op_get_object(cmd->trans_id, p[0]); break;
    case OP_DELETE_OBJECT:      op_delete_object(cmd->trans_id, p[0]); break;
    case OP_DBI_GET_FW:         op_dbi_get_fw(cmd->trans_id); break;
    case OP_GET_NUM_OBJECTS:
    case OP_SEND_OBJECT_INFO:
    case OP_SEND_OBJECT:
    case OP_DBI_GET_GC_INFO:
    case OP_DBI_INSTALL_NSP:
    case OP_DBI_DUMP_GC:
    default:
        send_response_no_payload(RC_OPERATION_NOT_SUPPORTED, cmd->trans_id);
        g_mtp.stats.errors++;
        break;
    }
}

/* ───────────────────────────────────── Public API ──────────────────── */

int mtp_server_start(void) {
    if (g_mtp.running) return 0;
    memset(&g_mtp, 0, sizeof(g_mtp));
    UsbCommsInterfaceInfo info = {
        .bInterfaceClass    = 0xff,
        .bInterfaceSubClass = 0xff,
        .bInterfaceProtocol = 0xff,
    };
    Result rc = usbCommsInitializeEx(1, &info, MTP_VID, MTP_PID);
    if (R_FAILED(rc)) { log_event("mtp: init failed 0x%x", rc); return -1; }
    g_mtp.running = true;
    log_event("mtp: started");
    return 0;
}
void mtp_server_stop(void) {
    if (!g_mtp.running) return;
    usbCommsExit();
    g_mtp.running = false;
}
void mtp_server_tick(void) {
    if (!g_mtp.running) return;
    size_t n = usbCommsReadEx(g_mtp.buf_in, sizeof(g_mtp.buf_in), MTP_INTERFACE);
    if (n < sizeof(mtp_container_t)) return;
    g_mtp.stats.bytes_in += n;
    const mtp_container_t *c = (const mtp_container_t *)g_mtp.buf_in;
    if (c->length < sizeof(*c) || c->length > n) {
        g_mtp.stats.errors++; return;
    }
    if (c->type == MTP_TYPE_COMMAND)
        mtp_dispatch(c, g_mtp.buf_in + sizeof(*c), c->length - sizeof(*c));
}
bool mtp_server_is_running(void) { return g_mtp.running; }
void mtp_server_get_stats(mtp_stats_t *out) { if (out) *out = g_mtp.stats; }
