#pragma once
#include <stdint.h>
#include <stddef.h>
#include <switch.h>

#define DBI0_MAGIC          0x30494244u

#define DBI0_TYPE_REQUEST   0u
#define DBI0_TYPE_RESPONSE  1u
#define DBI0_TYPE_ACK       2u

#define DBI0_CMD_EXIT        0u
#define DBI0_CMD_LIST_OLD    1u
#define DBI0_CMD_FILE_RANGE  2u
#define DBI0_CMD_LIST        3u

#define DBI0_CHUNK_SIZE      0x100000u

typedef struct {
    uint32_t magic;
    uint32_t cmd_type;
    uint32_t cmd_id;
    uint32_t data_size;
} __attribute__((packed)) dbi0_header_t;

typedef struct {
    uint32_t range_size;
    uint64_t range_offset;
    uint32_t name_len;
} __attribute__((packed)) dbi0_range_hdr_t;

/* callback receives each chunk of streamed file data; return 0 to continue, !=0 to abort */
typedef int (*dbi0_chunk_cb_t)(const uint8_t *chunk, size_t len, void *ctx);

Result dbi0_init(void);
void   dbi0_exit(void);
bool   dbi0_is_inited(void);

Result dbi0_request_nsp_list(char *out, size_t out_cap, size_t *out_len);

Result dbi0_request_file_range(const char *name,
                               uint64_t offset, uint32_t range_size,
                               uint8_t *out_buf);

/* Streaming FILE_RANGE: avoids buffering entire range in RAM; delivers chunks via cb. */
Result dbi0_stream_file_range(const char *name, uint64_t offset, uint64_t size,
                              dbi0_chunk_cb_t cb, void *ctx);

Result dbi0_send_exit(void);
