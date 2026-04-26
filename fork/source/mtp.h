/* DBI fork — MTP server.
 *
 * Reverse-engineered scope: REVERSE.md Part 31 (MTP server), 887
 * FINDINGS Parts 7/9/19 (MTP engine, opcode set, USB descriptor wiring).
 *
 * Implementation strategy:
 *   - Tear up libnx's `usbCommsInitializeEx` with the same VID/PID and
 *     interface descriptor upstream uses (VID 0x057E, PID 0x3000)
 *     to make existing PC-side MTP clients (Android File Transfer,
 *     Windows MTP, fuse-mtp) recognise the device.
 *   - Bulk endpoints 0x01 (OUT) + 0x81 (IN), interrupt 0x82.
 *   - Container header: u32 length, u16 type, u16 op, u32 trans_id,
 *     followed by op-specific payload.
 *   - Storage abstraction over fsdev: presents sdmc:/, system save
 *     paths, optionally cart contents.
 *   - Vendor extension for DBI-specific op-codes (0x9801..) covering
 *     things stock MTP can't do — install NSP from queue, get
 *     gamecard info, etc.
 */
#ifndef DBI_FORK_MTP_H
#define DBI_FORK_MTP_H

#include <stdint.h>
#include <stdbool.h>

#define MTP_VID    0x057E
#define MTP_PID    0x3000

int  mtp_server_start(void);
void mtp_server_stop(void);
void mtp_server_tick(void);
bool mtp_server_is_running(void);

typedef struct {
    uint64_t bytes_in;
    uint64_t bytes_out;
    uint32_t requests_handled;
    uint32_t errors;
} mtp_stats_t;

void mtp_server_get_stats(mtp_stats_t *out);

#endif /* DBI_FORK_MTP_H */
