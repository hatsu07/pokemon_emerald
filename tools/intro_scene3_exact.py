#!/usr/bin/env python3
import argparse
import json
import struct
import subprocess
import sys
import tempfile
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
from lz77_exact import repack_raw_with_plan

def entries(path: Path):
    obj=json.loads(path.read_text())
    e=obj.get("entries")
    if not isinstance(e,dict):
        raise SystemExit("manifest missing entries")
    return e

def parse_u16(path: Path) -> bytes:
    vals=[]
    for line in path.read_text().splitlines():
        line=line.split("@",1)[0].replace(","," ")
        for tok in line.split():
            vals.append(int(tok,0))
    return struct.pack("<"+"H"*len(vals),*vals)

def repack_png(args):
    e=entries(Path(args.manifest))
    if args.stem not in e:
        raise SystemExit(f"plan not found: {args.stem}")
    plan=e[args.stem]
    bpp=int(plan.get("bpp",0))
    if bpp not in (4,8):
        raise SystemExit(f"{args.stem}: unsupported bpp={bpp}")

    with tempfile.TemporaryDirectory() as td:
        raw_path=Path(td)/f"image.{bpp}bpp"
        subprocess.run([args.gbagfx,args.input,str(raw_path)],check=True)
        raw=raw_path.read_bytes()

    expected=int(plan["decompressed_size"])
    if len(raw)!=expected:
        raise SystemExit(
            f"{args.stem}: generated raw size 0x{len(raw):X}, "
            f"expected 0x{expected:X}"
        )

    encoded=repack_raw_with_plan(raw,plan)
    out=Path(args.output)
    out.parent.mkdir(parents=True,exist_ok=True)
    out.write_bytes(encoded)

def repack_u16(args):
    e=entries(Path(args.manifest))
    if args.stem not in e:
        raise SystemExit(f"plan not found: {args.stem}")
    plan=e[args.stem]
    raw=parse_u16(Path(args.input))
    expected=int(plan["decompressed_size"])
    if len(raw)!=expected:
        raise SystemExit(
            f"{args.stem}: u16 raw size 0x{len(raw):X}, expected 0x{expected:X}"
        )
    encoded=repack_raw_with_plan(raw,plan)
    out=Path(args.output)
    out.parent.mkdir(parents=True,exist_ok=True)
    out.write_bytes(encoded)

def main():
    ap=argparse.ArgumentParser()
    sub=ap.add_subparsers(dest="cmd",required=True)

    p=sub.add_parser("repack-png")
    p.add_argument("--manifest",required=True)
    p.add_argument("--stem",required=True)
    p.add_argument("--gbagfx",required=True)
    p.add_argument("input")
    p.add_argument("output")
    p.set_defaults(func=repack_png)

    u=sub.add_parser("repack-u16")
    u.add_argument("--manifest",required=True)
    u.add_argument("--stem",required=True)
    u.add_argument("input")
    u.add_argument("output")
    u.set_defaults(func=repack_u16)

    args=ap.parse_args()
    args.func(args)

if __name__=="__main__":
    main()
