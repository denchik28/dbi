#include "ntp.h"
#include "log.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <unistd.h>
#include <poll.h>
#include <time.h>

const char *const ntp_default_servers[] = {
    "time.google.com",
    "time.cloudflare.com",
    "time.nist.gov",
    "europe.pool.ntp.org",
    "asia.pool.ntp.org",
    "africa.pool.ntp.org",
    "oceania.pool.ntp.org",
    "south-america.pool.ntp.org",
    "north-america.pool.ntp.org",
    "ntp.msk-ix.ru",
    NULL,
};
const int ntp_default_servers_count = 10;

/* NTP timestamp epoch is 1900-01-01; POSIX epoch is 1970-01-01. Offset in
 * seconds is 2208988800 (70 * 365.25 days * 86400, rounded exactly). */
#define NTP_UNIX_OFFSET 2208988800ULL

static int query_one(const char *host, uint64_t *out_unix, char *err, size_t errsz) {
    struct addrinfo hints = { 0 }, *ai = NULL;
    hints.ai_family   = AF_INET;
    hints.ai_socktype = SOCK_DGRAM;
    hints.ai_protocol = IPPROTO_UDP;

    int grc = getaddrinfo(host, "123", &hints, &ai);
    if (grc != 0 || !ai) {
        if (err) snprintf(err, errsz, "getaddrinfo %s: %s", host, gai_strerror(grc));
        return -1;
    }

    int s = socket(ai->ai_family, ai->ai_socktype, ai->ai_protocol);
    if (s < 0) {
        if (err) snprintf(err, errsz, "socket: %s", strerror(errno));
        freeaddrinfo(ai);
        return -1;
    }

    /* SNTPv4 request: LI=0, VN=4, Mode=3(client). Rest zero. */
    uint8_t pkt[48] = { 0 };
    pkt[0] = (0 << 6) | (4 << 3) | 3;

    if (sendto(s, pkt, sizeof pkt, 0, ai->ai_addr, ai->ai_addrlen) != (ssize_t)sizeof pkt) {
        if (err) snprintf(err, errsz, "sendto %s: %s", host, strerror(errno));
        close(s); freeaddrinfo(ai); return -1;
    }
    freeaddrinfo(ai);

    struct pollfd pf = { .fd = s, .events = POLLIN };
    int pr = poll(&pf, 1, 2500);   /* 2.5 s per server */
    if (pr <= 0) {
        if (err) snprintf(err, errsz, "timeout %s", host);
        close(s); return -1;
    }

    ssize_t got = recv(s, pkt, sizeof pkt, 0);
    close(s);
    if (got != (ssize_t)sizeof pkt) {
        if (err) snprintf(err, errsz, "recv %s: got=%zd", host, got);
        return -1;
    }

    /* Reply's Transmit Timestamp is at bytes 40..43 (sec) and 44..47 (frac),
     * both big-endian. We only need the seconds. */
    uint32_t tx_sec = ((uint32_t)pkt[40] << 24) | ((uint32_t)pkt[41] << 16)
                    | ((uint32_t)pkt[42] << 8)  | (uint32_t)pkt[43];
    if (tx_sec < NTP_UNIX_OFFSET) {
        if (err) snprintf(err, errsz, "bogus ts %u", tx_sec);
        return -1;
    }
    *out_unix = (uint64_t)tx_sec - NTP_UNIX_OFFSET;
    return 0;
}

int ntp_query_servers(const char *const *servers, int n_servers,
                      uint64_t *out_unix, char *err, size_t errsz) {
    for (int i = 0; i < n_servers && servers[i]; i++) {
        char last[96] = { 0 };
        int rc = query_one(servers[i], out_unix, last, sizeof last);
        if (rc == 0) {
            log_event("ntp: %s => unix %llu", servers[i],
                      (unsigned long long)*out_unix);
            return 0;
        }
        log_linef("ntp: %s failed: %s", servers[i], last);
        if (err && errsz) snprintf(err, errsz, "%s", last);
    }
    return -1;
}

Result ntp_sync_system_time(char *err, size_t errsz) {
    uint64_t unix_secs = 0;
    if (ntp_query_servers(ntp_default_servers, ntp_default_servers_count,
                          &unix_secs, err, errsz) != 0) {
        return MAKERESULT(Module_Libnx, LibnxError_BadInput);
    }

    Result rc = timeSetCurrentTime(TimeType_UserSystemClock, unix_secs);
    if (R_FAILED(rc)) {
        rc = timeSetCurrentTime(TimeType_NetworkSystemClock, unix_secs);
    }
    if (R_FAILED(rc) && err) snprintf(err, errsz, "timeSetCurrentTime 0x%08x", rc);
    return rc;
}
