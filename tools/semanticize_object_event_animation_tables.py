#!/usr/bin/env python3
"""Semanticize ObjectEvent sprite animation command tables."""

from __future__ import annotations

import argparse
import struct
from pathlib import Path


DEFAULT_INPUT = Path("data/maps/0640-0643_maps_data.inc")
ROM = Path("baserom.gba")
START = 0x084E0E50
REGULAR_A_END = 0x084E142C
AFFINE_START = 0x084E142C
AFFINE_END = 0x084E14E4
REGULAR_B_START = 0x084E14E4
TABLE_START = 0x084E1500
REGULAR_C_START = 0x084E1644
REGULAR_C_END = 0x084E168C
AFFINE_TABLE_START = 0x084E18E8
END = 0x084E1900

ANIM_TABLE_LABELS = {
    0x084E1500: "sObjectEventAnimTable_084E1500",
    0x084E1504: "sObjectEventAnimTable_084E1504",
    0x084E1554: "sObjectEventAnimTable_084E1554",
    0x084E15A4: "sObjectEventAnimTable_084E15A4",
    0x084E15F4: "sObjectEventAnimTable_084E15F4",
    0x084E168C: "sObjectEventAnimTable_084E168C",
    0x084E16DC: "sObjectEventAnimTable_084E16DC",
    0x084E173C: "sObjectEventAnimTable_084E173C",
    0x084E17DC: "sObjectEventAnimTable_084E17DC",
    0x084E183C: "sObjectEventAnimTable_084E183C",
    0x084E1890: "sObjectEventAnimTable_084E1890",
    0x084E1894: "sObjectEventAnimTable_084E1894",
    0x084E18A8: "sObjectEventAnimTable_084E18A8",
    0x084E18B0: "sObjectEventAnimTable_084E18B0",
    0x084E18B8: "sObjectEventAnimTable_084E18B8",
}

ANIM_TABLE_ENDS = {
    0x084E15F4: REGULAR_C_START,
}

AFFINE_TABLE_LABEL = "sObjectEventAffineAnimTable_084E18E8"
MARKER = "@ Named ObjectEventGraphicsInfo resource pointer targets."


def rom_slice(rom: bytes, start: int, end: int) -> bytes:
    return rom[start - 0x08000000 : end - 0x08000000]


def u16(data: bytes, offset: int) -> int:
    return struct.unpack_from("<H", data, offset)[0]


def u32(data: bytes, offset: int) -> int:
    return struct.unpack_from("<I", data, offset)[0]


def s16(value: int) -> int:
    return value - 0x10000 if value & 0x8000 else value


def anim_label(addr: int) -> str:
    return f"sObjectEventAnimCmd_{addr:08X}"


def affine_label(addr: int) -> str:
    return f"sObjectEventAffineAnimCmd_{addr:08X}"


def parse_regular_starts(data: bytes, start: int, end: int) -> list[int]:
    starts = []
    addr = start
    while addr < end:
        starts.append(addr)
        while True:
            off = addr - START
            image = u16(data, off)
            addr += 4
            if image in (0xFFFF, 0xFFFE):
                break
        if addr > end:
            raise SystemExit(f"regular anim overrun at 0x{start:08X}")
    if addr != end:
        raise SystemExit(f"regular anim parse stopped at 0x{addr:08X}, expected 0x{end:08X}")
    return starts


def emit_regular_sequence(data: bytes, start: int) -> tuple[list[str], int]:
    lines = [f"{anim_label(start)}: @ 0x{start:08X}"]
    addr = start
    while True:
        off = addr - START
        image = u16(data, off)
        raw_duration = u16(data, off + 2)
        addr += 4
        if image == 0xFFFF:
            lines.append("\trodata_anim_end")
            break
        if image == 0xFFFE:
            lines.append(f"\trodata_anim_jump {raw_duration}")
            break
        duration = raw_duration & 0x3F
        h_flip = (raw_duration >> 6) & 1
        v_flip = (raw_duration >> 7) & 1
        if h_flip or v_flip:
            lines.append(f"\trodata_anim_frame {image}, {duration}, {h_flip}, {v_flip}")
        else:
            lines.append(f"\trodata_anim_frame {image}, {duration}")
    return lines, addr


