#!/usr/bin/env python3
from __future__ import annotations

import argparse
import importlib.util
import json
from pathlib import Path

from PIL import Image


def load_lz77_exact():
    p = Path(__file__).resolve().parent / "lz77_exact.py"
    s = importlib.util.spec_from_file_location("lz77_exact", p)
    m = importlib.util.module_from_spec(s)
    assert s.loader is not None
    s.loader.exec_module(m)
    return m


def png8_to_tiled_raw(path: Path) -> bytes:
    with Image.open(path) as im:
        if im.mode != "P":
            raise ValueError(f"{path}: indexed PNG required for 8bpp")
        w, h = im.size
        if w % 8 or h % 8:
            raise ValueError(
                f"{path}: width/height must be multiples of 8, got {w}x{h}"
            )
        px = im.load()
        out = bytearray()
        for ty in range(0, h, 8):
            for tx in range(0, w, 8):
                for y in range(8):
                    for x in range(8):
                        out.append(int(px[tx + x, ty + y]))
        return bytes(out)


def main() -> None:
    ap = argparse.ArgumentParser()
    ap.add_argument("mode", choices=("gfx4", "u16", "gfx8"))
    ap.add_argument("--manifest", required=True)
    ap.add_argument("--key", required=True)
    ap.add_argument("input")
    ap.add_argument("output")
    a = ap.parse_args()

    m = load_lz77_exact()
    plan = json.loads(Path(a.manifest).read_text())["entries"][a.key]
    src = Path(a.input)

    if a.mode == "gfx4":
        raw = m.indexed_png_to_4bpp(src)
    elif a.mode == "u16":
        raw = src.read_bytes()
        if len(raw) & 1:
            raise ValueError(f"{src}: u16 source size must be even")
    else:
        raw = png8_to_tiled_raw(src)

    packed = m.repack_raw_with_plan(raw, plan)
    out = Path(a.output)
    out.parent.mkdir(parents=True, exist_ok=True)
    out.write_bytes(packed)


if __name__ == "__main__":
    main()
