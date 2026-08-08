#!/usr/bin/env python3
"""Convert indexed PNGs used by the tmp5 reconstruction into exact GBA raw data.

Supported formats:
  4bpp-tiled   : 8x8 GBA tiles, low nibble = left pixel
  spinda-1bpp  : 16x16 mask, one little-endian u16 per row, bit 0 = leftmost pixel

Only indexed-color PNG (color type 3), 8-bit, non-interlaced images are accepted.
PNG filters 0..4 are supported so the files can be re-saved by normal editors
as long as palette indices remain meaningful.
"""
from __future__ import annotations
import argparse
import struct
import sys
import zlib
from pathlib import Path

PNG_SIG = b"\x89PNG\r\n\x1a\n"

def paeth(a: int, b: int, c: int) -> int:
    p = a + b - c
    pa = abs(p - a)
    pb = abs(p - b)
    pc = abs(p - c)
    if pa <= pb and pa <= pc:
        return a
    if pb <= pc:
        return b
    return c

def read_indexed_png(path: Path):
    data = path.read_bytes()
    if not data.startswith(PNG_SIG):
        raise ValueError("PNG signature mismatch")
    pos = len(PNG_SIG)
    width = height = None
    idat = bytearray()
    while pos < len(data):
        if pos + 12 > len(data):
            raise ValueError("truncated PNG chunk")
        length = struct.unpack_from(">I", data, pos)[0]
        ctype = data[pos + 4:pos + 8]
        cdata = data[pos + 8:pos + 8 + length]
        pos += 12 + length
        if ctype == b"IHDR":
            width, height, bit_depth, color_type, comp, filt, interlace = struct.unpack(">IIBBBBB", cdata)
            if bit_depth != 8 or color_type != 3 or comp != 0 or filt != 0 or interlace != 0:
                raise ValueError(
                    "requires indexed PNG: bit_depth=8, color_type=3, non-interlaced"
                )
        elif ctype == b"IDAT":
            idat.extend(cdata)
        elif ctype == b"IEND":
            break
    if width is None or height is None:
        raise ValueError("IHDR missing")
    raw = zlib.decompress(bytes(idat))
    stride = width
    expected = (stride + 1) * height
    if len(raw) != expected:
        raise ValueError(f"unexpected decoded PNG size: {len(raw)} != {expected}")

    rows = []
    prev = bytearray(stride)
    p = 0
    for _ in range(height):
        f = raw[p]
        src = bytearray(raw[p + 1:p + 1 + stride])
        p += stride + 1
        out = bytearray(stride)
        for x, val in enumerate(src):
            left = out[x - 1] if x else 0
            up = prev[x]
            ul = prev[x - 1] if x else 0
            if f == 0:
                out[x] = val
            elif f == 1:
                out[x] = (val + left) & 0xFF
            elif f == 2:
                out[x] = (val + up) & 0xFF
            elif f == 3:
                out[x] = (val + ((left + up) // 2)) & 0xFF
            elif f == 4:
                out[x] = (val + paeth(left, up, ul)) & 0xFF
            else:
                raise ValueError(f"unsupported PNG filter: {f}")
        rows.append(bytes(out))
        prev = out
    return width, height, b"".join(rows)

def encode_4bpp_tiled(width: int, height: int, pixels: bytes) -> bytes:
    if width % 8 or height % 8:
        raise ValueError("4bpp-tiled dimensions must be multiples of 8")
    if any(p > 15 for p in pixels):
        raise ValueError("4bpp-tiled palette index exceeds 15")
    out = bytearray()
    for ty in range(0, height, 8):
        for tx in range(0, width, 8):
            for y in range(8):
                row = (ty + y) * width + tx
                for x in range(0, 8, 2):
                    out.append(pixels[row + x] | (pixels[row + x + 1] << 4))
    return bytes(out)

def encode_spinda_1bpp(width: int, height: int, pixels: bytes) -> bytes:
    if (width, height) != (16, 16):
        raise ValueError("spinda-1bpp requires exactly 16x16")
    out = bytearray()
    for y in range(16):
        bits = 0
        for x in range(16):
            if pixels[y * 16 + x] != 0:
                bits |= 1 << x
        out.extend(struct.pack("<H", bits))
    return bytes(out)

def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--format", required=True, choices=["4bpp-tiled", "spinda-1bpp"])
    ap.add_argument("input_png", type=Path)
    ap.add_argument("output_file", type=Path)
    args = ap.parse_args()
    try:
        w, h, pixels = read_indexed_png(args.input_png)
        if args.format == "4bpp-tiled":
            out = encode_4bpp_tiled(w, h, pixels)
        else:
            out = encode_spinda_1bpp(w, h, pixels)
        args.output_file.parent.mkdir(parents=True, exist_ok=True)
        tmp = args.output_file.with_name("." + args.output_file.name + ".tmp")
        tmp.write_bytes(out)
        tmp.replace(args.output_file)
    except (OSError, ValueError, zlib.error) as exc:
        print(f"error: {exc}", file=sys.stderr)
        return 1
    return 0

if __name__ == "__main__":
    raise SystemExit(main())
