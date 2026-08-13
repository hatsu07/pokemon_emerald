#!/usr/bin/env python3
# Repack an indexed 4bpp/8bpp PNG with an exact GBA LZ77 token plan.

from __future__ import annotations

import argparse
import json
import sys
from pathlib import Path

from PIL import Image

sys.path.insert(0, str(Path(__file__).resolve().parent))
from lz77_exact import repack_raw_with_plan


def load_entry(path: Path, key: str) -> dict:
    obj = json.loads(path.read_text(encoding="utf-8"))
    if obj.get("format") != "pokeemerald-jp-exact-lz77-plan-v1":
        raise ValueError("unsupported exact-LZ manifest format")
    try:
        return obj["entries"][key]
    except KeyError as exc:
        raise ValueError(f"manifest key not found: {key}") from exc


def encode_indexed_png(path: Path, bpp: int, raw_size: int) -> bytes:
    bytes_per_tile = 32 if bpp == 4 else 64
    if raw_size % bytes_per_tile:
        raise ValueError("raw size is not tile-aligned")
    tile_count = raw_size // bytes_per_tile

    with Image.open(path) as image:
        if image.mode != "P":
            raise ValueError("indexed PNG (P mode) required")
        width, height = image.size
        pixels = list(image.getdata())

    if width % 8 or height % 8:
        raise ValueError("PNG width/height must be multiples of 8")
    if tile_count != (width // 8) * (height // 8):
        raise ValueError(
            f"PNG tile count {(width // 8) * (height // 8)} "
            f"!= expected {tile_count}"
        )

    out = bytearray()
    for tile_y in range(0, height, 8):
        for tile_x in range(0, width, 8):
            for y in range(8):
                base = (tile_y + y) * width + tile_x
                if bpp == 8:
                    out.extend(pixels[base:base + 8])
                else:
                    for x in range(0, 8, 2):
                        lo = pixels[base + x]
                        hi = pixels[base + x + 1]
                        if lo >= 16 or hi >= 16:
                            raise ValueError("4bpp PNG contains palette index > 15")
                        out.append(lo | (hi << 4))

    raw = bytes(out)
    if len(raw) != raw_size:
        raise ValueError(
            f"encoded raw size 0x{len(raw):X} != expected 0x{raw_size:X}"
        )
    return raw


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("--manifest", type=Path, required=True)
    parser.add_argument("--key", required=True)
    parser.add_argument("--bpp", type=int, choices=(4, 8), required=True)
    parser.add_argument("input_png", type=Path)
    parser.add_argument("output", type=Path)
    args = parser.parse_args()

    plan = load_entry(args.manifest, args.key)
    raw_size = int(plan["decompressed_size"])
    expected_bpp = int(plan.get("bpp", args.bpp))
    if expected_bpp != args.bpp:
        raise ValueError(
            f"{args.key}: requested {args.bpp}bpp, manifest says {expected_bpp}bpp"
        )

    raw = encode_indexed_png(args.input_png, args.bpp, raw_size)
    encoded = repack_raw_with_plan(raw, plan)

    args.output.parent.mkdir(parents=True, exist_ok=True)
    args.output.write_bytes(encoded)


if __name__ == "__main__":
    main()
