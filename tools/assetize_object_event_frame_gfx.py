#!/usr/bin/env python3
"""Move inline ObjectEvent SpriteFrameImage 4bpp bytes to editable PNG assets."""

from __future__ import annotations

import argparse
import re
import sys
from dataclasses import dataclass
from pathlib import Path

from gba_graphics import decode_4bpp_tiled
from png_to_gba_indexed import encode_4bpp_tiled, read_indexed_png


LABEL_RE = re.compile(r"^(?P<label>gObjectEventFrame(?:Gfx)?_JP_(?P<addr>[0-9A-F]{8})):")
SIZE_RE = re.compile(r"(?:size|byte size)\s*=\s*0x(?P<size>[0-9A-Fa-f]+)")
BYTE_RE = re.compile(r"^\s*\.byte\s+(?P<body>[^@]+?)(?:\s*@.*)?$")
BYTE_VALUE_RE = re.compile(r"0x[0-9A-Fa-f]{2}|\b\d+\b")
INCBIN_RE = re.compile(
    r'^\s*\.incbin\s+"build/graphics/analyzed/(?P<stem>[^"]+)[.]4bpp"'
    r'(?:\s*,\s*(?P<offset>0x[0-9A-Fa-f]+|\d+)'
    r'\s*,\s*(?P<size>0x[0-9A-Fa-f]+|\d+))?'
)


@dataclass(frozen=True)
class FrameBlock:
    label: str
    addr: int
    start_line: int
    byte_start: int
    byte_end: int
    size: int
    raw: bytes


@dataclass(frozen=True)
class AssetizedFrameBlock:
    label: str
    addr: int
    size: int
    stem: str
    incbin_offset: int


def parse_byte_values(line: str) -> list[int] | None:
    match = BYTE_RE.match(line)
    if not match:
        return None
    values: list[int] = []
    for token in BYTE_VALUE_RE.findall(match.group("body")):
        value = int(token, 0)
        if not 0 <= value <= 0xFF:
            raise ValueError(f"byte value out of range: {token}")
        values.append(value)
    return values


def preferred_width(size: int) -> int:
    if size % 32 != 0:
        raise ValueError(f"4bpp size is not tile-aligned: 0x{size:X}")
    tile_count = size // 32
    if tile_count <= 1:
        return 8
    if tile_count <= 8:
        return 16
    return 32


def find_blocks(lines: list[str], *, skip_incomplete: bool = False) -> list[FrameBlock]:
    blocks: list[FrameBlock] = []
    i = 0
    while i < len(lines):
        label_match = LABEL_RE.match(lines[i])
        if not label_match:
            i += 1
            continue

        label = label_match.group("label")
        addr = int(label_match.group("addr"), 16)
        if i + 1 >= len(lines):
            i += 1
            continue
        size_match = SIZE_RE.search(lines[i + 1])
        if not size_match or (
            "SpriteFrameImage 4bpp data" not in lines[i + 1]
            and "4bpp frame payload" not in lines[i + 1]
        ):
            i += 1
            continue
        if i + 2 < len(lines) and INCBIN_RE.match(lines[i + 2]):
            i += 1
            continue

        size = int(size_match.group("size"), 16)
        raw = bytearray()
        j = i + 2
        while j < len(lines) and len(raw) < size:
            values = parse_byte_values(lines[j])
            if values is None:
                break
            raw.extend(values)
            j += 1

        if len(raw) != size:
            if skip_incomplete:
                i += 1
                continue
            raise ValueError(
                f"{label}: expected 0x{size:X} bytes, found 0x{len(raw):X}"
            )
        blocks.append(
            FrameBlock(
                label=label,
                addr=addr,
                start_line=i,
                byte_start=i + 2,
                byte_end=j,
                size=size,
                raw=bytes(raw),
            )
        )
        i = j
    return blocks


def find_assetized_blocks(lines: list[str]) -> list[AssetizedFrameBlock]:
    blocks: list[AssetizedFrameBlock] = []
    for i, line in enumerate(lines):
        label_match = LABEL_RE.match(line)
        if not label_match or i + 2 >= len(lines):
            continue
        size_match = SIZE_RE.search(lines[i + 1])
        incbin_match = INCBIN_RE.match(lines[i + 2])
        if not size_match or not incbin_match:
            continue
        blocks.append(
            AssetizedFrameBlock(
                label=label_match.group("label"),
                addr=int(label_match.group("addr"), 16),
                size=int(size_match.group("size"), 16),
                stem=incbin_match.group("stem"),
                incbin_offset=(
                    int(incbin_match.group("offset"), 0)
                    if incbin_match.group("offset")
                    else 0
                ),
            )
        )
    return blocks


