#!/usr/bin/env python3
"""Repack one or more editable 16-color PNG palette banks with an exact LZ77 plan."""
from __future__ import annotations
import argparse
from pathlib import Path
from lz77_exact import indexed_png_to_gbapal, load_manifest, repack_raw_with_plan

def repack_pal_banks(args: argparse.Namespace) -> None:
    manifest=load_manifest(Path(args.manifest))
    entries=manifest["entries"]
    if args.stem not in entries:
        raise SystemExit(f"LZ77 plan not found for {args.stem!r}")

    input_dir=Path(args.input_dir)
    parts=[]
    for i in range(args.banks):
        path=input_dir/f"palette_{i:02d}.png"
        if not path.is_file():
            raise SystemExit(f"palette bank missing: {path}")
        part=indexed_png_to_gbapal(path)
        if len(part)!=0x20:
            raise SystemExit(
                f"palette bank raw size mismatch: {path}: expected=0x20 actual=0x{len(part):X}"
            )
        parts.append(part)

    raw=b"".join(parts)
    plan=entries[args.stem]
    expected_raw=int(plan["decompressed_size"])
    if len(raw)!=expected_raw:
        raise SystemExit(
            f"palette bank concatenation size mismatch: "
            f"expected=0x{expected_raw:X} actual=0x{len(raw):X}"
        )

    encoded=repack_raw_with_plan(raw,plan)
    out=Path(args.output)
    out.parent.mkdir(parents=True,exist_ok=True)
    out.write_bytes(encoded)

def main() -> None:
    parser=argparse.ArgumentParser()
    sub=parser.add_subparsers(dest="command",required=True)
    p=sub.add_parser("repack-pal-banks")
    p.add_argument("--manifest",required=True)
    p.add_argument("--stem",required=True)
    p.add_argument("--banks",required=True,type=int)
    p.add_argument("input_dir")
    p.add_argument("output")
    p.set_defaults(func=repack_pal_banks)
    args=parser.parse_args()
    args.func(args)

if __name__=="__main__":
    main()
