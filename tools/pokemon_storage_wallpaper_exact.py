#!/usr/bin/env python3
from __future__ import annotations
import argparse, json, re, struct, sys
from pathlib import Path
from PIL import Image
sys.path.insert(0, str(Path(__file__).resolve().parent))
from lz77_exact import FORMAT, indexed_png_to_4bpp, repack_raw_with_plan

def load_entries(path):
    d=json.loads(Path(path).read_text(encoding="utf-8"))
    if d.get("format") != FORMAT:
        raise ValueError(f"manifest format={d.get('format')!r}, expected={FORMAT!r}")
    e=d.get("entries")
    if not isinstance(e,dict): raise ValueError("manifest entries must be an object")
    return e

def parse_u16(path):
    vals=[]
    for ln,line in enumerate(Path(path).read_text(encoding="utf-8").splitlines(),1):
        code=line.split("#",1)[0].strip()
        if not code: continue
        for tok in re.split(r"[\s,]+",code):
            if not tok: continue
            try: v=int(tok,0)
            except ValueError as exc: raise ValueError(f"{path}:{ln}: invalid token {tok!r}") from exc
            if not 0 <= v <= 0xFFFF: raise ValueError(f"{path}:{ln}: u16 out of range {tok}")
            vals.append(v)
    return struct.pack("<"+"H"*len(vals),*vals)

def palette_raw(path,colors):
    img=Image.open(path)
    if img.mode!="P": raise ValueError(f"{path}: indexed PNG required")
    pal=img.getpalette()
    if pal is None or len(pal)<colors*3: raise ValueError(f"{path}: too few palette colors")
    out=bytearray()
    for i in range(colors):
        r,g,b=pal[i*3:i*3+3]
        out += struct.pack("<H",(r>>3)|((g>>3)<<5)|((b>>3)<<10))
    return bytes(out)

def exact(entries,key,raw,out):
    if key not in entries: raise ValueError(f"manifest entry missing: {key}")
    e=entries[key]; n=e["raw_size"]
    if len(raw)<n: raise ValueError(f"{key}: raw too short {len(raw)} < {n}")
    if any(raw[n:]): raise ValueError(f"{key}: nonzero PNG padding beyond raw_size=0x{n:X}")
    packed=repack_raw_with_plan(raw[:n],e["plan"])
    if len(packed)!=e["slot_size"]: raise ValueError(f"{key}: slot size mismatch")
    out=Path(out); out.parent.mkdir(parents=True,exist_ok=True); out.write_bytes(packed)

def main():
    ap=argparse.ArgumentParser(); sp=ap.add_subparsers(dest="cmd",required=True)
    for c in ("tiles","tilemap"):
        p=sp.add_parser(c); p.add_argument("--manifest",required=True); p.add_argument("--key",required=True); p.add_argument("input"); p.add_argument("output")
    p=sp.add_parser("palette"); p.add_argument("--colors",type=int,default=32); p.add_argument("input"); p.add_argument("output")
    a=ap.parse_args()
    if a.cmd=="palette":
        out=Path(a.output); out.parent.mkdir(parents=True,exist_ok=True); out.write_bytes(palette_raw(a.input,a.colors)); return
    entries=load_entries(a.manifest)
    raw=indexed_png_to_4bpp(Path(a.input)) if a.cmd=="tiles" else parse_u16(a.input)
    exact(entries,a.key,raw,a.output)
if __name__=="__main__": main()
