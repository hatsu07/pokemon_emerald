#!/usr/bin/env python3
# Exact decoration icon repacker.
# One 24x24 indexed PNG supplies both 4bpp graphics and palette.

from __future__ import annotations

import argparse
import json
import sys
from pathlib import Path

from PIL import Image

sys.path.insert(0, str(Path(__file__).resolve().parent))
from lz77_exact import repack_raw_with_plan


def encode_gfx(path: Path) -> bytes:
    with Image.open(path) as image:
        if image.mode != "P":
            raise ValueError(f"{path}: indexed PNG required")
        if image.size != (24, 24):
            raise ValueError(f"{path}: expected 24x24")
        pixels = list(image.getdata())

    out = bytearray()

    for tile_y in range(3):
        for tile_x in range(3):
            x0 = tile_x * 8
            y0 = tile_y * 8

            for y in range(8):
                base = (y0 + y) * 24 + x0

                for x in range(0, 8, 2):
                    lo = pixels[base + x]
                    hi = pixels[base + x + 1]

                    if lo >= 16 or hi >= 16:
                        raise ValueError(
                            f"{path}: 4bpp pixel index exceeds 15"
                        )

                    out.append(lo | (hi << 4))

    return bytes(out)


def encode_palette(path: Path) -> bytes:
    with Image.open(path) as image:
        if image.mode != "P":
            raise ValueError(f"{path}: indexed PNG required")

        palette = image.getpalette()

        if palette is None or len(palette) < 48:
            raise ValueError(f"{path}: missing 16-color palette")

    out = bytearray()

    for i in range(16):
        r8 = palette[i * 3]
        g8 = palette[i * 3 + 1]
        b8 = palette[i * 3 + 2]

        value = (
            (r8 >> 3)
            | ((g8 >> 3) << 5)
            | ((b8 >> 3) << 10)
        )
        out.extend((value & 0xFF, value >> 8))

    return bytes(out)


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("--manifest", required=True)
    parser.add_argument("--key", required=True)
    parser.add_argument("--repo-root", required=True)
    parser.add_argument("--output", required=True)
    args = parser.parse_args()

    manifest = json.loads(
        Path(args.manifest).read_text(encoding="utf-8")
    )

    if manifest.get("format") != "pokeemerald-jp-exact-lz77-plan-v1":
        raise ValueError("unexpected manifest format")

    meta = manifest["metadata"][args.key]
    plan = manifest["entries"][args.key]
    source = Path(args.repo_root) / meta["source_rel"]

    if meta["kind"] == "gfx":
        raw = encode_gfx(source)
    elif meta["kind"] == "pal":
        raw = encode_palette(source)
    else:
        raise ValueError(f"unexpected kind: {meta['kind']}")

    expected_raw = int(plan["decompressed_size"])

    if len(raw) != expected_raw:
        raise ValueError(
            f"{args.key}: raw=0x{len(raw):X}, "
            f"expected=0x{expected_raw:X}"
        )

    encoded = repack_raw_with_plan(raw, plan)

    output = Path(args.output)
    output.parent.mkdir(parents=True, exist_ok=True)
    output.write_bytes(encoded)


if __name__ == "__main__":
    main()
