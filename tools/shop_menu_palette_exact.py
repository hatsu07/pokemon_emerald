#!/usr/bin/env python3
from __future__ import annotations
import argparse
import importlib.util
import json
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
    ap.add_argument("--manifest", required=True)
    ap.add_argument("--key", required=True)
    ap.add_argument("input")
    ap.add_argument("output")
    a = ap.parse_args()

    m = load_lz77_exact()
    plan = json.loads(Path(a.manifest).read_text())["entries"][a.key]
    raw = m.indexed_png_to_gbapal(Path(a.input))
    out = Path(a.output)
    out.parent.mkdir(parents=True, exist_ok=True)
    out.write_bytes(m.repack_raw_with_plan(raw, plan))

if __name__ == "__main__":
    main()
