#pragma once
#include <switch.h>
#include <stdint.h>
#include <stdbool.h>

/* Upstream-parity gamecard probe.
 *
 * DBI 887-ru reaches the XCI header through:
 *   fsDeviceOperatorGetGameCardHandle (cmd 202 on IDeviceOperator)
 *   fsOpenGameCardStorage             (cmd  30 on IFileSystemProxy, partition=1)
 *   fsStorageRead                     (IStorage cmd 0, offset 0, 0x200 bytes)
 *
 * Stock libnx 4.12.0 does NOT export fsOpenGameCardStorage, so the fork
 * dispatches cmd 30 itself via fsGetServiceSession(); everything else is
 * stock libnx. The XCI header layout (see nxdumptool/GameCardHeader):
 *
 *   0x100  u32  magic                     = 'HEAD' (0x44414548 LE)
 *   0x10C  u8   key_index
 *   0x10D  u8   rom_size                  enum (0xFA=1G, 0xF8=2G, 0xF0=4G, 0xE0=8G, 0xE1=16G, 0xE2=32G)
 *   0x10E  u8   card_header_version
 *   0x10F  u8   card_flags
 *   0x110  u64  package_id
 *   0x118  u32  valid_data_end_address    ×0x200 sectors
 */

#define GC_ID_SET_SIZE   0x30  /* 3 × 0x10 per switchbrew GameCardIdSet */

typedef struct {
    bool     inserted;
    uint8_t  attribute;                  /* FsGameCardAttribute byte (AutoBoot/HistoryErase/RepairTool) */
    uint8_t  id_set[GC_ID_SET_SIZE];     /* id1/id2/id3 — unique per cartridge */

    /* XCI header, populated iff header_ok = true */
    bool     header_ok;
    uint32_t magic;                      /* 'HEAD' if the card is an XCI */
    uint8_t  key_index;
    uint8_t  rom_size;
    uint8_t  card_header_version;
    uint8_t  card_flags;
    uint64_t package_id;
    uint32_t valid_data_end_address;     /* in 0x200 sectors */
    uint64_t used_bytes;                 /* valid_data_end_address * 0x200 */
    uint64_t capacity_bytes;             /* decoded from rom_size enum, 0 if unknown */

    char     error[96];
} gamecard_info_t;

/* Probe the slot. Returns Result of the last critical call
 * (0 = ok / no card / header-read failed gracefully). */
Result gamecard_probe(gamecard_info_t *out);

/* Progress callback for long-running dump ops. `done` and `total` are in
 * bytes. Returning non-zero aborts the dump. */
typedef int (*gamecard_progress_cb_t)(uint64_t done, uint64_t total, void *ctx);

/* Dump partition=1 (the data / secure partition — what nxdumptool calls the
 * "Root HFS0") of the inserted cartridge into `out_path`. Streams 1 MB at a
 * time through fsStorageRead so peak memory stays bounded. If
 * `valid_only` is true, only the header's `valid_data_end_address` range is
 * read (typical for "trimmed XCI"); otherwise the full `capacity_bytes`.
 * Returns 0 on success. */
Result gamecard_dump_xci(const char *out_path, bool valid_only,
                         gamecard_progress_cb_t cb, void *cb_ctx);
