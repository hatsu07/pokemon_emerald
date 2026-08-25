#!/usr/bin/env python3
"""Exact helpers for legacy PokéNav assets whose non-color bits are not in PNG."""

from __future__ import annotations

import argparse
import json
from pathlib import Path
import sys


def load_lz(tool_dir: Path):
    sys.path.insert(0,str(tool_dir))
    import lz77_exact
    return lz77_exact


def cmd_palette(args):
    lz=load_lz(Path(args.lz_tool_dir))
    raw=bytearray(lz.indexed_png_to_gbapal(Path(args.input)))
    meta=json.loads(Path(args.metadata).read_text(encoding="utf-8"))
    if meta.get("format")!="pokeemerald-jp-gbapal-high-bits-v1":
        raise ValueError("unsupported palette metadata format")
    indices=meta.get("high_bit_indices",[])
    if not isinstance(indices,list):
        raise ValueError("high_bit_indices must be a list")
    for idx in indices:
        idx=int(idx)
        if not 0<=idx<16:
            raise ValueError(f"palette index out of range: {idx}")
        off=idx*2
        value=raw[off]|(raw[off+1]<<8)
        value|=0x8000
        raw[off]=value&0xFF
        raw[off+1]=(value>>8)&0xFF
    out=Path(args.output)
    out.parent.mkdir(parents=True,exist_ok=True)
    out.write_bytes(raw)


def main():
    ap=argparse.ArgumentParser()
    sub=ap.add_subparsers(dest="command",required=True)

    p=sub.add_parser("palette")
    p.add_argument("--lz-tool-dir",default=str(Path(__file__).resolve().parent))
    p.add_argument("--metadata",required=True)
    p.add_argument("input")
    p.add_argument("output")
    p.set_defaults(func=cmd_palette)

    args=ap.parse_args()
    args.func(args)


if __name__=="__main__":
    main()
