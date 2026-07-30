#!/usr/bin/env python3
"""Extract all Pokémon front sprites from baserom.gba as PNG files.

The label order is read from data/pokemon/mon_front_pics.inc. ROM addresses are
read directly from gMonFrontPicTable in baserom.gba, so address comments and
.incbin offsets are not required in the .inc file.
"""

from __future__ import annotations

import argparse
import re
import shutil
import struct
import subprocess
import sys
import tempfile
from collections import OrderedDict
from pathlib import Path

ROM_BASE = 0x08000000
DEFAULT_TABLE_OFFSET = 0x2DDA1C
DEFAULT_ENTRY_COUNT = 440
ENTRY_SIZE = 8
LABEL_RE = re.compile(r"^\s*gMonFrontPic_([A-Za-z0-9_]+):")


def parse_label_order(path: Path) -> list[str]:
    names: list[str] = []
    seen: set[str] = set()
    for line_no, line in enumerate(path.read_text(encoding="utf-8").splitlines(), 1):
        m = LABEL_RE.match(line)
        if not m:
            continue
        name = m.group(1)
        if name in seen:
            raise ValueError(f"ラベルが重複しています: {name} (行{line_no})")
        seen.add(name)
        names.append(name)
    if not names:
        raise ValueError("gMonFrontPic_* ラベルを検出できませんでした")
    return names


def read_table_offsets(rom: bytes, table_offset: int, count: int) -> list[int]:
    end = table_offset + count * ENTRY_SIZE
    if table_offset < 0 or end > len(rom):
        raise ValueError(
            f"画像テーブルがROM範囲外です: offset=0x{table_offset:X}, count={count}"
        )

    offsets: list[int] = []
    for index in range(count):
        entry = table_offset + index * ENTRY_SIZE
        pointer = struct.unpack_from("<I", rom, entry)[0]
        if pointer < ROM_BASE:
            raise ValueError(
                f"テーブル[{index}]のポインタが不正です: 0x{pointer:08X}"
            )
        offset = pointer - ROM_BASE
        if offset >= len(rom):
            raise ValueError(
                f"テーブル[{index}]のポインタがROM範囲外です: 0x{pointer:08X}"
            )
        offsets.append(offset)
    return offsets


def decompress_gba_lz77(rom: bytes, offset: int) -> tuple[bytes, int]:
    if offset < 0 or offset + 4 > len(rom):
        raise ValueError("ROM範囲外です")
    if rom[offset] != 0x10:
        raise ValueError(f"GBA LZ77ヘッダーではありません: 0x{rom[offset]:02X}")

    expected = rom[offset + 1] | (rom[offset + 2] << 8) | (rom[offset + 3] << 16)
    src = offset + 4
    out = bytearray()

    while len(out) < expected:
        if src >= len(rom):
            raise ValueError("フラグ読み込み中にROM末尾へ達しました")
        flags = rom[src]
        src += 1

        for bit in range(7, -1, -1):
            if len(out) >= expected:
                break
            if flags & (1 << bit):
                if src + 1 >= len(rom):
                    raise ValueError("参照トークン読み込み中にROM末尾へ達しました")
                token = (rom[src] << 8) | rom[src + 1]
                src += 2
                length = (token >> 12) + 3
                distance = (token & 0x0FFF) + 1
                if distance > len(out):
                    raise ValueError(
                        f"LZ77参照距離が不正です: distance={distance}, out={len(out)}"
                    )
                for _ in range(length):
                    out.append(out[-distance])
                    if len(out) >= expected:
                        break
            else:
                if src >= len(rom):
                    raise ValueError("リテラル読み込み中にROM末尾へ達しました")
                out.append(rom[src])
                src += 1

    return bytes(out), src - offset


def convert_with_gbagfx(gbagfx: Path, raw: Path, png: Path, width: int) -> None:
    png.parent.mkdir(parents=True, exist_ok=True)
    subprocess.run(
        [str(gbagfx), str(raw), str(png), "-width", str(width)],
        check=True,
    )


