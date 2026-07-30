#!/usr/bin/env python3

from __future__ import annotations

import argparse
import sys
from pathlib import Path

from gba_graphics import decode_4bpp_tiled, extract_lz77


def parse_int(value: str) -> int:
    return int(value, 0)


def main() -> int:
    parser = argparse.ArgumentParser(
        description="ROM内の単一GBA LZ77 4bpp画像をPNGへ展開"
    )
    parser.add_argument("rom", type=Path, help="入力ROM")
    parser.add_argument("offset", type=parse_int, help="ROMオフセット")
    parser.add_argument("output", type=Path, help="出力PNG")
    parser.add_argument(
        "--width",
        type=int,
        default=64,
        help="画像幅。既定: 64",
    )
    parser.add_argument("--keep-raw", action="store_true")
    parser.add_argument("--keep-lz", action="store_true")
    args = parser.parse_args()

    try:
        rom = args.rom.read_bytes()
        compressed, raw = extract_lz77(rom, args.offset)
        image = decode_4bpp_tiled(raw, args.width)

        args.output.parent.mkdir(parents=True, exist_ok=True)
        image.save(args.output, transparency=0)

        output_base = args.output.with_suffix("")

        if args.keep_raw:
            output_base.with_suffix(".4bpp").write_bytes(raw)

        if args.keep_lz:
            output_base.with_suffix(".4bpp.lz").write_bytes(compressed)

    except (OSError, ValueError) as exc:
        print(f"エラー: {exc}", file=sys.stderr)
        return 1

    print(f"開始位置   : 0x{args.offset:X}")
    print(f"圧縮サイズ : 0x{len(compressed):X}")
    print(f"展開サイズ : 0x{len(raw):X}")
    print(f"画像サイズ : {image.width}x{image.height}")
    print(f"出力       : {args.output}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
