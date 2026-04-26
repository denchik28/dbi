#!/usr/bin/env python3
"""Filter and dedupe raw bulk-decoded TSVs.

Sliding-window decoders emit one row per starting offset, and many of those
rows are either:
  - the same plaintext detected at a shifted starting offset (overlap), or
  - periodic noise (the decoded buffer is "ABCDABCDABCD..." junk from a
    cipher key that happens to satisfy the language filter).

This script keeps only the strongest hit per byte range and drops periodic
noise.

Usage:
    python3 dedup_decoded.py decoded.tsv > decoded_clean.tsv
"""
import sys
import re

def is_periodic(s, min_period=2, max_period=16, min_repeats=3, edit_tolerance=0.30):
    if len(s) < min_period * min_repeats:
        return False
    for p in range(min_period, max_period + 1):
        if len(s) < p * min_repeats:
            continue
        prefix = s[:p]
        diffs = 0
        n = (len(s) // p) * p
        for i in range(p, n):
            if s[i] != prefix[i % p]:
                diffs += 1
        if diffs / max(1, n - p) <= edit_tolerance:
            return True
    return False

def parse(path):
    rows = []
    with open(path, encoding='latin-1') as f:
        for line in f:
            if line.startswith('offset') or line.startswith('@'):
                # Tolerate both "offset\tkey\trun\ttext" and the C scanner's
                # legacy "@ off\tkey=...\trun=N\ttext" header style.
                continue
            parts = line.rstrip('\n').split('\t', 3)
            if len(parts) != 4:
                continue
            try:
                off = int(parts[0], 0)
                key = int(parts[1], 0)
                run = int(parts[2])
            except ValueError:
                continue
            text = parts[3]
            rows.append((off, key, run, text))
    return rows

def dedup(rows):
    """Group by key; for each key, sort by offset; coalesce overlapping
    runs into one (keep the row with the longest run that starts earliest)."""
    rows.sort(key=lambda r: (r[1], r[0]))
    out = []
    cur_key = None
    cur_end = -1
    cur_best = None
    for off, key, run, text in rows:
        end = off + run
        if key != cur_key or off >= cur_end:
            if cur_best:
                out.append(cur_best)
            cur_key = key
            cur_end = end
            cur_best = (off, key, run, text)
        else:
            cur_end = max(cur_end, end)
            if run > cur_best[2]:
                cur_best = (off, key, run, text)
    if cur_best:
        out.append(cur_best)
    return out

EN_BIGRAMS = ('th', 'in', 'er', 'an', 're', 'on', 'at', 'en', 'nd', 'or',
              'ed', 'es', 'ti', 'is', 'st', 'ar', 'le', 'ng', 'ot', 'al',
              'om', 'ic', ' a', ' t', ' s', 'e ', 'd ', 's ', 'ed', 'on',
              'tion', 'file', 'fail', 'erro', 'open', 'invalid', 'not',
              'unable', 'connection', 'request', 'data', 'cannot')
RU_KOI8R_BIGRAMS = (
    # Common Russian bigrams in KOI8-R hex pairs
    b'\xd3\xd4',  # ст
    b'\xd4\xcf',  # то
    b'\xc5\xce',  # ен
    b'\xce\xc1',  # на
    b'\xc1\xce',  # ан
    b'\xcf\xd7',  # ов
    b'\xd2\xc1',  # ра
    b'\xd0\xd2',  # пр
    b'\xc4\xcc',  # дл
    b'\xd2\xc5',  # ре
    b'\xc8\xcb',  # хк
    b'\xc4\xc5',  # де
    b'\xd0\xcf',  # по
    b'\xcc\xc9',  # ли
    b'\xc1\xcc',  # ал
    b'\xd1\xd3',  # яс
    b'\xd1\xc4',  # яд
    b'\xcf\xd2',  # ор
    b'\xc2\xcf',  # бо
    b'\xc1\xd4',  # ат
    b'\xc5\xd2',  # ер
    b'\xc1\xd2',  # ар
    b'\xcf\xcb',  # ок
    b'\xcc\xd1',  # ля
    b'\xcb\xc1',  # ка
    b'\xc4\xc1',  # да
    b'\xd5\xd4',  # ут
    b'\xc1\xc5',  # ае
    b'\xd4\xd8',  # ть
)

EN_WORDS = (
    'file', 'open', 'close', 'read', 'write', 'save', 'load', 'send', 'fail',
    'error', 'data', 'name', 'path', 'size', 'with', 'from', 'init', 'host',
    'user', 'pass', 'buffer', 'switch', 'system', 'format', 'version', 'valid',
    'invalid', 'unable', 'cannot', 'create', 'delete', 'update', 'transfer',
    'connect', 'request', 'response', 'login', 'logout', 'logged', 'list',
    'directory', 'folder', 'remove', 'rename', 'copy', 'move', 'install',
    'launch', 'start', 'stop', 'wait', 'ready', 'busy', 'done', 'success',
    'failed', 'failure', 'aborted', 'parameter', 'argument', 'syntax',
    'available', 'allowed', 'denied', 'permission', 'storage', 'memory',
    'application', 'session', 'archive', 'header', 'footer', 'magic',
    'signature', 'package', 'module', 'function', 'method', 'thread',
    'socket', 'usb', 'network', 'fatfs', 'ticket', 'cnmt', 'syntax',
    'allocate', 'allocation', 'available', 'aborted', 'code', 'category',
    'source', 'target', 'option', 'config', 'setting', 'before', 'after',
    'during', 'while', 'over', 'under', 'enter', 'leave', 'support',
    'about', 'okay', 'data', 'connection', 'corrupted', 'array', 'integer',
    'signed', 'unsigned', 'unknown', 'syntax', 'event', 'events',
    'database', 'index', 'table', 'value', 'column', 'string', 'object',
    'sdcard', 'rom', 'switch-dbi', 'nintendo', 'nsp', 'xci', 'nca',
    'access', 'attempt', 'retry', 'iter', 'task', 'queue', 'lock',
    'busy', 'main', 'menu', 'screen', 'window', 'press', 'button',
    'home', 'back', 'forward', 'next', 'previous', 'option',
)
EN_WORD_RX = re.compile(r'\b(' + '|'.join(EN_WORDS) + r')\b', re.IGNORECASE)

def is_meaningful_en(s):
    """Real English: must contain at least one dictionary word."""
    if EN_WORD_RX.search(s):
        return True
    return False

def is_meaningful_ru(text_bytes):
    """Heuristic: KOI8-R encoded bytes contain Russian bigrams."""
    if len(text_bytes) < 6:
        return True
    bigram_hits = sum(1 for bg in RU_KOI8R_BIGRAMS if bg in text_bytes)
    return bigram_hits >= 2

def filter_by_key_uniqueness(rows, max_hits_per_key=4):
    """A real DBI cipher key typically encrypts exactly one string. A key
    that satisfies the language filter on dozens of offsets is almost
    always producing periodic noise. Drop keys with too many surviving
    hits. Run this AFTER dedup (overlapping hits already collapsed)."""
    from collections import Counter
    counts = Counter(r[1] for r in rows)
    return [r for r in rows if counts[r[1]] <= max_hits_per_key]

if __name__ == '__main__':
    import argparse
    ap = argparse.ArgumentParser()
    ap.add_argument('tsv')
    ap.add_argument('--lang', choices=['en', 'ru', 'none'], default='none')
    ap.add_argument('--max-hits-per-key', type=int, default=4)
    args = ap.parse_args()

    rows = parse(args.tsv)
    rows = [r for r in rows if not is_periodic(r[3])]
    if args.lang == 'en':
        rows = [r for r in rows if is_meaningful_en(r[3])]
    elif args.lang == 'ru':
        rows = [r for r in rows if is_meaningful_ru(r[3].encode('latin-1'))]
    rows = dedup(rows)
    rows = filter_by_key_uniqueness(rows, args.max_hits_per_key)
    rows.sort(key=lambda r: r[0])
    print('offset\tkey\trun\ttext')
    for off, key, run, text in rows:
        print(f'0x{off:08x}\t0x{key:016x}\t{run}\t{text}')
    print(f'  kept {len(rows)} rows', file=sys.stderr)
