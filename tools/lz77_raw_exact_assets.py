#!/usr/bin/env python3
from __future__ import annotations

import argparse
import hashlib
import json
from pathlib import Path

from lz77_exact import FORMAT, repack_raw_with_plan


def main() -> None:
    parser = argparse.ArgumentParser(
        description="Repack a decompressed raw asset with its exact original GBA LZ77 token plan."
    )
    parser.add_argument("--manifest", required=True, type=Path)
    parser.add_argument("--key", required=True)
    parser.add_argument("input", type=Path)
    parser.add_argument("output", type=Path)
    args = parser.parse_args()

    obj = json.loads(args.manifest.read_text(encoding="utf-8"))
    if obj.get("format") != FORMAT:
        raise ValueError(f"unsupported manifest format: {obj.get('format')!r}")

    entry = obj["entries"][args.key]
    raw = args.input.read_bytes()
    expected_raw_sha = entry["decompressed_sha256"]
    actual_raw_sha = hashlib.sha256(raw).hexdigest()

    packed = repack_raw_with_plan(raw, entry["plan"])

    expected_size = int(entry["plan"]["compressed_size"])
    if len(packed) != expected_size:
        raise ValueError(
            f"{args.key}: compressed size changed: {len(packed)} != {expected_size}"
        )

    if actual_raw_sha == expected_raw_sha:
        packed_sha = hashlib.sha256(packed).hexdigest()
        if packed_sha != entry["compressed_sha256"]:
            raise ValueError(
                f"{args.key}: unedited asset did not reproduce original compressed bytes"
            )

    args.output.parent.mkdir(parents=True, exist_ok=True)
    args.output.write_bytes(packed)


if __name__ == "__main__":
    main()
