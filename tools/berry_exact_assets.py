#!/usr/bin/env python3
# Exact editable Berry graphics builder for Pokemon Emerald JP.

from __future__ import annotations

import argparse
import json
import re
import sys
from pathlib import Path

from PIL import Image

sys.path.insert(0, str(Path(__file__).resolve().parent))
from lz77_exact import repack_raw_with_plan


def load_plan(path: Path, key: str) -> dict:
    obj = json.loads(path.read_text(encoding="utf-8"))
    if obj.get("format") != "pokeemerald-jp-exact-lz77-plan-v1":
        raise ValueError("unsupported Berry exact-LZ manifest format")
    try:
        return obj["entries"][key]
    except KeyError as exc:
        raise ValueError(f"Berry manifest key not found: {key}") from exc


def encode_4bpp(path: Path) -> bytes:
    with Image.open(path) as image:
        if image.mode != "P":
            raise ValueError(f"{path}: indexed PNG required")
        width, height = image.size
        pixels = list(image.getdata())

    if width % 8 or height % 8:
        raise ValueError(f"{path}: dimensions must be multiples of 8")

    out = bytearray()
    for ty in range(0, height, 8):
        for tx in range(0, width, 8):
            for y in range(8):
                base = (ty + y) * width + tx
                for x in range(0, 8, 2):
                    lo = pixels[base + x]
                    hi = pixels[base + x + 1]
                    if lo >= 16 or hi >= 16:
                        raise ValueError(f"{path}: 4bpp palette index > 15")
                    out.append(lo | (hi << 4))
    return bytes(out)


def encode_palette(path: Path) -> bytes:
    with Image.open(path) as image:
        if image.mode != "P":
            raise ValueError(f"{path}: indexed PNG required")
        palette = image.getpalette()
        if palette is None or len(palette) < 48:
            raise ValueError(f"{path}: first 16 palette entries missing")

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

    pic = sub.add_parser("pic")
    pic.add_argument("--manifest", type=Path, required=True)
    pic.add_argument("--key", required=True)
    pic.add_argument("input", type=Path)
    pic.add_argument("output", type=Path)

    pal = sub.add_parser("pal")
    pal.add_argument("--manifest", type=Path, required=True)
    pal.add_argument("--key", required=True)
    pal.add_argument("input", type=Path)
    pal.add_argument("output", type=Path)

    tilemap = sub.add_parser("tilemap")
    tilemap.add_argument("--manifest", type=Path, required=True)
    tilemap.add_argument("--key", required=True)
    tilemap.add_argument("input", type=Path)
    tilemap.add_argument("output", type=Path)

    args = parser.parse_args()
    plan = load_plan(args.manifest, args.key)

    if args.command == "pic":
        raw = encode_4bpp(args.input)
    elif args.command == "pal":
        raw = encode_palette(args.input)
    else:
        raw = encode_tilemap(args.input)

    expected_raw = int(plan["decompressed_size"])
    if len(raw) != expected_raw:
        raise ValueError(
            f"{args.key}: source raw 0x{len(raw):X} != expected 0x{expected_raw:X}"
        )

    encoded = repack_raw_with_plan(raw, plan)
    args.output.parent.mkdir(parents=True, exist_ok=True)
    args.output.write_bytes(encoded)


if __name__ == "__main__":
    main()
