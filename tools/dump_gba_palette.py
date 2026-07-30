#!/usr/bin/env python3

from __future__ import annotations

import argparse
import sys
from pathlib import Path

from gba_graphics import (
    decode_bgr555_palette,
    extract_lz77,
    palette_preview,
)


def parse_int(value: str) -> int:
    return int(value, 0)


def main() -> int:
    parser = argparse.ArgumentParser(
        description="ROM内のGBA LZ77圧縮パレットを抽出する"
    )
    parser.add_argument("rom", type=Path, help="入力ROM")
    parser.add_argument("offset", type=parse_int, help="ROMオフセット（例: 0xC00BE8）")
    parser.add_argument("output", type=Path, help="出力ベース名（拡張子なし推奨）")
    parser.add_argument(
        "--expected-colors",
        type=int,
        default=16,
        help="期待する色数。0なら検査しない（既定: 16）",
    )
    parser.add_argument(
        "--cell-size",
        type=int,
        default=24,
        help="確認PNGの1色あたりの大きさ（既定: 24）",
    )
    args = parser.parse_args()

    try:
        rom = args.rom.read_bytes()
        compressed, raw = extract_lz77(rom, args.offset)
        colors = decode_bgr555_palette(raw)

        if args.expected_colors and len(colors) != args.expected_colors:
            raise ValueError(
                f"色数が一致しません: {len(colors)}色 "
                f"（期待: {args.expected_colors}色）"
            )

        args.output.parent.mkdir(parents=True, exist_ok=True)
        # lz_path = args.output.with_suffix(".gbapal.lz")
        # raw_path = args.output.with_suffix(".gbapal")
        png_path = args.output.with_suffix(".png")

        # lz_path.write_bytes(compressed)
        # raw_path.write_bytes(raw)
        palette_preview(colors, cell_size=args.cell_size).save(png_path)
    except (OSError, ValueError) as exc:
        print(f"エラー: {exc}", file=sys.stderr)
        return 1

    print(f"offset       : 0x{args.offset:X}")
    # print(f"compressed   : 0x{len(compressed):X} bytes -> {lz_path}")
    # print(f"decompressed : 0x{len(raw):X} bytes -> {raw_path}")
    print(f"colors       : {len(colors)} -> {png_path}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
