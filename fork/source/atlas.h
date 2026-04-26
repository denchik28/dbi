#pragma once

#include <stdint.h>
#include "fb_console.h"

/* Decoded atlas: 65 536 x 32 B/glyph = 2 MiB.
 * Bitmap layout per 32-B slot (see FINDINGS Part 45 §45.3):
 *   atlas[cp*0x20 + 0x00] : u64 LE — rows 0..3 packed
 *   atlas[cp*0x20 + 0x08] : u64 LE — rows 4..7
 *   atlas[cp*0x20 + 0x10] : u64 LE — rows 8..11
 *   atlas[cp*0x20 + 0x18] : u64 LE — rows 12..15
 * Within each u64 row-quad: top 16 bits = row 0, next 16 = row 1, etc.
 * Within each row: bit 15 (MSB) = leftmost pixel.
 * Index = raw Unicode codepoint (no LUT). max_glyph = 0xFFFF.
 */
#define ATLAS_GLYPHS    65536
#define ATLAS_BYTES     (ATLAS_GLYPHS * 32)

int  atlas_load(void);           /* decompresses embedded zstd blob to heap */
void atlas_unload(void);

/* Blit one glyph into a 32-bpp linear framebuffer.
 * stride_px is the pitch in pixels (so fb[y*stride_px + x]). */
void atlas_blit(uint32_t *fb, uint32_t stride_px,
                int px, int py,
                uint32_t codepoint,
                rgba_t fg, rgba_t bg);
