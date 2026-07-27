#!/usr/bin/env python3
from __future__ import annotations

import argparse
import re
import struct
from dataclasses import dataclass
from pathlib import Path
from typing import Iterable

ROM_BASE = 0x08000000

DEFAULT_DATA_START = 0x002F3A64
DEFAULT_POINTER_TABLE = 0x002F9D04
DEFAULT_SPECIES_COUNT = 412
DEFAULT_DATA_END = 0x002FA374
TERMINATOR = 0xFFFF
MOVE_MASK = 0x01FF
LEVEL_SHIFT = 9


@dataclass(frozen=True)
class LearnsetEntry:
    level: int
    move_id: int
    raw: int


@dataclass(frozen=True)
class Learnset:
    address: int
    offset: int
    entries: tuple[LearnsetEntry, ...]
    end_offset: int


_SET_RE = re.compile(
    r"^\s*\.set\s+([A-Za-z_][A-Za-z0-9_]*)\s*,\s*"
    r"(0x[0-9A-Fa-f]+|\d+)\s*(?:@.*)?$"
)

_EQU_RE = re.compile(
    r"^\s*(?:\.equ|\.set)\s+([A-Za-z_][A-Za-z0-9_]*)\s*,\s*"
    r"(0x[0-9A-Fa-f]+|\d+)\s*(?:@.*)?$"
)

_CPP_DEFINE_RE = re.compile(
    r"^\s*#define\s+([A-Za-z_][A-Za-z0-9_]*)\s+"
    r"(0x[0-9A-Fa-f]+|\d+)\s*(?://.*|/\*.*)?$"
)


def parse_int(text: str) -> int:
    return int(text, 0)


def read_u16(data: bytes, offset: int) -> int:
    if offset < 0 or offset + 2 > len(data):
        raise ValueError(f"u16 read outside ROM at 0x{offset:X}")
    return struct.unpack_from("<H", data, offset)[0]


def read_u32(data: bytes, offset: int) -> int:
    if offset < 0 or offset + 4 > len(data):
        raise ValueError(f"u32 read outside ROM at 0x{offset:X}")
    return struct.unpack_from("<I", data, offset)[0]


def parse_constants(path: Path, prefix: str) -> dict[int, str]:
    if not path.exists():
        raise FileNotFoundError(f"constants file not found: {path}")

    result: dict[int, str] = {}
    for line_number, line in enumerate(
        path.read_text(encoding="utf-8", errors="replace").splitlines(), 1
    ):
        match = _SET_RE.match(line) or _EQU_RE.match(line) or _CPP_DEFINE_RE.match(line)
        if not match:
            continue

        name, value_text = match.groups()
        if not name.startswith(prefix):
            continue

        value = parse_int(value_text)
        result.setdefault(value, name)

    if not result:
        raise ValueError(
            f"no constants beginning with {prefix!r} were found in {path}"
        )
    return result


def sanitize_label_component(name: str) -> str:
    parts = name.split("_")
    converted: list[str] = []
    for part in parts:
        if not part:
            continue
        if part.isdigit():
            converted.append(part)
        else:
            converted.append(part[:1].upper() + part[1:].lower())
    return "".join(converted) or "Unknown"


def species_label(species_name: str) -> str:
    if species_name.startswith("SPECIES_"):
        species_name = species_name[len("SPECIES_") :]
    return f"g{sanitize_label_component(species_name)}LevelUpLearnset"


def fallback_species_name(species_id: int) -> str:
    return f"SPECIES_{species_id}"


def fallback_move_name(move_id: int) -> str:
    return f"MOVE_{move_id}"


def decode_learnset(
    rom: bytes,
    pointer: int,
    *,
    data_start: int,
    pointer_table: int,
    max_entries: int,
) -> Learnset:
    if not ROM_BASE <= pointer < ROM_BASE + len(rom):
        raise ValueError(f"invalid ROM pointer: 0x{pointer:08X}")

    offset = pointer - ROM_BASE
    if not data_start <= offset < pointer_table:
        raise ValueError(
            f"learnset pointer 0x{pointer:08X} resolves outside expected data region "
            f"0x{data_start:X}-0x{pointer_table:X}"
        )
    if offset % 2:
        raise ValueError(f"unaligned learnset pointer: 0x{pointer:08X}")

    entries: list[LearnsetEntry] = []
    cursor = offset
    for _ in range(max_entries):
        raw = read_u16(rom, cursor)
        cursor += 2

        if raw == TERMINATOR:
            return Learnset(
                address=pointer,
                offset=offset,
                entries=tuple(entries),
                end_offset=cursor,
            )

        level = raw >> LEVEL_SHIFT
        move_id = raw & MOVE_MASK

        if not 0 <= level <= 127:
            raise ValueError(
                f"invalid level {level} at ROM offset 0x{cursor - 2:X}"
            )
        if move_id == MOVE_MASK:
            raise ValueError(
                f"suspicious move id 0x{move_id:X} at ROM offset 0x{cursor - 2:X}"
            )

        entries.append(LearnsetEntry(level=level, move_id=move_id, raw=raw))

    raise ValueError(
        f"learnset at 0x{pointer:08X} has no 0xFFFF terminator "
        f"within {max_entries} entries"
    )


