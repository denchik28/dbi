/* Multi-variant cipher scanner for DBI 891.
 *
 * Tries every (key, .rodata offset) pair against six cipher variants:
 *   simple_xor      : pt[i] = ct[i] ^ kb[i&7]
 *   simple_rorkey   : pt[i] = ROL(ct[i], kb[i&7] & 7) ^ kb[i&7]
 *   simple_rolkey   : pt[i] = ROR(ct[i], kb[i&7] & 7) ^ kb[i&7]
 *   simple_xor_ctr  : pt[i] = ct[i] ^ kb[i&7] ^ (i & 0xff)
 *   counter_xor     : pt[i] = ct[i] ^ ((kb[i&7] + (i>>3)) & 0xff)         (cipher v3 stage-1 only)
 *   counter_cumsum  : tmp[i]= ct[i] ^ ((kb[i&7] + (i>>3)) & 0xff); pt = cumsum(tmp)   ("v3")
 *   counter_rorkey  : tmp = simple_rorkey + counter, pt = simple
 *
 * Filters: every output byte must be KOI8-R Cyrillic (0xc0..0xfe), printable
 * ASCII (0x20..0x7e), or NUL (terminator). At least 70 % must be Cyrillic.
 * Vowel ratio 20..65 %. Bigram score >= 1 in the curated Russian-bigram set.
 *
 * Build: gcc -O3 -o scan_v3_multivariant scan_v3_multivariant.c
 * Run:   ./scan_v3_multivariant DBI.nro keys.tsv > out.tsv 2> log
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

#define MAX_KEYS 20000
static uint64_t keys[MAX_KEYS];
static int n_keys = 0;

/* Bigram list — common KOI8-R Russian byte pairs (lowercase, mixed) */
static const uint16_t BIGRAMS[] = {
    0xd3d4,0xd4cf,0xd4d8,0xcec1,0xd2c1,0xd0cf,0xd0d2,0xcfd7,0xcfc7,0xc1ce,
    0xd3cb,0xc1d4,0xc1de,0xd2c5,0xd7c1,0xc9cc,0xcfce,0xcec5,0xcdcf,0xc9c5,
    0xcfcd,0xcfcb,0xcbcf,0xc5cb,0xc1cc,0xcdc5,0xcec5,0xc1cd,0xd1cd,0xceca,
    0xcad4,0xc1d1,0xd0d5,0xd5d3,0xc1da,0xd9d4,0xc5d2,0xc5d3,0xd7c5,0xd0c5,
    /* uppercase + lowercase */
    0xefd0,0xeed5,0xefce,0xf3d4,0xeec1,0xe6c1,0xe9c7,0xe4c1,
    /* common space + Russian letter */
    0x20cd,0x20d3,0x20d0,0x20d4,0x20cb,0x20d2,
};
#define N_BIGRAMS (sizeof(BIGRAMS)/sizeof(BIGRAMS[0]))

static int is_vowel_idx[256];

static void init_tables(void) {
    static const unsigned char V[] = {
        0xc1,0xc5,0xc9,0xcf,0xd5,0xd9,0xc0,0xd1,0xa3,
        0xe1,0xe5,0xe9,0xef,0xf5,0xf9,0xe0,0xf1,0xb3,
    };
    for (size_t i = 0; i < sizeof(V); i++) is_vowel_idx[V[i]] = 1;
}

static inline int is_cyr(uint8_t b) { return b >= 0xc0 && b != 0xff; }
static inline uint8_t rol8(uint8_t v, int n) { n &= 7; return n ? ((v << n) | (v >> (8-n))) & 0xff : v; }
static inline uint8_t ror8(uint8_t v, int n) { n &= 7; return n ? ((v >> n) | (v << (8-n))) & 0xff : v; }

enum cipher_variant {
    V_SIMPLE_XOR = 0,
    V_SIMPLE_RORKEY,
    V_SIMPLE_ROLKEY,
    V_SIMPLE_XOR_CTR,
    V_COUNTER_XOR,
    V_COUNTER_CUMSUM,
    V_COUNTER_RORKEY,
    V_END
};
static const char *variant_name[] = {
    "simple_xor","simple_rorkey","simple_rolkey","simple_xor_ctr",
    "counter_xor","counter_cumsum","counter_rorkey"
};

