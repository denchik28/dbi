#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#define MAX_KEYS 10000
static uint64_t keys[MAX_KEYS]; static int n_keys = 0;
static uint8_t *data; static long sz;

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

static void load_bin(const char *path) {
    FILE *f = fopen(path, "rb");
    fseek(f, 0, SEEK_END); sz = ftell(f); fseek(f, 0, SEEK_SET);
    data = malloc(sz); if(!fread(data, 1, sz, f)){}; fclose(f);
}

/* Cipher v3 ENCRYPT (pt -> ct):
 * Reverse of: pt[i] = ((CT[i-1] (after stage1) ... wait, the decode reads CT[i-1] from CT memory)
 * Actually decode is: 
 *   stage1 (XOR+counter): tmp[i] = ct[i] XOR (k+ctr)
 *   stage2 (cumsum): pt[i] = tmp[i] + pt[i-1]   (pt[0] = tmp[0])
 *
 * Encrypt: reverse
 *   stage2 inverse (delta): tmp[i] = pt[i] - pt[i-1] (mod 256), tmp[0] = pt[0]
 *   stage1 inverse (XOR+counter): ct[i] = tmp[i] XOR (k+ctr)
 */
static int try_one_v3(const char *pt_str) {
    int L = strlen(pt_str) + 1;
    uint8_t pt[256]; memcpy(pt, pt_str, L);
    int hits = 0;
    for (int ki = 0; ki < n_keys; ki++) {
        uint8_t kb[8];
        for (int j = 0; j < 8; j++) kb[j] = (keys[ki] >> (j*8)) & 0xff;
        
        /* delta */
        uint8_t tmp[256];
        tmp[0] = pt[0];
        for (int i = 1; i < L; i++) tmp[i] = (uint8_t)(pt[i] - pt[i-1]);
        
        /* XOR+counter */
        uint8_t ct[256];
        for (int i = 0; i < L; i++) {
            uint8_t k = kb[i & 7];
            uint8_t ctr = (i >> 3) & 0xff;
            ct[i] = tmp[i] ^ ((k + ctr) & 0xff);
        }
        
        uint8_t *p = memmem(data, sz, ct, L);
        if (p) {
            printf("FOUND v3: '%s'  @ 0x%lx  key=0x%016lx\n",
                   pt_str, (long)(p - data), keys[ki]);
            hits++;
        }
    }
    return hits;
}

int main(int argc, char **argv) {
    load_bin(argv[1]); load_keys(argv[2]);
    fprintf(stderr, "%d keys, %ld bytes\n", n_keys, sz);
    const char *pts[] = {
        "DBI: %s-%s", "DBI: {}-{}", "DBI: %s",
        "DBI: 887-ru", "DBI: 891-ru", "DBI: 891-RU",
        "DBI: ", "DBI:",
        "%s-%s", "%s %s-%s",
        "DBI %s-%s", "DBI %s",
        "DBI %s\xe2\x80\x94%s",  // em-dash
        "DBI %s - %s", "DBI %s_%s",
        "%s: %s",
        NULL
    };
    for (int i = 0; pts[i]; i++) {
        int h = try_one_v3(pts[i]);
        if (h == 0) fprintf(stderr, "  '%s' v3: 0\n", pts[i]);
    }
    return 0;
}
