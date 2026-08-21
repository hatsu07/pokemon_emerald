#!/usr/bin/env python3
"""Semanticize ObjectEvent palette tables."""

from __future__ import annotations

import argparse
import re
import struct
from pathlib import Path


ROM = Path("baserom.gba")
TARGET = Path("data/maps/0640-0643_maps_data.inc")
LABEL_ROOT = Path("data/generated/rodata")
SPRITE_PALETTES_START = 0x084E401C
PLAYER_REFLECTION_START = 0x084E4154
SPECIAL_REFLECTION_START = 0x084E41CC
END = 0x084E428C

LABEL_RE = re.compile(r"^([A-Za-z_][A-Za-z0-9_]*): @ 0x([0-9A-Fa-f]{8})")
BYTE_LABEL_RE = re.compile(r"^([A-Za-z_][A-Za-z0-9_]*):$")
GLOBL_RE = re.compile(r"^\t\.globl ([A-Za-z_][A-Za-z0-9_]*)$")
DIRECTIVE_RE = re.compile(r"^\t\.(byte|2byte|4byte)\s+(.+)$")
INCBIN_RE = re.compile(r'^\t\.incbin "([^"]+)"(?:,\s*([^,]+)(?:,\s*([^,]+))?)?')


def rom_off(addr: int) -> int:
    return addr - 0x08000000


def u16(rom: bytes, addr: int) -> int:
    return struct.unpack_from("<H", rom, rom_off(addr))[0]


def u32(rom: bytes, addr: int) -> int:
    return struct.unpack_from("<I", rom, rom_off(addr))[0]


def strip_comment(text: str) -> str:
    return text.split("@", 1)[0].strip()


def split_values(text: str) -> list[str]:
    return [part.strip() for part in strip_comment(text).split(",") if part.strip()]


def parse_int(text: str) -> int | None:
    text = strip_comment(text)
    try:
        return int(text, 0)
    except ValueError:
        return None


def directive_size(line: str) -> int | None:
    match = DIRECTIVE_RE.match(line)
    if match:
        width = {"byte": 1, "2byte": 2, "4byte": 4}[match.group(1)]
        return width * len(split_values(match.group(2)))
    match = INCBIN_RE.match(line)
    if match:
        count = parse_int(match.group(3) or "")
        if count is not None:
            return count
        path = Path(match.group(1))
        if path.exists():
            skip = parse_int(match.group(2) or "") or 0
            return path.stat().st_size - skip
    return 0


def collect_labels(text_overrides: dict[Path, str] | None = None) -> dict[int, list[str]]:
    labels: dict[int, list[str]] = {}
    overrides = text_overrides or {}
    for path in LABEL_ROOT.rglob("*.inc"):
        text = overrides.get(path, path.read_text(encoding="utf-8"))
        pending_globls: list[str] = []
        for line in text.splitlines():
            if globl := GLOBL_RE.match(line):
                pending_globls.append(globl.group(1))
                continue
            if label := LABEL_RE.match(line):
                addr = int(label.group(2), 16)
                labels.setdefault(addr, []).append(label.group(1))
                for name in pending_globls:
                    if name == label.group(1):
                        labels.setdefault(addr, []).append(name)
                pending_globls.clear()
            elif BYTE_LABEL_RE.match(line):
                pending_globls.clear()
    return labels


def preferred_label(labels: dict[int, list[str]], addr: int) -> str:
    names = labels.get(addr, [])
    for prefix in ("gObjectEventPal_", "gObjectEventPal", "gUnknown_"):
        for name in names:
            if name.startswith(prefix):
                return name
    raise SystemExit(f"missing palette label for 0x{addr:08X}")


def palette_label(addr: int) -> str:
    return f"gObjectEventPal_JP_{addr:08X}"


def target_palette_addrs(rom: bytes) -> set[int]:
    addrs: set[int] = set()
    addr = SPRITE_PALETTES_START
    while True:
        ptr = u32(rom, addr)
        tag = u16(rom, addr + 4)
        padding = u16(rom, addr + 6)
        if padding != 0:
            raise SystemExit(f"bad SpritePalette padding at 0x{addr:08X}")
        if ptr == 0 and tag == 0:
            break
        addrs.add(ptr)
        addr += 8
    return addrs


