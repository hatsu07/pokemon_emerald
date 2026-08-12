#!/usr/bin/env python3
from __future__ import annotations

import argparse
import json
import sys
from pathlib import Path

from PIL import Image

sys.path.insert(0, str(Path(__file__).resolve().parent))
from lz77_exact import repack_raw_with_plan


def encode_png_raw(repo: Path, stream: dict) -> bytes:
    path = repo / stream["png_rel"]
    kind = stream["kind"]

    if kind == "palette16":
        with Image.open(path) as image:
            if image.mode != "P" or image.size != (16, 1):
                raise ValueError(f"{path}: expected 16x1 indexed PNG")
            palette = image.getpalette()
            if palette is None or len(palette) < 48:
                raise ValueError(f"{path}: palette missing")

        out = bytearray()
        for i in range(16):
            r = palette[i * 3]
            g = palette[i * 3 + 1]
            b = palette[i * 3 + 2]
            value = (r >> 3) | ((g >> 3) << 5) | ((b >> 3) << 10)
            out.extend((value & 0xFF, (value >> 8) & 0xFF))
        return bytes(out)

    if kind == "4bpp_tiles_preview":
        width = int(stream["width"])
        height = int(stream["height"])

        with Image.open(path) as image:
            if image.mode != "P" or image.size != (width, height):
                raise ValueError(
                    f"{path}: expected indexed {width}x{height} PNG"
                )
            pixels = list(image.getdata())

        out = bytearray()
        for ty in range(0, height, 8):
            for tx in range(0, width, 8):
                for y in range(8):
                    row = (ty + y) * width + tx
                    for x in range(0, 8, 2):
                        lo = pixels[row + x]
                        hi = pixels[row + x + 1]
                        if lo >= 16 or hi >= 16:
                            raise ValueError(f"{path}: pixel index exceeds 15")
                        out.append(lo | (hi << 4))
        return bytes(out)

    raise ValueError(f"unexpected kind: {kind}")


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("--manifest", required=True)
    parser.add_argument("--key", required=True)
    parser.add_argument("--repo-root", required=True)
    parser.add_argument("--output", required=True)
    args = parser.parse_args()

    manifest = json.loads(Path(args.manifest).read_text(encoding="utf-8"))
    if manifest.get("format") != "pokeemerald-jp-exact-lz77-plan-v1":
        raise ValueError("unexpected manifest format")

    matches = [x for x in manifest["streams"] if x["key"] == args.key]
    if len(matches) != 1:
        raise ValueError(f"exact stream key not found uniquely: {args.key}")

    stream = matches[0]
    repo = Path(args.repo_root)
    raw = encode_png_raw(repo, stream)

    if len(raw) != int(stream["raw_size"]):
        raise ValueError(f"{args.key}: raw size mismatch")

    import hashlib
    if hashlib.sha1(raw).hexdigest() != stream["raw_sha1"]:
        raise ValueError(
            f"{args.key}: editable PNG differs from the proven extraction raw bytes"
        )

    encoded = repack_raw_with_plan(raw, stream["exact_plan"])

    if hashlib.sha1(encoded).hexdigest() != stream["slot_sha1"]:
        raise ValueError(f"{args.key}: exact compressed slot SHA1 mismatch")

    output = Path(args.output)
    output.parent.mkdir(parents=True, exist_ok=True)
    output.write_bytes(encoded)


if __name__ == "__main__":
    main()
