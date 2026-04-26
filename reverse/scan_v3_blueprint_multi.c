/* Multi-variant blueprint scanner for DBI 891.
 *
 * For each (Russian 8-byte prefix × 64-bit key × cipher variant) triple,
 * encrypt the prefix and look for the resulting bytes in .rodata. The
 * variants tried mirror what 887 used:
 *
 *   simple_xor          : ct[i] = pt[i] ^ kb[i&7]
 *   rorkey              : ct[i] = ROR(pt[i] ^ kb[i&7], kb[i&7] & 7)
 *   rolkey              : ct[i] = ROL(pt[i] ^ kb[i&7], kb[i&7] & 7)
 *   rol6                : ct[i] = ROL(pt[i], 6) ^ kb[i&7]
 *   counter_xor         : ct[i] = pt[i] ^ ((kb[i&7] + (i>>3)) & 0xff)
 *   counter_cumsum      : (cipher v3, has its own scanner; replicated here for completeness)
 *   counter_rorkey      : ct[i] = ROR(pt[i] ^ ((kb+ctr) & 0xff), kb&7)
 *   submul              : ct[i] = (pt[i] - 0x3b) ^ ((kb[i&7] + (i>>3)) & 0xff)
 *
 * Build: gcc -O3 -o scan_v3_blueprint_multi scan_v3_blueprint_multi.c
 * Run:   ./scan_v3_blueprint_multi DBI.nro keys.tsv prefixes.txt > out.tsv
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

#define MAX_KEYS 20000
#define MAX_PREFIXES 2000
#define PREFIX_LEN 8

static uint64_t keys[MAX_KEYS]; static int n_keys = 0;
static uint8_t prefixes[MAX_PREFIXES][PREFIX_LEN];
static char prefix_label[MAX_PREFIXES][64];
static int n_prefixes = 0;

static inline uint8_t rol8(uint8_t b, int n) { n &= 7; return n ? ((b << n) | (b >> (8-n))) & 0xff : b; }
static inline uint8_t ror8(uint8_t b, int n) { n &= 7; return n ? ((b >> n) | (b << (8-n))) & 0xff : b; }

enum cipher_variant {
    V_SIMPLE_XOR,
    V_RORKEY,
    V_ROLKEY,
    V_ROL6,
    V_COUNTER_XOR,
    V_COUNTER_CUMSUM,
    V_COUNTER_RORKEY,
    V_SUBMUL,
    V_END
};
static const char *vname[] = {
    "simple_xor","rorkey","rolkey","rol6",
    "counter_xor","counter_cumsum","counter_rorkey","submul"
};

static void encrypt(uint8_t *out, const uint8_t *pt, int n, uint64_t key, int variant) {
    uint8_t kb[8];
    for (int j = 0; j < 8; j++) kb[j] = (key >> (j*8)) & 0xff;
    /* For cumsum, we need to compute deltas */
    if (variant == V_COUNTER_CUMSUM) {
        uint8_t prev = pt[0];
        out[0] = prev ^ kb[0];
        for (int i = 1; i < n; i++) {
            uint8_t delta = (uint8_t)(pt[i] - prev);
            prev = pt[i];
            uint8_t ctr = (i >> 3) & 0xff;
            out[i] = delta ^ ((kb[i & 7] + ctr) & 0xff);
        }
        return;
    }
    for (int i = 0; i < n; i++) {
        uint8_t k = kb[i & 7];
        uint8_t ctr = (i >> 3) & 0xff;
        uint8_t v;
        switch (variant) {
        case V_SIMPLE_XOR:
            v = pt[i] ^ k; break;
        case V_RORKEY:
            v = ror8(pt[i] ^ k, k & 7); break;
        case V_ROLKEY:
            v = rol8(pt[i] ^ k, k & 7); break;
        case V_ROL6:
            v = rol8(pt[i], 6) ^ k; break;
        case V_COUNTER_XOR:
            v = pt[i] ^ ((k + ctr) & 0xff); break;
        case V_COUNTER_RORKEY:
            v = ror8(pt[i] ^ ((k + ctr) & 0xff), k & 7); break;
        case V_SUBMUL:
            v = (uint8_t)(pt[i] - 0x3b) ^ ((k + ctr) & 0xff); break;
        default: v = 0;
        }
        out[i] = v;
    }
}