def add_palette_payload_labels(path: Path, text: str, targets: set[int], labels: dict[int, list[str]]) -> str:
    wanted = {addr for addr in targets if not any(name.startswith("gObjectEventPal") for name in labels.get(addr, []))}
    if not wanted:
        return text

    out: list[str] = []
    current_addr: int | None = None
    inserted: set[int] = set()

    def maybe_insert(addr: int | None) -> None:
        if addr in wanted and addr not in inserted:
            out.append(f"\t.globl {palette_label(addr)}")
            out.append(f"{palette_label(addr)}: @ 0x{addr:08X}")
            out.append("\t@ 16-color object-event palette")
            inserted.add(addr)

    def emit_byte_values(values: list[str]) -> None:
        if values:
            out.append("\t.byte " + ", ".join(values))

    for line in text.splitlines():
        label = LABEL_RE.match(line)
        if label:
            current_addr = int(label.group(2), 16)
            maybe_insert(current_addr)
            out.append(line)
            continue

        byte_directive = DIRECTIVE_RE.match(line)
        if current_addr is not None and byte_directive and byte_directive.group(1) == "byte":
            values = split_values(byte_directive.group(2))
            if any(current_addr < addr < current_addr + len(values) for addr in wanted - inserted):
                chunk: list[str] = []
                for index, value in enumerate(values):
                    addr = current_addr + index
                    if addr in wanted and addr not in inserted:
                        emit_byte_values(chunk)
                        chunk = []
                        maybe_insert(addr)
                    chunk.append(value)
                emit_byte_values(chunk)
                current_addr += len(values)
                continue

        maybe_insert(current_addr)
        out.append(line)
        if current_addr is not None:
            size = directive_size(line)
            if size is None:
                current_addr = None
            else:
                current_addr += size

    return "\n".join(out) + ("\n" if text.endswith("\n") else "")


def tag_list_label(addr: int) -> str:
    return f"sObjectEventPaletteTagList_{addr:08X}"


def emit_tag_list(rom: bytes, start: int, end: int) -> list[str]:
    if (end - start) % 2:
        raise SystemExit(f"bad tag list size 0x{start:08X}-0x{end:08X}")
    values = [f"0x{u16(rom, addr):04X}" for addr in range(start, end, 2)]
    return [f"{tag_list_label(start)}: @ 0x{start:08X}", "\t.2byte " + ", ".join(values)]


def parse_override_entries(rom: bytes, start: int) -> tuple[list[tuple[int, int]], int]:
    entries: list[tuple[int, int]] = []
    addr = start
    while True:
        tag = u16(rom, addr)
        padding = u16(rom, addr + 2)
        ptr = u32(rom, addr + 4)
        if padding != 0:
            raise SystemExit(f"bad palette override padding at 0x{addr:08X}")
        entries.append((tag, ptr))
        addr += 8
        if tag == 0x11FF:
            if ptr != 0:
                raise SystemExit(f"bad palette override terminator at 0x{addr - 8:08X}")
            break
    return entries, addr


def emit_override_table(label: str, rom: bytes, start: int, tag_list_end: int) -> list[str]:
    entries, lists_start = parse_override_entries(rom, start)
    ptrs = sorted({ptr for tag, ptr in entries if tag != 0x11FF})
    emitted_ptrs = [ptr for ptr in ptrs if ptr >= lists_start]
    lines = [f"{label}: @ 0x{start:08X}"]
    for tag, ptr in entries:
        if tag == 0x11FF:
            lines.append("\t.2byte 0x11FF, 0")
            lines.append("\t.4byte 0")
        else:
            lines.append(f"\t.2byte 0x{tag:04X}, 0")
            lines.append(f"\t.4byte {tag_list_label(ptr)}")
    for idx, ptr in enumerate(emitted_ptrs):
        end = emitted_ptrs[idx + 1] if idx + 1 < len(emitted_ptrs) else tag_list_end
        lines.extend(emit_tag_list(rom, ptr, end))
    return lines


def emit_tag_lists_for_ptrs(rom: bytes, ptrs: list[int], end: int) -> list[str]:
    lines: list[str] = []
    for idx, ptr in enumerate(ptrs):
        next_end = ptrs[idx + 1] if idx + 1 < len(ptrs) else end
        lines.extend(emit_tag_list(rom, ptr, next_end))
    return lines


