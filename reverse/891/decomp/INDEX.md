# DBI 891 — function decomp index

This index lists known DBI functions in 891 with their anchor
strings and approximate purpose. Each entry is a signature draft;
full pseudocode is in `key_funcs_disasm.txt` and the per-function
`FUN_*.c` sample files.

## Auto-generated index by anchor-string heuristic

| Function | Size | Anchor / hint | Probable purpose |
|---|---|---|---|
| `FUN_710006f0` | 204 | "basic_string::append" | libstdc++ helper |
| `FUN_71000b98` | 212 | "basic_string::append" | libstdc++ helper |
| `FUN_71001afc` | 240 | "discarded" | misc |
| `FUN_71001c40` | 264 | "type_error" | error handler |
| `FUN_71001d48` | 264 | "invalid_iterator" | misc |
| `FUN_71001e50` | 264 | "type_error" | error handler |
| `FUN_71002630` | 320 | "discarded" | misc |
| `FUN_71002820` | 264 | "type_error" | error handler |
| `FUN_71002928` | 408 | "discarded" | misc |
| `FUN_71002ac0` | 264 | "type_error" | error handler |
| `FUN_710150c0` | 1040 | "no zip 64 support" | misc |
| `FUN_7101e1f0` | 1280 | ".*\.?\[?([0-9a-fA-F]{16})\]?(\[v([0-9]+)\])?\.romfs\.bin" | misc |
| `FUN_7101e6f0` | 1248 | ".*\.?\[?([0-9a-fA-F]{16})\]?(\[v([0-9]+)\])?\.romfs\.bin" | misc |
| `FUN_7101ebd0` | 1284 | ".*\.?\[?([0-9a-fA-F]{16})\]?(\[v([0-9]+)\])?\.romfs\.bin" | misc |
| `FUN_71042120` | 1296 | ".*\.?\[?([0-9a-fA-F]{16})\]?(\[v([0-9]+)\])?\.romfs\.bin" | misc |
| `FUN_710426c0` | 2080 | ".*\.?\[?([0-9a-fA-F]{16})\]?(\[v([0-9]+)\])?\.romfs\.bin" | misc |
| `FUN_71049390` | 272 | "cannot create std::vector larger than max_size()" | error handler |
| `FUN_710494a0` | 612 | "Free communication" | misc |
| `FUN_71049900` | 292 | "default" | misc |
| `FUN_7104a440` | 272 | "cannot create std::vector larger than max_size()" | error handler |
| `FUN_7104a550` | 612 | "Free communication" | misc |
| `FUN_7104a9f0` | 272 | "cannot create std::vector larger than max_size()" | error handler |
| `FUN_7104ab00` | 608 | "Free communication" | misc |
| `FUN_7104ad60` | 272 | "cannot create std::vector larger than max_size()" | error handler |
| `FUN_7104ae70` | 608 | "Free communication" | misc |
| `FUN_7104de90` | 272 | "cannot create std::vector larger than max_size()" | error handler |
| `FUN_7104dfa0` | 640 | "Free communication" | misc |
| `FUN_7104e220` | 368 | "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz01234567" | misc |
| `FUN_7104e400` | 512 | "obj_count" | misc |
| `FUN_7104f0d0` | 1136 | "000102030405060708091011121314151617181920212223242526272829" | misc |
| `FUN_7104f540` | 672 | "Disabled titles to check for updates" | misc |
| `FUN_7104f900` | 1120 | "0123456789ABCDEF" | misc |
| `FUN_7104fe90` | 240 | "Couldn't find the key." | misc |
| `FUN_71050d60` | 224 | "vector::_M_realloc_append" | misc |
| `FUN_71050e40` | 640 | "vector::_M_realloc_append" | misc |
| `FUN_71051c10` | 832 | "vector::_M_realloc_append" | misc |
| `FUN_71051f50` | 832 | "vector::_M_realloc_append" | misc |
| `FUN_710527d0` | 3816 | "MTP custom storages" | MTP server |
| `FUN_71053840` | 688 | "The map exceeds its maximum size." | misc |
| `FUN_71053af0` | 688 | "The map exceeds its maximum size." | misc |
| `FUN_71053da0` | 688 | "The map exceeds its maximum size." | misc |
| `FUN_710541f0` | 2112 | "We reached the maximum size for the hash table." | misc |
| `FUN_71054bd0` | 1504 | "We reached the maximum size for the hash table." | misc |
| `FUN_71055280` | 740 | "Install" | misc |
| `FUN_71055564` | 236 | "EnableNSZ" | misc |
| `FUN_71055650` | 960 | "000102030405060708091011121314151617181920212223242526272829" | misc |
| `FUN_71055bb0` | 1504 | "We reached the maximum size for the hash table." | misc |
| `FUN_71056190` | 4304 | "We reached the maximum size for the hash table." | misc |
| `FUN_71058620` | 384 | "Title name override" | misc |
| `FUN_710587a0` | 1200 | "Name,LastPlayed,InstallLocation,Size" | misc |
| `FUN_71058d20` | 1280 | "SaveSorting" | misc |
| `FUN_7105bd50` | 484 | "bad code lengths" | misc |
| `FUN_7105bf34` | 668 | "bad codelengths" | misc |
| `FUN_7105c1d0` | 436 | "output buffer limit" | misc |
| `FUN_7105c680` | 2568 | "unsupported" | misc |
| `FUN_7105f210` | 3776 | "bad codelengths" | misc |
| `FUN_710600d0` | 1728 | "zlib corrupt" | zlib wrapper |
| `FUN_71060790` | 2800 | "unsupported" | misc |
| `FUN_71061470` | 4304 | "invalid width" | misc |
| `FUN_71063184` | 716 | "can't merge dc and ac" | misc |
| `FUN_71063450` | 1120 | "bad huffman code" | misc |
| `FUN_71064300` | 2896 | "bad COM len" | misc |
| `FUN_7106b4c0` | 608 | "unknown image type" | misc |
| `FUN_71078bf0` | 352 | "Error extracting record" | error handler |
| `FUN_71078e60` | 352 | "Error extracting record" | error handler |
| `FUN_7107a1e0` | 640 | "Content not existed" | misc |
| `FUN_7107a850` | 336 | "read failed" | error handler |
| `FUN_7107a9a0` | 320 | "write failed" | error handler |
| `FUN_7107aae0` | 820 | "%s: __pos (which is %zu) > this->size() (which is %zu)" | misc |
| `FUN_7107aed0` | 464 | "000102030405060708091011121314151617181920212223242526272829" | misc |
| `FUN_7107c4f0` | 864 | "%s: __pos (which is %zu) > this->size() (which is %zu)" | misc |
| `FUN_7107cbc0` | 576 | "%s: __pos (which is %zu) > this->size() (which is %zu)" | misc |
| `FUN_7107ce00` | 256 | "{} open failed: File does not exist. Creating new..." | error handler |
| `FUN_7107d870` | 864 | "anonymous" | misc |
| `FUN_71080400` | 624 | "vector::reserve" | misc |
| `FUN_71082128` | 456 | "vector::_M_default_append" | misc |
| `FUN_71089ff0` | 848 | "vector::_M_range_insert" | misc |
| `FUN_7108a5e0` | 1760 | "vector::reserve" | misc |
| `FUN_7108b158` | 688 | "vector::_M_range_insert" | misc |
| `FUN_7108b408` | 688 | "vector::_M_range_insert" | misc |
| `FUN_7108b6b8` | 688 | "vector::_M_range_insert" | misc |
| `FUN_7108b968` | 680 | "vector::_M_range_insert" | misc |
| `FUN_7108ced4` | 380 | "vector::_M_default_append" | misc |
| `FUN_7108d050` | 2820 | "Invalid version" | misc |
| `FUN_7108db54` | 572 | "vector::_M_fill_insert" | misc |
| `FUN_710976b0` | 3200 | "map::at" | misc |
| `FUN_71099500` | 848 | "000102030405060708091011121314151617181920212223242526272829" | misc |
| `FUN_7109a5d0` | 2772 | "map::at" | misc |
| `FUN_7109e530` | 892 | "%s: __pos (which is %zu) > this->size() (which is %zu)" | misc |
| `FUN_7109e910` | 4736 | "ShowCombinedNSP" | misc |
| `FUN_7109fb90` | 816 | "/registered" | misc |
| `FUN_710a1ba0` | 1536 | "Invalid '\uNNNN' control character in regular expression" | misc |
| `FUN_710a23a0` | 1776 | "Can not find file in rar" | misc |
| `FUN_710a2a90` | 1344 | "Can not find file in 7zip" | misc |
| `FUN_710a2fd0` | 4212 | "Can not open zip" | misc |
| `FUN_710a4044` | 372 | "vector::_M_default_append" | misc |
| `FUN_710a4910` | 912 | "Invalid '(?...)' zero-width assertion in regular expression" | misc |
| `FUN_710a5c80` | 368 | "Incomplete '[[' character class in regular expression" | misc |
| `FUN_710a5df0` | 528 | ".[\()*+?{\|^$" | misc |
| `FUN_710a6268` | 272 | "Number of NFA states exceeds limit. Please use shorter regex" | misc |
| `FUN_710a6378` | 360 | "Number of NFA states exceeds limit. Please use shorter regex" | misc |
| `FUN_710a64e0` | 576 | "Number of NFA states exceeds limit. Please use shorter regex" | misc |
| `FUN_710a6850` | 464 | "Back-reference referred to an opened sub-expression." | misc |
| `FUN_710a8a40` | 304 | "cannot create std::deque larger than max_size()" | error handler |
| `FUN_710a9050` | 416 | "Invalid character class." | misc |
| `FUN_710a9460` | 704 | "Invalid character class." | misc |
| `FUN_710a9b10` | 800 | "Invalid character class." | misc |
| `FUN_710aa270` | 800 | "Invalid character class." | misc |
| `FUN_710ae940` | 1460 | "Invalid character class." | misc |
| `FUN_710af0d0` | 1796 | "Invalid start of '[x-x]' range in regular expression" | misc |
| `FUN_710afd50` | 1136 | "Invalid range in bracket expression." | misc |
| `FUN_710b01c0` | 1604 | "Invalid start of '[x-x]' range in regular expression" | misc |
| `FUN_710b0ba0` | 1136 | "Invalid range in bracket expression." | misc |
| `FUN_710b1010` | 1300 | "Invalid start of '[x-x]' range in regular expression" | misc |
| `FUN_710b26c0` | 1584 | "conflicting grammar options" | misc |
| `FUN_710dde80` | 576 | "Operation not supported" | misc |
| `FUN_710de0c0` | 576 | "Operation not supported" | misc |
| `FUN_710de300` | 604 | "Operation not supported" | misc |
| `FUN_710e2c60` | 2016 | "%s: __pos (which is %zu) > this->size() (which is %zu)" | misc |
| `FUN_710e3c70` | 1152 | "Error reading input stream" | error handler |
| `FUN_710e4840` | 896 | "GitHub" | misc |
| `FUN_710f1b90` | 1616 | "Unsupported scheme" | misc |
| `FUN_710f2d50` | 256 | "Bad encryption" | misc |
| `FUN_710f2e50` | 260 | "Length must be multiple of sectors!" | misc |
| `FUN_710f58b4` | 284 | "Invalid UTF-16" | misc |
| `FUN_710f5ab0` | 372 | "%u;%u;%u%n" | misc |
| `FUN_710f8180` | 1232 | "[%dB%n" | misc |
| `FUN_710f8650` | 1204 | "[%dB%n" | misc |
| `FUN_710f8b04` | 204 | "{:02d}:{:02d}:{:06.3f}" | misc |
| `FUN_710f8d90` | 1376 | "Unsupported encoding" | misc |
| `FUN_710f9bb0` | 320 | "basic_string_view::substr" | libstdc++ helper |
| `FUN_710fa108` | 520 | "basic_string_view::substr" | libstdc++ helper |
| `FUN_710fa5c0` | 1040 | "Unsupported encoding" | misc |
| `FUN_710fad70` | 1072 | "Unsupported encoding" | misc |
| `FUN_7110b3a0` | 208 | "basic_string_view::substr" | libstdc++ helper |
| `FUN_7110b470` | 224 | "basic_string_view::substr" | libstdc++ helper |
| `FUN_7110c040` | 2320 | "romfs.bin" | misc |
| `FUN_7110f760` | 688 | "/atmosphere/exefs_patches/" | IPS patch |
| `FUN_711150d0` | 1604 | " Level" | misc |
| `FUN_71115714` | 1404 | "AAC (Object Type" | misc |
| `FUN_71115c90` | 1168 | "Unknown (" | misc |
| `FUN_71116120` | 1152 | "Unknown (" | misc |
| `FUN_71125ea0` | 4688 | ","version":" | misc |
| `FUN_7112abd0` | 224 | "override_config" | misc |
| `FUN_7112acb0` | 224 | "override_config" | misc |
| `FUN_7112ad90` | 288 | "Unknown" | misc |
| `FUN_7112aeb0` | 288 | "Unknown" | misc |
| `FUN_7112b610` | 320 | "override_config" | misc |
| `FUN_7113ac80` | 2428 | "vector::_M_default_append" | misc |
| `FUN_7113b660` | 752 | "Unknown" | misc |
| `FUN_7113b950` | 1216 | "Unknown" | misc |
| `FUN_7113be10` | 1376 | "Device" | misc |
| `FUN_7113c4e0` | 1360 | "es-419" | misc |
| `FUN_7113ca30` | 1936 | "Not available" | misc |
| `FUN_711424c0` | 2704 | "\[v([0-9]+)\]" | misc |
| `FUN_71145440` | 432 | "ScreenIdleTimeout" | misc |
| `FUN_711464f0` | 288 | "vector<bool>::_M_range_check: __n (which is %zu) >= this->si" | misc |
| `FUN_71146910` | 224 | "vector<bool>::_M_range_check: __n (which is %zu) >= this->si" | misc |
| `FUN_711469f0` | 888 | "Mask value out of range" | misc |
| `FUN_71146dc0` | 784 | "vector<bool>::_M_range_check: __n (which is %zu) >= this->si" | misc |
| `FUN_71147540` | 496 | "Degree out of range" | misc |
| `FUN_71147af0` | 736 | "vector::_M_realloc_insert" | misc |
| `FUN_71147fe0` | 912 | "vector<bool>::_M_insert_aux" | misc |
| `FUN_71148370` | 272 | "Value out of range" | misc |
| `FUN_71148480` | 320 | "Data too long" | misc |
| `FUN_711485c0` | 528 | "String contains non-numeric characters" | misc |
| `FUN_711487d0` | 608 | "String contains unencodable characters in alphanumeric mode" | misc |
| `FUN_71148e80` | 1936 | "Invalid argument" | misc |
| `FUN_71149940` | 1536 | "Mask value out of range" | misc |
| `FUN_71149f40` | 2400 | "Max capacity =" | misc |
| `FUN_7114d1c0` | 496 | ".dbi_save_extra" | misc |
| `FUN_7114d3b0` | 4800 | "sdmc:/switch/DBI/saves/" | save backup |
| `FUN_71158870` | 1408 | "sdmc:/switch/DBI/saves/" | save backup |
| `FUN_711603f0` | 3424 | "TitleId" | misc |
| `FUN_7116ca00` | 768 | "Initialize timezone" | misc |
| `FUN_7116cd00` | 224 | "%Y%m%d%H%M%S" | misc |
| `FUN_7116da20` | 800 | "Content meta data size is too small!" | misc |
| `FUN_7116de00` | 852 | "vector::reserve" | misc |
| `FUN_7116e6b0` | 544 | "%u;%u;%u%n" | misc |
| `FUN_7116ec90` | 384 | "RotateScreen" | misc |
| `FUN_7116efb0` | 368 | "RotateScreen" | misc |
| `FUN_7116ff28` | 2152 | "[%dB%n" | misc |
| `FUN_71172d34` | 3532 | "gamecard.xci" | cart dump |
| `FUN_71174b20` | 2640 | "RotateJoycon" | misc |
| `FUN_7117b248` | 332 | "Failed to read section" | error handler |
| `FUN_7117b394` | 300 | "Failed to read section" | error handler |
| `FUN_7117b4c0` | 4148 | "Invalid NCA magic" | NSP/NCA install |
| `FUN_7117c960` | 560 | "RawNcaSubsection@" | NSP/NCA install |
| `FUN_7117d3d0` | 944 | "DecodedNcaSubsection@" | NSP/NCA install |
| `FUN_7117d780` | 896 | "There is no single cnmt file" | NSP/NCA install |
| `FUN_7117db00` | 992 | "PFS0 section not found" | NSP/NCA install |
| `FUN_7117dee0` | 1008 | "/control.nacp" | misc |
| `FUN_7117e2d0` | 1184 | "/control.nacp" | misc |
| `FUN_7117fab0` | 2912 | ".cnmt.nca" | NSP/NCA install |
| `FUN_7118078c` | 324 | "vector::_M_default_append" | misc |
| `FUN_711808d0` | 464 | "Access denied" | misc |
| `FUN_71181740` | 2004 | "vector::reserve" | misc |
| `FUN_71182240` | 496 | "romfs.bin" | misc |
| `FUN_71189f20` | 412 | "ticket.tik" | misc |
| `FUN_7118a6e0` | 608 | "Install" | misc |
| `FUN_7118a940` | 608 | "Root-CA00000003-XS00000020" | misc |
| `FUN_7118ac30` | 2800 | "sdmc:/switch/DBI/dumps/" | misc |
| `FUN_7118e680` | 512 | "Exception during listing XCI: {}" | cart dump |
| `FUN_71191038` | 332 | "Can not read block" | misc |
| `FUN_7119fa50` | 4164 | "Italian" | misc |
| `FUN_711a17f0` | 464 | "DBI MTP" | MTP server |
| `FUN_711a26f0` | 448 | "SingleURB" | misc |
| `FUN_711a29b0` | 304 | "write: USB communication failed" | error handler |
| `FUN_711a2ae0` | 544 | "SingleURB" | misc |
| `FUN_711a2e40` | 784 | " readSize =" | misc |
| `FUN_711a3150` | 336 | "Invalid response received" | misc |
| `FUN_711ac370` | 1712 | "sdmc:/switch/DBI/temp/" | misc |
| `FUN_711acda0` | 1988 | "Install" | misc |
| `FUN_711b6ee0` | 1440 | "manifest" | misc |
| `FUN_711b9810` | 2416 | "manifest" | misc |
| `FUN_711c7b40` | 2448 | "vector::_M_realloc_insert" | misc |
| `FUN_711ceea4` | 1484 | "romfs.bin" | misc |
| `FUN_711d3a20` | 784 | "Install" | misc |
| `FUN_711f81e4` | 272 | "Request" | misc |
| `FUN_711f87e0` | 928 | "Request" | misc |
| `FUN_711ffad0` | 2592 | " bytes]]" | misc |
| `FUN_7120cae0` | 2956 | "{:04d}{:02d}{:02d}{:02d}{:02d}{:02d}{:02d}" | misc |
| `FUN_71244700` | 3332 | "Device" | misc |
| `FUN_71257190` | 304 | "%04d%02d%02dT%02d%02d%02d" | misc |
| `FUN_71274b10` | 1872 | "Device" | misc |
| `FUN_71290a70` | 400 | "MaxPassivePort" | misc |
| `FUN_71290c00` | 2032 | "Jan 1 1970" | misc |
| `FUN_7129f970` | 1680 | "UTF8 NLST" | misc |
| `FUN_712a01b0` | 608 | ""{:s}"" | misc |
| `FUN_712a39c0` | 1808 | "%Y%m%d%H%M%S" | misc |
| `FUN_712c18a0` | 4832 | "File status." | misc |
| `FUN_712e3d30` | 3152 | "PORT %d,%d,%d,%d,%d,%d" | misc |
| `FUN_71300540` | 3456 | "Moved permanently" | misc |
| `FUN_7130d1b0` | 3408 | "T:WPA;" | misc |
| `FUN_7130e080` | 304 | "Timeout" | misc |
| `FUN_7130e1b0` | 400 | "ForcedUA" | misc |
| `FUN_7130e340` | 2432 | "ValidateSSL" | misc |
| `FUN_7131a470` | 464 | "7ZIP file" | misc |
| `FUN_7131a730` | 3928 | "DBI update URL found" | misc |
| `FUN_71326500` | 1344 | "Unknown scheme" | misc |
| `FUN_71329080` | 3716 | "Can not create file for installable object" | misc |
| `FUN_7132a0a0` | 208 | "Output file not opened" | misc |
| `FUN_7132a170` | 212 | "Input file not opened" | misc |
| `FUN_7132d800` | 2224 | "Not a directory :'" | misc |
| `FUN_7132e9c0` | 368 | "Output file not opened" | misc |
| `FUN_7132f600` | 1040 | "saveSD" | misc |
| `FUN_7132fd20` | 724 | "VFSFS::getEntryType '" | misc |
| `FUN_71330300` | 752 | "OPTS UTF8" | misc |
| `FUN_71330920` | 632 | "anonymous" | misc |
| `FUN_71333030` | 896 | "[json.exception." | JSON/XML parsing |
| `FUN_713333b0` | 528 | "out_of_range" | misc |
| `FUN_713335c0` | 1920 | "parse error" | error handler |
| `FUN_71334290` | 336 | "<U+%.4X>" | misc |
| `FUN_713343e0` | 1840 | "'[', '{', or a literal" | misc |
| `FUN_71334c10` | 832 | "' not found" | misc |
| `FUN_71336850` | 896 | "iterator does not fit current value" | misc |
| `FUN_71336bd0` | 668 | "cannot compare iterators of different containers" | error handler |
| `FUN_7133751c` | 248 | "type must be number, but is" | misc |
| `FUN_713377c0` | 608 | "invalid string: ill-formed UTF-8 byte" | misc |
| `FUN_71337ad0` | 1840 | "invalid string: surrogate U+D800..U+DBFF must be followed by" | misc |
| `FUN_71338200` | 2384 | "invalid number; expected digit after '-'" | misc |
| `FUN_71341c90` | 3904 | "MTP Browser" | MTP server |
| `FUN_71342bd0` | 2080 | "Invalid target path" | misc |
| `FUN_71343a20` | 1600 | "Invalid target path. Parent does not exist" | misc |
| `FUN_71344c90` | 848 | "nsp_file" | misc |
| `FUN_71345f20` | 468 | "RAR file" | misc |
| `FUN_71346280` | 896 | "RomFS.bin" | misc |
| `FUN_7134edc0` | 928 | "Infinity" | misc |
| `FUN_713510b0` | 448 | "?H $'+/37;" | misc |
| `FUN_71351300` | 3776 | "contains" | misc |
| `FUN_713521c0` | 944 | "comment" | misc |
| `FUN_71352570` | 496 | "Union operator has to be applied to node sets" | misc |
| `FUN_71352760` | 1808 | "Unrecognized node type" | misc |
| `FUN_71354810` | 4352 | "xml:lang" | misc |
| `FUN_7135b030` | 1120 | "Incorrect query" | misc |
| `FUN_71369fe0` | 320 | "    {:04d}" | misc |
| `FUN_7137d2c0` | 2976 | "{:>{}}. {}" | misc |
| `FUN_7139c5f0` | 3552 | "lfs_folder" | misc |
| `FUN_713cbf90` | 3600 | "Deleting source folder..." | misc |
| `FUN_713cee60` | 240 | "DumpForwarders" | misc |
| `FUN_713cf000` | 272 | "DumpForwarders" | misc |
| `FUN_714098a4` | 208 | "sdmc:/" | misc |
| `FUN_71409974` | 208 | "sdmc:/" | misc |
| `FUN_71409a44` | 204 | "sdmc:/" | misc |
| `FUN_71409bc0` | 240 | "sdmc:/" | misc |
| `FUN_7143e9f0` | 544 | "Darkroom" | misc |
| `FUN_71447aa0` | 2096 | "invalid UTF-8 byte at index" | misc |
| `FUN_71448470` | 1696 | "cannot use operator[] with a string argument with" | error handler |
| `FUN_7144a1a8` | 552 | "Saved values" | misc |
| `FUN_7144a3d0` | 1072 | "Saved values" | misc |
| `FUN_7144b850` | 2624 | "Orientation" | misc |
| `FUN_71459e10` | 412 | "DumpForwarders" | misc |
| `FUN_71463220` | 1792 | "[{}]{}{}" | misc |
| `FUN_7146a1b4` | 1372 | "Not enough memory" | misc |
| `FUN_7146afb8` | 648 | "Saved values" | misc |
| `FUN_7146b240` | 1776 | "fit_type" | misc |
| `FUN_714823c0` | 1200 | "AutoSaveBackupInterval" | misc |
| `FUN_714862d0` | 416 | "SDCard" | misc |
| `FUN_7148a550` | 3424 | "FTP_install" | misc |
| `FUN_7148b2b0` | 1488 | "FTP_saves" | misc |
| `FUN_7148b880` | 2048 | "FTP_apps" | misc |
| `FUN_7148c080` | 2816 | "FTP_install" | misc |
| `FUN_714906c0` | 912 | "HTTP URL List" | HTTP server |
| `FUN_71490a50` | 976 | "WebDAV" | HTTP server |
| `FUN_71490e20` | 976 | "Apache HTTP" | HTTP server |
| `FUN_71498370` | 672 | "AlbumHttpServer" | HTTP server |
| `FUN_71498610` | 736 | "InstalledGamesHttpServer" | HTTP server |
| `FUN_714988f0` | 640 | "SDCardHttpServer" | HTTP server |
| `FUN_714a2770` | 4644 | "MTPMountContents" | MTP server |
| `FUN_714b1c50` | 688 | "ROSaveFS" | misc |
| `FUN_714b3ac0` | 1152 | "FTP_Save" | misc |
| `FUN_71500530` | 2912 | "  ISO-8859-5" | misc |
| `FUN_71505ef0` | 480 | "vector::_M_realloc_insert" | misc |
| `FUN_7150b3e0` | 3700 | "basic_string::erase" | libstdc++ helper |
| `FUN_7150cfe0` | 612 | " Unknown" | misc |
| `FUN_7151d004` | 1136 | "Server" | misc |
| `FUN_7153a9a0` | 324 | "DumpForwarders" | misc |
| `FUN_7153ad60` | 464 | "sdmc:/hbmenu.nro" | misc |
| `FUN_7153d584` | 876 | "Can not resolve server" | misc |
| `FUN_7153d8f0` | 1936 | "parse error" | error handler |
| `FUN_71570bc0` | 336 | "<U+%.4X>" | misc |
| `FUN_71570d10` | 2128 | "'[', '{', or a literal" | misc |
| `FUN_71571560` | 1344 | "default" | misc |
| `FUN_71575200` | 640 | "invalid string: ill-formed UTF-8 byte" | misc |
| `FUN_71575480` | 2384 | "invalid string: surrogate U+D800..U+DBFF must be followed by" | misc |
| `FUN_71575dd0` | 2960 | "invalid number; expected digit after '-'" | misc |
| `FUN_71576960` | 3552 | "invalid BOM; must be 0xEF 0xBB 0xBF if given" | misc |
| `FUN_7157ae90` | 1728 | "DBIUpdateURL" | misc |
| `FUN_7158a5b0` | 624 | "HTTP URL List" | HTTP server |
| `FUN_7159ea30` | 496 | "SDCard" | misc |
| `FUN_715a2870` | 2664 | "Unknown archive type" | misc |
| `FUN_715a9a60` | 4128 | "SDCard" | misc |
| `FUN_715b29a0` | 496 | "SavesFolder" | misc |
| `FUN_715b2d80` | 496 | "LogsFolder" | misc |
| `FUN_715cca60` | 2208 | "NspInfo" | misc |
| `FUN_715ddb50` | 208 | "Deleting source folder..." | misc |
| `FUN_715e0fa0` | 1600 | "Secondcursor" | misc |
| `FUN_715e6c80` | 3632 | "HideFolderJpg" | misc |
| `FUN_715edb80` | 880 | "MoveDownAfterX" | misc |
| `FUN_715eee90` | 2884 | "Internal error: no action" | error handler |
| `FUN_715f5990` | 1520 | "%Y.%m.%d_%H.%M.%S" | misc |
| `FUN_715f6660` | 496 | "Runtime exception" | misc |
| `FUN_715f8790` | 864 | "URI encoding: not a hex digit" | misc |
| `FUN_715f8e40` | 1152 | "bad or invalid port number" | misc |
| `FUN_715f9490` | 720 | "URI scheme must be followed by authority or path" | misc |
| `FUN_715fef10` | 384 | "named_files" | misc |
| `FUN_716122d0` | 416 | "LevelFile" | misc |
| `FUN_71641e10` | 1204 | "maccyrillic" | misc |
| `FUN_71648900` | 1360 | "ISO 8859-5" | misc |
| `FUN_7164ca00` | 388 | "basic_string::_M_replace" | libstdc++ helper |
| `FUN_7164f260` | 4336 | "note_([0-9]+)" | misc |
| `FUN_71657ef0` | 2752 | "Hyphenation" | misc |
| `FUN_716589b0` | 988 | "{}: Exception during image creation and publishing: {}" | misc |
| `FUN_71658dc0` | 1696 | "book-title" | misc |
| `FUN_7165a980` | 608 | "Can not determine image size" | misc |
| `FUN_7165d170` | 1236 | "Invalid box! {} {}x{} @ {}x{}" | misc |
| `FUN_7165d644` | 1236 | "Invalid hrule! {}x{} @ {}x{}" | misc |
| `FUN_71664af0` | 752 | "number is too big" | misc |
| `FUN_71664de0` | 1600 | "invalid format specifier" | misc |
| `FUN_71665b50` | 1040 | "0123456789abcdef" | misc |
| `FUN_71665f60` | 544 | "000102030405060708091011121314151617181920212223242526272829" | misc |
| `FUN_71666bf0` | 608 | "width/precision is out of range" | misc |
| `FUN_716671e0` | 752 | "0123456789abcdef" | misc |
| `FUN_716675b0` | 2080 | "number is too big" | misc |
| `FUN_7166fbd0` | 2400 | "argument not found" | misc |
| `FUN_71670530` | 2112 | "missing '}' in format string" | misc |
| `FUN_71670d70` | 1456 | "argument not found" | misc |
| `FUN_7167e230` | 2352 | "+,;=[]" | misc |
| `FUN_71681e60` | 1824 | "+,;=[]" | misc |
| `FUN_71688650` | 1796 | "Could not decode alpha data." | misc |
| `FUN_71688fb0` | 592 | "Frame setup failed" | error handler |
| `FUN_716892a0` | 1088 | "no memory during frame initialization." | misc |
| `FUN_7168bdb0` | 1620 | "Frame not displayable." | misc |
| `FUN_7168c404` | 236 | "null VP8Io passed to VP8GetHeaders()" | misc |
| `FUN_7168c994` | 572 | "NULL VP8Io parameter in VP8Decode()." | misc |
| `FUN_716a1470` | 400 | "easy handle already used in multi handle" | misc |
| `FUN_716a1800` | 976 | "ssrem inet_ntop() failed with errno %d: %s" | error handler |
| `FUN_716a1d90` | 2560 | "bind failed with errno %d: %s" | error handler |
| `FUN_716a2870` | 1264 | "After %ldms connect time, move on!" | misc |
| `FUN_716a2d60` | 368 | "Connection time-out" | misc |
| `FUN_716a42b0` | 548 | "Internal error removing splay node = %d" | error handler |
| `FUN_716a46d0` | 788 | "Connection #%ld to host %s left intact" | misc |
| `FUN_716a6090` | 208 | "Internal error clearing splay node = %d" | error handler |
| `FUN_716a6570` | 480 | "Proxy-" | misc |
| `FUN_716a6750` | 1136 | "Transferred a partial file" | misc |
| `FUN_716a6bc0` | 292 | "Unknown error %d" | error handler |
| `FUN_716a7520` | 1504 | "SOCKS4: Failed receiving connect request ack: %s" | error handler |
| `FUN_716a7b00` | 2836 | "User was rejected by the SOCKS5 server (%d %d)." | misc |
| `FUN_716a8910` | 3460 | "allocate connect buffer!" | misc |
| `FUN_716a9f80` | 224 | "Connection cache is full, closing the oldest one." | misc |
| `FUN_716aa530` | 1200 | "Content-Type" | misc |
| `FUN_716ab7e4` | 364 | "Can't add itself as a subpart!" | misc |
| `FUN_716aba30` | 400 | "Content-Type" | misc |
| `FUN_716abca4` | 1500 | "application/octet-stream" | misc |
| `FUN_716af3f0` | 512 | "         (((((" | misc |
| `FUN_716af650` | 4192 | "username="%s", realm="%s", nonce="%s", uri="%s", response="%" | misc |
| `FUN_716b06b0` | 1616 | "userhash" | misc |
| `FUN_716b0f90` | 208 | "CURL_SSL_BACKEND" | misc |
| `FUN_716b1ee0` | 1352 | ";sha256//" | misc |
| `FUN_716b25f0` | 1696 | "Error opening ca path %s" | error handler |
| `FUN_716b2dd0` | 2432 | "WARNING: SSL: Certificate type not set, assuming PKCS#12 for" | misc |
| `FUN_716b3804` | 380 | "Not a directory" | misc |
| `FUN_716b6b90` | 400 | "Operation timed out" | misc |
| `FUN_716b7250` | 400 | "Failure initialising ssh session" | misc |
| `FUN_716b7570` | 544 | "%c%c%c=" | misc |
| `FUN_716b7790` | 656 | "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz01234567" | misc |
| `FUN_716b7b20` | 396 | "Hostname in DNS cache was stale, zapped" | misc |
| `FUN_716b7dc0` | 672 | "Shuffling %i addresses" | misc |
| `FUN_716b8060` | 620 | "Hostname %s was found in DNS cache" | misc |
| `FUN_716b8440` | 1264 | "RESOLVE %s:%d is - old addresses discarded!" | misc |
| `FUN_716b8930` | 368 | "%2ld:%02ld:%02ld" | misc |
| `FUN_716b8aa0` | 464 | "%2ld.%0ldM" | misc |
| `FUN_716b8f60` | 1808 | "** Resuming transfer from byte position %ld" | misc |
| `FUN_716b99f0` | 532 | "#HttpOnly_" | HTTP server |
| `FUN_716b9c04` | 4012 | "__Host-" | misc |
| `FUN_716bb1c0` | 640 | "Set-Cookie:" | misc |
| `FUN_716bb600` | 1284 | "# Netscape HTTP Cookie File" | HTTP server |
| `FUN_716bbb04` | 220 | "HTTP/3 requested for non-HTTPS URL" | HTTP server |
| `FUN_716bbd20` | 272 | "Rejected %zu bytes header (max is %d)!" | misc |
| `FUN_716bc070` | 256 | "Empty reply from server" | misc |
| `FUN_716bc200` | 848 | "Bearer" | misc |
| `FUN_716bc650` | 576 | "Forcing HTTP/1.1 for NTLM" | HTTP server |
| `FUN_716bca20` | 532 | "Ignoring duplicate digest auth header." | misc |
| `FUN_716bd120` | 400 | "PROXY %s %s %s %li %li" | misc |
| `FUN_716bd3b0` | 208 | "100-continue" | misc |
| `FUN_716bd480` | 240 | "Malformatted trailing header ! Skipping trailer." | misc |
| `FUN_716bf2b0` | 4288 | "Lying server, not serving HTTP/2" | HTTP server |
| `FUN_716c0b30` | 208 | "Recv failure: %s" | misc |
| `FUN_716c0c00` | 1072 | "Failed writing header" | error handler |
| `FUN_716c1030` | 224 | "Send failure: %s" | misc |
| `FUN_716c1870` | 960 | "socks5h" | misc |
| `FUN_716c1c30` | 304 | "Connection %ld seems to be dead!" | misc |
| `FUN_716c233c` | 576 | "Closing connection %ld" | misc |
| `FUN_716c2aa0` | 352 | "User-Agent: %s" | misc |
| `FUN_716c5400` | 1212 | "Failed sending DICT request" | error handler |
| `FUN_716c59d0` | 208 | "Operation too slow. Less than %ld bytes/sec transferred the " | misc |
| `FUN_716c5b40` | 656 | "XDISPLOC" | misc |
| `FUN_716c5fa0` | 1280 | "%s (unsupported)" | misc |
| `FUN_716c6540` | 1152 | "Sending data failed (%d)" | error handler |
| `FUN_716c69c0` | 4152 | "%s IAC %s" | misc |
| `FUN_716c79f8` | 232 | "%s%s.netrc" | misc |
| `FUN_716c85a0` | 1056 | "operation aborted by trailing headers callback" | misc |
| `FUN_716c89c0` | 420 | "the ioctl callback returned %d" | misc |
| `FUN_716c8c10` | 3808 | "Ignoring the response-body" | misc |
| `FUN_716c9af0` | 512 | "No URL set!" | misc |
| `FUN_716c9cf0` | 800 | "Disables POST, goes with %s" | misc |
| `FUN_716ca010` | 336 | "REFUSED_STREAM, retrying a fresh connect" | misc |
| `FUN_716ca600` | 1556 | "Out of memory" | misc |
| `FUN_716cb6e0` | 208 | "Error while processing content unencoding: Unknown failure w" | error handler |
| `FUN_716cb7b0` | 272 | "1.2.0.4" | misc |
| `FUN_716cb8c0` | 912 | "1.2.11" | misc |
| `FUN_716cbf70` | 288 | "identity" | misc |
| `FUN_716cc190` | 704 | "identity" | misc |
| `FUN_716cd550` | 1600 | "%02d:%02d%n" | misc |
| `FUN_716cdc80` | 784 | "Received unexpected DATA packet block %d, expecting block %d" | misc |
| `FUN_716cdf90` | 368 | "set timeouts for state %d; Total %ld, retry %d maxtry %d" | misc |
| `FUN_716ce100` | 880 | "tftp_tx: internal error, event: %i" | error handler |
| `FUN_716ce470` | 464 | "bind() failed; %s" | error handler |
| `FUN_716ce640` | 352 | ";mode=" | misc |
| `FUN_716ce800` | 1328 | "Connected for transmit" | misc |
| `FUN_716ced90` | 1632 | "Received too short packet" | misc |
| `FUN_716cfa60` | 368 | "%c%03d" | misc |
| `FUN_716cfeb0` | 256 | "LIST "%s" *" | misc |
| `FUN_716d0150` | 240 | "Cannot FETCH without a UID." | error handler |
| `FUN_716d0330` | 928 | "SEARCH" | misc |
| `FUN_716d06d0` | 224 | "LOGIN %s %s" | misc |
| `FUN_716d07b0` | 224 | "No known authentication mechanisms supported!" | misc |
| `FUN_716d0c40` | 2272 | "Mime-Version" | misc |
| `FUN_716d1520` | 2368 | "STARTTLS denied" | misc |
| `FUN_716d2050` | 432 | "AUTH %s" | misc |
| `FUN_716d2200` | 304 | "APOP %s %s" | misc |
| `FUN_716d28c0` | 288 | "No known authentication mechanisms supported!" | misc |
| `FUN_716d2c90` | 1728 | "PASS %s" | misc |
| `FUN_716d35a0` | 320 | "No known authentication mechanisms supported!" | misc |
| `FUN_716d36e0` | 512 | "AUTH %s" | misc |
| `FUN_716d3b30` | 208 | "RCPT TO:<%s>" | misc |
| `FUN_716d3c00` | 560 | " SMTPUTF8" | MTP server |
| `FUN_716d3e30` | 1508 | "Mime-Version" | misc |
| `FUN_716d4510` | 2048 | "Unexpectedly short EHLO response" | misc |
| `FUN_716d4e90` | 576 | "Failed to alloc scratch buffer!" | error handler |
| `FUN_716d5170` | 480 | "select/poll error" | error handler |
| `FUN_716d55b0` | 864 | "response reading failed" | error handler |
| `FUN_716d5b10` | 2384 | "Content-Length" | misc |
| `FUN_716d64c0` | 736 | "Failed writing RTP data" | error handler |
| `FUN_716d67a0` | 464 | "Got a blank Session ID" | misc |
| `FUN_716d69d0` | 624 | "Failed sending Gopher request" | error handler |
| `FUN_716d6e50` | 976 | "XOAUTH2" | misc |
| `FUN_716d7220` | 1220 | "Unsupported SASL authentication mechanism" | misc |
| `FUN_716d76e4` | 292 | "WARNING: Using weak random seed" | misc |
| `FUN_716d7ec0` | 2000 | "%u%.2s-%.2s-%.2s %.2s:%.2s:%.2s %.*s" | misc |
| `FUN_716d8ac4` | 3332 | "   Issuer: %s" | misc |
| `FUN_716da170` | 1584 | "Failed to encode DOH packet [%d]" | error handler |
| `FUN_716da7a0` | 3344 | "RDATA length" | misc |
| `FUN_716db620` | 416 | "0123456789abcdefABCDEF:." | misc |
| `FUN_716db7c0` | 288 | "%%%02x" | misc |
| `FUN_716db9f0` | 2420 | "127.0.0.1/" | misc |
| `FUN_716dc3a4` | 2028 | "file://%s%s%s" | misc |
| `FUN_716dcb90` | 3216 | "%%%02x" | misc |
| `FUN_716dd8c0` | 384 | "%s/%s@%s" | misc |
| `FUN_716ddd00` | 576 | "%s %02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%" | misc |
| `FUN_716de150` | 1552 | "Can't get the size of file." | misc |
| `FUN_716de760` | 316 | "Couldn't open file %s" | misc |
| `FUN_716dee20` | 400 | "File already completely downloaded" | misc |
| `FUN_716df110` | 2272 | "getsockname() failed: %s" | error handler |
| `FUN_716df9f0` | 1168 | "Illegal port number in EPSV reply" | misc |
| `FUN_716dfff0` | 916 | "Uploading to a URL without a file name!" | misc |
| `FUN_716e0384` | 460 | ";type=" | misc |
| `FUN_716e05d0` | 304 | "Failure sending QUIT command: %s" | misc |
| `FUN_716e07b0` | 368 | "Error accept()ing server connect" | error handler |
| `FUN_716e0a20` | 608 | "CWD %s" | misc |
| `FUN_716e0c80` | 272 | "PRET STOR %s" | misc |
| `FUN_716e0e60` | 704 | "Couldn't set desired mode" | misc |
| `FUN_716e1120` | 512 | "We got a 421 - timeout!" | misc |
| `FUN_716e1320` | 368 | "Accept timeout occurred while waiting server connect" | misc |
| `FUN_716e1490` | 4640 | "Access denied: %03d" | misc |
| `FUN_716e26b0` | 912 | "TYPE %c" | misc |
| `FUN_716e2a40` | 1936 | "Wildcard - Parsing started" | misc |
| `FUN_716e31d0` | 1540 | "No data was received!" | misc |
| `FUN_716e3a10` | 3552 | "rwx-tTsS" | misc |
| `FUN_716e5060` | 1344 | "Unable to allocate temporary space for packet" | misc |
| `FUN_716e55a0` | 640 | "Channel can not be reused" | misc |
| `FUN_716e5820` | 320 | "Would block sending window adjust" | misc |
| `FUN_716e5960` | 500 | "Unexpected packet length" | misc |
| `FUN_716e5bf0` | 832 | "transport read" | misc |
| `FUN_716e6040` | 596 | "EOF has already been received, data might be ignored" | misc |
| `FUN_716e6444` | 284 | "Receiving channel window has been exhausted" | misc |
| `FUN_716e6560` | 452 | "Unable to send EOF, but closing channel anyway" | misc |
| `FUN_716e6724` | 220 | "libssh2_channel_wait_closed() invoked when channel is not in" | libssh2 helper |
| `FUN_716e6800` | 400 | "_libssh2_channel_free" | libssh2 helper |
| `FUN_716e6990` | 484 | "cancel-tcpip-forward" | misc |
| `FUN_716e6f60` | 336 | "ssh-rsa" | misc |
| `FUN_716e7520` | 1200 | "nistp384" | misc |
| `FUN_716e9800` | 624 | "Unable to create private key" | misc |
| `FUN_716ebce0` | 2944 | "Unrecoverable error exchanging keys" | error handler |
| `FUN_716ec860` | 816 | "Invalid parameter specified for method_type" | misc |
| `FUN_716ed070` | 224 | "former error forgotten (OOM)" | error handler |
| `FUN_716ed2d0` | 368 | "Unable to allocate memory for base64 decoding" | misc |
| `FUN_716ed440` | 624 | "%c%c%c=" | misc |
| `FUN_716eda80` | 4560 | "Unable to send open failure" | misc |
| `FUN_716ef570` | 2464 | "Invalid response from SCP server, malformed mode" | misc |
| `FUN_716eff10` | 1648 | "Would block send core file data for SCP file" | misc |
| `FUN_716f0950` | 560 | "Timed out waiting on socket" | misc |
| `FUN_716f0b80` | 1776 | "ssh-userauth" | misc |
| `FUN_716f17f0` | 480 | "too long description" | misc |
| `FUN_716f1ce0` | 336 | "malloc fail for zombie request  ID" | misc |
| `FUN_716f1e30` | 976 | "Error waiting for SFTP packet" | error handler |
| `FUN_716f23f0` | 1216 | "SFTP Protocol Error" | error handler |
| `FUN_716f28b0` | 1396 | "Data too short when extracting extdata" | misc |
| `FUN_716f3090` | 1392 | "Timeout waiting for status message" | misc |
| `FUN_716f3600` | 1780 | "sftp_read" | misc |
| `FUN_716f3db0` | 1060 | "FXP write packet too short" | misc |
| `FUN_716f4250` | 864 | "Packet too short in FXP_CLOSE command" | misc |
| `FUN_716f45b0` | 704 | "SFTP Protocol Error" | error handler |
| `FUN_716f4870` | 816 | "SFTP Protocol Error" | error handler |
| `FUN_716f4ba0` | 960 | "SFTP Protocol Error" | error handler |
| `FUN_716f4f60` | 784 | "_libssh2_channel_write() failed" | libssh2 helper |
| `FUN_716f5270` | 672 | "SFTP rmdir packet too short" | misc |
| `FUN_716f5510` | 1040 | "Unable to allocate memory for FXP_*STAT packet" | misc |
| `FUN_716f5920` | 1168 | "SFTP stat packet too short" | misc |
| `FUN_716f5db0` | 276 | "No handler for specified private key" | misc |
| `FUN_716f5f90` | 736 | "Invalid data in public key file" | misc |
| `FUN_716f6270` | 896 | "No error" | error handler |
| `FUN_716f65f0` | 1536 | "Authentication failed (username/password)" | error handler |
| `FUN_716f6bf0` | 2160 | "ecdsa-sha2-nistp384-cert-v01@openssh.com" | misc |
| `FUN_716f75d0` | 2640 | "userauth keyboard data buffer too smallfor auth num keyboard" | misc |
| `FUN_716f8020` | 240 | "transport.c" | misc |
| `FUN_716f8110` | 1728 | "transport.c" | misc |
| `FUN_716f87d0` | 1252 | "Unable to get random bytes for packet padding" | misc |
| `FUN_716f8d50` | 1392 | "Unable to allocate memory for known host entry" | misc |
| `FUN_716f92c0` | 912 | "Unable to allocate memory for base64-encoded key" | misc |
| `FUN_716f9650` | 1024 | "ecdsa-sha2-nistp521" | misc |
| `FUN_716f9b10` | 1792 | "Unsupported type of known-host information store" | misc |
| `FUN_716fa330` | 672 | "agent sign failure" | misc |
| `FUN_716fa640` | 768 | "illegal agent request" | misc |
| `FUN_716fabf0` | 544 | "Key type not supported" | misc |
| `FUN_716fc440` | 1920 | "invalid format" | misc |
| `FUN_716fcc70` | 640 | "Error parsing PEM: base 64 data missing" | error handler |
| `FUN_716fcef0` | 336 | "Unable to send keepalive message" | misc |
| `FUN_716fd040` | 528 | "OxychromaticBlowfishSwatDynamite" | misc |
| `FUN_716fd610` | 480 | "decompression failure" | misc |
| `FUN_716fd880` | 228 | "1.2.11" | misc |
| `FUN_71706ea0` | 1444 | "invalid distance too far back" | misc |
| `FUN_7170eea0` | 1572 | "Frame index is too large" | misc |
| `FUN_7172fc50` | 1648 | "BLINDING CONTEXT" | misc |
| `FUN_71735010` | 2080 | "=*\\E)" | misc |
| `FUN_71737348` | 680 | "UNKNOWN ERROR CODE (%04X)" | error handler |
| `FUN_71739598` | 488 | "eckey.Q" | misc |
| `FUN_7173ae40` | 288 | "-----BEGIN" | misc |
| `FUN_7173af60` | 1120 | "-----BEGIN EC PRIVATE KEY-----" | misc |
| `FUN_717575c0` | 1664 | "lp2p:sys" | misc |
| `FUN_717697f4` | 540 | "HB<841*" | misc |
| `FUN_7176c470` | 1120 | "0123456789abcdef" | misc |
| `FUN_7176c8d0` | 640 | "0123456789abcdef" | misc |