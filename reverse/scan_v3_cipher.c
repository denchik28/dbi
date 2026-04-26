/* Bulk decode of DBI 891 with cipher v3 (XOR+counter+cumsum). Filter for KOI8-R Russian. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#define MAX_KEYS 10000
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
    fprintf(stderr, "%d keys, %ld bytes\n", n_keys, sz);

    /* Scan rodata (0x837000 .. 0xadb000) for v3-decryptable text */
    long ro_start = 0x837000;
    long ro_end = 0xadb000;
    int hits = 0;
    int max_print_len = 40;
    
    for (int ki = 0; ki < n_keys; ki++) {
        uint8_t kb[8];
        for (int j = 0; j < 8; j++) kb[j] = (keys[ki] >> (j*8)) & 0xff;
        
        for (long off = ro_start; off < ro_end - 16; off++) {
            /* Decode 16-32 bytes with v3 cipher */
            uint8_t pt[40];
            int run = 0;
            int koi_chars = 0;  /* count Cyrillic KOI8-R chars (0xc0-0xff) */
            int ascii_chars = 0;
            int has_punct = 0;
            uint8_t prev = 0;
            for (int i = 0; i < 32; i++) {
                uint8_t c = data[off + i];
                uint8_t k = kb[i & 7];
                uint8_t ctr = (i >> 3) & 0xff;
                uint8_t tmp = c ^ ((k + ctr) & 0xff);
                /* cumsum */
                uint8_t v = (i == 0) ? tmp : (uint8_t)(tmp + prev);
                pt[i] = v;
                prev = v;
                /* Check classification */
                if (v == 0) {
                    if (i >= 6 && (koi_chars >= 4 || ascii_chars >= 4)) {
                        run = i;
                        break;
                    } else {
                        run = 0; break;
                    }
                }
                if (v >= 0xc0 && v != 0xff) koi_chars++;
                else if ((v >= 'A' && v <= 'Z') || (v >= 'a' && v <= 'z')) ascii_chars++;
                else if (v == ' ' || v == ':' || v == '-' || v == '/' || v == '.' || v == ',') has_punct = 1;
                else if (v == 0xff || v < 0x20) { run = 0; break; }
                run = i + 1;
            }
            if (run >= 8 && (koi_chars >= 6 || ascii_chars >= 6)) {
                printf("@ 0x%08lx  key=0x%016lx  run=%d  ", off, keys[ki], run);
                fwrite(pt, 1, run, stdout);
                printf("\n");
                hits++;
                if (hits > 3000) break;
            }
        }
        if (hits > 3000) break;
        if (ki % 200 == 0) fprintf(stderr, "  key %d/%d hits=%d\n", ki, n_keys, hits);
    }
    fprintf(stderr, "Total hits: %d\n", hits);
    return 0;
}
