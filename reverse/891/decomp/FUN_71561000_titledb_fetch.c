/* DBI 891 — FUN_71561000 (titledb_fetch)
 *
 * Fetches https://raw.githubusercontent.com/blawar/titledb/master/versions.txt
 *
 * Flow:
   1. Initialise libcurl via curl_easy_init().
   2. Set CURLOPT_URL to the github raw URL.
   3. Set CURLOPT_SSL_VERIFYPEER, CURLOPT_CAINFO via libnx ssl-service.
   4. Set write callback to append to in-memory buffer.
   5. curl_easy_perform.
   6. Parse via nlohmann/json::parse (FUN_71577740).
   7. Cache to sdmc:/tmp_titledb.json.
   8. Index by title-id for fast UI lookups.
 *
 * Phase 4 plan: test-app/source/titledb.c. Phase 4 may want to make this URL configurable.
 */