def choose_labels(
    pointers: list[int],
    species_names: dict[int, str],
) -> dict[int, str]:
    species_by_pointer: dict[int, list[int]] = {}
    for species_id, pointer in enumerate(pointers):
        species_by_pointer.setdefault(pointer, []).append(species_id)

    labels: dict[int, str] = {}
    used_labels: set[str] = set()

    for pointer in sorted(species_by_pointer):
        species_ids = species_by_pointer[pointer]

        # Prefer the first named species, but avoid generic NONE/unknown names where possible.
        ranked_ids = sorted(
            species_ids,
            key=lambda species_id: (
                species_names.get(species_id, "").endswith("_NONE"),
                species_id not in species_names,
                species_id,
            ),
        )
        chosen_id = ranked_ids[0]
        chosen_name = species_names.get(chosen_id, fallback_species_name(chosen_id))
        base_label = species_label(chosen_name)

        label = base_label
        suffix = 2
        while label in used_labels:
            label = f"{base_label}{suffix}"
            suffix += 1

        labels[pointer] = label
        used_labels.add(label)

    return labels


def render_data_include(
    learnsets: dict[int, Learnset],
    labels: dict[int, str],
    move_names: dict[int, str],
) -> str:
    lines = [
        "@ Generated by tools/extract_level_up_learnsets.py.",
        "@ Do not edit manually; edit the extractor or constants instead.",
        "",
    ]

    sorted_learnsets = sorted(learnsets.values(), key=lambda item: item.offset)
    previous_end: int | None = None

    for learnset in sorted_learnsets:
        if previous_end is not None and learnset.offset != previous_end:
            gap = learnset.offset - previous_end
            if gap < 0:
                raise ValueError("overlapping learnsets detected")
            if gap:
                lines.append(
                    f"    .incbin \"baserom.gba\", 0x{previous_end:X}, 0x{gap:X}"
                )
                lines.append("")

        lines.append(f"{labels[learnset.address]}:")
        for entry in learnset.entries:
            move_name = move_names.get(entry.move_id, fallback_move_name(entry.move_id))
            lines.append(f"    level_up_move {entry.level}, {move_name}")
        lines.append("    .2byte 0xFFFF")
        lines.append("")
        previous_end = learnset.end_offset

    return "\n".join(lines).rstrip() + "\n"


def render_pointer_include(
    pointers: list[int],
    labels: dict[int, str],
    species_names: dict[int, str],
) -> str:
    lines = [
        "@ Generated by tools/extract_level_up_learnsets.py.",
        "@ Species comments are informational; pointer order is ROM order.",
        "",
        "gLevelUpLearnsets:",
    ]

    for species_id, pointer in enumerate(pointers):
        species_name = species_names.get(
            species_id, fallback_species_name(species_id)
        )
        lines.append(f"    .4byte {labels[pointer]} @ {species_name}")

    return "\n".join(lines).rstrip() + "\n"


def encode_learnset(learnset: Learnset) -> bytes:
    output = bytearray()
    for entry in learnset.entries:
        output += struct.pack("<H", entry.raw)
    output += struct.pack("<H", TERMINATOR)
    return bytes(output)


def verify_extraction(
    rom: bytes,
    *,
    data_start: int,
    pointer_table: int,
    data_end: int,
    pointers: list[int],
    learnsets: dict[int, Learnset],
) -> None:
    rebuilt_data = bytearray(rom[data_start:pointer_table])

    for learnset in learnsets.values():
        encoded = encode_learnset(learnset)
        relative_start = learnset.offset - data_start
        relative_end = relative_start + len(encoded)
        if relative_start < 0 or relative_end > len(rebuilt_data):
            raise ValueError(
                f"learnset 0x{learnset.address:08X} falls outside data region"
            )
        rebuilt_data[relative_start:relative_end] = encoded

    original_data = rom[data_start:pointer_table]
    if bytes(rebuilt_data) != original_data:
        for index, (expected, actual) in enumerate(
            zip(original_data, rebuilt_data)
        ):
            if expected != actual:
                absolute = data_start + index
                raise ValueError(
                    f"data verification failed at ROM offset 0x{absolute:X}: "
                    f"ROM=0x{expected:02X}, rebuilt=0x{actual:02X}"
                )
        raise ValueError("data verification failed due to a length mismatch")

    rebuilt_pointers = b"".join(struct.pack("<I", pointer) for pointer in pointers)
    original_pointers = rom[pointer_table:data_end]
    if rebuilt_pointers != original_pointers:
        raise ValueError(
            "pointer-table verification failed: configured count or end offset "
            "does not match the ROM"
        )


