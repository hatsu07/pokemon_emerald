#!/usr/bin/env python3
"""Semanticize ObjectEvent OAM and subsprite resource tables."""

from __future__ import annotations

import argparse
import struct
from pathlib import Path


DEFAULT_INPUT = Path("data/generated/rodata/maps/0640-0643_maps_data.inc")
ROM = Path("baserom.gba")
START = 0x084E1900
OAM_START = 0x084E1940
OAM_END = 0x084E1980
SUBSPRITE_END = 0x084E1DA8

OAM_LABELS = {
    0x084E1940: "sObjectEventOam_8x8",
    0x084E1950: "sObjectEventOam_16x16",
    0x084E1968: "sObjectEventOam_16x32",
    0x084E1970: "sObjectEventOam_32x32",
    0x084E1978: "sObjectEventOam_64x64",
}

SUBSPRITE_TABLES = {
    0x084E19A0: "sObjectEventSubspriteTables_16x16",
    0x084E19F4: "sObjectEventSubspriteTables_16x32",
    0x084E1A48: "sObjectEventSubspriteTables_32x32",
    0x084E1AA8: "sObjectEventSubspriteTables_48x48",
    0x084E1B28: "sObjectEventSubspriteTables_64x64",
    0x084E1C48: "sObjectEventSubspriteTables_96x40",
    0x084E1D78: "sObjectEventSubspriteTables_88x32",
}


def rom_slice(rom: bytes, start: int, end: int) -> bytes:
    return rom[start - 0x08000000 : end - 0x08000000]


def u16(data: bytes, offset: int) -> int:
    return struct.unpack_from("<H", data, offset)[0]


def u32(data: bytes, offset: int) -> int:
    return struct.unpack_from("<I", data, offset)[0]


def s8(value: int) -> int:
    return value - 0x100 if value & 0x80 else value


def emit_raw_bytes(data: bytes, base: int) -> list[str]:
    lines = ["\t@ Unresolved 0x084E1900-0x084E193F data preserved verbatim."]
    for offset in range(0, len(data), 16):
        chunk = data[offset : offset + 16]
        values = ", ".join(f"0x{b:02X}" for b in chunk)
        lines.append(f"\t.byte {values} @ 0x{base + offset:08X}")
    return lines


def emit_oam(data: bytes) -> list[str]:
    lines = ["\t@ struct OamData entries used by ObjectEventGraphicsInfo."]
    for addr in range(OAM_START, OAM_END, 8):
        label = OAM_LABELS.get(addr)
        if label:
            lines.append(f"{label}: @ 0x{addr:08X}")
        attr0 = u16(data, addr - START)
        attr1 = u16(data, addr - START + 2)
        attr2 = u16(data, addr - START + 4)
        affine = u16(data, addr - START + 6)
        y = attr0 & 0xFF
        affine_mode = (attr0 >> 8) & 3
        obj_mode = (attr0 >> 10) & 3
        mosaic = (attr0 >> 12) & 1
        bpp = (attr0 >> 13) & 1
        shape = (attr0 >> 14) & 3
        x = attr1 & 0x1FF
        matrix_num = (attr1 >> 9) & 0x1F
        size = (attr1 >> 14) & 3
        tile = attr2 & 0x3FF
        priority = (attr2 >> 10) & 3
        palette = (attr2 >> 12) & 0xF
        lines.append(
            "\trodata_sprite_oam_data "
            f"{y}, {affine_mode}, {obj_mode}, {mosaic}, {bpp}, {shape}, "
            f"{x}, {matrix_num}, {size}, {tile}, {priority}, {palette}, 0x{affine:04X}"
        )
    return lines


def collect_subsprite_records(data: bytes, start: int, end: int) -> tuple[list[tuple[int, int, int]], dict[int, int]]:
    records: list[tuple[int, int, int]] = []
    counts_by_ptr: dict[int, int] = {}
    addr = start
    while addr + 8 <= end:
        off = addr - START
        count = data[off]
        pad = data[off + 1 : off + 4]
        ptr = u32(data, off + 4)
        if not (pad == b"\x00\x00\x00" and count <= 32 and (ptr == 0 or START <= ptr < SUBSPRITE_END)):
            break
        records.append((addr, count, ptr))
        if ptr:
            counts_by_ptr[ptr] = max(counts_by_ptr.get(ptr, 0), count)
        addr += 8
    return records, counts_by_ptr


def emit_subsprite(data: bytes, addr: int, count: int) -> list[str]:
    lines = [f"sObjectEventSubsprites_{addr:08X}: @ 0x{addr:08X}"]
    for i in range(count):
        off = addr - START + i * 4
        x = s8(data[off])
        y = s8(data[off + 1])
        packed = u16(data, off + 2)
        shape = packed & 3
        size = (packed >> 2) & 3
        tile = (packed >> 4) & 0x3FF
        priority = (packed >> 14) & 3
        lines.append(f"\trodata_subsprite {x}, {y}, {shape}, {size}, {tile}, {priority}")
    return lines


