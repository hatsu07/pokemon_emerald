#!/usr/bin/env python3
"""
Generate and validate a Japanese Pokémon Emerald character map.

Important limitation
--------------------
A ROM stores glyph bitmaps and byte values, but not Unicode character names.
Therefore Unicode semantics cannot be proven from the ROM alone. This tool:

1. Uses the established Japanese Generation III kana mapping.
2. Emits all 256 byte values, including unknown/control bytes.
3. Scans the ROM and reports byte usage.
4. Decodes the confirmed Japanese Emerald item-name table as a validation set.
5. Optionally emits a glyph-contact sheet when a raw 1bpp/2bpp font offset is known.

Default input:
    baserom.gba

Default outputs:
    charmap_jp.txt
    charmap_jp.tsv
    charmap_jp_report.txt
    decoded_item_names.txt

Usage:
    python3 tools/recover_jp_charmap.py baserom.gba

Optional font extraction:
    python3 tools/recover_jp_charmap.py baserom.gba \
        --font-offset 0x123456 --font-bpp 2 --glyph-width 8 --glyph-height 8

The optional font mode is deliberately generic because Emerald contains multiple
fonts and compressed font resources. It is only for already-located raw glyph data.
"""

from __future__ import annotations

import argparse
import collections
import hashlib
import struct
from dataclasses import dataclass
from pathlib import Path
from typing import Dict, Iterable, Optional, Sequence


ITEM_TABLE_OFFSET = 0x0055CEE8
ITEM_ENTRY_SIZE = 0x28
ITEM_COUNT = 0x0179
STRING_END = 0xFF


# Established Japanese Generation III single-byte text mapping.
# 00 is full-width space in the Japanese font.
JP_CHARS: Dict[int, str] = {
    0x00: "　",
    # Hiragana
    0x01: "あ", 0x02: "い", 0x03: "う", 0x04: "え", 0x05: "お",
    0x06: "か", 0x07: "き", 0x08: "く", 0x09: "け", 0x0A: "こ",
    0x0B: "さ", 0x0C: "し", 0x0D: "す", 0x0E: "せ", 0x0F: "そ",
    0x10: "た", 0x11: "ち", 0x12: "つ", 0x13: "て", 0x14: "と",
    0x15: "な", 0x16: "に", 0x17: "ぬ", 0x18: "ね", 0x19: "の",
    0x1A: "は", 0x1B: "ひ", 0x1C: "ふ", 0x1D: "へ", 0x1E: "ほ",
    0x1F: "ま", 0x20: "み", 0x21: "む", 0x22: "め", 0x23: "も",
    0x24: "や", 0x25: "ゆ", 0x26: "よ",
    0x27: "ら", 0x28: "り", 0x29: "る", 0x2A: "れ", 0x2B: "ろ",
    0x2C: "わ", 0x2D: "を", 0x2E: "ん",
    0x2F: "ぁ", 0x30: "ぃ", 0x31: "ぅ", 0x32: "ぇ", 0x33: "ぉ",
    0x34: "ゃ", 0x35: "ゅ", 0x36: "ょ",
    0x37: "が", 0x38: "ぎ", 0x39: "ぐ", 0x3A: "げ", 0x3B: "ご",
    0x3C: "ざ", 0x3D: "じ", 0x3E: "ず", 0x3F: "ぜ", 0x40: "ぞ",
    0x41: "だ", 0x42: "ぢ", 0x43: "づ", 0x44: "で", 0x45: "ど",
    0x46: "ば", 0x47: "び", 0x48: "ぶ", 0x49: "べ", 0x4A: "ぼ",
    0x4B: "ぱ", 0x4C: "ぴ", 0x4D: "ぷ", 0x4E: "ぺ", 0x4F: "ぽ",
    0x50: "っ",
    # Katakana
    0x51: "ア", 0x52: "イ", 0x53: "ウ", 0x54: "エ", 0x55: "オ",
    0x56: "カ", 0x57: "キ", 0x58: "ク", 0x59: "ケ", 0x5A: "コ",
    0x5B: "サ", 0x5C: "シ", 0x5D: "ス", 0x5E: "セ", 0x5F: "ソ",
    0x60: "タ", 0x61: "チ", 0x62: "ツ", 0x63: "テ", 0x64: "ト",
    0x65: "ナ", 0x66: "ニ", 0x67: "ヌ", 0x68: "ネ", 0x69: "ノ",
    0x6A: "ハ", 0x6B: "ヒ", 0x6C: "フ", 0x6D: "ヘ", 0x6E: "ホ",
    0x6F: "マ", 0x70: "ミ", 0x71: "ム", 0x72: "メ", 0x73: "モ",
    0x74: "ヤ", 0x75: "ユ", 0x76: "ヨ",
    0x77: "ラ", 0x78: "リ", 0x79: "ル", 0x7A: "レ", 0x7B: "ロ",
    0x7C: "ワ", 0x7D: "ヲ", 0x7E: "ン",
    0x7F: "ァ", 0x80: "ィ", 0x81: "ゥ", 0x82: "ェ", 0x83: "ォ",
    0x84: "ャ", 0x85: "ュ", 0x86: "ョ",
    0x87: "ガ", 0x88: "ギ", 0x89: "グ", 0x8A: "ゲ", 0x8B: "ゴ",
    0x8C: "ザ", 0x8D: "ジ", 0x8E: "ズ", 0x8F: "ゼ", 0x90: "ゾ",
    0x91: "ダ", 0x92: "ヂ", 0x93: "ヅ", 0x94: "デ", 0x95: "ド",
    0x96: "バ", 0x97: "ビ", 0x98: "ブ", 0x99: "ベ", 0x9A: "ボ",
    0x9B: "パ", 0x9C: "ピ", 0x9D: "プ", 0x9E: "ペ", 0x9F: "ポ",
    0xA0: "ッ",
    # Digits and punctuation shared by the engine.
    0xA1: "0", 0xA2: "1", 0xA3: "2", 0xA4: "3", 0xA5: "4",
    0xA6: "5", 0xA7: "6", 0xA8: "7", 0xA9: "8", 0xAA: "9",
    0xAB: "！", 0xAC: "？", 0xAD: "。", 0xAE: "ー",
    0xAF: "・", 0xB0: "⋯",
    0xB1: "『", 0xB2: "』", 0xB3: "「", 0xB4: "」",
    0xB5: "♂", 0xB6: "♀", 0xB7: "円", 0xB8: "、",
    0xB9: "×", 0xBA: "／",
    # Latin letters retained for mixed-language strings.
    **{0xBB + i: chr(ord("A") + i) for i in range(26)},
    **{0xD5 + i: chr(ord("a") + i) for i in range(26)},
    0xEF: "▶", 0xF0: "：",
}


