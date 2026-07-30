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
    parser = argparse.ArgumentParser()
    parser.add_argument("rom", type=Path)
    parser.add_argument("start", type=parse_int)
    parser.add_argument("count", type=parse_int)
    parser.add_argument("output_dir", type=Path)
    args = parser.parse_args()

    rom = args.rom.read_bytes()
    args.output_dir.mkdir(parents=True, exist_ok=True)

    offset = args.start
    rows = []

    for index in range(args.count):
        compressed, raw = extract_lz77(rom, offset)

        end = offset + len(compressed)
        aligned_end = (end + 3) & ~3
        padding = rom[end:aligned_end]

        stem = f"{index:02X}_{offset:08X}"

        (args.output_dir / f"{stem}.4bpp").write_bytes(raw)
        (args.output_dir / f"{stem}.4bpp.lz").write_bytes(compressed)

        rows.append(
            f"{index:02X},"
            f"0x{offset:08X},"
            f"0x{len(raw):X},"
            f"0x{len(compressed):X},"
            f"0x{len(padding):X},"
            f"{padding.hex()}"
        )

        offset = aligned_end

    index_file = args.output_dir / "index.csv"
    index_file.write_text(
        "index,offset,expanded_size,compressed_size,padding_size,padding\n"
        + "\n".join(rows)
        + "\n",
        encoding="utf-8",
    )

    print(f"解析数   : {args.count}")
    print(f"開始位置 : 0x{args.start:08X}")
    print(f"終了位置 : 0x{offset:08X}")
    print(f"出力先   : {args.output_dir}")
    print(f"一覧     : {index_file}")


if __name__ == "__main__":
    main()
