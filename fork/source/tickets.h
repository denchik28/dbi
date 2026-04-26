#pragma once
#include <switch.h>
#include <stdint.h>

/* Ticket enumeration via es: (Part 10 + 12). Stock firmware lets us
 * call esCountCommonTicket / esListCommonTicket; we expose both
 * common (shipped by the device) and personalized (user-installed,
 * tied to device-unique PRK) counts, then list the rights-ids. */

typedef struct {
    uint8_t rights_id[16]; /* FsRightsId — first 8 bytes = title_id */
} tickets_entry_t;

typedef struct {
    tickets_entry_t *items;
    size_t           count;
    size_t           cap;
    s32              common_total;        /* raw esCountCommonTicket        */
    s32              personalized_total;  /* raw esCountPersonalizedTicket  */
} tickets_list_t;

/* Populate with up to `max` rights-ids — common first, then personalized
 * appended. Totals (even when over max) are returned in *_total fields. */
Result tickets_collect(tickets_list_t *out, size_t max);
void   tickets_free  (tickets_list_t *lst);