CONTROL_NAMES: Dict[int, str] = {
    0xF7: "DYNAMIC",
    0xF8: "KEYPAD_ICON",
    0xF9: "EXTRA_SYMBOL",
    0xFA: "PROMPT_SCROLL",
    0xFB: "PROMPT_CLEAR",
    0xFC: "EXT_CTRL_CODE_BEGIN",
    0xFD: "PLACEHOLDER_BEGIN",
    0xFE: "NEWLINE",
    0xFF: "EOS",
}


@dataclass(frozen=True)
class ItemName:
    item_id: int
    offset: int
    raw: bytes
    decoded: str


def decode_bytes(data: bytes, stop_at_end: bool = True) -> str:
    out: list[str] = []
    i = 0
    while i < len(data):
        value = data[i]
        if stop_at_end and value == STRING_END:
            break
        if value in JP_CHARS:
            out.append(JP_CHARS[value])
        elif value == 0xFE:
            out.append("\\n")
        elif value in CONTROL_NAMES:
            out.append(f"<{CONTROL_NAMES[value]}>")
        else:
            out.append(f"<{value:02X}>")
        i += 1
    return "".join(out)


def read_item_names(rom: bytes) -> list[ItemName]:
    required = ITEM_TABLE_OFFSET + ITEM_COUNT * ITEM_ENTRY_SIZE
    if len(rom) < required:
        raise ValueError(
            f"ROM too small for item table: need 0x{required:X}, got 0x{len(rom):X}"
        )

    names: list[ItemName] = []
    for item_id in range(ITEM_COUNT):
        offset = ITEM_TABLE_OFFSET + item_id * ITEM_ENTRY_SIZE
        raw = rom[offset:offset + 10]
        names.append(ItemName(item_id, offset, raw, decode_bytes(raw)))
    return names


def write_charmap(path: Path) -> None:
    lines = [
        "@ Japanese Pokémon Emerald / Generation III character map",
        "@ Generated by recover_jp_charmap.py",
        "@",
        "@ Unicode labels are based on the established Gen III mapping.",
        "@ A ROM alone cannot encode Unicode semantics.",
        "",
    ]

    for value in range(256):
        if value in JP_CHARS:
            char = JP_CHARS[value]
            escaped = char.replace("\\", "\\\\").replace("'", "\\'")
            lines.append(f"'{escaped}' = {value:02X}")
        elif value in CONTROL_NAMES:
            lines.append(f"{CONTROL_NAMES[value]:<24} = {value:02X}")
        else:
            lines.append(f"{('UNK_%02X' % value):<24} = {value:02X}")

    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text("\n".join(lines) + "\n", encoding="utf-8")


