#include "ansi.h"
#include "fb_console.h"

#include <string.h>
#include <stdlib.h>

static void flush_param(ansi_state_t *s) {
    if (s->nparams < ANSI_MAX_PARAMS) {
        if (s->buf_len == 0) {
            s->params[s->nparams++] = 0;   /* empty -> 0 */
        } else {
            s->buf[s->buf_len] = 0;
            s->params[s->nparams++] = atoi(s->buf);
        }
    }
    s->buf_len = 0;
}

static int param_or(ansi_state_t *s, int idx, int dflt) {
    if (idx >= s->nparams) return dflt;
    int v = s->params[idx];
    return v == 0 ? dflt : v;
}

static void dispatch_csi(ansi_state_t *s, uint32_t final) {
    flush_param(s);
    switch (final) {
    case 'A': fb_console_cursor_rel(0, -param_or(s, 0, 1)); break;
    case 'B': fb_console_cursor_rel(0,  param_or(s, 0, 1)); break;
    case 'C': fb_console_cursor_rel( param_or(s, 0, 1), 0); break;
    case 'D': fb_console_cursor_rel(-param_or(s, 0, 1), 0); break;
    case 'H':
    case 'f': {
        int row = param_or(s, 0, 1) - 1;
        int col = param_or(s, 1, 1) - 1;
        fb_console_cursor_to(col, row);
        break;
    }
    case 'J': fb_console_erase_display(s->nparams ? s->params[0] : 0); break;
    case 'K': fb_console_erase_line   (s->nparams ? s->params[0] : 0); break;
    case 's': fb_console_save_cursor(); break;
    case 'u': fb_console_restore_cursor(); break;
    case 'm': {
        if (s->nparams == 0) { fb_console_reset_sgr(); break; }
        for (int i = 0; i < s->nparams; i++) {
            int p = s->params[i];
            if (p == 0) { fb_console_reset_sgr(); }
            else if (p >= 30 && p <= 37) fb_console_set_fg_index(p - 30);
            else if (p == 39) fb_console_set_fg_index(-1);
            else if (p >= 40 && p <= 47) fb_console_set_bg_index(p - 40);
            else if (p == 49) fb_console_set_bg_index(-1);
            /* 1 bold, 4 underline, 38 ext-fg, 48 ext-bg: ignored (no impact on fork UI) */
            else if (p == 38 || p == 48) {
                /* Skip ext-color subparams: `5;N` or `2;R;G;B`. */
                if (i + 1 < s->nparams && s->params[i + 1] == 5) i += 2;
                else if (i + 1 < s->nparams && s->params[i + 1] == 2) i += 4;
                else i += 1;
            }
        }
        break;
    }
    default:
        /* unknown final — swallow silently */
        break;
    }
    s->phase = ANSI_NORMAL;
    s->nparams = 0;
    s->buf_len = 0;
}

void ansi_feed_cp(ansi_state_t *s, uint32_t cp) {
    switch (s->phase) {
    case ANSI_NORMAL:
        if (cp == 0x1B) { s->phase = ANSI_ESC; return; }
        fb_console_emit_cp(cp);
        return;
    case ANSI_ESC:
        if (cp == '[') { s->phase = ANSI_CSI; s->nparams = 0; s->buf_len = 0; return; }
        /* Unknown ESC sequence — bail back to normal, emit nothing. */
        s->phase = ANSI_NORMAL;
        return;
    case ANSI_CSI:
        if (cp >= '0' && cp <= '9') {
            if (s->buf_len < ANSI_PARAM_BUF - 1) s->buf[s->buf_len++] = (char)cp;
            return;
        }
        if (cp == ';') { flush_param(s); return; }
        /* Private/intermediate bytes ? @ etc. we ignore; anything in 0x40..0x7E
         * counts as the final byte. */
        if (cp >= 0x40 && cp <= 0x7E) {
            dispatch_csi(s, cp);
            return;
        }
        /* Other bytes (e.g. stray control) abort the sequence. */
        s->phase = ANSI_NORMAL;
        s->nparams = 0;
        s->buf_len = 0;
        return;
    }
}
