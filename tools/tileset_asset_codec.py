#!/usr/bin/env python3
from __future__ import annotations

import argparse
import hashlib
import json
from collections import defaultdict, deque
from pathlib import Path

from PIL import Image


def gba555_to_rgb(v: int) -> tuple[int, int, int]:
    r = v & 0x1F
    g = (v >> 5) & 0x1F
    b = (v >> 10) & 0x1F
    return ((r << 3) | (r >> 2),
            (g << 3) | (g >> 2),
            (b << 3) | (b >> 2))


def rgb_to_gba555(r: int, g: int, b: int) -> int:
    return (r >> 3) | ((g >> 3) << 5) | ((b >> 3) << 10)


def parse_lz77_with_plan(blob: bytes) -> tuple[bytes, dict]:
    if len(blob) < 4 or blob[0] != 0x10:
        raise ValueError("GBA LZ77 (0x10) dataではありません")

    raw_size = blob[1] | (blob[2] << 8) | (blob[3] << 16)
    src = 4
    out = bytearray()
    tokens = []

    while len(out) < raw_size:
        if src >= len(blob):
            raise ValueError("LZ77 flags が途中で切れています")
        flags = blob[src]
        src += 1

        for bit in range(8):
            if len(out) >= raw_size:
                break
            if flags & (0x80 >> bit):
                if src + 1 >= len(blob):
                    raise ValueError("LZ77 back-reference が途中で切れています")
                b1 = blob[src]
                b2 = blob[src + 1]
                src += 2
                length = (b1 >> 4) + 3
                distance = (((b1 & 0x0F) << 8) | b2) + 1
                if distance > len(out):
                    raise ValueError("不正なLZ77 distance")
                tokens.append(["c", length, distance])
                for _ in range(length):
                    out.append(out[-distance])
                    if len(out) >= raw_size:
                        break
            else:
                if src >= len(blob):
                    raise ValueError("LZ77 literal が途中で切れています")
                tokens.append(["l"])
                out.append(blob[src])
                src += 1

    plan = {
        "format": "gba-lz77-plan-v1",
        "raw_size": raw_size,
        "stored_size": len(blob),
        "stream_size": src,
        "tail_hex": blob[src:].hex(),
        "tokens": tokens,
        "stored_sha1": hashlib.sha1(blob).hexdigest(),
        "raw_sha1": hashlib.sha1(out).hexdigest(),
    }
    return bytes(out), plan


def replay_lz77_plan(raw: bytes, plan: dict) -> bytes | None:
    if len(raw) != int(plan["raw_size"]):
        return None

    out = bytearray()
    payloads = []

    for token in plan["tokens"]:
        pos = len(out)
        if token[0] == "l":
            if pos >= len(raw):
                return None
            out.append(raw[pos])
            payloads.append(bytes([raw[pos]]))
        else:
            length = int(token[1])
            distance = int(token[2])
            if distance <= 0 or distance > len(out):
                return None

            generated = bytearray()
            for _ in range(length):
                generated.append(out[-distance])
                out.append(out[-distance])
                if len(out) >= len(raw):
                    break

            if bytes(generated) != raw[pos:pos + len(generated)]:
                return None

            disp = distance - 1
            payloads.append(bytes([
                ((length - 3) << 4) | ((disp >> 8) & 0x0F),
                disp & 0xFF,
            ]))

        if len(out) >= len(raw):
            break

    if bytes(out) != raw:
        return None

    result = bytearray([
        0x10,
        len(raw) & 0xFF,
        (len(raw) >> 8) & 0xFF,
        (len(raw) >> 16) & 0xFF,
    ])

    token_i = 0
    payload_i = 0
    tokens = plan["tokens"]
    while token_i < len(tokens) and payload_i < len(payloads):
        group = tokens[token_i:token_i + 8]
        flags = 0
        for i, token in enumerate(group):
            if token[0] == "c":
                flags |= 0x80 >> i
        result.append(flags)
        for _ in group:
            if payload_i >= len(payloads):
                break
            result.extend(payloads[payload_i])
            payload_i += 1
        token_i += len(group)

    result.extend(bytes.fromhex(plan.get("tail_hex", "")))

    if len(result) != int(plan["stored_size"]):
        return None
    return bytes(result)


