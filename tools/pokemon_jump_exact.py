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

def load_entries(path):
    obj=json.loads(Path(path).read_text())
    entries=obj.get("entries")
    if not isinstance(entries,dict):
        raise SystemExit("manifest missing entries")
    return entries

def parse_u16(path):
    vals=[]
    for line in Path(path).read_text().splitlines():
        line=line.split("@",1)[0].replace(","," ")
        for tok in line.split():
            vals.append(int(tok,0))
    return struct.pack("<"+"H"*len(vals),*vals)

def cmd_png(a):
    entries=load_entries(a.manifest)
    e=entries[a.stem]
    with tempfile.TemporaryDirectory() as td:
        rawp=Path(td)/"out.4bpp"
        subprocess.run([a.gbagfx,a.input,str(rawp)],check=True)
        raw=rawp.read_bytes()
    expected=int(e["decompressed_size"])
    prefix=int(e.get("raw_prefix_size",expected))
    if prefix != expected:
        raise SystemExit(f"{a.stem}: prefix != decompressed_size")
    if len(raw) < prefix:
        raise SystemExit(f"{a.stem}: raw too short 0x{len(raw):X} < 0x{prefix:X}")
    if len(raw) != prefix:
        print(
            f"{a.stem}: normal gbagfx=0x{len(raw):X}; "
            f"using proven prefix=0x{prefix:X}",
            file=sys.stderr
        )
    raw=raw[:prefix]
    enc=repack_raw_with_plan(raw,e)
    out=Path(a.output); out.parent.mkdir(parents=True,exist_ok=True); out.write_bytes(enc)

def cmd_u16(a):
    entries=load_entries(a.manifest)
    raw=parse_u16(a.input)
    enc=repack_raw_with_plan(raw,entries[a.stem])
    out=Path(a.output); out.parent.mkdir(parents=True,exist_ok=True); out.write_bytes(enc)

def main():
    ap=argparse.ArgumentParser()
    sub=ap.add_subparsers(dest="cmd",required=True)
    p=sub.add_parser("repack-png")
    p.add_argument("--manifest",required=True)
    p.add_argument("--stem",required=True)
    p.add_argument("--gbagfx",required=True)
    p.add_argument("input")
    p.add_argument("output")
    p.set_defaults(func=cmd_png)
    u=sub.add_parser("repack-u16")
    u.add_argument("--manifest",required=True)
    u.add_argument("--stem",required=True)
    u.add_argument("input")
    u.add_argument("output")
    u.set_defaults(func=cmd_u16)
    a=ap.parse_args(); a.func(a)
if __name__=="__main__":
    main()
