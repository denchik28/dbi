/* DBI 891 — FUN_711d0000 (pugixml_load)
 *
 * Loads XML doc via pugixml (used by FB2 reader + WebDAV)
 *
 * Flow:
   1. Allocate pugi::xml_document instance.
   2. Read source via DBI's MemoryFile abstraction.
   3. Call pugi::xml_document::load_buffer.
   4. On parse error, raise pugi::xpath_exception (string at 0x008fb660).
   5. Return doc pointer to caller.
 *
 * Phase 4 plan: Optional — only if FB2 reader is in fork scope.
 */