def generic_lz77(raw: bytes) -> bytes:
    positions = defaultdict(deque)
    tokens = []

    def add_pos(p: int) -> None:
        if p + 3 > len(raw):
            return
        key = raw[p:p + 3]
        dq = positions[key]
        dq.append(p)
        cutoff = p - 4096
        while dq and dq[0] < cutoff:
            dq.popleft()

    pos = 0
    while pos < len(raw):
        best_len = 0
        best_distance = 0

        if pos + 3 <= len(raw):
            dq = positions.get(raw[pos:pos + 3])
            if dq:
                checked = 0
                for cand in reversed(dq):
                    distance = pos - cand
                    if not (1 <= distance <= 4096):
                        continue
                    length = 0
                    max_len = min(18, len(raw) - pos)
                    while length < max_len and raw[pos + length] == raw[pos + length - distance]:
                        length += 1
                    if length > best_len:
                        best_len = length
                        best_distance = distance
                        if length == 18:
                            break
                    checked += 1
                    if checked >= 128:
                        break

        if best_len >= 3:
            tokens.append(("c", best_len, best_distance))
            for p in range(pos, pos + best_len):
                add_pos(p)
            pos += best_len
        else:
            tokens.append(("l", raw[pos]))
            add_pos(pos)
            pos += 1

    result = bytearray([
        0x10,
        len(raw) & 0xFF,
        (len(raw) >> 8) & 0xFF,
        (len(raw) >> 16) & 0xFF,
    ])

    for start in range(0, len(tokens), 8):
        group = tokens[start:start + 8]
        flags = 0
        for i, token in enumerate(group):
            if token[0] == "c":
                flags |= 0x80 >> i
        result.append(flags)
        for token in group:
            if token[0] == "l":
                result.append(int(token[1]))
            else:
                _, length, distance = token
                disp = int(distance) - 1
                result.extend((
                    ((int(length) - 3) << 4) | ((disp >> 8) & 0x0F),
                    disp & 0xFF,
                ))
    return bytes(result)


def read_indexed_tiles_png(path: Path, tile_count: int) -> bytes:
    img = Image.open(path)
    if img.mode != "P":
        raise ValueError(
            f"{path}: tiles.png は indexed PNG (mode P) のまま編集してください "
            f"(現在: {img.mode})"
        )
    if img.width % 8 or img.height % 8:
        raise ValueError(f"{path}: width/height は8の倍数である必要があります")

    cols = img.width // 8
    rows = img.height // 8
    if cols * rows < tile_count:
        raise ValueError("tiles.png のtile数が不足しています")

    px = img.load()
    out = bytearray()
    emitted = 0

    for ty in range(rows):
        for tx in range(cols):
            if emitted >= tile_count:
                break
            vals = []
            for y in range(8):
                for x in range(8):
                    v = int(px[tx * 8 + x, ty * 8 + y])
                    if not 0 <= v <= 15:
                        raise ValueError(f"{path}: 4bpp pixel index must be 0..15")
                    vals.append(v)
            for i in range(0, 64, 2):
                out.append(vals[i] | (vals[i + 1] << 4))
            emitted += 1
        if emitted >= tile_count:
            break
    return bytes(out)


def encode_tiles(asset_dir: Path, output: Path) -> bytes:
    meta = json.loads((asset_dir / "metadata.json").read_text(encoding="utf-8"))
    raw = read_indexed_tiles_png(
        asset_dir / "tiles.png",
        int(meta["tiles"]["tile_count"]),
    )
    if len(raw) != int(meta["tiles"]["raw_size"]):
        raise ValueError("raw tile size mismatch")

    if bool(meta["is_compressed"]):
        plan = json.loads((asset_dir / "lz_plan.json").read_text(encoding="utf-8"))
        encoded = replay_lz77_plan(raw, plan)
        if encoded is None:
            encoded = generic_lz77(raw)
            stored_size = int(meta["tiles"]["stored_size"])
            if len(encoded) > stored_size:
                raise ValueError(
                    f"{asset_dir}: 編集後LZ77が元領域を超えました: "
                    f"{len(encoded):#x} > {stored_size:#x}"
                )
            encoded += bytes(stored_size - len(encoded))
    else:
        encoded = raw
        if len(encoded) != int(meta["tiles"]["stored_size"]):
            raise ValueError("uncompressed tile size mismatch")

    output.parent.mkdir(parents=True, exist_ok=True)
    output.write_bytes(encoded)
    return encoded


def encode_palettes(asset_dir: Path, output: Path) -> bytes:
    meta = json.loads((asset_dir / "metadata.json").read_text(encoding="utf-8"))
    img = Image.open(asset_dir / "palettes.png").convert("RGB")
    count = int(meta["palettes"]["count"])

    if img.size != (16, count):
        raise ValueError(
            f"{asset_dir}/palettes.png: size must be 16x{count}, got {img.size}"
        )

    px = img.load()
    out = bytearray()
    for y in range(count):
        for x in range(16):
            r, g, b = px[x, y]
            v = rgb_to_gba555(r, g, b)
            out.extend((v & 0xFF, (v >> 8) & 0xFF))

    if len(out) != int(meta["palettes"]["stored_size"]):
        raise ValueError("palette size mismatch")

    output.parent.mkdir(parents=True, exist_ok=True)
    output.write_bytes(out)
    return bytes(out)


def main() -> None:
    ap = argparse.ArgumentParser()
    sub = ap.add_subparsers(dest="cmd", required=True)

    p = sub.add_parser("encode-tiles")
    p.add_argument("asset_dir", type=Path)
    p.add_argument("output", type=Path)

    p = sub.add_parser("encode-palettes")
    p.add_argument("asset_dir", type=Path)
    p.add_argument("output", type=Path)

    args = ap.parse_args()
    if args.cmd == "encode-tiles":
        encode_tiles(args.asset_dir, args.output)
    else:
        encode_palettes(args.asset_dir, args.output)


if __name__ == "__main__":
    main()
