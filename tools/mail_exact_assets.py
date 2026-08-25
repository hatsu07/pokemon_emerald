#!/usr/bin/env python3
# Exact editable Mail asset builder for Pokemon Emerald JP.

from __future__ import annotations

import argparse
import json
import re
import sys
from pathlib import Path

from PIL import Image

sys.path.insert(0, str(Path(__file__).resolve().parent))
from lz77_exact import repack_raw_with_plan


def load_entry(path: Path, key: str) -> dict:
    obj = json.loads(path.read_text(encoding="utf-8"))
    if obj.get("format") != "pokeemerald-jp-exact-lz77-plan-v1":
        raise ValueError("unsupported Mail exact-LZ manifest format")
    try:
        return obj["entries"][key]
    except KeyError as exc:
        raise ValueError(f"manifest key not found: {key}") from exc


def encode_tiles(path: Path, raw_size: int) -> bytes:
    if raw_size % 32:
        raise ValueError("4bpp raw size is not tile-aligned")
    tile_count = raw_size // 32

    with Image.open(path) as image:
        if image.mode != "P":
            raise ValueError("indexed PNG (P mode) required")
        width, height = image.size
        pixels = list(image.getdata())

    if width % 8 or height % 8:
        raise ValueError("PNG dimensions must be multiples of 8")
    if (width // 8) * (height // 8) < tile_count:
        raise ValueError("PNG canvas contains fewer tiles than the manifest")

    out = bytearray()
    emitted = 0
    for ty in range(0, height, 8):
        for tx in range(0, width, 8):
            if emitted >= tile_count:
                return bytes(out)
            for y in range(8):
                base = (ty + y) * width + tx
                for x in range(0, 8, 2):
                    lo = pixels[base + x]
                    hi = pixels[base + x + 1]
                    if lo >= 16 or hi >= 16:
                        raise ValueError("4bpp PNG uses palette index > 15")
                    out.append(lo | (hi << 4))
            emitted += 1

    raw = bytes(out)
    if len(raw) != raw_size:
        raise ValueError(
            f"encoded tiles 0x{len(raw):X} != expected 0x{raw_size:X}"
        )
    return raw


def encode_palette(path: Path) -> bytes:
    with Image.open(path) as image:
        if image.mode != "P":
            raise ValueError("indexed PNG (P mode) required")
        palette = image.getpalette()
        if palette is None or len(palette) < 48:
            raise ValueError("PNG is missing its first 16 palette entries")

    out = bytearray()
    for i in range(16):
        r, g, b = palette[i * 3:i * 3 + 3]
        value = (r >> 3) | ((g >> 3) << 5) | ((b >> 3) << 10)
        out.extend((value & 0xFF, value >> 8))
    return bytes(out)


def encode_tilemap(path: Path) -> bytes:
    out = bytearray()
    for line_no, source in enumerate(path.read_text(encoding="utf-8").splitlines(), 1):
        line = source.split("@", 1)[0].strip()
        if not line:
            continue
        match = re.fullmatch(r"\.2byte\s+(.+)", line)
        if not match:
            raise ValueError(f"{path}:{line_no}: expected .2byte")
        for token in match.group(1).split(","):
            token = token.strip()
            if not re.fullmatch(r"(?:0[xX][0-9A-Fa-f]{1,4}|\d+)", token):
                raise ValueError(f"{path}:{line_no}: invalid u16 {token!r}")
            value = int(token, 0)
            if not 0 <= value <= 0xFFFF:
                raise ValueError(f"{path}:{line_no}: u16 out of range")
            out.extend((value & 0xFF, value >> 8))
    return bytes(out)


def main() -> None:
    parser = argparse.ArgumentParser()
    sub = parser.add_subparsers(dest="command", required=True)

    tiles = sub.add_parser("tiles")
    tiles.add_argument("--manifest", type=Path, required=True)
    tiles.add_argument("--key", required=True)
    tiles.add_argument("input_png", type=Path)
    tiles.add_argument("output", type=Path)

    pal = sub.add_parser("pal")
    pal.add_argument("input_png", type=Path)
    pal.add_argument("output", type=Path)

    tilemap = sub.add_parser("tilemap")
    tilemap.add_argument("--manifest", type=Path, required=True)
    tilemap.add_argument("--key", required=True)
    tilemap.add_argument("input_inc", type=Path)
    tilemap.add_argument("output", type=Path)

    args = parser.parse_args()

    if args.command == "pal":
        encoded = encode_palette(args.input_png)
        if len(encoded) != 32:
            raise ValueError("mail palette must be exactly 32 bytes")
    else:
        plan = load_entry(args.manifest, args.key)
        raw_size = int(plan["decompressed_size"])
        if args.command == "tiles":
            raw = encode_tiles(args.input_png, raw_size)
        else:
            raw = encode_tilemap(args.input_inc)
            if len(raw) != raw_size:
                raise ValueError(
                    f"tilemap raw 0x{len(raw):X} != expected 0x{raw_size:X}"
                )
        encoded = repack_raw_with_plan(raw, plan)

    args.output.parent.mkdir(parents=True, exist_ok=True)
    args.output.write_bytes(encoded)


if __name__ == "__main__":
    main()