static void load_keys(const char *path) {
    FILE *f = fopen(path, "r"); if (!f) { perror(path); exit(1); }
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

static int decode_variant(uint8_t *pt, const uint8_t *ct, int n,
                          const uint8_t *kb, int variant) {
    uint8_t prev = 0;
    for (int i = 0; i < n; i++) {
        uint8_t c = ct[i];
        uint8_t k = kb[i & 7];
        uint8_t v;
        switch (variant) {
        case V_SIMPLE_XOR:
            v = c ^ k; break;
        case V_SIMPLE_RORKEY:
            v = rol8(c, k & 7) ^ k; break;
        case V_SIMPLE_ROLKEY:
            v = ror8(c, k & 7) ^ k; break;
        case V_SIMPLE_XOR_CTR:
            v = c ^ k ^ (uint8_t)i; break;
        case V_COUNTER_XOR:
            v = c ^ ((k + ((i >> 3) & 0xff)) & 0xff); break;
        case V_COUNTER_CUMSUM: {
            uint8_t tmp = c ^ ((k + ((i >> 3) & 0xff)) & 0xff);
            v = (i == 0) ? tmp : (uint8_t)(tmp + prev);
            prev = v;
            break;
        }
        case V_COUNTER_RORKEY:
            v = rol8(c, k & 7) ^ ((k + ((i >> 3) & 0xff)) & 0xff); break;
        default: return 0;
        }
        if (v == 0) return i;
        pt[i] = v;
    }
    return n;
}

static int score_pt(const uint8_t *pt, int n) {
    if (n < 5) return 0;
    int cyr = 0, vowels = 0, bad = 0;
    for (int i = 0; i < n; i++) {
        uint8_t v = pt[i];
        if (is_cyr(v)) cyr++;
        else if (v >= 0x20 && v < 0x7f) {} /* ascii ok */
        else { bad++; }
        if (is_vowel_idx[v]) vowels++;
    }
    if (bad > 0) return 0;
    if (cyr * 100 / n < 60) return 0;
    if (vowels * 100 / n < 18) return 0;
    if (vowels * 100 / n > 65) return 0;
    int bg = 0;
    for (int i = 0; i < n - 1; i++) {
        uint16_t b = ((uint16_t)pt[i] << 8) | pt[i+1];
        for (int j = 0; j < (int)N_BIGRAMS; j++)
            if (BIGRAMS[j] == b) { bg++; break; }
    }
    if (bg < 1) return 0;
    return cyr * 5 + bg * 50 + (pt[0] >= 0xe0 && pt[0] <= 0xfe ? 30 : 0);
}

int main(int argc, char **argv) {
    setvbuf(stdout, NULL, _IOLBF, 0);
    init_tables();

    FILE *f = fopen(argv[1], "rb");
    fseek(f, 0, SEEK_END); long sz = ftell(f); fseek(f, 0, SEEK_SET);
    uint8_t *data = malloc(sz); if(!fread(data, 1, sz, f)){}; fclose(f);
    load_keys(argv[2]);
    fprintf(stderr, "%d unique keys, %d variants\n", n_keys, V_END);

    long ro_start = 0x837000;
    long ro_end   = 0xadb000;

    /* For each (key, variant), pick best offset */
    typedef struct { long off; int score; int run; uint8_t pt[64]; int variant; } best_t;
    best_t *best = calloc(n_keys * V_END, sizeof(best_t));

    printf("offset\tkey\tvariant\trun\tscore\thex_pt\thex_ct\n");

    for (int ki = 0; ki < n_keys; ki++) {
        uint64_t k64 = keys[ki];
        uint8_t kb[8];
        for (int j = 0; j < 8; j++) kb[j] = (k64 >> (j*8)) & 0xff;

        for (long off = ro_start; off + 32 < ro_end; off++) {
            const uint8_t *ct = data + off;
            for (int variant = 0; variant < V_END; variant++) {
                uint8_t pt[64];
                int run = decode_variant(pt, ct, 32, kb, variant);
                if (run < 6) continue;
                int score = score_pt(pt, run);
                if (score > 100) {
                    int idx = ki * V_END + variant;
                    if (score > best[idx].score) {
                        best[idx].off = off;
                        best[idx].score = score;
                        best[idx].run = run;
                        best[idx].variant = variant;
                        memcpy(best[idx].pt, pt, run);
                    }
                }
            }
        }
        if (ki % 100 == 0) fprintf(stderr, "  key %d/%d\n", ki, n_keys);
    }

    int hits = 0;
    for (int ki = 0; ki < n_keys; ki++) {
        for (int variant = 0; variant < V_END; variant++) {
            int idx = ki * V_END + variant;
            if (best[idx].score == 0) continue;
            printf("0x%08lx\t0x%016lx\t%s\t%d\t%d\t",
                   best[idx].off, keys[ki], variant_name[variant],
                   best[idx].run, best[idx].score);
            for (int i = 0; i < best[idx].run; i++) printf("%02x", best[idx].pt[i]);
            printf("\t");
            for (int i = 0; i < best[idx].run; i++) printf("%02x", data[best[idx].off + i]);
            printf("\n");
            hits++;
        }
    }
    fprintf(stderr, "Total hits: %d\n", hits);
    return 0;
}
