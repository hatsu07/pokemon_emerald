#!/usr/bin/env python3
"""Build a canonical Pokémon Emerald object-event PNG into raw GBA 4bpp."""

from __future__ import annotations

import argparse
import json
import subprocess
import sys
from pathlib import Path


def main() -> int:
    parser = argparse.ArgumentParser()
    parser.add_argument("--gbagfx", type=Path, required=True)
    parser.add_argument("--manifest", type=Path, required=True)
    parser.add_argument("--asset-key", required=True)
    parser.add_argument("input_png", type=Path)
    parser.add_argument("output_4bpp", type=Path)
    args = parser.parse_args()

    if not args.gbagfx.is_file():
        print(f"gbagfx not found: {args.gbagfx}", file=sys.stderr)
        return 1
    if not args.manifest.is_file():
        print(f"manifest not found: {args.manifest}", file=sys.stderr)
        return 1
    if not args.input_png.is_file():
        print(f"input PNG not found: {args.input_png}", file=sys.stderr)
        return 1

    manifest = json.loads(args.manifest.read_text())
    if args.asset_key not in manifest:
        print(f"asset key not in manifest: {args.asset_key}", file=sys.stderr)
        return 1

    flags = manifest[args.asset_key]
    if not isinstance(flags, list) or not all(isinstance(x, str) for x in flags):
        print(f"invalid manifest flags for {args.asset_key}", file=sys.stderr)
        return 1

    args.output_4bpp.parent.mkdir(parents=True, exist_ok=True)
    cmd = [
        str(args.gbagfx),
        str(args.input_png),
        str(args.output_4bpp),
        *flags,
    ]
    try:
        subprocess.run(cmd, check=True)
    except subprocess.CalledProcessError as exc:
        return exc.returncode or 1
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
