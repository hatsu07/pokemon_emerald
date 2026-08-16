#!/usr/bin/env python3
from __future__ import annotations
import argparse, importlib.util, json
from pathlib import Path

def load_lz77_exact():
    path = Path(__file__).resolve().parent / "lz77_exact.py"
    spec = importlib.util.spec_from_file_location("lz77_exact", path)
    mod = importlib.util.module_from_spec(spec)
    assert spec.loader is not None
    spec.loader.exec_module(mod)
    return mod

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("mode", choices=("gfx","u16"))
    ap.add_argument("--manifest", required=True)
    ap.add_argument("--key", required=True)
    ap.add_argument("input")
    ap.add_argument("output")
    a = ap.parse_args()
    mod = load_lz77_exact()
    plan = json.loads(Path(a.manifest).read_text())["entries"][a.key]
    src = Path(a.input)
    raw = mod.indexed_png_to_4bpp(src) if a.mode == "gfx" else src.read_bytes()
    if a.mode == "u16" and len(raw) & 1:
        raise ValueError(f"{src}: u16 source size must be even")
    packed = mod.repack_raw_with_plan(raw, plan)
    out = Path(a.output)
    out.parent.mkdir(parents=True, exist_ok=True)
    out.write_bytes(packed)

if __name__ == "__main__":
    main()
