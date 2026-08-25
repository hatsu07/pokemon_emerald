#!/usr/bin/env python3
import argparse
import json
import re
import sys
from pathlib import Path
from PIL import Image

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / "tools"))
from lz77_exact import indexed_png_to_4bpp, repack_raw_with_plan

def indexed_png_to_8bpp(path: Path) -> bytes:
    with Image.open(path) as im:
        if im.mode != "P":
            raise ValueError(f"{path}: indexed PNG required")
        w, h = im.size
        if w % 8 or h % 8:
            raise ValueError(f"{path}: dimensions must be multiples of 8; got {w}x{h}")
        pix = list(im.getdata())
    out = bytearray()
    for ty in range(h // 8):
        for tx in range(w // 8):
            for y in range(8):
                row = (ty * 8 + y) * w + tx * 8
                out.extend(pix[row:row + 8])
    return bytes(out)

def u8_text_to_raw(path: Path) -> bytes:
    text = re.sub(r"#.*", "", path.read_text(encoding="utf-8"))
    vals = [int(tok, 0) for tok in text.split()]
    if any(v < 0 or v > 0xFF for v in vals):
        raise ValueError(f"{path}: u8 value out of range")
    return bytes(vals)

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("kind", choices=("4bpp", "8bpp", "u8"))
    ap.add_argument("--manifest", required=True)
    ap.add_argument("--key", required=True)
    ap.add_argument("--raw-size", type=lambda x: int(x, 0))
    ap.add_argument("input")
    ap.add_argument("output")
    args = ap.parse_args()

    inp = Path(args.input)
    if args.kind == "4bpp":
        raw = indexed_png_to_4bpp(inp)
    elif args.kind == "8bpp":
        raw = indexed_png_to_8bpp(inp)
    else:
        raw = u8_text_to_raw(inp)

    if args.raw_size is not None:
        if len(raw) < args.raw_size:
            raise ValueError(
                f"{inp}: raw shorter than requested size "
                f"(actual=0x{len(raw):X}, requested=0x{args.raw_size:X})"
            )
        raw = raw[:args.raw_size]

    data = json.loads(Path(args.manifest).read_text(encoding="utf-8"))
    plan = data["entries"][args.key]
    packed = repack_raw_with_plan(raw, plan)

    out = Path(args.output)
    out.parent.mkdir(parents=True, exist_ok=True)
    out.write_bytes(packed)

if __name__ == "__main__":
    main()
