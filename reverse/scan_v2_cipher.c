/* Cipher v2 (XOR + per-byte ROR by key&7) bulk decoder for DBI 846+.
   Filters for ASCII English-leaning plaintext (printable, has letters,
   has space or punctuation). Mirrors scan_v3_cipher.c structure. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#define MAX_KEYS 20000
static uint64_t keys[MAX_KEYS]; static int n_keys = 0;

static void load_keys(const char *path) {
    FILE *f = fopen(path, "r");
    char line[256]; if(!fgets(line, sizeof(line), f)){};
    while (fgets(line, sizeof(line), f)) {
        char *tab = strchr(line, '\t');
        if (tab) keys[n_keys++] = strtoull(tab+1, NULL, 0);
    }
    fclose(f);
    int u = 0;
    for (int i = 0; i < n_keys; i++) {
        int dup = 0;
        for (int j = 0; j < u; j++) if (keys[j] == keys[i]) { dup = 1; break; }
        if (!dup) keys[u++] = keys[i];
    }
    n_keys = u;
}

int main(int argc, char **argv) {
    FILE *f = fopen(argv[1], "rb");
    fseek(f, 0, SEEK_END); long sz = ftell(f); fseek(f, 0, SEEK_SET);
    uint8_t *data = malloc(sz); if(!fread(data, 1, sz, f)){}; fclose(f);
    load_keys(argv[2]);
    fprintf(stderr, "%d unique keys, %ld bytes\n", n_keys, sz);

    long ro_start = 0x837000;
    long ro_end   = 0xadb000;
    int hits = 0;

    printf("offset\tkey\trun\ttext\n");

    for (int ki = 0; ki < n_keys; ki++) {
        uint64_t k64 = keys[ki];
        uint8_t kb[8];
        uint8_t rot[8];
        for (int j = 0; j < 8; j++) {
            kb[j] = (k64 >> (j*8)) & 0xff;
            rot[j] = kb[j] & 7;
        }

        for (long off = ro_start; off < ro_end - 64; off++) {
            uint8_t pt[80];
            int run = 0;
            int alpha = 0;
            int has_space = 0;
            int has_punct = 0;
            uint32_t alpha_set = 0;
            int valid = 1;

            for (int i = 0; i < 64; i++) {
                uint8_t c = data[off + i];
                uint8_t kk = kb[i & 7];
                uint8_t v = c ^ kk;
                uint8_t r = rot[i & 7];
                if (r) v = (uint8_t)((v >> r) | (v << (8 - r)));

                if (v == 0) { run = i; break; }

                if (v < 0x20 || v >= 0x7f) { valid = 0; break; }

                pt[i] = v;
                if ((v >= 'A' && v <= 'Z') || (v >= 'a' && v <= 'z')) {
                    alpha++;
                    alpha_set |= 1u << (v & 0x1f);
                }
                if (v == 0x20) has_space = 1;
                if (v == ':' || v == '-' || v == '.' || v == ',' || v == '!' || v == '?' ||
                    v == '{' || v == '}' || v == '%' || v == '/') has_punct = 1;
                run = i + 1;
            }

            if (valid && run >= 8 && alpha >= 6 && (has_space || has_punct)) {
                int uniq = __builtin_popcount(alpha_set);
                if (uniq >= 4) {
                    printf("0x%08lx\t0x%016lx\t%d\t", off, k64, run);
                    fwrite(pt, 1, run, stdout);
                    printf("\n");
                    hits++;
                }
            }
        }
        if (ki % 200 == 0) fprintf(stderr, "  key %d/%d hits=%d\n", ki, n_keys, hits);
    }
    fprintf(stderr, "Total hits: %d\n", hits);
    return 0;
}