def emit_affine_region(data: bytes) -> tuple[list[str], set[int]]:
    starts = sorted({u32(data, addr - START) for addr in range(AFFINE_TABLE_START, END, 4)})
    if not starts or starts[0] != AFFINE_START:
        raise SystemExit("unexpected affine animation command starts")
    lines: list[str] = []
    for idx, start in enumerate(starts):
        end = starts[idx + 1] if idx + 1 < len(starts) else AFFINE_END
        if not (AFFINE_START <= start < end <= AFFINE_END):
            raise SystemExit(f"bad affine interval 0x{start:08X}-0x{end:08X}")
        lines.append(f"{affine_label(start)}: @ 0x{start:08X}")
        for addr in range(start, end, 8):
            off = addr - START
            x = u16(data, off)
            y = u16(data, off + 2)
            rotation = u16(data, off + 4)
            duration = u16(data, off + 6)
            if x == 0x7FFF:
                lines.append("\trodata_affine_anim_end")
            elif x == 0x7FFD:
                lines.append(f"\trodata_affine_anim_jump {y}")
            else:
                lines.append(f"\trodata_affine_anim_frame {s16(x)}, {s16(y)}, {s16(rotation)}, {duration}")
    return lines, set(starts)


def emit_regular_region(data: bytes, start: int, end: int) -> tuple[list[str], set[int]]:
    starts = parse_regular_starts(data, start, end)
    lines: list[str] = []
    for seq_start in starts:
        seq_lines, _ = emit_regular_sequence(data, seq_start)
        lines.extend(seq_lines)
    return lines, set(starts)


def emit_anim_tables(data: bytes, regular_starts: set[int], table_starts: list[int]) -> list[str]:
    lines: list[str] = []
    starts = table_starts
    for idx, start in enumerate(starts):
        end = ANIM_TABLE_ENDS.get(start, starts[idx + 1] if idx + 1 < len(starts) else AFFINE_TABLE_START)
        if (end - start) % 4:
            raise SystemExit(f"bad anim table size at 0x{start:08X}")
        lines.append(f"{ANIM_TABLE_LABELS[start]}: @ 0x{start:08X}")
        for addr in range(start, end, 4):
            ptr = u32(data, addr - START)
            if ptr not in regular_starts:
                raise SystemExit(f"anim table pointer 0x{ptr:08X} has no command label")
            lines.append(f"\t.4byte {anim_label(ptr)}")
    return lines


def emit_affine_table(data: bytes, affine_starts: set[int]) -> list[str]:
    lines = [f"{AFFINE_TABLE_LABEL}: @ 0x{AFFINE_TABLE_START:08X}"]
    for addr in range(AFFINE_TABLE_START, END, 4):
        ptr = u32(data, addr - START)
        if ptr not in affine_starts:
            raise SystemExit(f"affine table pointer 0x{ptr:08X} has no command label")
        lines.append(f"\t.4byte {affine_label(ptr)}")
    return lines


def build_replacement(data: bytes) -> str:
    regular_a, starts_a = emit_regular_region(data, START, REGULAR_A_END)
    affine, affine_starts = emit_affine_region(data)
    regular_b, starts_b = emit_regular_region(data, REGULAR_B_START, TABLE_START)
    regular_c, starts_c = emit_regular_region(data, REGULAR_C_START, REGULAR_C_END)
    regular_starts = starts_a | starts_b | starts_c
    lines = [
        "\t@ preserved non-SpriteFrameImage data: 0x084E0E50-0x084E18FF",
        "\t" + MARKER,
        "\t@ ObjectEvent sprite animation commands.",
    ]
    lines.extend(regular_a)
    lines.extend(affine)
    lines.extend(regular_b)
    lines.append("\t@ ObjectEvent animation pointer tables.")
    lines.extend(emit_anim_tables(data, regular_starts, [start for start in sorted(ANIM_TABLE_LABELS) if start < REGULAR_C_START]))
    lines.extend(regular_c)
    lines.extend(emit_anim_tables(data, regular_starts, [start for start in sorted(ANIM_TABLE_LABELS) if start >= REGULAR_C_END]))
    lines.extend(emit_affine_table(data, affine_starts))
    return "\n".join(lines) + "\n"


def main() -> int:
    parser = argparse.ArgumentParser()
    parser.add_argument("path", nargs="?", type=Path, default=DEFAULT_INPUT)
    parser.add_argument("--dry-run", action="store_true")
    parser.add_argument("--check", action="store_true")
    args = parser.parse_args()

    data = rom_slice(ROM.read_bytes(), START, END)
    text = args.path.read_text(encoding="utf-8")
    start_marker = "\t@ preserved non-SpriteFrameImage data: 0x084E0E50-0x084E18FF\n"
    end_marker = "\t.globl gEventObjectMovementData_084E1900\n"
    start = text.find(start_marker)
    end = text.find(end_marker)
    if start < 0 or end < 0 or start >= end:
        raise SystemExit("could not locate ObjectEvent animation block")
    rewritten = text[:start] + build_replacement(data) + text[end:]
    if args.check:
        if rewritten != text:
            raise SystemExit(f"{args.path}: not semanticized")
    elif not args.dry_run:
        args.path.write_text(rewritten, encoding="utf-8")
    print(f"{args.path}: semanticized 0x084E0E50-0x084E18FF")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
