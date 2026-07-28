#!/usr/bin/env python3
from pathlib import Path

rom = Path('baserom.gba').read_bytes()

charmap = {}
with open('data/charmap/charmap.txt', encoding='utf-8') as f:
    for line in f:
        line = line.split('@')[0].strip()
        if not line or line.startswith(';'):
            continue
        if '=' in line:
            left, right = line.split('=', 1)
            char = left.strip().strip("'")
            code_str = right.strip()
            if not code_str:
                continue
            code = int(code_str, 16)
            if char:
                charmap[code] = char

def decode_text(data):
    result = []
    i = 0
    while i < len(data):
        b = data[i]
        if b == 0xFF:
            result.append('$')
            break
        elif b == 0xFE:
            result.append('\n')
            i += 1
        elif b == 0xFD:
            if i + 1 < len(data):
                code = data[i + 1]
                if code == 0x01:
                    result.append('{PLAYER}')
                elif code == 0x02:
                    result.append('{STR_VAR_1}')
                elif code == 0x03:
                    result.append('{STR_VAR_2}')
                elif code == 0x05:
                    result.append('{KUN}')
                elif code == 0x06:
                    result.append('{RIVAL}')
                else:
                    result.append(chr(code))
                i += 2
            else:
                i += 1
        elif b in charmap:
            result.append(charmap[b])
            i += 1
        else:
            result.append('\\x%02X' % b)
            i += 1
    return ''.join(result)

blocks = [
    (0x1F1A7D, 160, "gText_BirchLab_Aide_BirchAwayOnFieldwork"),
    (0x1F1ADF, 62, "gText_BirchLab_Aide_BirchIsntOneForDeskWork"),
    (0x1F1B5B, 100, "gText_BirchLab_Aide_BirchEnjoysRivalsHelpToo"),
]

for offset, size, name in blocks:
    data = rom[offset:offset+size]
    text = decode_text(data)
    print('%s @ 0x%06X:' % (name, offset))
    print('  .string "%s"' % text)
    print()