def emit_gap(data: bytes, start: int, end: int) -> list[str]:
    gap = data[start - START : end - START]
    if not any(gap):
        return [f"\t.byte 0x00 @ 0x{addr:08X}" for addr in range(start, end)]
    if len(gap) % 4 == 0:
        lines = [f"sObjectEventSubsprites_Unreferenced_{start:08X}: @ 0x{start:08X}"]
        for offset in range(0, len(gap), 4):
            addr = start + offset
            x = s8(gap[offset])
            y = s8(gap[offset + 1])
            packed = u16(gap, offset + 2)
            shape = packed & 3
            size = (packed >> 2) & 3
            tile = (packed >> 4) & 0x3FF
            priority = (packed >> 14) & 3
            lines.append(f"\trodata_subsprite {x}, {y}, {shape}, {size}, {tile}, {priority}")
        return lines
    return emit_raw_bytes(gap, start)


def emit_subsprite_region(data: bytes) -> list[str]:
    lines = ["\t@ struct SubspriteTable arrays and their Subsprite payloads."]
    intervals: list[tuple[int, int, str, object]] = []
    counts_by_ptr: dict[int, int] = {}
    for start in sorted(SUBSPRITE_TABLES):
        records, record_counts = collect_subsprite_records(data, start, SUBSPRITE_END)
        if not records:
            raise SystemExit(f"no subsprite table records at 0x{start:08X}")
        intervals.append((start, start + len(records) * 8, "table", records))
        for ptr, count in record_counts.items():
            counts_by_ptr[ptr] = max(counts_by_ptr.get(ptr, 0), count)
    for ptr, count in counts_by_ptr.items():
        intervals.append((ptr, ptr + count * 4, "subsprites", count))
    intervals.sort(key=lambda item: item[0])
    covered = OAM_END
    for start, end, kind, payload in intervals:
        if start < covered:
            if kind == "subsprites" and end <= covered:
                continue
            raise SystemExit(f"overlapping subsprite interval 0x{start:08X}-0x{end:08X}")
        if covered < start:
            lines.extend(emit_gap(data, covered, start))
            covered = start
        if kind == "table":
            records = payload  # type: ignore[assignment]
            lines.append(f"{SUBSPRITE_TABLES[start]}: @ 0x{start:08X}")
            for _addr, count, ptr in records:  # type: ignore[union-attr]
                target = "NULL" if ptr == 0 else f"sObjectEventSubsprites_{ptr:08X}"
                lines.append(f"\trodata_subsprite_table {count}, {target}")
        else:
            lines.extend(emit_subsprite(data, start, payload))  # type: ignore[arg-type]
        covered = end
    if covered != SUBSPRITE_END:
        lines.extend(emit_gap(data, covered, SUBSPRITE_END))
    return lines


def build_replacement(data: bytes) -> str:
    lines = [
        "\t@ ObjectEvent graphics resource tables plus 245 proven struct ObjectEventGraphicsInfo objects.",
        "\t@ preserved non-ObjectEventGraphicsInfo data: 0x084E1900-0x084E1DA7",
    ]
    lines.extend(emit_raw_bytes(data[: OAM_START - START], START))
    lines.extend(emit_oam(data))
    lines.extend(emit_subsprite_region(data))
    return "\n".join(lines) + "\n"


def remove_alias_sets(text: str) -> str:
    labels = set(OAM_LABELS.values()) | set(SUBSPRITE_TABLES.values())
    out = []
    for line in text.splitlines(keepends=True):
        stripped = line.strip()
        if stripped.startswith(".set "):
            name = stripped[5:].split(",", 1)[0].strip()
            if name in labels:
                continue
        out.append(line)
    return "".join(out)


def main() -> int:
    parser = argparse.ArgumentParser()
    parser.add_argument("path", nargs="?", type=Path, default=DEFAULT_INPUT)
    parser.add_argument("--dry-run", action="store_true")
    parser.add_argument("--check", action="store_true")
    args = parser.parse_args()

    rom = ROM.read_bytes()
    data = rom_slice(rom, START, SUBSPRITE_END)
    text = args.path.read_text(encoding="utf-8")
    replacement = build_replacement(data)
    start_marker = "\t@ ObjectEvent graphics resource tables plus 245 proven struct ObjectEventGraphicsInfo objects.\n"
    end_marker = "\t.globl gObjectEventGraphicsInfo_JP_000\n"
    start = text.find(start_marker)
    end = text.find(end_marker)
    if start < 0 or end < 0 or start >= end:
        raise SystemExit("could not locate ObjectEvent resource block")
    rewritten = text[:start] + replacement + text[end:]
    rewritten = remove_alias_sets(rewritten)
    if args.check:
        if rewritten != text:
            raise SystemExit(f"{args.path}: not semanticized")
    elif not args.dry_run:
        args.path.write_text(rewritten, encoding="utf-8")
    print(f"{args.path}: semanticized 0x084E1900-0x084E1DA7")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