def build_replacement(rom: bytes, labels: dict[int, list[str]]) -> str:
    lines = [
        "\t.globl gEventObjectMovementData_084E401C",
        "gEventObjectMovementData_084E401C:",
        "\t.globl sObjectEventSpritePalettes",
        "sObjectEventSpritePalettes: @ 0x084E401C",
        "\t@ ObjectEvent SpritePalette table used by PatchObjectPalette.",
        "sAnalyzedData_084E401C:",
        "sObjectEventSpritePalettes: @ 0x084E401C",
    ]
    addr = SPRITE_PALETTES_START
    while True:
        ptr = u32(rom, addr)
        tag = u16(rom, addr + 4)
        padding = u16(rom, addr + 6)
        if padding != 0:
            raise SystemExit(f"bad SpritePalette padding at 0x{addr:08X}")
        if ptr == 0 and tag == 0:
            lines.append("\trodata_sprite_palette 0, 0")
            addr += 8
            break
        lines.append(f"\trodata_sprite_palette {preferred_label(labels, ptr)}, 0x{tag:04X}")
        addr += 8
    if addr != 0x084E413C:
        raise SystemExit(f"SpritePalette table ended at 0x{addr:08X}")

    lines.extend(emit_tag_list(rom, 0x084E413C, 0x084E4144))
    lines.extend(emit_tag_list(rom, 0x084E4144, 0x084E414C))
    lines.extend(emit_tag_list(rom, 0x084E414C, PLAYER_REFLECTION_START))

    lines.extend(
        [
            "\t@ pret/pokeemerald-jp direct xref for 0x084E4154: event_object_movement.s: LoadPlayerObjectReflectionPalette",
            "\t.globl gEventObjectMovementData_084E4154",
            "gEventObjectMovementData_084E4154:",
            "\t.globl sPlayerObjectReflectionPaletteOverrides",
            "sPlayerObjectReflectionPaletteOverrides: @ 0x084E4154",
            "\t@ ObjectEvent reflection palette override table.",
            "sAnalyzedData_084E4154:",
        ]
    )
    lines.extend(emit_override_table("sPlayerObjectReflectionPaletteOverrides", rom, PLAYER_REFLECTION_START, SPECIAL_REFLECTION_START))
    special_entries, _ = parse_override_entries(rom, SPECIAL_REFLECTION_START)
    pre_special_ptrs = sorted(
        {ptr for tag, ptr in special_entries if tag != 0x11FF and PLAYER_REFLECTION_START < ptr < SPECIAL_REFLECTION_START}
    )
    lines.extend(emit_tag_lists_for_ptrs(rom, pre_special_ptrs, SPECIAL_REFLECTION_START))

    lines.extend(
        [
            "\t@ pret/pokeemerald-jp direct xref for 0x084E41CC: event_object_movement.s: GetObjectPaletteTag, LoadSpecialObjectReflectionPalette",
            "\t.globl gEventObjectMovementData_084E41CC",
            "gEventObjectMovementData_084E41CC:",
            "\t.globl sSpecialObjectReflectionPaletteOverrides",
            "sSpecialObjectReflectionPaletteOverrides: @ 0x084E41CC",
            "\t@ ObjectEvent special reflection palette override table.",
            "sAnalyzedData_084E41CC:",
        ]
    )
    lines.extend(emit_override_table("sSpecialObjectReflectionPaletteOverrides", rom, SPECIAL_REFLECTION_START, END))
    default_tag_lists = [u32(rom, END + index * 4) for index in range(4)]
    if default_tag_lists != sorted(default_tag_lists) or default_tag_lists[0] != 0x084E423C:
        raise SystemExit("unexpected ObjectEvent default palette tag-list pointers")
    lines.extend(emit_tag_lists_for_ptrs(rom, default_tag_lists, END))
    return "\n".join(lines) + "\n"


def rewrite_main_block(text: str, replacement: str) -> str:
    start_marker = "\t.globl gEventObjectMovementData_084E401C\n"
    end_marker = "\t@ pret/pokeemerald-jp direct xref for 0x084E428C: event_object_movement.s: GetObjectPaletteTag, InitEventObjectPalettes\n"
    start = text.find(start_marker)
    end = text.find(end_marker)
    if start < 0 or end < 0 or start >= end:
        raise SystemExit(f"{TARGET}: could not locate ObjectEvent palette block")
    return text[:start] + replacement + text[end:]


def main() -> int:
    parser = argparse.ArgumentParser()
    parser.add_argument("--dry-run", action="store_true")
    parser.add_argument("--check", action="store_true")
    args = parser.parse_args()

    rom = ROM.read_bytes()
    palette_targets = target_palette_addrs(rom)
    labels = collect_labels()
    overrides: dict[Path, str] = {}
    for path in LABEL_ROOT.rglob("*.inc"):
        text = path.read_text(encoding="utf-8")
        new_text = add_palette_payload_labels(path, text, palette_targets, labels)
        if new_text != text:
            overrides[path] = new_text
            labels = collect_labels(overrides)

    target_text = overrides.get(TARGET, TARGET.read_text(encoding="utf-8"))
    new_target_text = rewrite_main_block(target_text, build_replacement(rom, labels))
    if new_target_text != target_text:
        overrides[TARGET] = new_target_text

    if args.check:
        if overrides:
            raise SystemExit("ObjectEvent palettes are not semanticized")
    elif not args.dry_run:
        for path, text in sorted(overrides.items()):
            path.write_text(text, encoding="utf-8")

    print(f"{TARGET}: semanticized ObjectEvent palette tables; labeled {len(overrides)} files")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
