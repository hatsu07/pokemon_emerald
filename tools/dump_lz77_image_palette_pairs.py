#!/usr/bin/env python3

from __future__ import annotations

import argparse
import csv
import sys
from pathlib import Path

from PIL import Image

sys.path.insert(0, str(Path(__file__).resolve().parent))
from gba_graphics import decode_4bpp_tiled, decode_bgr555_palette


def parse_int(value: str) -> int:
    return int(value, 0)


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("input_dir", type=Path)
    parser.add_argument("output_dir", type=Path)
    parser.add_argument("--start", type=parse_int, default=0)
    parser.add_argument("--pairs", type=parse_int, default=8)
    parser.add_argument("--width", type=parse_int, default=24)
    parser.add_argument("--scale", type=parse_int, default=4)
    args = parser.parse_args()

    index_path = args.input_dir / "index.csv"

    with index_path.open(encoding="utf-8", newline="") as f:
        rows = list(csv.DictReader(f))

    args.output_dir.mkdir(parents=True, exist_ok=True)

    for pair_no in range(args.pairs):
        image_index = args.start + pair_no * 2
        palette_index = image_index + 1

        image_files = sorted(args.input_dir.glob(f"{image_index:02X}_*.4bpp"))
        palette_files = sorted(args.input_dir.glob(f"{palette_index:02X}_*.4bpp"))

        if not image_files or not palette_files:
            raise FileNotFoundError(
                f"index 0x{image_index:02X}/0x{palette_index:02X}がありません"
            )

        raw = image_files[0].read_bytes()
        palette_raw = palette_files[0].read_bytes()

        if len(palette_raw) != 0x20:
            print(
                f"skip: 0x{image_index:02X}/0x{palette_index:02X}: "
                f"palette size=0x{len(palette_raw):X}"
            )
            continue

        if len(raw) % 0x20 != 0:
            print(
                f"skip: 0x{image_index:02X}: "
                f"image size=0x{len(raw):X}"
            )
            continue

        height_numerator = len(raw) * 2
        if height_numerator % args.width != 0:
            print(
                f"skip: 0x{image_index:02X}: "
                f"width={args.width}では高さが整数になりません"
            )
            continue

        height = height_numerator // args.width

        indices = decode_4bpp_tiled(raw, args.width)
        colors = decode_bgr555_palette(palette_raw)

        image = Image.new("RGBA", (args.width, height))
        pixels = []

        for index in indices:
            r, g, b = colors[index]
            alpha = 0 if index == 0 else 255
            pixels.append((r, g, b, alpha))

        image.putdata(pixels)

        if args.scale > 1:
            image = image.resize(
                (image.width * args.scale, image.height * args.scale),
                Image.Resampling.NEAREST,
            )

        output = args.output_dir / f"{image_index:02X}.png"
        image.save(output)

        print(
            f"0x{image_index:02X} + palette 0x{palette_index:02X}: "
            f"{args.width}x{height} -> {output}"
        )


if __name__ == "__main__":
    main()