def write_tsv(path: Path, counts: Sequence[int]) -> None:
    lines = ["byte\ttype\tvalue\trom_count"]
    for value in range(256):
        if value in JP_CHARS:
            kind = "character"
            label = JP_CHARS[value]
        elif value in CONTROL_NAMES:
            kind = "control"
            label = CONTROL_NAMES[value]
        else:
            kind = "unknown"
            label = f"UNK_{value:02X}"
        lines.append(f"{value:02X}\t{kind}\t{label}\t{counts[value]}")
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text("\n".join(lines) + "\n", encoding="utf-8")


def write_item_names(path: Path, names: Iterable[ItemName]) -> None:
    lines = ["item_id\toffset\tdecoded\traw"]
    for item in names:
        lines.append(
            f"0x{item.item_id:04X}\t0x{item.offset:08X}\t"
            f"{item.decoded}\t{item.raw.hex(' ')}"
        )
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text("\n".join(lines) + "\n", encoding="utf-8")


def write_report(
    path: Path,
    rom_path: Path,
    rom: bytes,
    counts: Sequence[int],
    names: Sequence[ItemName],
) -> None:
    used_in_items = collections.Counter()
    unknown_in_items = collections.Counter()

    for item in names:
        for value in item.raw:
            if value == STRING_END:
                break
            used_in_items[value] += 1
            if value not in JP_CHARS and value not in CONTROL_NAMES:
                unknown_in_items[value] += 1

    mapped_used = [v for v in range(256) if counts[v] and v in JP_CHARS]
    controls_used = [v for v in range(256) if counts[v] and v in CONTROL_NAMES]
    unknown_used = [v for v in range(256) if counts[v] and v not in JP_CHARS and v not in CONTROL_NAMES]

    lines = [
        "Japanese Emerald charmap recovery report",
        "=========================================",
        f"ROM: {rom_path}",
        f"Size: {len(rom)} bytes (0x{len(rom):X})",
        f"SHA-1: {hashlib.sha1(rom).hexdigest()}",
        "",
        "Method",
        "------",
        "The Unicode mapping is the established Japanese Generation III mapping.",
        "The ROM is used to validate actual byte usage and decode the item-name table.",
        "Glyph shapes can be extracted separately when a raw font location is known.",
        "",
        "Coverage",
        "--------",
        f"Mapped character bytes used anywhere in ROM: {len(mapped_used)}",
        f"Known control bytes used anywhere in ROM: {len(controls_used)}",
        f"Other byte values present anywhere in ROM: {len(unknown_used)}",
        "",
        "Item-name validation",
        "--------------------",
        f"Entries decoded: {len(names)}",
        f"Unknown byte occurrences before EOS: {sum(unknown_in_items.values())}",
    ]

    if unknown_in_items:
        lines.append(
            "Unknown item-name bytes: "
            + ", ".join(f"{v:02X}({n})" for v, n in sorted(unknown_in_items.items()))
        )
    else:
        lines.append("All item-name bytes before EOS are mapped.")

    lines.extend(
        [
            "",
            "Known examples",
            "--------------",
        ]
    )
    for item_id in (0x0001, 0x0002, 0x0004, 0x000D, 0x003F, 0x0178):
        item = names[item_id]
        lines.append(
            f"0x{item_id:04X}: {item.decoded} [{item.raw.hex(' ')}]"
        )

    lines.extend(
        [
            "",
            "Notes",
            "-----",
            "A whole-ROM byte-frequency scan is not a text detector: code, graphics,",
            "audio, and compressed data also contain all byte values. Item names are",
            "used as the reliable validation region in this version of the tool.",
        ]
    )

    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text("\n".join(lines) + "\n", encoding="utf-8")


def unpack_glyph(
    data: bytes,
    width: int,
    height: int,
    bpp: int,
) -> list[list[int]]:
    pixels = [[0 for _ in range(width)] for _ in range(height)]
    bit_pos = 0
    for y in range(height):
        for x in range(width):
            byte_index = bit_pos // 8
            shift = bit_pos % 8
            value = (data[byte_index] >> shift) & ((1 << bpp) - 1)
            pixels[y][x] = value
            bit_pos += bpp
    return pixels


