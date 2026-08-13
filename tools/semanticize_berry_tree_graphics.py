#!/usr/bin/env python3
"""Semanticize berry tree ObjectEvent graphics tables."""

from __future__ import annotations

import argparse
import struct
from pathlib import Path


ROM = Path("baserom.gba")
TARGET = Path("data/generated/rodata/maps/0640-0643_maps_data.inc")
GRAPHICS_START = 0x084E428C
PIC_BLOCK_START = 0x084E429C
PIC_TABLE_START = 0x084E4C04
PALETTE_SLOT_TABLE_START = 0x084E4CB0
OBJECT_GFX_ID_TABLE_START = 0x084E4D5C
FARAWAY_ISLAND_START = 0x084E4E1C
BERRY_COUNT = 43


def rom_off(addr: int) -> int:
    return addr - 0x08000000


def u32(rom: bytes, addr: int) -> int:
    return struct.unpack_from("<I", rom, rom_off(addr))[0]


def pic_label(addr: int) -> str:
    return f"gSpriteFrameImages_JP_{addr:08X}"


def palette_slots_label(addr: int) -> str:
    return f"sBerryTreePaletteSlots_{addr:08X}"


def object_graphics_ids_label(addr: int) -> str:
    return f"sBerryTreeObjectEventGraphicsIds_{addr:08X}"


def frame_gfx_label(addr: int) -> str:
    return f"gObjectEventFrameGfx_JP_{addr:08X}"


def byte_values(rom: bytes, start: int, end: int) -> list[str]:
    return [f"0x{byte:02X}" for byte in rom[rom_off(start) : rom_off(end)]]


def emit_byte_range(rom: bytes, start: int, end: int, labels: dict[int, list[str]]) -> list[str]:
    lines: list[str] = []
    addr = start
    while addr < end:
        for label in labels.get(addr, []):
            lines.append(label)
        next_labels = [label_addr for label_addr in labels if addr < label_addr < end]
        chunk_end = min(next_labels) if next_labels else end
        values = byte_values(rom, addr, chunk_end)
        for index in range(0, len(values), 16):
            lines.append("\t.byte " + ", ".join(values[index : index + 16]))
        addr = chunk_end
    return lines


def emit_pic_block(rom: bytes, start: int, end: int, palette_slot_ptrs: set[int], object_gfx_id_ptrs: set[int]) -> list[str]:
    lines = [f"\t.globl {pic_label(start)}", f"{pic_label(start)}: @ 0x{start:08X}"]
    for index in range(9):
        addr = start + index * 8
        ptr = u32(rom, addr)
        size = u32(rom, addr + 4)
        lines.append(f"\tsprite_frame_image {frame_gfx_label(ptr)}, 0x{size:X}")

    extra_start = start + 9 * 8
    if extra_start < end:
        labels: dict[int, list[str]] = {}
        if extra_start in palette_slot_ptrs:
            labels.setdefault(extra_start, []).extend(
                [
                    f"{palette_slots_label(extra_start)}: @ 0x{extra_start:08X}",
                    "\t@ berry tree palette slots indexed by growth stage",
                ]
            )
        for ptr in sorted(object_gfx_id_ptrs):
            if extra_start <= ptr < end:
                labels.setdefault(ptr, []).extend(
                    [
                        f"{object_graphics_ids_label(ptr)}: @ 0x{ptr:08X}",
                        "\t@ berry tree ObjectEvent graphics ids indexed by growth stage",
                    ]
                )
        lines.extend(emit_byte_range(rom, extra_start, end, labels))
    return lines


def build_graphics_block(rom: bytes) -> str:
    pic_ptrs = [u32(rom, PIC_TABLE_START + index * 4) for index in range(BERRY_COUNT)]
    palette_slot_ptrs = {u32(rom, PALETTE_SLOT_TABLE_START + index * 4) for index in range(BERRY_COUNT)}
    object_gfx_id_ptrs = {
        u32(rom, OBJECT_GFX_ID_TABLE_START + index * 4)
        for index in range(BERRY_COUNT)
        if 0x08000000 <= u32(rom, OBJECT_GFX_ID_TABLE_START + index * 4) < 0x09000000
    }
    starts = sorted(set(pic_ptrs))
    if starts[0] != PIC_BLOCK_START or starts[-1] >= PIC_TABLE_START:
        raise SystemExit("unexpected berry tree pic block range")

    lines = [
        "\t@ pret/pokeemerald-jp direct xref for 0x084E428C: event_object_movement.s: GetObjectPaletteTag, InitEventObjectPalettes",
        "\t.globl gEventObjectMovementData_084E428C",
        "gEventObjectMovementData_084E428C:",
        "\t.globl sObjectEventDefaultPaletteTagListPointers",
        "sObjectEventDefaultPaletteTagListPointers: @ 0x084E428C",
        "\t@ ObjectEvent default palette tag-list pointers.",
        "sAnalyzedData_084E428C:",
        "sObjectEventDefaultPaletteTagListPointers: @ 0x084E428C",
    ]
    for index in range(4):
        lines.append(f"\t.4byte sObjectEventPaletteTagList_{u32(rom, GRAPHICS_START + index * 4):08X}")

    for idx, start in enumerate(starts):
        end = starts[idx + 1] if idx + 1 < len(starts) else PIC_TABLE_START
        lines.extend(emit_pic_block(rom, start, end, palette_slot_ptrs, object_gfx_id_ptrs))
    return "\n".join(lines) + "\n"


