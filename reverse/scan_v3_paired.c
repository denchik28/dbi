/* Cipher v3 paired scanner: for each (key, length) pair found by the
 * .text-walker (scan_v3_xref.py), brute-force across .rodata to find the
 * best-matching offset where decryption produces real Russian.
 *
 * Input is a TSV with columns: key (hex), length (decimal). One pair per
 * line. The scanner emits at most one row per pair: the best-scoring
 * .rodata offset where decryption with this key gives a Russian-looking
 * plaintext.
 *
 * Russian language model: prefer plaintexts where
 *   - all bytes are KOI8-R Cyrillic, printable ASCII, or NUL
 *   - bigram score (count of common Russian bigrams) is at least 1
 *   - vowel ratio is 20-65 %
 *   - ratio of Cyrillic letters to total bytes is at least 50 %
 *
 * Score = bigram_count * 100 + cyr_count * 5 + bonus_for_starting_capital
 *
 * Build: cc -O3 -o scan_v3_paired scan_v3_paired.c
 * Run:   /tmp/scan_v3_paired DBI.nro pairs.tsv > out.tsv 2> log
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <stdbool.h>

#define MAX_PAIRS 5000

typedef struct { uint64_t key; int length; } pair_t;
static pair_t pairs[MAX_PAIRS];
static int n_pairs = 0;

/* Common Russian bigrams in KOI8-R (high byte = first char) */
static const uint16_t BIGRAMS[] = {
    /* Most-frequent KOI8-R bigrams (low first, high second) */
    0xd3d4, 0xd4cf, 0xd4d8, 0xcec1, 0xd2c1, 0xd0cf, 0xd0d2, 0xcfd7, 0xcfc7,
    0xc1ce, 0xd3cb, 0xc1d4, 0xc1de, 0xd2c5, 0xd7c1, 0xc9cc, 0xcfce, 0xcec5,
    0xcdcf, 0xc9c5, 0xcfcd, 0xcfcb, 0xcbcf, 0xc5cb, 0xc1cc, 0xcdc5, 0xcec5,
    0xc1cd, 0xc1d4, 0xd1cd, 0xceca, 0xcad4, 0xcedf, 0xcecf, 0xcfca, 0xc1d1,
    0xd0d5, 0xd5d3, 0xc1da, 0xd9d4, 0xc5d2, 0xc5d3, 0xd7c5, 0xd0c5,
    /* uppercase + lowercase combinations (capital letter + vowel) */
    0xefd0, 0xeed5, 0xefce, 0xf3d4, 0xeec1, 0xe6c1, 0xe9c7, 0xe4c1,
};
#define N_BIGRAMS (sizeof(BIGRAMS) / sizeof(BIGRAMS[0]))

static int is_vowel_idx[256];
static int is_cyr_idx[256];
static int is_letter_idx[256];

static void init_tables(void) {
    /* lowercase vowels */
    static const unsigned char Vl[] = {0xc1,0xc5,0xc9,0xcf,0xd5,0xd9,0xc0,0xd1,0xa3};
    static const unsigned char Vu[] = {0xe1,0xe5,0xe9,0xef,0xf5,0xf9,0xe0,0xf1,0xb3};
    for (size_t i = 0; i < sizeof(Vl); i++) is_vowel_idx[Vl[i]] = 1;
    for (size_t i = 0; i < sizeof(Vu); i++) is_vowel_idx[Vu[i]] = 1;
    for (int b = 0xc0; b <= 0xfe; b++) {
        is_cyr_idx[b] = 1;
        is_letter_idx[b] = 1;
    }
    for (int b = 'A'; b <= 'Z'; b++) is_letter_idx[b] = 1;
    for (int b = 'a'; b <= 'z'; b++) is_letter_idx[b] = 1;
}

static int load_pairs(const char *path) {
    FILE *f = fopen(path, "r");
    if (!f) { perror(path); exit(1); }
    char line[1024];
    while (fgets(line, sizeof(line), f)) {
        uint64_t k; int len;
        if (sscanf(line, "%lx %d", &k, &len) == 2) {
            pairs[n_pairs].key = k; pairs[n_pairs].length = len;
            n_pairs++;
        }
    }
    fclose(f);
    /* Dedupe pairs */
    int u = 0;
    for (int i = 0; i < n_pairs; i++) {
        int dup = 0;
        for (int j = 0; j < u; j++)
            if (pairs[j].key == pairs[i].key && pairs[j].length == pairs[i].length) { dup = 1; break; }
        if (!dup) pairs[u++] = pairs[i];
    }
    n_pairs = u;
    return n_pairs;
}

