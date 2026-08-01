#!/usr/bin/env python3
"""PNGをGBA 4bppへ変換し、共通ライブラリでLZ77圧縮する。"""

from __future__ import annotations

import argparse
import os
import subprocess
import sys
import tempfile
from pathlib import Path

from gba_graphics import compress_lz77, pad_bytes


def parse_args() -> argparse.Namespace:
    parser = argparse.ArgumentParser(
        description="gbagfxでPNGを4bpp化し、GBA LZ77圧縮します。"
    )
    parser.add_argument("input_png", type=Path)
    parser.add_argument("output_file", type=Path)
    parser.add_argument(
        "--gbagfx",
        type=Path,
        default=Path("tools/gbagfx/gbagfx"),
    )
    parser.add_argument(
        "--no-pad",
        action="store_true",
        help="出力を4バイト境界へパディングしません。",
    )
    parser.add_argument(
        "--allow-distance-one",
        action="store_true",
        help="距離1のLZ77後方参照を許可します。",
    )
    parser.add_argument(
        "--debug",
        action="store_true",
    )
    return parser.parse_args()


def main() -> int:
    args = parse_args()

    if not args.input_png.is_file():
        print(f"エラー: PNGがありません: {args.input_png}", file=sys.stderr)
        return 1
    if not args.gbagfx.is_file():
        print(f"エラー: gbagfxがありません: {args.gbagfx}", file=sys.stderr)
        return 1
    if not os.access(args.gbagfx, os.X_OK):
        print(f"エラー: gbagfxを実行できません: {args.gbagfx}", file=sys.stderr)
        return 1
    if not str(args.output_file).endswith(".4bpp.lz"):
        print(
            "エラー: 出力ファイル名は .4bpp.lz で終える必要があります",
            file=sys.stderr,
        )
        return 1

    args.output_file.parent.mkdir(parents=True, exist_ok=True)

    try:
        with tempfile.TemporaryDirectory(prefix="png_to_4bpp_") as temp_dir:
            raw_path = Path(temp_dir) / "image.4bpp"
            subprocess.run(
                [str(args.gbagfx), str(args.input_png), str(raw_path)],
                check=True,
            )
            raw = raw_path.read_bytes()

        compressed_body = compress_lz77(
            raw,
            allow_distance_one=args.allow_distance_one,
        )
        output = compressed_body if args.no_pad else pad_bytes(compressed_body, 4)

        temp_output = args.output_file.with_name(f".{args.output_file.name}.tmp")
        temp_output.write_bytes(output)
        temp_output.replace(args.output_file)

    except subprocess.CalledProcessError as exc:
        print(
            f"エラー: gbagfxが終了コード{exc.returncode}で失敗しました",
            file=sys.stderr,
        )
        return exc.returncode or 1
    except (OSError, ValueError) as exc:
        print(f"エラー: {exc}", file=sys.stderr)
        return 1

    if args.debug:
        print(f"入力PNG:       {args.input_png}")
        print(f"未圧縮サイズ:  0x{len(raw):X}")
        print(f"LZ77本体:      0x{len(compressed_body):X}")
        print(f"出力サイズ:    0x{len(output):X}")
        print(f"4バイト整列:   {'なし' if args.no_pad else 'あり'}")
        print(f"圧縮出力:      {args.output_file}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
