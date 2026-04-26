/* DBI fork — FictionBook (FB2) reader.
 *
 * Optional feature mirroring upstream's bundled FB2 reader (REVERSE.md
 * Part 41 / 887 FINDINGS Part 30). Reads FB2 / FB2.zip archives from
 * sdmc:/switch/DBI/books/ and renders pages on the framebuffer
 * console.
 */
#ifndef DBI_FORK_FB2_READER_H
#define DBI_FORK_FB2_READER_H

#include <stdbool.h>

int  fb2_reader_init(void);
void fb2_reader_exit(void);

/* Open / close a book. */
int  fb2_reader_open(const char *path);
void fb2_reader_close(void);

/* Page navigation. */
void fb2_reader_next_page(void);
void fb2_reader_prev_page(void);

/* Render the current page (called from UI tick). */
void fb2_reader_render(void);

bool fb2_reader_is_active(void);

#endif /* DBI_FORK_FB2_READER_H */
