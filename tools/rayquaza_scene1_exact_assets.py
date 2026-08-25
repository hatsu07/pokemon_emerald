#!/usr/bin/env python3
# Deterministic exact-LZ77 builder for Rayquaza Scene 1.

from __future__ import annotations

import argparse
import json
import re
import sys
from pathlib import Path

from PIL import Image

sys.path.insert(0, str(Path(__file__).resolve().parent))
from lz77_exact import indexed_png_to_4bpp, repack_raw_with_plan

FORMAT = "pokeemerald-jp-exact-lz77-plan-v1"


def load_plan(path: Path, key: str) -> dict:
    obj = json.loads(path.read_text(encoding="utf-8"))
    if obj.get("format") != FORMAT:
        raise ValueError(f"unexpected manifest format: {obj.get('format')!r}")
    try:
        return obj["entries"][key]
    except KeyError as exc:
        raise ValueError(f"missing exact-LZ77 plan key: {key}") from exc


def indexed_png_palette_to_gbapal(path: Path, colors: int) -> bytes:
    with Image.open(path) as img:
        if img.mode != "P":
            raise ValueError(f"{path}: indexed PNG required (mode P), got {img.mode}")
        palette = img.getpalette()
        if palette is None or len(palette) < colors * 3:
            raise ValueError(f"{path}: at least {colors} indexed colors are required")

    out = bytearray()
    for i in range(colors):
        r, g, b = palette[i * 3:i * 3 + 3]
        value = (r >> 3) | ((g >> 3) << 5) | ((b >> 3) << 10)
        out.extend((value & 0xFF, (value >> 8) & 0xFF))
    return bytes(out)


def parse_tilemap_inc(path: Path) -> bytes:
    out = bytearray()
    for lineno, source in enumerate(path.read_text(encoding="utf-8").splitlines(), 1):
        line = source.split("@", 1)[0].strip()
        if not line:
            continue
        m = re.fullmatch(r"\.2byte\s+(.+)", line)
        if not m:
            raise ValueError(f"{path}:{lineno}: expected .2byte")
        for token in m.group(1).split(","):
            token = token.strip()
            if not re.fullmatch(r"0[xX][0-9A-Fa-f]{1,4}", token):
                raise ValueError(f"{path}:{lineno}: invalid tilemap value {token!r}")
            value = int(token, 16)
            out.extend((value & 0xFF, (value >> 8) & 0xFF))
    return bytes(out)


def write_exact(raw: bytes, plan: dict, output: Path) -> None:
    encoded = repack_raw_with_plan(raw, plan)
    output.parent.mkdir(parents=True, exist_ok=True)
    output.write_bytes(encoded)


def main() -> None:
    ap = argparse.ArgumentParser()
    sub = ap.add_subparsers(dest="command", required=True)

    gfx = sub.add_parser("repack-gfx")
    gfx.add_argument("--manifest", required=True)
    gfx.add_argument("--key", required=True)
    gfx.add_argument("input")
    gfx.add_argument("output")

    pal = sub.add_parser("repack-pal")
    pal.add_argument("--manifest", required=True)
    pal.add_argument("--key", required=True)
    pal.add_argument("input")
    pal.add_argument("output")

    tilemap = sub.add_parser("repack-tilemap")
    tilemap.add_argument("--manifest", required=True)
    tilemap.add_argument("--key", required=True)
    tilemap.add_argument("input")
    tilemap.add_argument("output")

    args = ap.parse_args()
    plan = load_plan(Path(args.manifest), args.key)

    if args.command == "repack-gfx":
        raw = indexed_png_to_4bpp(Path(args.input))
    elif args.command == "repack-pal":
        raw_size = int(plan["decompressed_size"])
        if raw_size % 2:
            raise ValueError("palette plan decompressed size must be even")
        raw = indexed_png_palette_to_gbapal(Path(args.input), raw_size // 2)
    else:
        raw = parse_tilemap_inc(Path(args.input))

    write_exact(raw, plan, Path(args.output))


if __name__ == "__main__":
    main()
