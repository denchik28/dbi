/* Cipher v3 known-prefix verification scanner.
 *
 * For every (8-byte prefix × 64-bit key) pair, encrypt the prefix and
 * search for the resulting ciphertext bytes in DBI 891's `.rodata`.
 * A match is a high-confidence cipher v3 site: we KNOW the plaintext
 * prefix and have proof the binary stores it under this key.
 *
 * Build: gcc -O3 -o scan_v3_prefixes scan_v3_prefixes.c
 * Run:   ./scan_v3_prefixes DBI.nro keys.tsv prefixes.txt > out.tsv
 *
 * Each line of prefixes.txt is a prefix in KOI8-R bytes, hex-encoded:
 *   "Установк"  ->  f5d3d4c1cecfd7   <- 8 hex pairs (8 bytes)
 * (We keep the prefix file pre-encoded as KOI8-R hex to avoid locale
 * issues at runtime.)
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

static int hex2(const char *s) {
    int hi = (s[0] >= 'a' ? s[0] - 'a' + 10 : s[0] >= 'A' ? s[0] - 'A' + 10 : s[0] - '0');
    int lo = (s[1] >= 'a' ? s[1] - 'a' + 10 : s[1] >= 'A' ? s[1] - 'A' + 10 : s[1] - '0');
    return (hi << 4) | lo;
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

static void v3_encrypt(uint8_t *out, const uint8_t *pt, int n, uint64_t key) {
    uint8_t kb[8];
    for (int j = 0; j < 8; j++) kb[j] = (key >> (j*8)) & 0xff;
    uint8_t prev = pt[0];
    out[0] = prev ^ kb[0];
    for (int i = 1; i < n; i++) {
        uint8_t delta = (uint8_t)(pt[i] - prev);
        prev = pt[i];
        uint8_t ctr = (i >> 3) & 0xff;
        out[i] = delta ^ ((kb[i & 7] + ctr) & 0xff);
    }
}

int main(int argc, char **argv) {
    setvbuf(stdout, NULL, _IOLBF, 0);

    FILE *f = fopen(argv[1], "rb");
    fseek(f, 0, SEEK_END); long sz = ftell(f); fseek(f, 0, SEEK_SET);
    uint8_t *data = malloc(sz); if(!fread(data, 1, sz, f)){}; fclose(f);
    load_keys(argv[2]);
    load_prefixes(argv[3]);
    fprintf(stderr, "%d keys, %d prefixes, %ld bytes\n", n_keys, n_prefixes, sz);

    long ro_start = 0x837000;
    long ro_end   = 0xadb000;
    int hits = 0;

    printf("prefix\tkey\toffset\n");

    /* For speed: we hash each 8-byte rodata window into a small hashtable
     * keyed by the first 4 bytes. Then for each (prefix, key), we encrypt
     * to get an 8-byte ct, hash its first 4 bytes, and look up candidates
     * to verify with full 8-byte memcmp. */
    long n_off = ro_end - ro_start - 8;
    /* Use a 16M-entry table indexed by ct[0..3] little-endian. Each slot
     * stores the first matching offset; collisions are walked via a chain
     * stored in arrays. With 2.6M offsets and 16M buckets, collisions are
     * rare. */
    #define TBL_BITS 24
    #define TBL_SIZE (1 << TBL_BITS)
    #define TBL_MASK (TBL_SIZE - 1)
    long *tbl_head = calloc(TBL_SIZE, sizeof(long));
    long *tbl_next = malloc((n_off + 1) * sizeof(long));
    for (long i = 0; i <= n_off; i++) tbl_next[i] = 0;

    fprintf(stderr, "indexing %ld rodata offsets...\n", n_off);
    for (long off = ro_start; off + 8 <= ro_end; off++) {
        uint32_t k4 = *(uint32_t*)(data + off);
        long bucket = k4 & TBL_MASK;
        long idx = off - ro_start + 1; /* +1 so 0 = empty */
        tbl_next[idx] = tbl_head[bucket];
        tbl_head[bucket] = idx;
    }
    fprintf(stderr, "index done\n");

    for (int pi = 0; pi < n_prefixes; pi++) {
        for (int ki = 0; ki < n_keys; ki++) {
            uint8_t ct[PREFIX_LEN];
            v3_encrypt(ct, prefixes[pi], PREFIX_LEN, keys[ki]);
            uint32_t k4 = *(uint32_t*)ct;
            long idx = tbl_head[k4 & TBL_MASK];
            while (idx) {
                long off = ro_start + idx - 1;
                if (memcmp(ct, data + off, PREFIX_LEN) == 0) {
                    printf("%s\t0x%016lx\t0x%lx\n", prefix_label[pi], keys[ki], off);
                    hits++;
                }
                idx = tbl_next[idx];
            }
        }
        if (pi % 50 == 0) fprintf(stderr, "  prefix %d/%d hits=%d\n", pi, n_prefixes, hits);
    }
    fprintf(stderr, "Total hits: %d\n", hits);
    return 0;
}
