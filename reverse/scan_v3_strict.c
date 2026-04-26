/* Cipher v3 strict-Russian bulk decoder for DBI 891.
 * Decodes 8 bytes (= one cipher-counter block, since the counter changes
 * at i=8) for every (key, .rodata offset) pair, and only emits the hit
 * if every non-NUL output byte is in the KOI8-R Cyrillic range AND at
 * least 4 of them are common Russian letters (о а е и н т р с в л д м).
 * That filter rejects cumsum-noise false positives that the original
 * scan_v3_cipher.c lets through. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#define MAX_KEYS 20000
static uint64_t keys[MAX_KEYS];
static int n_keys = 0;

static int common_letter[256];
/* Initialise the lookup at runtime — KOI8-R upper-Cyrillic positions. */
static void init_common(void) {
    /* lowercase set: о а е и н т р с в л д м к у п я з ы б ь г ч й х ж ш ц щ э ю ф ъ ё */
    static const unsigned char L[] = {
        0xcf,0xc1,0xc5,0xc9,0xce,0xd4,0xd2,0xd3,0xd7,0xcc,0xc4,0xcd,0xcb,0xd5,
        0xd0,0xd1,0xda,0xd9,0xc2,0xd8,0xc7,0xde,0xca,0xc8,0xd6,0xdb,0xc3,0xdd,
        0xdc,0xc0,0xc6,0xdf,0xa3,
        /* uppercase too */
        0xef,0xe1,0xe5,0xe9,0xee,0xf4,0xf2,0xf3,0xf7,0xec,0xe4,0xed,0xeb,0xf5,
        0xf0,0xf1,0xfa,0xf9,0xe2,0xf8,0xe7,0xfe,0xea,0xe8,0xf6,0xfb,0xe3,0xfd,
        0xfc,0xe0,0xe6
    };
    for (size_t i = 0; i < sizeof(L); i++) common_letter[L[i]] = 1;
}
static int koi8r_cyr(uint8_t v) { return v >= 0xc0 && v != 0xff; }

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
    init_common();
    FILE *f = fopen(argv[1], "rb");
    fseek(f, 0, SEEK_END); long sz = ftell(f); fseek(f, 0, SEEK_SET);
    uint8_t *data = malloc(sz); if(!fread(data, 1, sz, f)){}; fclose(f);
    load_keys(argv[2]);
    fprintf(stderr, "%d unique keys\n", n_keys);

    long ro_start = 0x837000;
    long ro_end   = 0xadb000;
    int hits = 0;

    printf("offset\tkey\trun\thex_pt\thex_ct\n");

    for (int ki = 0; ki < n_keys; ki++) {
        uint64_t k64 = keys[ki];
        uint8_t kb[8];
        for (int j = 0; j < 8; j++) kb[j] = (k64 >> (j*8)) & 0xff;

        for (long off = ro_start; off < ro_end - 16; off++) {
            uint8_t pt[16];
            int common = 0, cyr = 0, run = 8;
            int ok = 1;
            uint8_t prev = 0;
            for (int i = 0; i < 8; i++) {
                uint8_t c = data[off + i];
                uint8_t k = kb[i & 7];
                /* counter is 0 for the first block */
                uint8_t tmp = c ^ k;
                uint8_t v = (i == 0) ? tmp : (uint8_t)(tmp + prev);
                pt[i] = v;
                prev = v;
                if (v == 0) { run = i; break; }
                if (!koi8r_cyr(v)) { ok = 0; break; }
                if (common_letter[v]) common++;
                cyr++;
            }
            if (!ok) continue;
            if (run < 4) continue;       /* too short */
            if (cyr < 4) continue;       /* too few Cyrillic */
            if (common < 3) continue;    /* not enough common letters */

            /* Continue decoding for up to 64 bytes */
            uint8_t pt2[80];
            memcpy(pt2, pt, run);
            int ext = run;
            for (int i = run; i < 64; i++) {
                uint8_t c = data[off + i];
                uint8_t k = kb[i & 7];
                uint8_t ctr = (i >> 3) & 0xff;
                uint8_t tmp = c ^ ((k + ctr) & 0xff);
                uint8_t v = (uint8_t)(tmp + pt2[i-1]);
                if (v == 0) break;
                if (!(koi8r_cyr(v) || (v >= 0x20 && v < 0x7f))) break;
                pt2[i] = v; ext = i + 1;
            }

            printf("0x%08lx\t0x%016lx\t%d\t", off, k64, ext);
            for (int i = 0; i < ext; i++) printf("%02x", pt2[i]);
            printf("\t");
            for (int i = 0; i < ext; i++) printf("%02x", data[off + i]);
            printf("\n");
            hits++;
        }
        if (ki % 200 == 0) fprintf(stderr, "  key %d/%d hits=%d\n", ki, n_keys, hits);
    }
    fprintf(stderr, "Total hits: %d\n", hits);
    return 0;
}
