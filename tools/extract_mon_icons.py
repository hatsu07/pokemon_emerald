#!/usr/bin/env python3
"""Extract gMonIcon_* raw 4bpp data to PNG and rewrite matching .incbin blocks.

Each icon is 0x400 bytes: two 32x32 4bpp frames stored as a 32x64 tiled image.
Existing labels and already-converted build .incbin lines are left unchanged.
"""
from __future__ import annotations

import argparse
import re
import shutil
from pathlib import Path

from PIL import Image

ICON_SIZE = 0x400
WIDTH = 32
HEIGHT = 64

LABEL_RE = re.compile(r"^\s*(gMonIcon_([A-Za-z0-9_]+)):\s*(?:@.*)?$")
RAW_INCBIN_RE = re.compile(
    r'^(?P<indent>\s*)\.incbin\s+"baserom\.gba"\s*,\s*'
    r'(?P<offset>0x[0-9A-Fa-f]+)\s*,\s*'
    r'(?P<size>0x[0-9A-Fa-f]+)(?P<tail>.*)$'
)
BUILD_ICON_RE = re.compile(
    r'^\s*\.incbin\s+"build/graphics/pokemon/[^\"]+/icon\.4bpp"'
)


def camel_to_snake(name: str) -> str:
    name = re.sub(r"([A-Z]+)([A-Z][a-z])", r"\1_\2", name)
    name = re.sub(r"([a-z0-9])([A-Z])", r"\1_\2", name)
    return name.lower()


def decode_4bpp_tiled(data: bytes, width: int = WIDTH, height: int = HEIGHT) -> Image.Image:
    expected = width * height // 2
    if len(data) != expected:
        raise ValueError(f"4bppサイズが不正です: {len(data):#x} (必要: {expected:#x})")
    if width % 8 or height % 8:
        raise ValueError("幅と高さは8の倍数である必要があります")

    pixels = bytearray(width * height)
    pos = 0
    for tile_y in range(height // 8):
        for tile_x in range(width // 8):
            for y in range(8):
                for x_pair in range(4):
                    value = data[pos]
                    pos += 1
                    x = tile_x * 8 + x_pair * 2
                    yy = tile_y * 8 + y
                    pixels[yy * width + x] = value & 0x0F
                    pixels[yy * width + x + 1] = value >> 4

    image = Image.frombytes("P", (width, height), bytes(pixels))
    palette: list[int] = []
    for i in range(256):
        value = round(i * 255 / 15) if i < 16 else 0
        palette.extend((value, value, value))
    image.putpalette(palette)
    image.info["transparency"] = 0
    return image


def encode_4bpp_tiled(image: Image.Image) -> bytes:
    if image.mode != "P":
        raise ValueError("PNGはインデックスカラー(Pモード)である必要があります")
    if image.size != (WIDTH, HEIGHT):
        raise ValueError(f"PNGサイズが不正です: {image.width}x{image.height} (必要: {WIDTH}x{HEIGHT})")

    pixels = image.tobytes()
    if pixels and max(pixels) > 15:
        raise ValueError("PNGのパレット番号は0〜15のみ使用できます")

    output = bytearray()
    for tile_y in range(HEIGHT // 8):
        for tile_x in range(WIDTH // 8):
            for y in range(8):
                for x_pair in range(4):
                    x = tile_x * 8 + x_pair * 2
                    yy = tile_y * 8 + y
                    lo = pixels[yy * WIDTH + x]
                    hi = pixels[yy * WIDTH + x + 1]
                    output.append(lo | (hi << 4))
    return bytes(output)


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("inc", type=Path, help="data/pokemon/mon_back_pics.inc")
    parser.add_argument("rom", type=Path, help="baserom.gba")
    parser.add_argument("--graphics-dir", type=Path, default=Path("graphics/pokemon"))
    parser.add_argument("--output-inc", type=Path, default=None)
    parser.add_argument("--no-backup", action="store_true")
    args = parser.parse_args()

    lines = args.inc.read_text(encoding="utf-8").splitlines()
    rom = args.rom.read_bytes()
    output: list[str] = []
    converted = 0
    skipped = 0
    i = 0

    while i < len(lines):
        label_match = LABEL_RE.match(lines[i])
        if not label_match:
            output.append(lines[i])
            i += 1
            continue

        # Keep a consecutive alias-label block exactly as written.
        block: list[str] = []
        label_names: list[str] = []
        j = i
        while j < len(lines):
            if lines[j].lstrip().startswith(".globl gMonIcon_"):
                block.append(lines[j]); j += 1; continue
            m = LABEL_RE.match(lines[j])
            if m:
                block.append(lines[j]); label_names.append(m.group(2)); j += 1; continue
            if not lines[j].strip():
                block.append(lines[j]); j += 1; continue
            break

        output.extend(block)
        if j >= len(lines):
            i = j
            continue

        if BUILD_ICON_RE.match(lines[j]):
            output.append(lines[j])
            skipped += 1
            i = j + 1
            continue

        inc_match = RAW_INCBIN_RE.match(lines[j])
        if not inc_match or not label_names:
            i = j
            continue

        start = int(inc_match.group("offset"), 16)
        size = int(inc_match.group("size"), 16)
        if size < ICON_SIZE or start + ICON_SIZE > len(rom):
            output.append(lines[j])
            skipped += 1
            i = j + 1
            continue

        # The first label names the shared data file; other labels remain aliases.
        directory = camel_to_snake(label_names[0])
        png_path = args.graphics_dir / directory / "icon.png"
        png_path.parent.mkdir(parents=True, exist_ok=True)

        raw = rom[start:start + ICON_SIZE]
        image = decode_4bpp_tiled(raw)
        image.save(png_path, optimize=False)

        # Lossless round-trip check.
        with Image.open(png_path) as check_image:
            rebuilt = encode_4bpp_tiled(check_image)
        if rebuilt != raw:
            raise RuntimeError(f"PNG往復変換が一致しません: {png_path}")

        indent = inc_match.group("indent")
        build_path = f"build/graphics/pokemon/{directory}/icon.4bpp"
        output.append(f'{indent}.incbin "{build_path}"')
        if size > ICON_SIZE:
            output.append(
                f'{indent}.incbin "baserom.gba", 0x{start + ICON_SIZE:X}, 0x{size - ICON_SIZE:X}'
            )
        converted += 1
        i = j + 1

    destination = args.output_inc or args.inc
    if destination == args.inc and not args.no_backup:
        backup = Path(str(args.inc) + ".bak")
        if not backup.exists():
            shutil.copy2(args.inc, backup)

    destination.write_text("\n".join(output) + "\n", encoding="utf-8")
    print(f"変換したアイコンデータ: {converted}")
    print(f"既変換または対象外      : {skipped}")
    print(f"出力INC                 : {destination}")


if __name__ == "__main__":
    main()
