#!/usr/bin/env python3
from __future__ import annotations

import argparse
import json
import re
from pathlib import Path
from typing import Any

from lz77_exact import FORMAT, indexed_png_to_4bpp, repack_raw_with_plan, u16_text_to_raw

def load_manifest(path: Path) -> dict[str, Any]:
    obj=json.loads(path.read_text(encoding="utf-8"))
    if obj.get("format") != FORMAT:
        raise ValueError(f"unsupported manifest format: {obj.get('format')!r}")
    return obj

def indexed_png_to_8bpp(path: Path) -> bytes:
    try:
        from PIL import Image
    except ImportError as exc:
        raise SystemExit("Pillow is required: sudo apt install python3-pil") from exc
    with Image.open(path) as img:
        if img.mode != "P":
            raise ValueError(f"{path}: indexed PNG required, got {img.mode}")
        w,h=img.size
        if w%8 or h%8:
            raise ValueError(f"{path}: dimensions must be multiples of 8, got {w}x{h}")
        pixels=list(img.getdata())
    out=bytearray()
    for ty in range(h//8):
        for tx in range(w//8):
            x0=tx*8
            y0=ty*8
            for y in range(8):
                row=(y0+y)*w+x0
                out.extend(pixels[row:row+8])
    return bytes(out)

def u8_text_to_raw(path: Path) -> bytes:
    vals=[]
    for lineno,line in enumerate(path.read_text(encoding="utf-8").splitlines(),1):
        line=line.split("#",1)[0]
        for token in re.findall(r"0x[0-9A-Fa-f]{1,2}",line):
            value=int(token,16)
            if not (0 <= value <= 0xFF):
                raise ValueError(f"{path}:{lineno}: u8 out of range: {token}")
            vals.append(value)
    if not vals:
        raise ValueError(f"{path}: no 0xNN u8 values")
    return bytes(vals)

def main() -> None:
    ap=argparse.ArgumentParser()
    ap.add_argument("kind",choices=("4bpp","8bpp","u16","u8"))
    ap.add_argument("--manifest",required=True)
    ap.add_argument("--key",required=True)
    ap.add_argument("input")
    ap.add_argument("output")
    args=ap.parse_args()

    manifest=load_manifest(Path(args.manifest))
    if args.key not in manifest["entries"]:
        raise SystemExit(f"plan key not found: {args.key}")
    plan=manifest["entries"][args.key]

    inp=Path(args.input)
    if args.kind=="4bpp":
        raw=indexed_png_to_4bpp(inp)
    elif args.kind=="8bpp":
        raw=indexed_png_to_8bpp(inp)
    elif args.kind=="u16":
        raw=u16_text_to_raw(inp)
    else:
        raw=u8_text_to_raw(inp)

    encoded=repack_raw_with_plan(raw,plan)
    out=Path(args.output)
    out.parent.mkdir(parents=True,exist_ok=True)
    out.write_bytes(encoded)

if __name__=="__main__":
    main()
