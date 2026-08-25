#!/usr/bin/env python3
from __future__ import annotations

import argparse
import json
from pathlib import Path

from lz77_exact import indexed_png_to_4bpp, repack_raw_with_plan
from png_to_palette import png_to_gba_palette

FORMAT = "pokeemerald-jp-remaining-a52-exact-v1"

def main() -> None:
    ap = argparse.ArgumentParser()
    ap.add_argument("--manifest", required=True)
    ap.add_argument("--key", required=True)
    ap.add_argument("--repo-root", required=True)
    ap.add_argument("--output", required=True)
    args = ap.parse_args()

    root = Path(args.repo_root)
    manifest = json.loads(Path(args.manifest).read_text(encoding="utf-8"))
    if manifest.get("format") != FORMAT:
        raise SystemExit(f"unsupported manifest format: {manifest.get('format')!r}")

    entry = manifest.get("entries", {}).get(args.key)
    if entry is None:
        raise SystemExit(f"missing A52 exact entry: {args.key}")

    source = root / entry["source"]
    if entry["mode"] == "4bpp":
        raw = indexed_png_to_4bpp(source)
    elif entry["mode"] == "pal16":
        raw = png_to_gba_palette(source, color_count=16)
    else:
        raise SystemExit(f"unsupported A52 mode: {entry['mode']}")

    encoded = repack_raw_with_plan(raw, entry["plan"])
    out = Path(args.output)
    out.parent.mkdir(parents=True, exist_ok=True)
    out.write_bytes(encoded)

if __name__ == "__main__":
    main()
