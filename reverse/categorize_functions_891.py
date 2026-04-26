#!/usr/bin/env python3
"""Build a function-level feature/subsystem table for DBI 891 .text.

For every function in functions_891.tsv:
  1. Find every plain-string load inside the function (adrp + add/ldr).
  2. Match the loaded string to a subsystem keyword set.
  3. Pick the most-likely subsystem; if no anchor matches, classify by
     other signals (call to known-subsystem function, presence of
     cipher v3 inline, vtable thunk shape, etc.).

Output (TSV):
    file_off, va, size, n_string_refs, top_subsystem, sample_anchor

This is the 891 equivalent of 887's `fn_categories_*.tsv`.
"""
import re
import struct
import sys
from collections import Counter, defaultdict

NRO_BASE = 0x71000000

SUBSYSTEMS = {
    'libstdcxx':       ['basic_string','std::','allocator','bad_alloc','vector::','deque::','map::','regex'],
    'libcurl':         ['libcurl','CLIENT libcurl'],
    'libssh2':         ['libssh2','ssh-rsa','SFTP Protocol','SSH-2.0-libssh2'],
    'pugixml':         ['pugi','xpath_exception'],
    'json':            ['json.exception','json.error'],
    'zlib':            ['zlib','inflate','deflate'],
    'zstd':            ['zstd','Zstd'],
    'png_jpeg':        ['png sig','jpegdec','image/png','image/jpeg','image/gif'],
    'ftp_server':      ['Service ready','PRET','PASV','RETR ','FTP:','New user.','Connection closed','data connection'],
    'http_server':     ['AlbumHttp','InstalledGamesHttp','SDCardHttp','webdav','WebDAV'],
    'mtp_server':      ['MTP','mtp-server','capmtp','DBI MTP','MtpInitiator','MtpStorage'],
    'titledb':         ['titledb','TitleDB','tmp_titledb','blawar/titledb'],
    'install':         ['NCA header','PFS0','cnmt','ticket.tik','ContentStorage','BuiltInStorage','FatFileSystem'],
    'save_backup':     ['Skipping save backup','/saves/','SaveData'],
    'gamecard':        ['gamecard','IsInserted','GameCard','xci','Suppress Gamecard','gamecard_cert'],
    'libnx':           ['libnx','svcStartThread','svcStartProcess','sm:s'],
    'atmosphere':      ['atmosphere','exefs_patches'],
    'render_ui':       ['MainMenu','consoleInit','framebuffer','glyph','Atlas'],
    'self_update':     ['VersionsURL','sdmc:/switch/DBI/'],
    'config':          ['ServerSettings','UserSettings','dbi.config','/config/'],
    'fictionbook':     ['FictionBook','FB2','<FictionBook'],
    'archive':         ['minizip','tar archive','zip archive'],
    'usb_dbi0':        ['DBI0','dbi-backend','VID 0x057E','PID 0x3000'],
}

def insn_at(data, off):
    return struct.unpack_from('<I', data, off)[0]

def is_adrp(raw):       return (raw & 0x9f000000) == 0x90000000
def is_add_imm(raw):    return (raw & 0xff800000) == 0x91000000
def is_ldr(raw):
    return ((raw & 0xff000000) == 0xf9400000) or ((raw & 0xff000000) == 0xb9400000)

def decode_adrp(raw, pc):
    immlo = (raw >> 29) & 0x3
    immhi = (raw >> 5) & 0x7ffff
    imm = ((immhi << 2) | immlo) << 12
    if imm & (1 << 32): imm -= 1 << 33
    return raw & 0x1f, (pc & ~0xfff) + imm

def decode_add_imm(raw):
    rd = raw & 0x1f
    rn = (raw >> 5) & 0x1f
    imm = ((raw >> 10) & 0xfff) << (((raw >> 22) & 1) * 12)
    return rd, rn, imm

def decode_ldr(raw):
    rt = raw & 0x1f
    rn = (raw >> 5) & 0x1f
    sf = (raw >> 30) & 1
    imm = ((raw >> 10) & 0xfff) * (8 if sf else 4)
    return rt, rn, imm

def main():
    nro = sys.argv[1] if len(sys.argv) > 1 else '/tmp/dbi891/DBI.nro'
    funcs_tsv = sys.argv[2] if len(sys.argv) > 2 else '/opt/aimeld-proj/re/analysis/891/functions_891.tsv'
    plain_tsv = sys.argv[3] if len(sys.argv) > 3 else '/opt/aimeld-proj/re/analysis/891/plain_strings.txt'

    with open(nro, 'rb') as f: data = f.read()
    text_size = struct.unpack_from('<I', data, 0x24)[0]

    # Load anchor strings (file_off → text)
    anchors = {}
    with open(plain_tsv) as f:
        for line in f:
            m = re.match(r'^0x([0-9a-fA-F]+)\t(.*)$', line.rstrip())
            if m:
                off = int(m.group(1), 16)
                anchors[NRO_BASE + off] = m.group(2)

    # Load functions
    funcs = []
    with open(funcs_tsv) as f:
        for line in f:
            line = line.rstrip()
            if not line or line.startswith('offset'): continue
            parts = line.split('\t')
            if len(parts) >= 3:
                try:
                    file_off = int(parts[0], 16)
                    va = int(parts[1], 16)
                    size = int(parts[2])
                    funcs.append((file_off, va, size))
                except: pass

    # Classify each function
    print('file_off\tva\tsize\tn_string_refs\ttop_subsystem\tsample_anchor')
    cat_count = Counter()
    for fo, va, size in funcs:
        end = fo + size
        if end > text_size: end = text_size
        # Walk function instructions for adrp + add/ldr → anchor lookup
        sub_score = Counter()
        anchor_sample = ''
        n_refs = 0
        i = fo
        while i + 8 <= end:
            raw = insn_at(data, i)
            if is_adrp(raw):
                rd, page = decode_adrp(raw, NRO_BASE + i)
                for k in range(1, 5):
                    if i + (k+1)*4 > end: break
                    r2 = insn_at(data, i + k*4)
                    if is_add_imm(r2):
                        rd2, rn2, imm = decode_add_imm(r2)
                        if rn2 == rd:
                            addr = page + imm
                            if addr in anchors:
                                s = anchors[addr]
                                n_refs += 1
                                if not anchor_sample: anchor_sample = s[:40]
                                low = s.lower()
                                for sub, kws in SUBSYSTEMS.items():
                                    if any(k.lower() in low for k in kws):
                                        sub_score[sub] += 1
                                        break
                            break
                    if is_ldr(r2):
                        rt, rn, imm = decode_ldr(r2)
                        if rn == rd:
                            addr = page + imm
                            if addr in anchors:
                                s = anchors[addr]
                                n_refs += 1
                                if not anchor_sample: anchor_sample = s[:40]
                                low = s.lower()
                                for sub, kws in SUBSYSTEMS.items():
                                    if any(k.lower() in low for k in kws):
                                        sub_score[sub] += 1
                                        break
                            break
            i += 4
        top = sub_score.most_common(1)[0][0] if sub_score else ('uncategorized' if n_refs == 0 else 'misc')
        cat_count[top] += 1
        print(f'0x{fo:08x}\t0x{va:x}\t{size}\t{n_refs}\t{top}\t{anchor_sample}')

    print('  category histogram:', file=sys.stderr)
    for c, n in cat_count.most_common():
        print(f'  {c:20s} {n}', file=sys.stderr)

if __name__ == '__main__':
    main()
