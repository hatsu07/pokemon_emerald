#!/usr/bin/env python3
from __future__ import annotations

import argparse
from pathlib import Path
from PIL import Image


def rgb8_to_5(v: int) -> int:
    for v5 in range(32):
        if ((v5 << 3) | (v5 >> 2)) == v:
            return v5
    raise ValueError(
        f"RGB channel {v} is not an exact 5-bit GBA preview value"
    )


def indexed_png_to_gba_palette(path: Path, color_count: int = 16) -> bytes:
    img = Image.open(path)
    if img.mode != "P":
        raise ValueError(f"{path}: indexed PNG (mode P) required, got {img.mode}")

    pal = img.getpalette()
    if pal is None or len(pal) < color_count * 3:
        raise ValueError(
            f"{path}: palette has fewer than {color_count} RGB entries"
        )

    out = bytearray()
    for i in range(color_count):
        r, g, b = pal[i * 3 : i * 3 + 3]
        r5 = rgb8_to_5(r)
        g5 = rgb8_to_5(g)
        b5 = rgb8_to_5(b)
        value = r5 | (g5 << 5) | (b5 << 10)
        out += value.to_bytes(2, "little")
    return bytes(out)


def main() -> int:
    ap = argparse.ArgumentParser(
        description="Extract first N indexed-PNG palette entries as GBA BGR555"
    )
    ap.add_argument("--colors", type=int, default=16)
    ap.add_argument("input_png", type=Path)
    ap.add_argument("output", type=Path)
    a = ap.parse_args()

    raw = indexed_png_to_gba_palette(a.input_png, a.colors)
    a.output.parent.mkdir(parents=True, exist_ok=True)
    a.output.write_bytes(raw)
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
