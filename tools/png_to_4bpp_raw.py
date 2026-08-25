#!/usr/bin/env python3
"""PNGをGBA用の非圧縮4bppタイルデータへ変換する。"""

from __future__ import annotations

import argparse
import os
import subprocess
import sys
import tempfile
from pathlib import Path


def parse_args() -> argparse.Namespace:
    parser = argparse.ArgumentParser(
        description="gbagfxでPNGを非圧縮GBA 4bppへ変換します。"
    )
    parser.add_argument("input_png", type=Path)
    parser.add_argument("output_file", type=Path)
    parser.add_argument(
        "--gbagfx",
        type=Path,
        default=Path("tools/gbagfx/gbagfx"),
        help="gbagfxのパス",
    )
    parser.add_argument(
        "--num-tiles",
        type=int,
        default=None,
        help="先頭から出力する8x8タイル数（1 tile = 32 bytes）",
    )
    parser.add_argument("--debug", action="store_true")
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

    if not str(args.output_file).endswith(".4bpp"):
        print(
            "エラー: 出力ファイル名は .4bpp で終える必要があります",
            file=sys.stderr,
        )
        return 1

    args.output_file.parent.mkdir(parents=True, exist_ok=True)

    try:
        with tempfile.TemporaryDirectory(prefix="png_to_4bpp_raw_") as temp_dir:
            temp_output = Path(temp_dir) / "image.4bpp"

            subprocess.run(
                [str(args.gbagfx), str(args.input_png), str(temp_output)],
                check=True,
            )

            raw = temp_output.read_bytes()

        if args.num_tiles is not None:
            if args.num_tiles < 0:
                raise ValueError("--num-tiles must be non-negative")
            required = args.num_tiles * 32
            if len(raw) < required:
                raise ValueError(
                    f"PNG 4bpp output is too short for {args.num_tiles} tiles: "
                    f"0x{len(raw):X} < 0x{required:X}"
                )
            raw = raw[:required]

        output_tmp = args.output_file.with_name(
            f".{args.output_file.name}.tmp"
        )
        output_tmp.write_bytes(raw)
        output_tmp.replace(args.output_file)

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
        print(f"入力PNG:      {args.input_png}")
        print(f"出力サイズ:   0x{len(raw):X}")
        print(f"非圧縮4bpp:   {args.output_file}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