def main() -> int:
    parser = argparse.ArgumentParser(
        description="gMonFrontPicTableをROMから読み、正面画像PNGを一括抽出する"
    )
    parser.add_argument("rom", nargs="?", type=Path, default=Path("baserom.gba"))
    parser.add_argument("--inc", type=Path, default=Path("data/pokemon/mon_front_pics.inc"))
    parser.add_argument("--output-dir", type=Path, default=Path("graphics/pokemon/front_pics"))
    parser.add_argument("--gbagfx", type=Path, default=Path("tools/gbagfx/gbagfx"))
    parser.add_argument("--table-offset", type=lambda x: int(x, 0), default=DEFAULT_TABLE_OFFSET)
    parser.add_argument("--count", type=int, default=DEFAULT_ENTRY_COUNT)
    parser.add_argument("--width", type=int, default=8)
    parser.add_argument("--overwrite", action="store_true")
    args = parser.parse_args()

    for path, description in (
        (args.rom, "ROM"),
        (args.inc, "incファイル"),
        (args.gbagfx, "gbagfx"),
    ):
        if not path.is_file():
            print(f"エラー: {description}がありません: {path}", file=sys.stderr)
            return 1

    try:
        labels = parse_label_order(args.inc)
        if len(labels) != args.count:
            raise ValueError(
                f"ラベル数とテーブル件数が一致しません: labels={len(labels)}, count={args.count}"
            )
        rom = args.rom.read_bytes()
        offsets = read_table_offsets(rom, args.table_offset, args.count)
    except (OSError, ValueError) as exc:
        print(f"エラー: {exc}", file=sys.stderr)
        return 1

    grouped: "OrderedDict[int, list[str]]" = OrderedDict()
    for name, offset in zip(labels, offsets):
        grouped.setdefault(offset, []).append(name)

    args.output_dir.mkdir(parents=True, exist_ok=True)
    generated = skipped = failed = 0

    with tempfile.TemporaryDirectory(prefix="mon_front_pics_") as tmp_name:
        tmp = Path(tmp_name)
        for stream_index, (offset, names) in enumerate(grouped.items()):
            try:
                raw, compressed_size = decompress_gba_lz77(rom, offset)
                if len(raw) != 0x1000:
                    print(
                        f"警告: {names[0]} の展開サイズは0x{len(raw):X}です（通常0x1000）",
                        file=sys.stderr,
                    )

                raw_path = tmp / f"{stream_index:03d}.4bpp"
                raw_path.write_bytes(raw)
                primary = args.output_dir / f"{names[0]}.png"

                if args.overwrite or not primary.exists():
                    convert_with_gbagfx(args.gbagfx, raw_path, primary, args.width)
                    generated += 1
                else:
                    skipped += 1

                for alias in names[1:]:
                    destination = args.output_dir / f"{alias}.png"
                    if destination.exists() and not args.overwrite:
                        skipped += 1
                    else:
                        shutil.copyfile(primary, destination)
                        generated += 1

                print(
                    f"0x{offset + ROM_BASE:08X}  圧縮0x{compressed_size:X}  "
                    f"展開0x{len(raw):X}  {', '.join(names)}"
                )
            except (OSError, ValueError, subprocess.CalledProcessError) as exc:
                print(
                    f"エラー: {names[0]} (0x{offset + ROM_BASE:08X}): {exc}",
                    file=sys.stderr,
                )
                failed += len(names)

    print()
    print(f"テーブル件数:       {len(labels)}")
    print(f"固有ストリーム数:   {len(grouped)}")
    print(f"生成:               {generated}")
    print(f"スキップ:           {skipped}")
    print(f"失敗:               {failed}")
    return 1 if failed else 0


if __name__ == "__main__":
    raise SystemExit(main())
