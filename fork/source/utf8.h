#pragma once

#include <stdint.h>
#include <stddef.h>

/* Streaming UTF-8 decoder mirroring DBI's inlined state machine
 * (FINDINGS Part 45 §45.1 gap 2).
 *
 * Lead-byte dispatch:
 *   0x00..0x7F : ASCII, emit directly
 *   0x80..0xBF : stray continuation -> emit 0x3F ('?')
 *   0xC0..0xDF : 2-byte start, acc = b & 0x1F, need 1 continuation
 *   0xE0..0xEF : 3-byte start, acc = b & 0x0F, need 2 continuations
 *   0xF0..0xF7 : 4-byte start, acc = b & 0x07, need 3 continuations
 *   0xF8..0xFF : illegal -> emit 0x3F
 * Continuation: each must be 0x80..0xBF else sequence collapses to 0x3F.
 */
typedef struct {
    uint8_t need;   /* continuation bytes still expected (0..3) */
    uint32_t acc;   /* partial codepoint */
} utf8_state_t;

static inline void utf8_reset(utf8_state_t *s) { s->need = 0; s->acc = 0; }

/* Feed one byte. If a full codepoint was produced, writes it to *out_cp
 * and returns 1. Otherwise returns 0 (still accumulating). */
int utf8_feed(utf8_state_t *s, uint8_t b, uint32_t *out_cp);
