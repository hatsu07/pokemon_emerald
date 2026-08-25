#!/usr/bin/env python3
from __future__ import annotations

import argparse
import importlib.util
import json
from pathlib import Path


def load_lz77_exact():
    path = Path(__file__).resolve().parent / "lz77_exact.py"
    spec = importlib.util.spec_from_file_location("lz77_exact", path)
    mod = importlib.util.module_from_spec(spec)
    assert spec.loader is not None
    spec.loader.exec_module(mod)
    return mod


def main() -> None:
    ap = argparse.ArgumentParser()
    ap.add_argument("mode", choices=("gfx", "u16"))
    ap.add_argument("--manifest", required=True)
    ap.add_argument("--key", required=True)
    ap.add_argument("input")
    ap.add_argument("output")
    args = ap.parse_args()

    mod = load_lz77_exact()
    plan = json.loads(Path(args.manifest).read_text())["entries"][args.key]
    src = Path(args.input)

    if args.mode == "gfx":
        raw = mod.indexed_png_to_4bpp(src)
    else:
        raw = src.read_bytes()
        if len(raw) & 1:
            raise ValueError(f"{src}: u16 source size must be even")

    packed = mod.repack_raw_with_plan(raw, plan)
    out = Path(args.output)
    out.parent.mkdir(parents=True, exist_ok=True)
    out.write_bytes(packed)


if __name__ == "__main__":
    main()
