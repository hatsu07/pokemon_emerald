#!/usr/bin/env python3
'''Deterministic exact-LZ77 builder for the proven Rayquaza Scene 1 subgroup.'''

from __future__ import annotations

import argparse
import json
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


def indexed_png_palette_to_gbapal(path: Path) -> bytes:
    with Image.open(path) as img:
        if img.mode != "P":
            raise ValueError(f"{path}: indexed PNG required (mode P), got {img.mode}")
        palette = img.getpalette()
        if palette is None or len(palette) < 16 * 3:
            raise ValueError(f"{path}: at least 16 indexed colors are required")

    out = bytearray()
    for i in range(16):
        r, g, b = palette[i * 3:i * 3 + 3]
        value = (r >> 3) | ((g >> 3) << 5) | ((b >> 3) << 10)
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

    args = ap.parse_args()
    manifest = Path(args.manifest)
    input_path = Path(args.input)
    output_path = Path(args.output)
    plan = load_plan(manifest, args.key)

    if args.command == "repack-gfx":
        raw = indexed_png_to_4bpp(input_path)
    else:
        raw = indexed_png_palette_to_gbapal(input_path)

    write_exact(raw, plan, output_path)


if __name__ == "__main__":
    main()
