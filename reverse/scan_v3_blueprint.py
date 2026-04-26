#!/usr/bin/env python3
"""Blueprint-anchored cipher v3 search for DBI 891.

For each candidate plaintext × every extracted key, encrypt the
plaintext under cipher v3 (XOR + counter + cumsum) and look for the
ciphertext bytes verbatim in `.rodata`. If found, we have proof that
this exact (key, plaintext) pair lives in this binary.

This is the inverse of brute-decoding: instead of trying to recognise
Russian in the output, we KNOW the plaintext we expect (e.g. DBI's
own version label) and verify whether it's stored at all.

Useful for hunting:
  - "DBI 891-ru\\0"
  - "Версия %d-%s"
  - "по умолчанию"
  - any well-known DBI Russian label
"""
import struct
import sys

def v3_encrypt(pt, key):
    """Inverse of cipher v3 decrypt: pt -> ct."""
    kb = key.to_bytes(8, 'little')
    n = len(pt)
    delta = bytearray([pt[0]])
    for i in range(1, n):
        delta.append((pt[i] - pt[i-1]) & 0xff)
    out = bytearray()
    for i, d in enumerate(delta):
        ctr = (i >> 3) & 0xff
        out.append(d ^ ((kb[i & 7] + ctr) & 0xff))
    return bytes(out)

def parse_keys(path):
    keys = set()
    with open(path) as f:
        next(f)
        for line in f:
            parts = line.rstrip().split('\t')
            if len(parts) >= 2:
                try: keys.add(int(parts[1], 16))
                except: pass
    return list(keys)

PLAINTEXTS_KOI8R = [
    'DBI: 891-ru',
    'DBI 891-ru',
    'DBI 891 fork',
    'Версия 891-ru',
    'Версия: 891-ru',
    'Версия программы',
    'по умолчанию',
    'Загрузка',
    'Установка',
    'Установлено',
    'Установить',
    'Устанавливается',
    'Удалить',
    'Удалено',
    'Удалить все',
    'Сохранение',
    'Загрузка титулов',
    'Перезагрузка',
    'Подождите',
    'Пожалуйста, подождите',
    'Прервано пользователем',
    'Готово',
    'Отмена',
    'Назад',
    'Далее',
    'Продолжить',
    'Подтверждение',
    'Вы уверены?',
    'Подключение',
    'Соединение',
    'Подключение к серверу',
    'Соединение установлено',
    'Соединение разорвано',
    'Файл',
    'Файлы',
    'Папка',
    'Папки',
    'Размер',
    'Время',
    'Дата',
    'Имя файла',
    'Системные настройки',
    'Настройки',
    'Конфигурация',
    'Журнал',
    'Журнал событий',
    'Название игры',
    'Идентификатор',
    'Идентификатор приложения',
    'Версия игры',
    'Издатель',
    'Дамп картриджа',
    'Резервная копия',
    'Восстановление',
    'Сохранения',
    'Сохранения игры',
    'Скачать обновление',
    'Доступно обновление',
    'Обновить DBI',
    'Запуск',
    'Запуск NRO',
    'Перезапуск',
    'Главное меню',
    'Все приложения',
    'Установленные приложения',
    'Карта microSD',
    'Внутренняя память',
    'Информация',
    'Помощь',
    'Об авторе',
    'О программе',
    'Перевёл',
    'Распаковка',
    'Распаковка содержимого',
    'Установка содержимого',
    'Удалить временные файлы',
    'Полный сброс',
    'Не удалось',
    'Не удалось открыть',
    'Не удалось прочитать',
    'Не удалось записать',
    'Файл не найден',
    'Папка не найдена',
    'Недостаточно места',
    'Ошибка',
    'Ошибка при выполнении',
    'Неизвестная ошибка',
    'Неизвестно',
    'Неизвестный формат',
    'Карты microSD',
    'Внутренней памяти',
    'Свободно',
    'Использовано',
    'Всего',
    'Прогресс',
    'байт',
    'байтов',
    'килобайт',
    'мегабайт',
    'гигабайт',
    'kB',
    'MB',
    'GB',
]

def main():
    nro = sys.argv[1] if len(sys.argv) > 1 else '/tmp/dbi891/DBI.nro'
    keys_path = sys.argv[2] if len(sys.argv) > 2 else '/opt/aimeld-proj/dbi-fork-git/reverse/keys_891.tsv'
    with open(nro, 'rb') as f: data = f.read()
    keys = parse_keys(keys_path)
    print(f'NRO {len(data):,} B,  keys {len(keys)},  candidates {len(PLAINTEXTS_KOI8R)}', file=sys.stderr)

    print('plaintext\tkey\toffset\tlength')
    n_hits = 0
    for pt_str in PLAINTEXTS_KOI8R:
        try:
            pt = pt_str.encode('koi8-r') + b'\x00'
        except UnicodeEncodeError:
            continue
        if len(pt) < 8 or len(pt) > 64: continue
        for k in keys:
            ct = v3_encrypt(pt, k)
            idx = data.find(ct)
            if idx >= 0:
                print(f'{pt_str!r}\t0x{k:016x}\t0x{idx:x}\t{len(pt)}')
                n_hits += 1
        if n_hits and n_hits % 5 == 0:
            sys.stdout.flush()
    print(f'  total hits: {n_hits}', file=sys.stderr)

if __name__ == '__main__':
    main()
