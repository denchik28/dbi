#include "atlas.h"

#include <stdlib.h>
#include <string.h>
#include <zstd.h>

/* data/font.bin is the zstd-compressed 2 MiB BMP font atlas extracted
 * verbatim from DBI 887 (.rodata at VA 0x71008d6b00, size 0x9116b).
 * bin2o embeds it as symbols font_bin[] / font_bin_size. */
#include "font_bin.h"
#include "log.h"

static uint8_t *g_atlas = NULL;

int atlas_load(void) {
    if (g_atlas) return 0;
    g_atlas = (uint8_t *)malloc(ATLAS_BYTES);
    if (!g_atlas) {
        log_event("atlas_load: malloc(%u) failed", (unsigned)ATLAS_BYTES);
        return -1;
    }
    size_t n = ZSTD_decompress(g_atlas, ATLAS_BYTES, font_bin, font_bin_size);
    if (ZSTD_isError(n) || n != ATLAS_BYTES) {
        log_event("atlas_load: zstd decompress -> %zu (err=%d)", n, (int)ZSTD_isError(n));
        free(g_atlas); g_atlas = NULL;
        return -2;
    }
    log_event("atlas_load: ok, 2 MiB decoded from %u bytes", (unsigned)font_bin_size);
    return 0;
}

void atlas_unload(void) {
    if (g_atlas) { free(g_atlas); g_atlas = NULL; }
}

void atlas_blit(uint32_t *fb, uint32_t stride_px,
                int px, int py,
                uint32_t codepoint,
                rgba_t fg, rgba_t bg)
{
    if (!g_atlas) return;

    /* ctx->max_glyph = 0xFFFF in upstream — mask to 16 bits. */
    uint32_t cp = codepoint & 0xFFFFu;

    const uint8_t *slot = g_atlas + (size_t)cp * 32u;
    uint64_t q0, q1, q2, q3;
    memcpy(&q0, slot + 0x00, 8);
    memcpy(&q1, slot + 0x08, 8);
    memcpy(&q2, slot + 0x10, 8);
    memcpy(&q3, slot + 0x18, 8);

    /* Unpack: top 16 bits of each u64 = lowest-index row. */
    uint16_t rows[16];
    rows[0]  = (uint16_t)(q0 >> 48);
    rows[1]  = (uint16_t)(q0 >> 32);
    rows[2]  = (uint16_t)(q0 >> 16);
    rows[3]  = (uint16_t)(q0);
    rows[4]  = (uint16_t)(q1 >> 48);
    rows[5]  = (uint16_t)(q1 >> 32);
    rows[6]  = (uint16_t)(q1 >> 16);
    rows[7]  = (uint16_t)(q1);
    rows[8]  = (uint16_t)(q2 >> 48);
    rows[9]  = (uint16_t)(q2 >> 32);
    rows[10] = (uint16_t)(q2 >> 16);
    rows[11] = (uint16_t)(q2);
    rows[12] = (uint16_t)(q3 >> 48);
    rows[13] = (uint16_t)(q3 >> 32);
    rows[14] = (uint16_t)(q3 >> 16);
    rows[15] = (uint16_t)(q3);

    for (int y = 0; y < 16; y++) {
        uint32_t *line = fb + (size_t)(py + y) * stride_px + px;
        uint16_t r = rows[y];
        for (int x = 0; x < 16; x++) {
            /* bit 15 = leftmost pixel */
            line[x] = (r & (uint16_t)(0x8000u >> x)) ? fg : bg;
        }
    }
}
