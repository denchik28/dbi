#include "utf8.h"

int utf8_feed(utf8_state_t *s, uint8_t b, uint32_t *out_cp) {
    if (s->need == 0) {
        if (b < 0x80) {
            *out_cp = b;
            return 1;
        }
        if (b < 0xC0) {
            /* stray continuation */
            *out_cp = 0x3F;
            return 1;
        }
        if (b < 0xE0) { s->need = 1; s->acc = b & 0x1F; return 0; }
        if (b < 0xF0) { s->need = 2; s->acc = b & 0x0F; return 0; }
        if (b < 0xF8) { s->need = 3; s->acc = b & 0x07; return 0; }
        /* 0xF8..0xFF illegal */
        *out_cp = 0x3F;
        return 1;
    }

    /* Continuation expected. */
    if ((b & 0xC0) != 0x80) {
        /* Bad continuation: abort sequence and emit '?'. */
        s->need = 0;
        s->acc = 0;
        *out_cp = 0x3F;
        return 1;
    }
    s->acc = (s->acc << 6) | (b & 0x3F);
    s->need--;
    if (s->need == 0) {
        *out_cp = s->acc;
        s->acc = 0;
        return 1;
    }
    return 0;
}
