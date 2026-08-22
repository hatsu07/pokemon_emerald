#!/usr/bin/env python3
# Exact repacker for Rayquaza Scene 4.

from __future__ import annotations

import argparse
import json
import re
import sys
from pathlib import Path

from PIL import Image

sys.path.insert(0, str(Path(__file__).resolve().parent))
from lz77_exact import repack_raw_with_plan


def load_manifest(path: Path) -> dict:
    obj = json.loads(path.read_text(encoding="utf-8"))

    if obj.get("format") != "pokeemerald-jp-exact-lz77-plan-v1":
        raise ValueError("unexpected manifest format")

    return obj


def encode_4bpp(path: Path, pixel_bytes: int) -> bytes:
    if pixel_bytes % 32:
        raise ValueError("pixel_bytes must be tile aligned")

    tile_count = pixel_bytes // 32

    with Image.open(path) as img:
        if img.mode != "P":
            raise ValueError(f"{path}: indexed PNG required")

        width, height = img.size
        pixels = list(img.getdata())

    if width % 8 or height % 8:
        raise ValueError(
            f"{path}: dimensions must be multiples of 8"
        )

    if tile_count > (width // 8) * (height // 8):
        raise ValueError(f"{path}: canvas too small")

    out = bytearray()
    tile = 0

    for ty in range(0, height, 8):
        for tx in range(0, width, 8):
            if tile >= tile_count:
                return bytes(out)

            for y in range(8):
                base = (ty + y) * width + tx

                for x in range(0, 8, 2):
                    lo = pixels[base + x]
                    hi = pixels[base + x + 1]

                    if lo >= 16 or hi >= 16:
                        raise ValueError(
                            f"{path}: 4bpp pixel index exceeds 15"
                        )

                    out.append(lo | (hi << 4))

            tile += 1

    return bytes(out)


def parse_u16(path: Path) -> bytes:
    out = bytearray()

    for lineno, source in enumerate(
        path.read_text(encoding="utf-8").splitlines(),
        1,
    ):
        line = source.split("@", 1)[0].strip()

        if not line:
            continue

        m = re.fullmatch(r"\.2byte\s+(.+)", line)

        if not m:
            raise ValueError(
                f"{path}:{lineno}: expected .2byte"
            )

        for token in m.group(1).split(","):
            token = token.strip()

            if not re.fullmatch(
                r"0[xX][0-9A-Fa-f]{1,4}",
                token,
            ):
                raise ValueError(
                    f"{path}:{lineno}: invalid u16"
                )

            v = int(token, 16)
            out += bytes((v & 0xFF, v >> 8))

    return bytes(out)


def main() -> None:
    ap = argparse.ArgumentParser()
    ap.add_argument(
        "command",
        choices=["4bpp", "u16", "raw"],
    )
    ap.add_argument("--manifest", required=True)
    ap.add_argument("--key", required=True)
    ap.add_argument("input")
    ap.add_argument("output")
    args = ap.parse_args()

    manifest = load_manifest(Path(args.manifest))
    plan = manifest["entries"][args.key]
    meta = manifest["metadata"][args.key]

    raw_size = int(plan["decompressed_size"])

    if args.command == "4bpp":
        pixel_bytes = int(meta["pixel_bytes"])
        raw = encode_4bpp(
            Path(args.input),
            pixel_bytes,
        )
    elif args.command == "u16":
        raw = parse_u16(Path(args.input))
    else:
        raw = Path(args.input).read_bytes()

    if len(raw) != raw_size:
        raise ValueError(
            f"{args.key}: raw 0x{len(raw):X} "
            f"!= expected 0x{raw_size:X}"
        )

    encoded = repack_raw_with_plan(raw, plan)

    output = Path(args.output)
    output.parent.mkdir(parents=True, exist_ok=True)
    output.write_bytes(encoded)


if __name__ == "__main__":
    main()
