#!/usr/bin/env python3
# Exact GBA RLE reconstruction from editable picture-frame assets.
from __future__ import annotations

import argparse
import json
import re
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
from png_to_gba_indexed import read_indexed_png, encode_4bpp_tiled

FORMAT = "pokeemerald-jp-exact-rle-plan-v1"
NUM_RE = re.compile(r"^[+-]?(?:0[xX][0-9A-Fa-f]+|\d+)$")
DIR_RE = re.compile(r"^\s*\.(byte|2byte|4byte)\s+(.+?)\s*$")


def hex_bytes(text):
    return bytes(int(x, 16) for x in text.split()) if text.strip() else b""


def read_inc(path):
    out = bytearray()

    for line in Path(path).read_text(encoding="utf-8").splitlines():
        code = line.split("@", 1)[0].strip()
        if not code:
            continue

        m = DIR_RE.match(code)
        if not m:
            continue

        width = {"byte": 1, "2byte": 2, "4byte": 4}[m.group(1)]
        mask = (1 << (8 * width)) - 1

        for token in [x.strip() for x in m.group(2).split(",")]:
            if not NUM_RE.match(token):
                raise ValueError(f"nonnumeric tilemap token: {token!r}")
            out.extend((int(token, 0) & mask).to_bytes(width, "little"))

    return bytes(out)


def decompress(data):
    if len(data) < 4 or data[0] != 0x30:
        raise ValueError("not GBA RLE")

    size = data[1] | (data[2] << 8) | (data[3] << 16)
    src = 4
    out = bytearray()

    while len(out) < size:
        control = data[src]
        src += 1

        if control & 0x80:
            count = (control & 0x7F) + 3
            value = data[src]
            src += 1
            out.extend([value] * min(count, size - len(out)))
        else:
            count = (control & 0x7F) + 1
            take = min(count, size - len(out))
            out.extend(data[src:src + take])
            src += count

    return bytes(out), src


def repack(raw, plan):
    size = int(plan["decompressed_size"])
    if len(raw) != size:
        raise ValueError(f"raw size changed 0x{len(raw):X} != 0x{size:X}")

    controls = [int(x, 16) for x in str(plan["controls"]).split()]
    out = bytearray((0x30, size & 255, (size >> 8) & 255, (size >> 16) & 255))
    raw_pos = 0

    for control in controls:
        if raw_pos >= size:
            raise ValueError("unused RLE control")

        out.append(control)

        if control & 0x80:
            count = (control & 0x7F) + 3
            take = min(count, size - raw_pos)
            chunk = raw[raw_pos:raw_pos + take]

            if not chunk or any(x != chunk[0] for x in chunk):
                raise ValueError(
                    f"edit incompatible with original RLE repeat at 0x{raw_pos:X}"
                )

            out.append(chunk[0])
            raw_pos = min(size, raw_pos + count)
        else:
            count = (control & 0x7F) + 1
            take = min(count, size - raw_pos)

            if take != count:
                raise ValueError("RLE literal crosses logical end")

            out.extend(raw[raw_pos:raw_pos + count])
            raw_pos += count

    if raw_pos != size:
        raise ValueError(f"RLE plan ended 0x{raw_pos:X}, expected 0x{size:X}")

    out.extend(hex_bytes(str(plan.get("tail", ""))))

    if len(out) != int(plan["compressed_size"]):
        raise ValueError("exact RLE slot size mismatch")

    if decompress(bytes(out))[0] != raw:
        raise ValueError("exact RLE round-trip mismatch")

    return bytes(out)


def main():
    ap = argparse.ArgumentParser()
    sub = ap.add_subparsers(dest="command", required=True)

    for command in ("repack-png", "repack-inc"):
        p = sub.add_parser(command)
        p.add_argument("--manifest", required=True)
        p.add_argument("--stem", required=True)
        p.add_argument("input")
        p.add_argument("output")

    args = ap.parse_args()
    manifest = json.loads(Path(args.manifest).read_text(encoding="utf-8"))

    if manifest.get("format") != FORMAT:
        raise SystemExit("unsupported RLE manifest format")
    if args.stem not in manifest["entries"]:
        raise SystemExit(f"RLE plan missing: {args.stem}")

    if args.command == "repack-png":
        width, height, pixels = read_indexed_png(Path(args.input))
        raw = encode_4bpp_tiled(width, height, pixels)
    else:
        raw = read_inc(Path(args.input))

    encoded = repack(raw, manifest["entries"][args.stem])

    output = Path(args.output)
    output.parent.mkdir(parents=True, exist_ok=True)
    tmp = output.with_name("." + output.name + ".tmp")
    tmp.write_bytes(encoded)
    tmp.replace(output)


if __name__ == "__main__":
    main()