static int hex2(const char *s) {
    int hi = (s[0] >= 'a' ? s[0] - 'a' + 10 : s[0] >= 'A' ? s[0] - 'A' + 10 : s[0] - '0');
    int lo = (s[1] >= 'a' ? s[1] - 'a' + 10 : s[1] >= 'A' ? s[1] - 'A' + 10 : s[1] - '0');
    return (hi << 4) | lo;
}

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

static void load_prefixes(const char *path) {
    FILE *f = fopen(path, "r"); if (!f) { perror(path); exit(1); }
    char line[256];
    while (fgets(line, sizeof(line), f)) {
        char *tab = strchr(line, '\t');
        char *hex = line, *label = "";
        if (tab) { *tab = 0; hex = line; label = tab + 1; }
        char *nl = strchr(label, '\n'); if (nl) *nl = 0;
        if (strlen(hex) < PREFIX_LEN * 2) continue;
        for (int i = 0; i < PREFIX_LEN; i++)
            prefixes[n_prefixes][i] = (uint8_t)hex2(hex + i*2);
        strncpy(prefix_label[n_prefixes], label, sizeof(prefix_label[0]) - 1);
        n_prefixes++;
        if (n_prefixes >= MAX_PREFIXES) break;
    }
    fclose(f);
}

int main(int argc, char **argv) {
    setvbuf(stdout, NULL, _IOLBF, 0);
    FILE *f = fopen(argv[1], "rb");
    fseek(f, 0, SEEK_END); long sz = ftell(f); fseek(f, 0, SEEK_SET);
    uint8_t *data = malloc(sz); if(!fread(data, 1, sz, f)){}; fclose(f);
    load_keys(argv[2]);
    load_prefixes(argv[3]);
    fprintf(stderr, "%d keys, %d prefixes, %d variants\n", n_keys, n_prefixes, V_END);

    long ro_start = 0x837000;
    long ro_end   = 0xadb000;
    long n_off = ro_end - ro_start - 8;

    /* Index .rodata 4-byte windows */
    #define TBL_BITS 24
    #define TBL_SIZE (1 << TBL_BITS)
    #define TBL_MASK (TBL_SIZE - 1)
    long *tbl_head = calloc(TBL_SIZE, sizeof(long));
    long *tbl_next = malloc((n_off + 1) * sizeof(long));
    for (long off = ro_start; off + 8 <= ro_end; off++) {
        uint32_t k4 = *(uint32_t*)(data + off);
        long bucket = k4 & TBL_MASK;
        long idx = off - ro_start + 1;
        tbl_next[idx] = tbl_head[bucket];
        tbl_head[bucket] = idx;
    }
    fprintf(stderr, "indexed %ld offsets\n", n_off);

    int hits = 0;
    printf("prefix\tvariant\tkey\toffset\n");
    for (int pi = 0; pi < n_prefixes; pi++) {
        for (int variant = 0; variant < V_END; variant++) {
            for (int ki = 0; ki < n_keys; ki++) {
                uint8_t ct[PREFIX_LEN];
                encrypt(ct, prefixes[pi], PREFIX_LEN, keys[ki], variant);
                uint32_t k4 = *(uint32_t*)ct;
                long idx = tbl_head[k4 & TBL_MASK];
                while (idx) {
                    long off = ro_start + idx - 1;
                    if (memcmp(ct, data + off, PREFIX_LEN) == 0) {
                        printf("%s\t%s\t0x%016lx\t0x%lx\n",
                               prefix_label[pi], vname[variant], keys[ki], off);
                        hits++;
                    }
                    idx = tbl_next[idx];
                }
            }
        }
        if (pi % 50 == 0) fprintf(stderr, "  prefix %d/%d hits=%d\n", pi, n_prefixes, hits);
    }
    fprintf(stderr, "Total hits: %d\n", hits);
    return 0;
}