def roundtrip_png(path: Path, expected: bytes, width: int | None = None) -> None:
    actual_width, height, pixels = read_indexed_png(path)
    if width is not None and actual_width != width:
        raise ValueError(f"{path}: width changed: {actual_width} != {width}")
    encoded = encode_4bpp_tiled(actual_width, height, pixels)
    if encoded != expected:
        raise ValueError(f"{path}: PNG roundtrip does not match source bytes")


def encode_png(path: Path, width: int | None = None) -> bytes:
    actual_width, height, pixels = read_indexed_png(path)
    if width is not None and actual_width != width:
        raise ValueError(f"{path}: width changed: {actual_width} != {width}")
    return encode_4bpp_tiled(actual_width, height, pixels)


def asset_name(block: FrameBlock) -> str:
    return f"object_event_frame_{block.addr:08x}"


def process_file(
    path: Path,
    graphics_dir: Path,
    baserom: Path,
    *,
    dry_run: bool,
    check: bool,
    limit: int | None,
    skip_incomplete: bool,
) -> int:
    lines = path.read_text().splitlines(keepends=True)
    blocks = find_blocks(lines, skip_incomplete=skip_incomplete)
    if limit is not None:
        blocks = blocks[:limit]

    if check:
        assetized = find_assetized_blocks(lines)
        if limit is not None:
            assetized = assetized[:limit]
        rom = baserom.read_bytes()
        for block in blocks:
            png = graphics_dir / f"{asset_name(block)}.png"
            if not png.is_file():
                raise FileNotFoundError(png)
            roundtrip_png(png, block.raw, preferred_width(block.size))
        for block in assetized:
            png = graphics_dir / f"{block.stem}.png"
            if not png.is_file():
                raise FileNotFoundError(png)
            offset = block.addr - 0x08000000
            expected = rom[offset:offset + block.size]
            if len(expected) != block.size:
                raise ValueError(f"{block.label}: baserom range is truncated")
            encoded = encode_png(png)
            actual = encoded[block.incbin_offset:block.incbin_offset + block.size]
            if actual != expected:
                raise ValueError(f"{png}: PNG slice does not match source bytes")
        checked = len(blocks) + len(assetized)
        print(f"{path}: checked {checked} frame asset(s)")
        return checked

    replacements: list[tuple[int, int, list[str]]] = []
    for block in blocks:
        width = preferred_width(block.size)
        png = graphics_dir / f"{asset_name(block)}.png"
        if not dry_run:
            graphics_dir.mkdir(parents=True, exist_ok=True)
            image = decode_4bpp_tiled(block.raw, width=width)
            image.save(png)
            roundtrip_png(png, block.raw, width)

        incbin = (
            f'\t.incbin "build/graphics/analyzed/{asset_name(block)}.4bpp"'
            f" @ size=0x{block.size:X}\n"
        )
        replacements.append((block.byte_start, block.byte_end, [incbin]))

    if not dry_run and replacements:
        for start, end, replacement in reversed(replacements):
            lines[start:end] = replacement
        path.write_text("".join(lines))

    action = "would assetize" if dry_run else "assetized"
    print(f"{path}: {action} {len(blocks)} frame payload(s)")
    return len(blocks)


def main() -> int:
    parser = argparse.ArgumentParser()
    parser.add_argument("files", nargs="+", type=Path)
    parser.add_argument(
        "--graphics-dir",
        type=Path,
        default=Path("graphics/analyzed"),
    )
    parser.add_argument("--baserom", type=Path, default=Path("baserom.gba"))
    parser.add_argument("--dry-run", action="store_true")
    parser.add_argument("--check", action="store_true")
    parser.add_argument("--limit", type=int)
    parser.add_argument(
        "--skip-incomplete",
        action="store_true",
        help="skip frame blocks whose inline bytes do not cover the declared size",
    )
    args = parser.parse_args()

    if args.dry_run and args.check:
        parser.error("--dry-run and --check are mutually exclusive")

    try:
        total = 0
        for path in args.files:
            total += process_file(
                path,
                args.graphics_dir,
                args.baserom,
                dry_run=args.dry_run,
                check=args.check,
                limit=args.limit,
                skip_incomplete=args.skip_incomplete,
            )
    except Exception as exc:
        print(f"error: {exc}", file=sys.stderr)
        return 1

    print(f"total frame payloads: {total}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
