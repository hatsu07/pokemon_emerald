#!/usr/bin/env python3
"""Exact GBA LZ77 reconstruction from editable indexed PNG sources.

The committed source remains a PNG. A human-readable JSON plan stores only
the original LZ77 token choices (flag bytes, back-reference length/distance,
and any bytes trailing the stream inside the original ROM slot). Literal
bytes are always taken from the current PNG.

This makes the generated .4bpp.lz byte-identical to the original ROM while
keeping the actual graphics editable and avoiding baserom.gba at normal build
time.

A manifest entry may also contain ``pic`` and ``palette`` sub-plans. In that
case repack-png writes the exact compressed 4bpp picture immediately followed
by the exact compressed 16-color palette. This is used by trainer front
sprites so one indexed PNG is the editable source for both ROM objects.
"""
from __future__ import annotations

import argparse
import json
from pathlib import Path
from typing import Any

ROM_BASE = 0x08000000
FORMAT = "pokeemerald-jp-exact-lz77-plan-v1"


def gba_lz77_decompress(data: bytes) -> tuple[bytes, int]:
    if len(data) < 4 or data[0] != 0x10:
        raise ValueError("not a GBA LZ77 stream (expected 0x10 header)")
    out_size = data[1] | (data[2] << 8) | (data[3] << 16)
    src = 4
    out = bytearray()

    while len(out) < out_size:
        if src >= len(data):
            raise ValueError("truncated LZ77 flag byte")
        flags = data[src]
        src += 1

        for bit in range(7, -1, -1):
            if len(out) >= out_size:
                break
            if flags & (1 << bit):
                if src + 2 > len(data):
                    raise ValueError("truncated LZ77 back-reference")
                a, b = data[src], data[src + 1]
                src += 2
                length = (a >> 4) + 3
                distance = (((a & 0x0F) << 8) | b) + 1
                if distance > len(out):
                    raise ValueError(
                        f"invalid LZ77 distance {distance} at output {len(out):#x}"
                    )
                for _ in range(length):
                    out.append(out[-distance])
                    if len(out) >= out_size:
                        break
            else:
                if src >= len(data):
                    raise ValueError("truncated LZ77 literal")
                out.append(data[src])
                src += 1
    return bytes(out), src


def extract_plan(block: bytes) -> dict[str, Any]:
    if len(block) < 4 or block[0] != 0x10:
        raise ValueError("ROM slot does not begin with GBA LZ77 0x10")

    out_size = block[1] | (block[2] << 8) | (block[3] << 16)
    src = 4
    out_pos = 0
    flags_out: list[str] = []
    refs: list[list[int]] = []

    while out_pos < out_size:
        if src >= len(block):
            raise ValueError("compressed slot ended before output size was reached")
        flags = block[src]
        src += 1
        flags_out.append(f"0x{flags:02X}")

        for bit in range(7, -1, -1):
            if out_pos >= out_size:
                break
            if flags & (1 << bit):
                if src + 2 > len(block):
                    raise ValueError("compressed slot ended in a back-reference")
                a, b = block[src], block[src + 1]
                src += 2
                length = (a >> 4) + 3
                distance = (((a & 0x0F) << 8) | b) + 1
                if distance > out_pos:
                    raise ValueError(
                        f"invalid back-reference distance={distance} at output=0x{out_pos:X}"
                    )
                refs.append([length, distance])
                out_pos = min(out_size, out_pos + length)
            else:
                if src >= len(block):
                    raise ValueError("compressed slot ended in a literal")
                src += 1
                out_pos += 1

    tail = block[src:]
    return {
        "decompressed_size": out_size,
        "compressed_size": len(block),
        "flags": " ".join(flags_out),
        "backrefs": refs,
        "tail": tail.hex(" ").upper(),
    }


def _parse_hex_bytes(text: str) -> list[int]:
    if not text.strip():
        return []
    return [int(x, 16) for x in text.split()]


def repack_raw_with_plan(raw: bytes, plan: dict[str, Any]) -> bytes:
    out_size = int(plan["decompressed_size"])
    expected_size = int(plan["compressed_size"])
    if len(raw) != out_size:
        raise ValueError(
            f"PNG/raw size changed: expected 0x{out_size:X}, got 0x{len(raw):X}"
        )

    flags = _parse_hex_bytes(str(plan["flags"]))
    refs = [tuple(map(int, x)) for x in plan["backrefs"]]
    tail = bytes(_parse_hex_bytes(str(plan.get("tail", ""))))

    encoded = bytearray(
        (0x10, out_size & 0xFF, (out_size >> 8) & 0xFF, (out_size >> 16) & 0xFF)
    )
    raw_pos = 0
    ref_pos = 0

    for flag in flags:
        if raw_pos >= out_size:
            raise ValueError("plan has unused flag groups")
        encoded.append(flag)

        for bit in range(7, -1, -1):
            if raw_pos >= out_size:
                break
            if flag & (1 << bit):
                if ref_pos >= len(refs):
                    raise ValueError("plan ran out of back-references")
                length, distance = refs[ref_pos]
                ref_pos += 1
                if not (3 <= length <= 18):
                    raise ValueError(f"invalid planned length: {length}")
                if not (1 <= distance <= 4096):
                    raise ValueError(f"invalid planned distance: {distance}")
                if distance > raw_pos:
                    raise ValueError(
                        f"planned distance {distance} exceeds output position 0x{raw_pos:X}"
                    )

                check_len = min(length, out_size - raw_pos)
                for i in range(check_len):
                    if raw[raw_pos + i] != raw[raw_pos + i - distance]:
                        raise ValueError(
                            "PNG edit is incompatible with the original LZ77 "
                            f"back-reference at raw offset 0x{raw_pos + i:X}"
                        )

                disp = distance - 1
                a = ((length - 3) << 4) | ((disp >> 8) & 0x0F)
                b = disp & 0xFF
                encoded.extend((a, b))
                raw_pos = min(out_size, raw_pos + length)
            else:
                encoded.append(raw[raw_pos])
                raw_pos += 1

    if raw_pos != out_size:
        raise ValueError(f"plan ended at raw 0x{raw_pos:X}, expected 0x{out_size:X}")
    if ref_pos != len(refs):
        raise ValueError(f"plan has {len(refs) - ref_pos} unused back-references")

    encoded.extend(tail)
    if len(encoded) != expected_size:
        raise ValueError(
            f"exact LZ77 size mismatch: expected 0x{expected_size:X}, generated 0x{len(encoded):X}"
        )

    decoded, _ = gba_lz77_decompress(bytes(encoded))
    if decoded != raw:
        raise ValueError("internal error: exact repack does not decode to PNG data")
    return bytes(encoded)


