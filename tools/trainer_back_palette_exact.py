#!/usr/bin/env python3
from __future__ import annotations
import argparse, json, sys
from pathlib import Path
sys.path.insert(0, str(Path(__file__).resolve().parent))
from lz77_exact import FORMAT, repack_raw_with_plan
from png_to_palette import png_to_gba_palette

def main() -> int:
    ap=argparse.ArgumentParser()
    ap.add_argument("--manifest",required=True,type=Path)
    ap.add_argument("--stem",required=True)
    ap.add_argument("input_png",type=Path)
    ap.add_argument("output",type=Path)
    a=ap.parse_args()
    m=json.loads(a.manifest.read_text(encoding="utf-8"))
    if m.get("format") != FORMAT:
        raise ValueError("unsupported manifest format")
    raw=png_to_gba_palette(a.input_png,color_count=16)
    enc=repack_raw_with_plan(raw,m["entries"][a.stem])
    a.output.parent.mkdir(parents=True,exist_ok=True)
    a.output.write_bytes(enc)
    return 0

if __name__=="__main__":
    raise SystemExit(main())