static int score_bigrams(const uint8_t *pt, int n) {
    int score = 0;
    for (int i = 0; i < n - 1; i++) {
        uint16_t bg = ((uint16_t)pt[i] << 8) | pt[i+1];
        for (int j = 0; j < (int)N_BIGRAMS; j++)
            if (BIGRAMS[j] == bg) { score++; break; }
    }
    return score;
}

int main(int argc, char **argv) {
    setvbuf(stdout, NULL, _IOLBF, 0);
    init_tables();

    FILE *f = fopen(argv[1], "rb");
    fseek(f, 0, SEEK_END); long sz = ftell(f); fseek(f, 0, SEEK_SET);
    uint8_t *data = malloc(sz); if(!fread(data, 1, sz, f)){}; fclose(f);
    load_pairs(argv[2]);
    fprintf(stderr, "loaded %d unique (key, length) pairs\n", n_pairs);

    long ro_start = 0x837000;
    long ro_end   = 0xadb000;
    int hits = 0;

    printf("offset\tkey\trun\tscore\thex_pt\thex_ct\n");

    for (int pi = 0; pi < n_pairs; pi++) {
        uint64_t k64 = pairs[pi].key;
        int length = pairs[pi].length;
        if (length < 4 || length > 80) continue;

        uint8_t kb[8];
        for (int j = 0; j < 8; j++) kb[j] = (k64 >> (j*8)) & 0xff;

        long best_off = -1;
        int best_score = 0;
        uint8_t best_pt[80];
        int best_used = 0;

        for (long off = ro_start; off + length <= ro_end; off++) {
            uint8_t pt[80];
            uint8_t prev = 0;
            int valid = 1;
            int vowels = 0;
            int cyr = 0;
            int letters = 0;
            int saw_nul_inside = 0;
            int real_n = length;

            for (int i = 0; i < length; i++) {
                uint8_t c = data[off + i];
                uint8_t k = kb[i & 7];
                uint8_t ctr = (i >> 3) & 0xff;
                uint8_t tmp = c ^ ((k + ctr) & 0xff);
                uint8_t v = (i == 0) ? tmp : (uint8_t)(tmp + prev);
                if (v == 0) {
                    if (i + 1 < length && length - i > 4) {
                        /* NUL too early, multiple meaningful bytes after — skip */
                        saw_nul_inside = 1;
                        valid = 0;
                        break;
                    }
                    real_n = i;
                    break;
                }
                if (!(is_cyr_idx[v] || (v >= 0x20 && v < 0x7f))) {
                    valid = 0;
                    break;
                }
                pt[i] = v;
                prev = v;
                if (is_vowel_idx[v]) vowels++;
                if (is_cyr_idx[v]) cyr++;
                if (is_letter_idx[v]) letters++;
            }
            if (!valid || saw_nul_inside) continue;
            if (real_n < 4) continue;
            if (cyr * 100 / real_n < 40) continue;     /* must be Cyrillic-dominant */
            if (vowels * 100 / real_n < 15) continue;   /* lower bound vowels */
            if (vowels * 100 / real_n > 70) continue;   /* upper bound */

            int bg = score_bigrams(pt, real_n);
            if (bg < 1) continue;

            int score = bg * 100 + cyr * 3;
            /* Bonus if starts with KOI8-R uppercase Cyrillic letter (real strings often do) */
            if (pt[0] >= 0xe0 && pt[0] <= 0xfe) score += 20;

            if (score > best_score) {
                best_score = score;
                best_off = off;
                memcpy(best_pt, pt, real_n);
                best_used = real_n;
            }
        }

        if (best_off > 0 && best_score >= 100) {
            printf("0x%08lx\t0x%016lx\t%d\t%d\t", best_off, k64, best_used, best_score);
            for (int i = 0; i < best_used; i++) printf("%02x", best_pt[i]);
            printf("\t");
            for (int i = 0; i < best_used; i++) printf("%02x", data[best_off + i]);
            printf("\n");
            hits++;
        }
        if (pi % 50 == 0) fprintf(stderr, "  pair %d/%d hits=%d\n", pi, n_pairs, hits);
    }
    fprintf(stderr, "Total hits: %d\n", hits);
    return 0;
}
