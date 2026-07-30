#!/usr/bin/env python3

from __future__ import annotations

import argparse
import sys
from pathlib import Path

from PIL import Image

from gba_graphics import compress_lz77


def rgb888_to_bgr555(red: int, green: int, blue: int) -> int:
    red5 = red >> 3
    green5 = green >> 3
    blue5 = blue >> 3

    return red5 | (green5 << 5) | (blue5 << 10)


def png_to_gba_palette(
    path: Path,
    color_count: int | None = None,
) -> bytes:
    image = Image.open(path).convert("RGB")

    # dump_gba_palette.pyのPNGは横16列。
    # 色セルは正方形で、画像末尾に16pxのラベル領域が付く。
    columns = 16

    if image.width % columns != 0:
        raise ValueError(
            f"PNG幅を{columns}列に分割できません: "
            f"{image.width}x{image.height}"
        )

    cell_width = image.width // columns
    label_height = image.height % cell_width

    if label_height == 16:
        image = image.crop(
            (0, 0, image.width, image.height - label_height)
        )
    elif label_height != 0:
        raise ValueError(
            f"PNG高さをセルサイズ{cell_width}で分割できません: "
            f"{image.width}x{image.height}"
        )

    cell_height = cell_width
    rows = image.height // cell_height
    detected_color_count = columns * rows

    if color_count is not None and detected_color_count != color_count:
        raise ValueError(
            f"色数が一致しません: "
            f"{detected_color_count}色 "
            f"（期待: {color_count}色）"
        )

    output = bytearray()

    for index in range(detected_color_count):
        column = index % columns
        row = index // columns

        x = column * cell_width + cell_width // 2
        y = row * cell_height + cell_height // 2

        red, green, blue = image.getpixel((x, y))
        value = rgb888_to_bgr555(red, green, blue)
        output.extend(value.to_bytes(2, "little"))

    return bytes(output)


def main() -> int:
    parser = argparse.ArgumentParser(
        description="PNGの色をGBA 16色パレットへ変換します"
    )
    parser.add_argument("input_png", type=Path)
    parser.add_argument("output_file", type=Path)
    parser.add_argument(
        "--lz",
        action="store_true",
        help="GBA LZ77形式で圧縮します",
    )

    args = parser.parse_args()

    try:
        raw = png_to_gba_palette(args.input_png)

        if args.lz:
            output = compress_lz77(raw)
        else:
            output = raw

        args.output_file.parent.mkdir(parents=True, exist_ok=True)
        args.output_file.write_bytes(output)

    except (OSError, ValueError) as exc:
        print(f"エラー: {exc}", file=sys.stderr)
        return 1

    print(f"入力PNG:      {args.input_png}")
    print(f"色数:         16")
    print(f"未圧縮サイズ: 0x{len(raw):X}")
    print(f"出力:         {args.output_file}")
    print(f"出力サイズ:   0x{len(output):X}")

    return 0


if __name__ == "__main__":
    raise SystemExit(main())
