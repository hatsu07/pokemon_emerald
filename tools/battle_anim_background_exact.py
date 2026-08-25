#!/usr/bin/env python3
"""Exact palette repacker for editable battle-animation background PNGs."""

from __future__ import annotations

import argparse
from pathlib import Path

from lz77_exact import indexed_png_to_gbapal, load_manifest, repack_raw_with_plan


def repack_pal(args: argparse.Namespace) -> None:
    manifest = load_manifest(Path(args.manifest))
    entries = manifest["entries"]
    if args.stem not in entries:
        raise SystemExit(f"LZ77 plan not found for {args.stem!r}")

    raw = indexed_png_to_gbapal(Path(args.input))
    encoded = repack_raw_with_plan(raw, entries[args.stem])

    out = Path(args.output)
    out.parent.mkdir(parents=True, exist_ok=True)
    out.write_bytes(encoded)


def main() -> None:
    parser = argparse.ArgumentParser()
    sub = parser.add_subparsers(dest="command", required=True)

    rp = sub.add_parser("repack-pal")
    rp.add_argument("--manifest", required=True)
    rp.add_argument("--stem", required=True)
    rp.add_argument("input")
    rp.add_argument("output")
    rp.set_defaults(func=repack_pal)

    args = parser.parse_args()
    args.func(args)


if __name__ == "__main__":
    main()
