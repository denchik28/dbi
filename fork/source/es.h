#pragma once
#include <switch.h>

/* Minimal `es:` (eTicket) wrapper. Stock libnx exposes nothing —
 * switchbrew documents these IPC commands on the `es` service:
 *   cmd  1  ImportTicket
 *   cmd  9  CountCommonTicket           -> s32
 *   cmd 10  CountPersonalizedTicket     -> s32
 *   cmd 11  ListCommonTicket            (OutMapAlias, s32) -> s32 read
 *   cmd 12  ListPersonalizedTicket      (OutMapAlias, s32) -> s32 read
 *
 * Only stock-firmware-accessible entries are covered. The output
 * buffer for the list calls carries an array of FsRightsId (16 B each). */

Result esInitialize(void);
void   esExit(void);

Result esImportTicket(const void *tik, size_t tik_sz,
                      const void *cert, size_t cert_sz);

Result esCountCommonTicket(s32 *out_count);
Result esCountPersonalizedTicket(s32 *out_count);

/* `buf_sz` is the byte capacity of `buf`; `*out_count` receives how many
 * FsRightsId entries were actually written. */
Result esListCommonTicket(s32 *out_count, void *buf, s32 buf_sz);
Result esListPersonalizedTicket(s32 *out_count, void *buf, s32 buf_sz);