def _open_indexed_png(path: Path):
    try:
        from PIL import Image
    except ImportError as exc:
        raise SystemExit("Pillow is required: sudo apt install python3-pil") from exc

    image = Image.open(path)
    if image.mode != "P":
        image.close()
        raise ValueError(
            f"{path}: indexed PNG required (mode P), got {image.mode}. "
            "Do not convert analyzed graphics to RGB/RGBA."
        )
    return image


def indexed_png_to_4bpp(path: Path) -> bytes:
    with _open_indexed_png(path) as img:
        w, h = img.size
        if w % 8 or h % 8:
            raise ValueError(f"{path}: dimensions must be multiples of 8, got {w}x{h}")
        pixels = list(img.getdata())

    if pixels and max(pixels) > 15:
        raise ValueError(f"{path}: 4bpp PNG uses palette index > 15")

    out = bytearray()
    tiles_x = w // 8
    tiles_y = h // 8
    for ty in range(tiles_y):
        for tx in range(tiles_x):
            x0 = tx * 8
            y0 = ty * 8
            for y in range(8):
                row = (y0 + y) * w
                for x in range(0, 8, 2):
                    lo = pixels[row + x0 + x]
                    hi = pixels[row + x0 + x + 1]
                    out.append((lo & 0x0F) | ((hi & 0x0F) << 4))
    return bytes(out)


def indexed_png_to_gbapal(path: Path) -> bytes:
    with _open_indexed_png(path) as img:
        palette = img.getpalette()
        if palette is None or len(palette) < 48:
            raise ValueError(f"{path}: missing 16-color indexed palette")

    out = bytearray()
    for i in range(16):
        r8, g8, b8 = palette[i * 3 : i * 3 + 3]
        value = (r8 >> 3) | ((g8 >> 3) << 5) | ((b8 >> 3) << 10)
        out.extend((value & 0xFF, value >> 8))
    return bytes(out)


def load_manifest(path: Path) -> dict[str, Any]:
    text = path.read_text(encoding="utf-8").strip()
    if not text:
        return {"format": FORMAT, "entries": {}}
    obj = json.loads(text)
    if obj.get("format") != FORMAT:
        raise ValueError(f"unsupported LZ77 plan format: {obj.get('format')!r}")
    return obj


def load_embedded_png_plan(path: Path) -> dict[str, Any] | None:
    try:
        from PIL import Image
    except ImportError as exc:
        raise SystemExit("Pillow is required: sudo apt install python3-pil") from exc

    with Image.open(path) as img:
        text = img.info.get("pokeemerald_lz77_plan")
    if not text:
        return None
    obj = json.loads(text)
    if not isinstance(obj, dict):
        raise ValueError(f"{path}: embedded LZ77 plan must be a JSON object")
    return obj


def cmd_repack_png(args: argparse.Namespace) -> None:
    input_path = Path(args.input)
    entry = load_embedded_png_plan(input_path)

    if entry is None:
        manifest = load_manifest(Path(args.manifest))
        entries = manifest["entries"]
        if args.stem not in entries:
            raise SystemExit(
                f"LZ77 plan not found for {args.stem!r}. "
                "Run: python3 tools/fix_all_lz77_exact.py --apply"
            )
        entry = entries[args.stem]

    raw = indexed_png_to_4bpp(input_path)

    if isinstance(entry, dict) and "pic" in entry and "palette" in entry:
        encoded = bytearray(repack_raw_with_plan(raw, entry["pic"]))
        palette_raw = indexed_png_to_gbapal(input_path)
        encoded.extend(repack_raw_with_plan(palette_raw, entry["palette"]))
        encoded = bytes(encoded)
    else:
        encoded = repack_raw_with_plan(raw, entry)

    out = Path(args.output)
    out.parent.mkdir(parents=True, exist_ok=True)
    out.write_bytes(encoded)

def main() -> None:
    ap = argparse.ArgumentParser()
    sub = ap.add_subparsers(dest="command", required=True)
    rp = sub.add_parser("repack-png")
    rp.add_argument("--manifest", required=True)
    rp.add_argument("--stem", required=True)
    rp.add_argument("input")
    rp.add_argument("output")
    rp.set_defaults(func=cmd_repack_png)
    args = ap.parse_args()
    args.func(args)


if __name__ == "__main__":
    main()