def build_parser() -> argparse.ArgumentParser:
    parser = argparse.ArgumentParser(
        description=(
            "Extract Pokémon Emerald level-up learnsets and their pointer table "
            "from a GBA ROM into assembly include files."
        )
    )
    parser.add_argument("rom", nargs="?", default="baserom.gba")
    parser.add_argument(
        "--species-constants",
        type=Path,
        default=Path("constants/species_constants.inc"),
    )
    parser.add_argument(
        "--move-constants",
        type=Path,
        default=Path("constants/move_constants.inc"),
    )
    parser.add_argument(
        "--data-output",
        type=Path,
        default=Path("data/pokemon/level_up_learnsets.inc"),
    )
    parser.add_argument(
        "--pointer-output",
        type=Path,
        default=Path("data/pokemon/level_up_learnset_pointers.inc"),
    )
    parser.add_argument(
        "--data-start",
        type=parse_int,
        default=DEFAULT_DATA_START,
        help="learnset data start as a ROM file offset",
    )
    parser.add_argument(
        "--pointer-table",
        type=parse_int,
        default=DEFAULT_POINTER_TABLE,
        help="pointer table start as a ROM file offset",
    )
    parser.add_argument(
        "--species-count",
        type=int,
        default=DEFAULT_SPECIES_COUNT,
    )
    parser.add_argument(
        "--data-end",
        type=parse_int,
        default=DEFAULT_DATA_END,
        help="end of pointer table as a ROM file offset",
    )
    parser.add_argument(
        "--max-entries",
        type=int,
        default=128,
        help="maximum moves allowed in one learnset before declaring corruption",
    )
    parser.add_argument(
        "--no-verify",
        action="store_true",
        help="skip byte-for-byte reconstruction checks",
    )
    return parser


def main() -> int:
    args = build_parser().parse_args()

    rom_path = Path(args.rom)
    rom = rom_path.read_bytes()

    expected_pointer_end = args.pointer_table + args.species_count * 4
    if expected_pointer_end != args.data_end:
        raise SystemExit(
            "configuration mismatch: pointer_table + species_count * 4 "
            f"= 0x{expected_pointer_end:X}, but data_end is 0x{args.data_end:X}"
        )

    if not (
        0 <= args.data_start < args.pointer_table < args.data_end <= len(rom)
    ):
        raise SystemExit(
            f"invalid extraction range for ROM size 0x{len(rom):X}: "
            f"0x{args.data_start:X}-0x{args.data_end:X}"
        )

    species_names = parse_constants(args.species_constants, "SPECIES_")
    move_names = parse_constants(args.move_constants, "MOVE_")

    pointers = [
        read_u32(rom, args.pointer_table + index * 4)
        for index in range(args.species_count)
    ]

    learnsets: dict[int, Learnset] = {}
    for pointer in sorted(set(pointers)):
        learnsets[pointer] = decode_learnset(
            rom,
            pointer,
            data_start=args.data_start,
            pointer_table=args.pointer_table,
            max_entries=args.max_entries,
        )

    labels = choose_labels(pointers, species_names)

    if not args.no_verify:
        verify_extraction(
            rom,
            data_start=args.data_start,
            pointer_table=args.pointer_table,
            data_end=args.data_end,
            pointers=pointers,
            learnsets=learnsets,
        )

    data_text = render_data_include(learnsets, labels, move_names)
    pointer_text = render_pointer_include(pointers, labels, species_names)

    args.data_output.parent.mkdir(parents=True, exist_ok=True)
    args.pointer_output.parent.mkdir(parents=True, exist_ok=True)
    args.data_output.write_text(data_text, encoding="utf-8")
    args.pointer_output.write_text(pointer_text, encoding="utf-8")

    shared_pointer_count = sum(
        1 for pointer in set(pointers) if pointers.count(pointer) > 1
    )

    print(f"ROM: {rom_path}")
    print(
        f"learnset data: 0x{args.data_start:08X}-0x{args.pointer_table:08X}"
    )
    print(
        f"pointer table: 0x{args.pointer_table:08X}-0x{args.data_end:08X}"
    )
    print(f"species entries: {len(pointers)}")
    print(f"unique learnsets: {len(learnsets)}")
    print(f"shared learnset pointers: {shared_pointer_count}")
    print(f"data output: {args.data_output}")
    print(f"pointer output: {args.pointer_output}")
    print("verification: " + ("skipped" if args.no_verify else "passed"))

    return 0


if __name__ == "__main__":
    raise SystemExit(main())
