#!/usr/bin/env python3

from __future__ import annotations

import argparse
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
from gba_graphics import extract_lz77


def parse_int(value: str) -> int:
    return int(value, 0)


def main() -> None:
    parser = argparse.ArgumentParser(
        description="ROM内の連続するGBA LZ77ブロックを走査する"
    )
    parser.add_argument("rom", type=Path)
    parser.add_argument("start", type=parse_int)
    parser.add_argument("size", type=parse_int)
    parser.add_argument(
        "--search",
        action="store_true",
        help="現在位置がLZ77でなければ、次の0x10を検索する",
    )
    args = parser.parse_args()

    rom = args.rom.read_bytes()
    start = args.start
    limit = min(start + args.size, len(rom))
    offset = start
    index = 0

    print(
        "No.  ROM開始     展開サイズ  圧縮サイズ  データ終端   "
        "整列後       Pad  種別候補"
    )
    print("-" * 92)

    while offset < limit:
        if rom[offset] != 0x10:
            if not args.search:
                print(
                    f"\n0x{offset:08X}: 先頭が0x10ではありません "
                    f"(0x{rom[offset]:02X})"
                )
                break

            next_offset = rom.find(b"\x10", offset + 1, limit)
            if next_offset < 0:
                print(f"\n0x{offset:08X}以降に0x10が見つかりません")
                break

            print(
                f"\n未解析領域: 0x{offset:08X}-0x{next_offset - 1:08X} "
                f"(0x{next_offset - offset:X} bytes)"
            )
            offset = next_offset

        try:
            compressed, raw = extract_lz77(rom, offset)
        except (ValueError, IndexError) as exc:
            if not args.search:
                print(f"\n0x{offset:08X}: LZ77解析失敗: {exc}")
                break

            offset += 1
            continue

        compressed_size = len(compressed)
        expanded_size = len(raw)
        end = offset + compressed_size
        aligned_end = (end + 3) & ~3
        padding = rom[end:aligned_end]

        if expanded_size == 0x20:
            kind = "16色パレット候補"
        elif expanded_size == 0x80:
            kind = "64色パレット候補"
        elif expanded_size % 0x20 == 0:
            tiles = expanded_size // 0x20
            kind = f"4bpp/タイル候補 ({tiles} tiles)"
        elif expanded_size % 2 == 0:
            kind = "タイルマップ/16bitデータ候補"
        else:
            kind = "汎用圧縮データ"

        pad_text = padding.hex(" ") if padding else "-"

        print(
            f"{index:3d}  "
            f"0x{offset:08X}  "
            f"0x{expanded_size:08X}  "
            f"0x{compressed_size:08X}  "
            f"0x{end:08X}  "
            f"0x{aligned_end:08X}  "
            f"{len(padding):3d}  "
            f"{kind}"
        )

        if padding and any(padding):
            print(f"     注意: 非ゼロパディング: {pad_text}")

        if end > limit:
            print("     注意: 圧縮データが指定範囲を超えています")
            break

        index += 1
        offset = aligned_end

    print()
    print(f"走査開始 : 0x{start:08X}")
    print(f"走査終了 : 0x{offset:08X}")
    print(f"解析数   : {index}")
    print(f"残り     : 0x{max(0, limit - offset):X}")


if __name__ == "__main__":
    main()
