#!/usr/bin/env python3

from __future__ import annotations

import argparse
import csv
import math
from pathlib import Path

from PIL import Image, ImageDraw


def parse_int(value: str) -> int:
    return int(value, 0)


def decode_bgr555(data: bytes) -> list[tuple[int, int, int, int]]:
    if len(data) % 2:
        raise ValueError("パレットサイズが2バイト単位ではありません")

    colors = []

    for offset in range(0, len(data), 2):
        value = int.from_bytes(data[offset:offset + 2], "little")

        r5 = value & 0x1F
        g5 = (value >> 5) & 0x1F
        b5 = (value >> 10) & 0x1F

        r = (r5 << 3) | (r5 >> 2)
        g = (g5 << 3) | (g5 >> 2)
        b = (b5 << 3) | (b5 >> 2)

        colors.append((r, g, b, 255))

    return colors


def grayscale_palette() -> list[tuple[int, int, int, int]]:
    return [
        (
            round(index * 255 / 15),
            round(index * 255 / 15),
            round(index * 255 / 15),
            255,
        )
        for index in range(16)
    ]


def choose_tile_dimensions(tile_count: int) -> tuple[int, int]:
    """
    タイル数を長方形に配置する。

    例:
      1 tile  -> 1x1  = 8x8
      2 tiles -> 2x1  = 16x8
      12 tiles -> 4x3 = 32x24
      16 tiles -> 4x4 = 32x32
      80 tiles -> 10x8 = 80x64
    """

    if tile_count <= 0:
        raise ValueError("タイル数が0です")

    candidates: list[tuple[int, int]] = []

    for rows in range(1, math.isqrt(tile_count) + 1):
        if tile_count % rows:
            continue

        cols = tile_count // rows
        candidates.append((cols, rows))

    if not candidates:
        return tile_count, 1

    # 正方形に近いものを優先する。
    # 横長または正方形になるようcols >= rowsとする。
    return min(
        candidates,
        key=lambda pair: (
            abs(pair[0] - pair[1]),
            pair[0],
        ),
    )


def decode_4bpp_tiled(
    data: bytes,
    tiles_wide: int,
    tiles_high: int,
    palette: list[tuple[int, int, int, int]],
    transparent_zero: bool,
) -> Image.Image:
    expected_size = tiles_wide * tiles_high * 0x20

    if len(data) != expected_size:
        raise ValueError(
            f"4bppサイズ不一致: actual=0x{len(data):X}, "
            f"expected=0x{expected_size:X}"
        )

    width = tiles_wide * 8
    height = tiles_high * 8

    # インデックス値を保持するPモード画像
    image = Image.new("P", (width, height))
    pixels = image.load()

    offset = 0

    for tile_y in range(tiles_high):
        for tile_x in range(tiles_wide):
            tile = data[offset:offset + 0x20]
            offset += 0x20

            for pixel_y in range(8):
                for byte_x in range(4):
                    value = tile[pixel_y * 4 + byte_x]

                    x = tile_x * 8 + byte_x * 2
                    y = tile_y * 8 + pixel_y

                    pixels[x, y] = value & 0x0F
                    pixels[x + 1, y] = (value >> 4) & 0x0F

    # PNGパレットは256色分必要
    png_palette = []

    for r, g, b, _a in palette:
        png_palette.extend((r, g, b))

    png_palette.extend([0] * (768 - len(png_palette)))
    image.putpalette(png_palette)

    if transparent_zero:
        image.info["transparency"] = 0

    return image


def make_palette_image(
    palette: list[tuple[int, int, int, int]],
    cell_size: int = 24,
) -> Image.Image:
    image = Image.new(
        "RGBA",
        (cell_size * len(palette), cell_size + 16),
        (255, 255, 255, 255),
    )
    draw = ImageDraw.Draw(image)

    for index, color in enumerate(palette):
        x = index * cell_size

        draw.rectangle(
            (x, 0, x + cell_size - 1, cell_size - 1),
            fill=color,
            outline=(0, 0, 0, 255),
        )

        draw.text(
            (x + 5, cell_size + 1),
            f"{index:X}",
            fill=(0, 0, 0, 255),
        )

    return image


