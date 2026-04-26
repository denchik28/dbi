#pragma once

#include <stdint.h>
#include <stddef.h>

/* ANSI / CSI state machine. Mirrors the subset of FINDINGS Part 45 §45.1
 * gap 2 that the fork's ui.c actually emits:
 *   CSI n;m H     cursor-position (CUP)
 *   CSI n A/B/C/D cursor up/down/right/left (CUU/CUD/CUF/CUB)
 *   CSI n J       erase in display (0=to-end, 1=to-cursor, 2=whole)
 *   CSI n K       erase in line
 *   CSI n;...;n m SGR (0 reset, 1 bold, 30-37 fg, 39 default, 40-47 bg, 49 default)
 *   CSI s / CSI u save/restore cursor
 *
 * Extended-color SGR (38/48) currently maps to default palette — the fork
 * UI uses only the 3-bit palette so this is faithful.
 */

typedef enum {
    ANSI_NORMAL = 0,
    ANSI_ESC,
    ANSI_CSI,
} ansi_phase_t;

#define ANSI_MAX_PARAMS 8
#define ANSI_PARAM_BUF  32

typedef struct {
    ansi_phase_t phase;
    int  params[ANSI_MAX_PARAMS];
    int  nparams;
    char buf[ANSI_PARAM_BUF];
    int  buf_len;
} ansi_state_t;

static inline void ansi_reset(ansi_state_t *s) {
    s->phase = ANSI_NORMAL;
    s->nparams = 0;
    s->buf_len = 0;
}

/* Feed one decoded codepoint. Calls fb_console_* primitives as needed. */
void ansi_feed_cp(ansi_state_t *s, uint32_t cp);
