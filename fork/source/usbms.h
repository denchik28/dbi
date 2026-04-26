#pragma once
#include <switch.h>
#include <stdint.h>
#include <stdbool.h>

/* USB Mass Storage (Bulk-Only Transport, SCSI transparent) for Switch.
 *
 * Upstream DBI exposes nine LUNs — SD/NAND/BCAT/User/Host/Data/Fake/Sony/Cache
 * (FINDINGS Part 38.1). This fork ships a smaller surface: two stock-libnx
 * backends (BIS System and BIS User) via `fsOpenBisStorage`.
 *
 * Limitations of the current drop:
 *  - Uses libnx `usbComms` for bulk IN/OUT; the BOT class-specific control
 *    requests (Bulk-Only Mass Storage Reset 0xFF / Get Max LUN 0xFE) are
 *    NOT handled. Most Linux/macOS hosts tolerate a missing Get Max LUN
 *    (default to single-LUN), but Windows will likely refuse the device
 *    until we migrate to the low-level usbDs path.
 *  - Runs a single worker thread. Stop by calling `usbms_stop`, which
 *    tears down usbComms so the bulk reads unblock with a 0 return. */

#define USBMS_BLOCK_SIZE   512u
#define USBMS_MAX_LUNS     9u

typedef struct {
    const char *vendor_id;    /* 8 bytes for INQUIRY, space-padded */
    const char *product_id;   /* 16 bytes for INQUIRY, space-padded */
    const char *revision;     /* 4 bytes for INQUIRY, space-padded */
    bool        writable;
    uint64_t    block_count;  /* total blocks of USBMS_BLOCK_SIZE each */

    /* Read `count` blocks starting at `lba` into `buf`. */
    Result (*read_blocks) (void *ctx, uint64_t lba, uint32_t count, void *buf);
    /* Write `count` blocks starting at `lba` from `buf`. NULL = read-only. */
    Result (*write_blocks)(void *ctx, uint64_t lba, uint32_t count, const void *buf);

    void *ctx;
} usbms_lun_t;

/* Stock-libnx LUN providers. Each fills in one `usbms_lun_t`.
 * Mapping to FINDINGS Part 38.1's 9-slot table (SD slot is NOT implemented
 * here — it needs a separate filesystem-backed block device): */
Result usbms_lun_bis_system(usbms_lun_t *out);        /* "System"    — BIS System */
Result usbms_lun_bis_user  (usbms_lun_t *out);        /* "User"      — BIS User */
Result usbms_lun_bis_safe  (usbms_lun_t *out);        /* "Safe"      — BIS SafeMode */
Result usbms_lun_bis_cal0  (usbms_lun_t *out);        /* "Prodinfo"  — CalibrationBinary */
Result usbms_lun_bis_calf  (usbms_lun_t *out);        /* "ProdinfoF" — CalibrationFile */
Result usbms_lun_bis_boot0 (usbms_lun_t *out);        /* "Boot0"     — BootPartition1Root */
Result usbms_lun_bis_boot1 (usbms_lun_t *out);        /* "Boot1"     — BootPartition2Root */
Result usbms_lun_bis_pkg2  (usbms_lun_t *out);        /* "Pkg2"      — BootConfigAndPackage2Part1 */

/* File-backed LUN: exposes `path` as a raw block device over USB-MS.
 * Useful for building custom images (e.g. a FAT-formatted blob on SD that
 * the host formats + populates via Explorer). If `writable` is true and
 * the file can be opened for read+write, SCSI WRITE commands are honored. */
Result usbms_lun_file(usbms_lun_t *out, const char *path, bool writable,
                      const char *product_label);

/* Tear down a LUN's underlying handle (closes FsStorage etc.). Safe
 * to call on a zeroed struct. */
void usbms_lun_close(usbms_lun_t *lun);

/* Start the mass-storage endpoint. `luns` is a pointer to an array of
 * usbms_lun_t of length `n_luns` (max USBMS_MAX_LUNS). The array must
 * outlive the session. Spawns a worker thread. */
Result usbms_start(const usbms_lun_t *luns, uint32_t n_luns);

/* Stop the worker and release usbComms. */
void usbms_stop(void);

bool usbms_is_running(void);

/* Stats for the UI status pane. */
typedef struct {
    uint64_t cbw_count;
    uint64_t bytes_read;
    uint64_t bytes_written;
    uint64_t last_opcode;
    char     last_err[96];
} usbms_stats_t;

void usbms_get_stats(usbms_stats_t *out);
