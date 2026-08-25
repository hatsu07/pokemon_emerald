#!/usr/bin/env python3
from __future__ import annotations

import argparse
import hashlib
import json
from pathlib import Path
import re

from lz77_exact import FORMAT, repack_raw_with_plan


def read_text_u8(path: Path) -> bytes:
    values: list[int] = []
    for lineno, line in enumerate(path.read_text(encoding="ascii").splitlines(), 1):
        line = line.split("#", 1)[0].strip()
        if not line:
            continue
        for token in line.split():
            if not re.fullmatch(r"[0-9A-Fa-f]{2}", token):
                raise ValueError(f"{path}:{lineno}: invalid u8 token {token!r}")
            values.append(int(token, 16))
    return bytes(values)


def read_raw_input(path: Path) -> bytes:
    if path.suffix.lower() == ".u8":
        return read_text_u8(path)
    # Backward-compatible path for any external/manual use of this helper.
    return path.read_bytes()


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
    raw = read_raw_input(args.input)
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