def write_pgm_contact_sheet(
    path: Path,
    rom: bytes,
    offset: int,
    glyph_count: int,
    width: int,
    height: int,
    bpp: int,
    columns: int,
) -> None:
    bits_per_glyph = width * height * bpp
    if bits_per_glyph % 8:
        raise ValueError("glyph dimensions × bpp must be byte-aligned")
    bytes_per_glyph = bits_per_glyph // 8
    end = offset + glyph_count * bytes_per_glyph
    if offset < 0 or end > len(rom):
        raise ValueError(
            f"font range 0x{offset:X}..0x{end:X} is outside the ROM"
        )

    rows = (glyph_count + columns - 1) // columns
    cell_w = width + 1
    cell_h = height + 1
    image_w = columns * cell_w
    image_h = rows * cell_h
    image = [[255 for _ in range(image_w)] for _ in range(image_h)]
    max_pixel = (1 << bpp) - 1

    for glyph_id in range(glyph_count):
        start = offset + glyph_id * bytes_per_glyph
        glyph = unpack_glyph(
            rom[start:start + bytes_per_glyph], width, height, bpp
        )
        ox = (glyph_id % columns) * cell_w
        oy = (glyph_id // columns) * cell_h
        for y in range(height):
            for x in range(width):
                pixel = glyph[y][x]
                image[oy + y][ox + x] = 255 - round(pixel * 255 / max_pixel)

    with path.open("wb") as f:
        f.write(f"P5\n{image_w} {image_h}\n255\n".encode("ascii"))
        for row in image:
            f.write(bytes(row))


def main() -> int:
    parser = argparse.ArgumentParser(
        description="Generate and validate a Japanese Pokémon Emerald charmap."
    )
    parser.add_argument(
        "rom", nargs="?", type=Path, default=Path("baserom.gba")
    )
    parser.add_argument(
        "--charmap-output",
        type=Path,
        default=Path("charmap_jp.txt"),
    )
    parser.add_argument(
        "--tsv-output",
        type=Path,
        default=Path("charmap_jp.tsv"),
    )
    parser.add_argument(
        "--report-output",
        type=Path,
        default=Path("charmap_jp_report.txt"),
    )
    parser.add_argument(
        "--items-output",
        type=Path,
        default=Path("decoded_item_names.txt"),
    )

    parser.add_argument("--font-offset", type=lambda s: int(s, 0))
    parser.add_argument("--font-bpp", type=int, choices=(1, 2, 4), default=2)
    parser.add_argument("--glyph-width", type=int, default=8)
    parser.add_argument("--glyph-height", type=int, default=8)
    parser.add_argument("--glyph-count", type=int, default=256)
    parser.add_argument("--glyph-columns", type=int, default=16)
    parser.add_argument(
        "--font-output",
        type=Path,
        default=Path("font_contact_sheet.pgm"),
    )

    args = parser.parse_args()

    if not args.rom.is_file():
        parser.error(f"ROM not found: {args.rom}")

    rom = args.rom.read_bytes()
    counts = [0] * 256
    for value, count in collections.Counter(rom).items():
        counts[value] = count

    names = read_item_names(rom)

    write_charmap(args.charmap_output)
    write_tsv(args.tsv_output, counts)
    write_item_names(args.items_output, names)
    write_report(args.report_output, args.rom, rom, counts, names)

    print(f"ROM:             {args.rom}")
    print(f"SHA-1:           {hashlib.sha1(rom).hexdigest()}")
    print(f"charmap:         {args.charmap_output}")
    print(f"byte table:      {args.tsv_output}")
    print(f"report:          {args.report_output}")
    print(f"decoded items:   {args.items_output}")
    print(f"item entries:    {len(names)}")

    unknown_item_bytes = sorted({
        value
        for item in names
        for value in item.raw.split(bytes([STRING_END]), 1)[0]
        if value not in JP_CHARS and value not in CONTROL_NAMES
    })
    if unknown_item_bytes:
        print(
            "unknown item bytes: "
            + ", ".join(f"0x{x:02X}" for x in unknown_item_bytes)
        )
    else:
        print("unknown item bytes: none")

    if args.font_offset is not None:
        write_pgm_contact_sheet(
            args.font_output,
            rom,
            args.font_offset,
            args.glyph_count,
            args.glyph_width,
            args.glyph_height,
            args.font_bpp,
            args.glyph_columns,
        )
        print(f"font sheet:      {args.font_output}")

    return 0


if __name__ == "__main__":
    raise SystemExit(main())
