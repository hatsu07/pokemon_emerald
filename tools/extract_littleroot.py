#!/usr/bin/env python3
"""LittlerootTownテキストをROM内で検索するスクリプト"""
import subprocess
from pathlib import Path

rom = Path('baserom.gba').read_bytes()
preproc = 'tools/preproc/preproc'
charmap = 'charmap.txt'

texts = {
    'mom_new_home': 'ママ『{PLAYER} おつかれさま!\pながいあいだ トラックに ゆられて\nたいへん だったでしょ?\pここが ミシロタウンよ!\pどう? これが わたしたちの\nあたらしい おうち!\pちょっと こふうな かんじで\nすみやすそうな ところ でしょ?\pこんどは {PLAYER}の おへやも あるのよ!\nさあ なかに はいりましょ!$',
    'mom_wait': 'ママ『まって {PLAYER}!$',
    'town_sign': 'ここは ミシロ タウン\nどんな いろにも そまらない まち$',
    'lab_sign': '「オダマキ ポケモン けんきゅうじょ」$',
    'players_house': '「{PLAYER}の いえ」$',
    'birch_house': '「オダマキ はかせの いえ」$',
}

for name, text in texts.items():
    s = 't:\n\t.string "' + text + '"\n'
    with open('/tmp/t.s', 'w') as f:
        f.write(s)
    r = subprocess.run([preproc, '/tmp/t.s', charmap], capture_output=True, text=True)
    if r.returncode != 0:
        print(f'{name}: ERROR: {r.stderr}')
        continue
    # Extract bytes from output
    bytes_list = []
    for part in r.stdout.split('.byte '):
        if part.strip():
            for b in part.strip().split(', '):
                b = b.strip()
                if b.startswith('0x'):
                    bytes_list.append(int(b, 16))
    if bytes_list:
        enc = bytes(bytes_list)
        pos = rom.find(enc[:8])
        if pos >= 0:
            print(f'{name}: ROM 0x{pos:06x} (GBA 0x8{pos:06x}), {len(enc)} bytes')
        else:
            print(f'{name}: NOT FOUND (first bytes: {enc[:8].hex()})')
    else:
        print(f'{name}: No bytes extracted')
