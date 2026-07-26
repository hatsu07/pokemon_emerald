#!/usr/bin/env python3
from pathlib import Path

rom = Path('baserom.gba').read_bytes()

# 看板3件の生データを表示
for offset, size in [(0x1e46c2, 20), (0x1e46d6, 9), (0x1e46df, 15)]:
    data = rom[offset:offset+size]
    print(f'0x{offset:06x} ({size} bytes):')
    print('  hex:', data.hex())
    print('  repr:', repr(data))