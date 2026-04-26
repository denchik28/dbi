/* Cipher v3 Russian-language brute-force decoder for DBI 891.
 *
 * For each (key, .rodata offset) pair, decrypt 12 bytes and accept iff:
 *   - all bytes are KOI8-R Cyrillic (0xc0..0xfe) or printable ASCII or NUL
 *   - bigram score (sum of common Russian KOI8-R bigrams in the result)
 *     is at least 1
 *   - vowel ratio is ~30..60 % (real Russian sits in this band)
 *
 * Then extend to up to 64 bytes following the cipher v3 spec (key + counter
 * for blocks i>=8) and emit if the extension keeps the language signature.
 *
 * This is much stricter than scan_v3_strict.c, which only required that
 * every byte sit in the KOI8-R range. The bigram-score filter rejects the
 * cumsum-noise that the byte-range filter misses. Still imperfect — best
 * combined with .text xref evidence.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

#define MAX_KEYS 20000
static uint64_t keys[MAX_KEYS];
static int n_keys = 0;

/* Common Russian bigrams (KOI8-R, lowercase): ст то ть на ра по пр ов ог
 * ан ск ат ач ер ва ли но не ом ли ме оп ил ря ие ие ла */
static const uint16_t BIGRAMS[] = {
    0xd4d3, 0xcfd4, 0xd8d4, 0xc1ce, 0xc1d2, 0xcfd0, 0xd2d0, 0xd7cf, 0xc7cf,
    0xced1, 0xcbd3, 0xd4c1, 0xdec1, 0xd2c5, 0xc1d7, 0xc9cc, 0xcfce, 0xc5ce,
    0xcdcf, 0xc9cc, 0xc5cd, 0xd0cf, 0xcbcf, 0xc5cb, 0xc1cc, 0xcdce, 0xcec5,
    0xc1cd, 0xcfcd, 0xd1cd,
    /* mixed-case (capital + lowercase) */
    0xefd4, 0xefd1, 0xeed5, 0xefce, 0xf3cf, 0xefce, 0xf2c1, 0xf4cf, 0xefce,
    /* Russian punctuation/space combos — space + Russian letter */
    0xc1d4, 0xc5ce, 0xc9d3, 0xcfd2, 0xd0d2,
};
#define N_BIGRAMS (sizeof(BIGRAMS) / sizeof(BIGRAMS[0]))

/* Russian vowels (lowercase + uppercase) in KOI8-R */
static int is_vowel(uint8_t b) {
    static const unsigned char V[] = {
        0xc1,0xc5,0xc9,0xcf,0xd5,0xd9,0xc0,0xd1,0xc7, /* а е и о у ы ю я */
        0xe1,0xe5,0xe9,0xef,0xf5,0xf9,0xe0,0xf1,0xe7, /* А Е И О У Ы Ю Я */
        0xa3,0xb3, /* ё Ё */
    };
    for (size_t i = 0; i < sizeof(V); i++) if (V[i] == b) return 1;
    return 0;
}
static int is_cyr(uint8_t b) { return b >= 0xc0 && b != 0xff; }

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

static int score_bigrams(const uint8_t *pt, int n) {
    int score = 0;
    for (int i = 0; i < n - 1; i++) {
        uint16_t bg = ((uint16_t)pt[i] << 8) | pt[i+1];
        for (int j = 0; j < (int)N_BIGRAMS; j++) {
            if (BIGRAMS[j] == bg) { score++; break; }
        }
    }
    return score;
}

int main(int argc, char **argv) {
    setvbuf(stdout, NULL, _IOLBF, 0);

    FILE *f = fopen(argv[1], "rb");
    fseek(f, 0, SEEK_END); long sz = ftell(f); fseek(f, 0, SEEK_SET);
    uint8_t *data = malloc(sz); if(!fread(data, 1, sz, f)){}; fclose(f);
    load_keys(argv[2]);
    fprintf(stderr, "%d unique keys, %ld bytes\n", n_keys, sz);

    long ro_start = 0x837000;
    long ro_end   = 0xadb000;
    int hits = 0;

    printf("offset\tkey\trun\thex_pt\thex_ct\n");

    for (int ki = 0; ki < n_keys; ki++) {
        uint64_t k64 = keys[ki];
        uint8_t kb[8];
        for (int j = 0; j < 8; j++) kb[j] = (k64 >> (j*8)) & 0xff;

        for (long off = ro_start; off < ro_end - 64; off++) {
            uint8_t pt[12];
            uint8_t prev = 0;
            int run = 12;
            int valid = 1;
            int vowels = 0;
            int cyr_count = 0;

            /* Decode 12 bytes */
            for (int i = 0; i < 12; i++) {
                uint8_t c = data[off + i];
                uint8_t k = kb[i & 7];
                uint8_t ctr = (i >> 3) & 0xff;
                uint8_t tmp = c ^ ((k + ctr) & 0xff);
                uint8_t v = (i == 0) ? tmp : (uint8_t)(tmp + prev);
                if (v == 0) { run = i; break; }
                if (!is_cyr(v) && !(v >= 0x20 && v < 0x7f)) { valid = 0; break; }
                pt[i] = v;
                prev = v;
                if (is_vowel(v)) vowels++;
                if (is_cyr(v)) cyr_count++;
            }
            if (!valid) continue;
            if (run < 5) continue;
            if (cyr_count < 3) continue;

            /* Vowel ratio in real Russian: ~25-50 %; reject extremes */
            int total = run < 12 ? run : 12;
            if (vowels * 100 / total < 20) continue;
            if (vowels * 100 / total > 65) continue;

            /* Bigram score: must have at least one common bigram */
            int bg = score_bigrams(pt, total);
            if (bg < 1) continue;

            /* Extend up to 64 bytes */
            uint8_t pt2[80];
            memcpy(pt2, pt, run);
            int ext = run;
            for (int i = run; i < 64 && i < 80; i++) {
                uint8_t c = data[off + i];
                uint8_t k = kb[i & 7];
                uint8_t ctr = (i >> 3) & 0xff;
                uint8_t tmp = c ^ ((k + ctr) & 0xff);
                uint8_t v = (uint8_t)(tmp + pt2[i-1]);
                if (v == 0) break;
                if (!(is_cyr(v) || (v >= 0x20 && v < 0x7f))) break;
                pt2[i] = v;
                ext = i + 1;
            }

            printf("0x%08lx\t0x%016lx\t%d\t", off, k64, ext);
            for (int i = 0; i < ext; i++) printf("%02x", pt2[i]);
            printf("\t");
            for (int i = 0; i < ext; i++) printf("%02x", data[off + i]);
            printf("\n");
            fflush(stdout);
            hits++;
        }
        if (ki % 200 == 0) {
            fprintf(stderr, "  key %d/%d hits=%d\n", ki, n_keys, hits);
        }
    }
    fprintf(stderr, "Total hits: %d\n", hits);
    return 0;
}