def build_pointer_table(label: str, analyzed_label: str, start: int, count: int, target_label) -> str:
    rom = ROM.read_bytes()
    lines = [label, analyzed_label]
    for index in range(count):
        ptr = u32(rom, start + index * 4)
        lines.append(f"\t.4byte {target_label(ptr)} @ +0x{index * 4:X}")
    return "\n".join(lines) + "\n"


def rewrite_between(text: str, start_marker: str, end_marker: str, replacement: str) -> str:
    start = text.find(start_marker)
    end = text.find(end_marker)
    if start < 0 or end < 0 or start >= end:
        raise SystemExit(f"{TARGET}: could not locate block {start_marker.strip()}")
    return text[:start] + replacement + text[end:]


def build_pic_table_block() -> str:
    header = [
        "\t.globl gUnknown_84E4C04",
        "gUnknown_84E4C04: @ 0x084E4C04",
        "\t.globl gBerryTreePicTablePointers",
        "gBerryTreePicTablePointers:",
        "\t@ berry tree SpriteFrameImage table pointers indexed by berry type",
        "sAnalyzedData_084E4C04:",
    ]
    return build_pointer_table("\n".join(header), "", PIC_TABLE_START, BERRY_COUNT, pic_label)


def build_palette_slot_table_block() -> str:
    header = [
        "\t.globl gUnknown_84E4CB0",
        "gUnknown_84E4CB0: @ 0x084E4CB0",
        "\t.globl gBerryTreePaletteSlotTablePointers",
        "gBerryTreePaletteSlotTablePointers:",
        "\t@ berry tree palette-slot table pointers indexed by berry type",
        "sAnalyzedData_084E4CB0:",
    ]
    return build_pointer_table("\n".join(header), "", PALETTE_SLOT_TABLE_START, BERRY_COUNT, palette_slots_label)


def build_object_graphics_id_table_block() -> str:
    rom = ROM.read_bytes()
    header = [
        "\t.globl gUnknown_84E4D5C",
        "gUnknown_84E4D5C: @ 0x084E4D5C",
        "\t.globl gBerryTreeObjectEventGraphicsIdTablePointers",
        "gBerryTreeObjectEventGraphicsIdTablePointers:",
        "\t@ berry tree ObjectEvent graphics-id table pointers indexed by berry type",
        "sAnalyzedData_084E4D5C:",
    ]
    lines = header
    for index in range(BERRY_COUNT):
        ptr = u32(rom, OBJECT_GFX_ID_TABLE_START + index * 4)
        lines.append(f"\t.4byte {object_graphics_ids_label(ptr)} @ +0x{index * 4:X}")
    tail_start = OBJECT_GFX_ID_TABLE_START + BERRY_COUNT * 4
    if tail_start < FARAWAY_ISLAND_START:
        lines.extend(
            [
                f"sBerryTreeObjectEventGraphicsIdPointerTail_084E4E08: @ 0x{tail_start:08X}",
                "\t@ unreferenced tail after berry tree graphics-id pointer table; semantic owner unresolved",
            ]
        )
        for addr in range(tail_start, FARAWAY_ISLAND_START, 4):
            value = u32(rom, addr)
            if value in {u32(rom, OBJECT_GFX_ID_TABLE_START + index * 4) for index in range(BERRY_COUNT)}:
                lines.append(f"\t.4byte {object_graphics_ids_label(value)}")
            else:
                lines.append(f"\t.4byte 0x{value:08X}")
    return "\n".join(lines) + "\n"


def rewrite(text: str) -> str:
    rom = ROM.read_bytes()
    text = rewrite_between(
        text,
        "\t@ pret/pokeemerald-jp direct xref for 0x084E428C: event_object_movement.s: GetObjectPaletteTag, InitEventObjectPalettes\n",
        "\t.globl gUnknown_84E4C04\n",
        build_graphics_block(rom),
    )
    text = rewrite_between(
        text,
        "\t.globl gUnknown_84E4C04\n",
        "\t.globl gUnknown_84E4D5C\n",
        build_pic_table_block() + build_palette_slot_table_block(),
    )
    text = rewrite_between(
        text,
        "\t.globl gUnknown_84E4D5C\n",
        "\t@ pret/pokeemerald-jp direct xref for 0x084E4E1C: faraway_island.s: sub_081D4110\n",
        build_object_graphics_id_table_block(),
    )
    text = text.replace(", 0x084E429C, gDummySpriteAffineAnimTable", f", {pic_label(PIC_BLOCK_START)}, gDummySpriteAffineAnimTable")
    return text


def main() -> int:
    parser = argparse.ArgumentParser()
    parser.add_argument("--dry-run", action="store_true")
    parser.add_argument("--check", action="store_true")
    args = parser.parse_args()

    text = TARGET.read_text(encoding="utf-8")
    rewritten = rewrite(text)
    if args.check:
        if rewritten != text:
            raise SystemExit("berry tree graphics are not semanticized")
    elif not args.dry_run:
        TARGET.write_text(rewritten, encoding="utf-8")
    print(f"{TARGET}: semanticized berry tree graphics tables")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
