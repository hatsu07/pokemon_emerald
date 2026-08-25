#!/usr/bin/env python3
from __future__ import annotations
import argparse,json
from pathlib import Path
from PIL import Image
from lz77_exact import repack_raw_with_plan,u16_text_to_raw
from png_to_palette import png_to_gba_palette

FORMAT="pokeemerald-jp-remaining-b16-exact-v1"

def png8_raw(path:Path,geometry:str)->bytes:
    ew,eh=map(int,geometry.split("x"))
    with Image.open(path) as im:
        if im.mode not in {"P","L"}:
            raise ValueError(f"{path}: 8-bit P/L PNG required, got {im.mode}")
        if im.size!=(ew,eh): raise ValueError(f"{path}: expected {ew}x{eh}, got {im.size[0]}x{im.size[1]}")
        pix=list(im.getdata())
    out=bytearray()
    for ty in range(eh//8):
      for tx in range(ew//8):
        for y in range(8):
          s=(ty*8+y)*ew+tx*8; out.extend(pix[s:s+8])
    return bytes(out)

def main():
    ap=argparse.ArgumentParser()
    ap.add_argument("--manifest",required=True); ap.add_argument("--key",required=True)
    ap.add_argument("--repo-root",required=True); ap.add_argument("--output",required=True)
    a=ap.parse_args(); root=Path(a.repo_root)
    m=json.loads(Path(a.manifest).read_text())
    if m.get("format")!=FORMAT: raise SystemExit("unsupported manifest format")
    e=m["entries"].get(a.key)
    if e is None: raise SystemExit(f"missing B16 key: {a.key}")
    src=root/e["source"]; kind=e["kind"]; param=e["param"]
    if kind=="palette": raw=png_to_gba_palette(src,color_count=int(param))
    elif kind=="u16": raw=u16_text_to_raw(src)
    elif kind=="raw": raw=src.read_bytes()
    elif kind=="gfx8": raw=png8_raw(src,param)
    else: raise SystemExit(f"unsupported kind: {kind}")
    encoded=repack_raw_with_plan(raw,e["plan"])
    out=Path(a.output); out.parent.mkdir(parents=True,exist_ok=True); out.write_bytes(encoded)
if __name__=="__main__": main()
