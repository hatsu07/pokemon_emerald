#!/usr/bin/env python3
from __future__ import annotations

import argparse
import csv
from pathlib import Path

HEADER = ["index", "tile", "hflip", "vflip", "palette"]

def parse_int(text: str) -> int:
    return int(text.strip(), 0)

def encode_entry(row: dict[str, str], expected_index: int) -> int:
    idx = parse_int(row["index"])
    tile = parse_int(row["tile"])
    hflip = parse_int(row["hflip"])
    vflip = parse_int(row["vflip"])
    palette = parse_int(row["palette"])

    if idx != expected_index:
        raise ValueError(f"index {idx} != expected {expected_index}")
    if not 0 <= tile <= 0x3FF:
        raise ValueError(f"tile out of range at {idx}: {tile}")
    if hflip not in (0, 1) or vflip not in (0, 1):
        raise ValueError(f"flip out of range at {idx}")
    if not 0 <= palette <= 0xF:
        raise ValueError(f"palette out of range at {idx}: {palette}")

    return tile | (hflip << 10) | (vflip << 11) | (palette << 12)

def main() -> None:
    ap = argparse.ArgumentParser(
        description="Convert semantic GBA text-BG tilemap CSV to GNU as .2byte lines."
    )
    ap.add_argument("input", type=Path)
    ap.add_argument("output", type=Path)
    ap.add_argument("--expected-entries", type=int)
    args = ap.parse_args()

    with args.input.open(newline="") as f:
        reader = csv.DictReader(f)
        if reader.fieldnames != HEADER:
            raise ValueError(
                f"{args.input}: expected header {HEADER}, got {reader.fieldnames}"
            )
        values = [encode_entry(row, i) for i, row in enumerate(reader)]

    if args.expected_entries is not None and len(values) != args.expected_entries:
        raise ValueError(
            f"{args.input}: entries={len(values)} != {args.expected_entries}"
        )

    lines = [
        "@ Generated from semantic tilemap CSV. Do not edit this build artifact.",
        "@ bits 0-9 tile, bit10 hflip, bit11 vflip, bits12-15 palette",
    ]
    for base in range(0, len(values), 8):
        chunk = values[base:base+8]
        vals = ", ".join(f"0x{x:04X}" for x in chunk)
        lines.append(f"\t.2byte {vals}")

    args.output.parent.mkdir(parents=True, exist_ok=True)
    args.output.write_text("\n".join(lines) + "\n")

if __name__ == "__main__":
    main()