def find_raw_file(input_dir: Path, index: int) -> Path:
    files = sorted(input_dir.glob(f"{index:02X}_*.4bpp"))

    if not files:
        raise FileNotFoundError(
            f"index 0x{index:02X}の.4bppがありません"
        )

    return files[0]


def main() -> None:
    parser = argparse.ArgumentParser(
        description=(
            "展開済みLZ77ブロックを4bpp画像または"
            "BGR555パレットPNGへ一括変換する"
        )
    )
    parser.add_argument("input_dir", type=Path)
    parser.add_argument("output_dir", type=Path)
    parser.add_argument(
        "--scale",
        type=parse_int,
        default=1,
        help="画像の表示倍率（既定値: 4）",
    )
    parser.add_argument(
        "--opaque-zero",
        action="store_true",
        help="パレット番号0を透明にしない",
    )
    args = parser.parse_args()

    index_file = args.input_dir / "index.csv"

    if not index_file.is_file():
        raise FileNotFoundError(index_file)

    with index_file.open(encoding="utf-8", newline="") as f:
        rows = list(csv.DictReader(f))

    args.output_dir.mkdir(parents=True, exist_ok=True)

    gray = grayscale_palette()

    image_count = 0
    palette_count = 0
    failed_count = 0

    for position, row in enumerate(rows):
        index = int(row["index"], 16)
        raw_file = find_raw_file(args.input_dir, index)
        raw = raw_file.read_bytes()

        # 0x20バイトは16色BGR555パレットとして出力する。
        if len(raw) == 0x20:
            palette = decode_bgr555(raw)
            output = args.output_dir / f"{index:02X}_palette.png"

            make_palette_image(palette).save(output)

            print(
                f"[0x{index:02X}] palette "
                f"0x{len(raw):X} -> {output.name}"
            )

            palette_count += 1
            continue

        if len(raw) % 0x20:
            print(
                f"[0x{index:02X}] skip: "
                f"4bppタイル単位ではありません "
                f"(size=0x{len(raw):X})"
            )
            failed_count += 1
            continue

        tile_count = len(raw) // 0x20
        tiles_wide, tiles_high = choose_tile_dimensions(tile_count)

        palette = gray
        palette_source = "grayscale"

        # 直後が0x20バイトなら、そのブロックをパレットとして適用する。
        if position + 1 < len(rows):
            next_index = int(rows[position + 1]["index"], 16)
            next_file = find_raw_file(args.input_dir, next_index)
            next_raw = next_file.read_bytes()

            if len(next_raw) == 0x20:
                palette = decode_bgr555(next_raw)
                palette_source = f"0x{next_index:02X}"

        try:
            image = decode_4bpp_tiled(
                data=raw,
                tiles_wide=tiles_wide,
                tiles_high=tiles_high,
                palette=palette,
                transparent_zero=not args.opaque_zero,
            )
        except ValueError as exc:
            print(f"[0x{index:02X}] error: {exc}")
            failed_count += 1
            continue

        original_size = image.size

        if args.scale > 1:
            image = image.resize(
                (
                    image.width * args.scale,
                    image.height * args.scale,
                ),
                Image.Resampling.NEAREST,
            )

        output = args.output_dir / (
            f"{index:02X}_"
            f"{original_size[0]}x{original_size[1]}.png"
        )
        image.save(output)

        print(
            f"[0x{index:02X}] image "
            f"size=0x{len(raw):X}, "
            f"tiles={tiles_wide}x{tiles_high}, "
            f"pixels={original_size[0]}x{original_size[1]}, "
            f"palette={palette_source} "
            f"-> {output.name}"
        )

        image_count += 1

    print()
    print(f"画像     : {image_count}")
    print(f"パレット : {palette_count}")
    print(f"失敗     : {failed_count}")
    print(f"出力先   : {args.output_dir}")


if __name__ == "__main__":
    main()
