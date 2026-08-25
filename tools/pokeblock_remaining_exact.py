#!/usr/bin/env python3
from __future__ import annotations
import argparse, importlib.util, json
from pathlib import Path

def load_lz77_exact():
    p = Path(__file__).resolve().parent / "lz77_exact.py"
    s = importlib.util.spec_from_file_location("lz77_exact", p)
    m = importlib.util.module_from_spec(s)
    assert s.loader is not None
    s.loader.exec_module(m)
    return m

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("mode", choices=("gfx","u16"))
    ap.add_argument("--manifest", required=True)
    ap.add_argument("--key", required=True)
    ap.add_argument("input")
    ap.add_argument("output")
    a = ap.parse_args()
    m = load_lz77_exact()
    plan = json.loads(Path(a.manifest).read_text())["entries"][a.key]
    src = Path(a.input)
    raw = m.indexed_png_to_4bpp(src) if a.mode == "gfx" else src.read_bytes()
    if a.mode == "u16" and len(raw) & 1:
        raise ValueError(f"{src}: u16 source size must be even")
    out = Path(a.output)
    out.parent.mkdir(parents=True, exist_ok=True)
    out.write_bytes(m.repack_raw_with_plan(raw, plan))

if __name__ == "__main__":
    main()
