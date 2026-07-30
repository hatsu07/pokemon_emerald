#!/usr/bin/env python3

from __future__ import annotations

import argparse
import struct
import sys
from pathlib import Path

from gba_graphics import (
    decode_4bpp_tiled,
    extract_lz77,
    gba_pointer_to_offset,
    read_label_names,
    sanitize_filename,
)


ENTRY_SIZE = 8
DEFAULT_COUNT = 440
SPRITE_WIDTH = 64
TABLE_OFFSETS = {
    "front": 0x2DDA1C,
    "back": 0x2D6148,
}


def main() -> int:
    parser = argparse.ArgumentParser(
        description="Pokémon Emerald JPの正面・背面画像をROMからPNGへ展開"
    )
    parser.add_argument("kind", choices=("front", "back"))
    parser.add_argument("rom", type=Path)
    parser.add_argument("output", type=Path)
    parser.add_argument("--labels", type=Path)
    parser.add_argument("--table-offset", type=lambda value: int(value, 0))
    parser.add_argument("--count", type=int, default=DEFAULT_COUNT)
    parser.add_argument("--keep-raw", action="store_true")
    parser.add_argument("--keep-lz", action="store_true")
    args = parser.parse_args()

    table_offset = (
        args.table_offset
        if args.table_offset is not None
        else TABLE_OFFSETS[args.kind]
    )

    try:
        rom = args.rom.read_bytes()
        table_end = table_offset + args.count * ENTRY_SIZE
        if table_end > len(rom):
            raise ValueError(
                f"テーブルがROM範囲を超えています: "
                f"0x{table_offset:X}-0x{table_end:X}"
            )

        if args.labels:
            names = read_label_names(
                args.labels,
                r"^gMon(?:Front|Back)Pic_([A-Za-z0-9_]+):",
                args.count,
            )
        else:
            names = [f"{index:03d}" for index in range(args.count)]
    except (OSError, ValueError) as exc:
        print(f"エラー: {exc}", file=sys.stderr)
        return 1

    args.output.mkdir(parents=True, exist_ok=True)

    for index in range(args.count):
        entry_offset = table_offset + index * ENTRY_SIZE
        pointer, expected_size, tag = struct.unpack_from("<IHH", rom, entry_offset)
        name = sanitize_filename(names[index])
        output_base = args.output / name

        try:
            data_offset = gba_pointer_to_offset(pointer)
            compressed, raw = extract_lz77(rom, data_offset)
            image = decode_4bpp_tiled(raw, SPRITE_WIDTH)
        except ValueError as exc:
            print(f"[{index:03d}] {name}: エラー: {exc}", file=sys.stderr)
            return 1

        if expected_size not in (0, len(raw)):
            print(
                f"[{index:03d}] {name}: 警告: "
                f"table=0x{expected_size:X}, actual=0x{len(raw):X}",
                file=sys.stderr,
            )

        image.save(output_base.with_suffix(".png"), transparency=0)
        if args.keep_raw:
            output_base.with_suffix(".4bpp").write_bytes(raw)
        if args.keep_lz:
            output_base.with_suffix(".4bpp.lz").write_bytes(compressed)

        print(
            f"[{index:03d}] {name:<24} "
            f"ptr=0x{pointer:08X} tag={tag:<3} "
            f"lz=0x{len(compressed):04X} raw=0x{len(raw):04X} "
            f"png={image.width}x{image.height}"
        )

    print(f"{args.count}件を出力しました: {args.output}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
