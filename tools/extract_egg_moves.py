#!/usr/bin/env python3

from __future__ import annotations

import argparse
import re
import struct
from pathlib import Path


DEFAULT_ROM = Path("baserom.gba")
DEFAULT_OUTPUT = Path("data/pokemon/egg_moves.inc")

EGG_MOVES_ROM_OFFSET = 0x2FB764
EGG_MOVES_SPECIES_OFFSET = 20000
EGG_MOVES_TERMINATOR = 0xFFFF

DEFAULT_NUM_SPECIES = 412
DEFAULT_NUM_MOVES = 355


CONSTANT_PATTERNS = [
    re.compile(
        r"^\s*#define\s+"
        r"([A-Z][A-Z0-9_]+)\s+"
        r"(0x[0-9A-Fa-f]+|\d+)\b"
    ),
    re.compile(
        r"^\s*\.(?:equ|set)\s+"
        r"([A-Z][A-Z0-9_]+)\s*,\s*"
        r"(0x[0-9A-Fa-f]+|\d+)\b"
    ),
    re.compile(
        r"^\s*"
        r"([A-Z][A-Z0-9_]+)\s*=\s*"
        r"(0x[0-9A-Fa-f]+|\d+)\b"
    ),
]


def parse_args() -> argparse.Namespace:
    parser = argparse.ArgumentParser(
        description=(
            "日本版ポケットモンスター エメラルドROMから"
            "タマゴ技テーブルを抽出します。"
        )
    )

    parser.add_argument(
        "--rom",
        type=Path,
        default=DEFAULT_ROM,
    )

    parser.add_argument(
        "--output",
        type=Path,
        default=DEFAULT_OUTPUT,
    )

    parser.add_argument(
        "--offset",
        type=lambda value: int(value, 0),
        default=EGG_MOVES_ROM_OFFSET,
    )

    parser.add_argument(
        "--num-species",
        type=int,
        default=DEFAULT_NUM_SPECIES,
    )

    parser.add_argument(
        "--num-moves",
        type=int,
        default=DEFAULT_NUM_MOVES,
    )

    parser.add_argument(
        "--species-file",
        type=Path,
        default=Path("constants/species_constants.inc"),
        help="Species constant definitions",
    )

    parser.add_argument(
        "--moves-file",
        type=Path,
        default=Path("constants/move_constants.inc"),
        help="Move constant definitions",
    )

    return parser.parse_args()


def parse_integer(value: str) -> int:
    """
    0x10は16進数、それ以外は10進数として解析する。
    01のような先頭ゼロ付き10進数にも対応する。
    """
    value = value.strip()

    if value.lower().startswith("0x"):
        return int(value, 16)

    return int(value, 10)


def parse_constant_line(
    line: str,
) -> tuple[str, int] | None:
    for pattern in CONSTANT_PATTERNS:
        match = pattern.match(line)

        if match is not None:
            return (
                match.group(1),
                parse_integer(match.group(2)),
            )

    return None

def scan_constants(
    path: Path,
    prefix: str,
    size: int,
) -> dict[int, str]:
    result: dict[int, str] = {}

    try:
        text = path.read_text(
            encoding="utf-8",
            errors="ignore",
        )
    except OSError:
        return result

    for line in text.splitlines():
        parsed = parse_constant_line(line)

        if parsed is None:
            continue

        name, value = parsed

        if not name.startswith(prefix):
            continue

        if 0 <= value < size:
            result[value] = name

    return result


def find_constant_names(
    prefix: str,
    size: int,
    specified_file: Path | None,
) -> list[str]:
    fallback_prefix = prefix.rstrip("_")

    names = [
        f"{fallback_prefix}_UNKNOWN_{index}"
        for index in range(size)
    ]

    if specified_file is not None:
        if not specified_file.is_file():
            raise FileNotFoundError(
                f"定数ファイルが見つかりません: {specified_file}"
            )

        found = scan_constants(
            specified_file,
            prefix,
            size,
        )

        for value, name in found.items():
            names[value] = name

        print(
            f"{prefix} constants: "
            f"{specified_file} ({len(found)} entries)"
        )

        return names

    allowed_extensions = {
        ".h",
        ".inc",
        ".s",
        ".c",
        ".txt",
    }

    ignored_directories = {
        ".git",
        "build",
        "tools",
    }

    found_total: dict[int, str] = {}

    for path in Path(".").rglob("*"):
        if not path.is_file():
            continue

        if path.suffix.lower() not in allowed_extensions:
            continue

        if any(
            part in ignored_directories
            for part in path.parts
        ):
            continue

        found_total.update(
            scan_constants(
                path,
                prefix,
                size,
            )
        )

    for value, name in found_total.items():
        names[value] = name

    print(
        f"{prefix} constants found: "
        f"{len(found_total)}"
    )

    return names


def parse_egg_move_table(
    rom: bytes,
    offset: int,
    num_species: int,
    num_moves: int,
) -> tuple[list[tuple[int, list[int]]], int]:
    entries: list[tuple[int, list[int]]] = []

    current_species: int | None = None
    current_moves: list[int] = []

    position = offset

    while position + 2 <= len(rom):
        value = struct.unpack_from(
            "<H",
            rom,
            position,
        )[0]

        position += 2

        if value == EGG_MOVES_TERMINATOR:
            if current_species is not None:
                entries.append(
                    (current_species, current_moves)
                )

            return entries, position

        if value >= EGG_MOVES_SPECIES_OFFSET:
            if current_species is not None:
                entries.append(
                    (current_species, current_moves)
                )

            species_id = (
                value - EGG_MOVES_SPECIES_OFFSET
            )

            if not 0 <= species_id < num_species:
                raise ValueError(
                    "不正な種族マーカーです: "
                    f"0x{value:04X} "
                    f"at ROM 0x{position - 2:X}"
                )

            current_species = species_id
            current_moves = []
            continue

        if current_species is None:
            raise ValueError(
                "最初の種族マーカーより前に"
                "技IDがあります: "
                f"{value} at ROM 0x{position - 2:X}"
            )

        if not 0 <= value < num_moves:
            raise ValueError(
                "不正な技IDです: "
                f"{value} at ROM 0x{position - 2:X}"
            )

        current_moves.append(value)

    raise ValueError(
        "0xFFFF終端が見つかりません"
    )


def create_output(
    entries: list[tuple[int, list[int]]],
    species_names: list[str],
    move_names: list[str],
    rom_offset: int,
    end_offset: int,
) -> str:
    lines = [
        "@ Egg moves",
        "@ Extracted from baserom.gba",
        f"@ ROM offset: 0x{rom_offset:06X}",
        f"@ End offset: 0x{end_offset:06X}",
        f"@ Size: 0x{end_offset - rom_offset:X}",
        "",
        ".equ EGG_MOVES_SPECIES_OFFSET, 20000",
        ".equ EGG_MOVES_TERMINATOR, 0xFFFF",
        "",
        "    .align 1",
        "",
        "gEggMoves::",
    ]

    for species_id, moves in entries:
        species_name = species_names[species_id]

        lines.extend([
            "",
            f"@ {species_id}: {species_name}",
            (
                "    .2byte "
                "EGG_MOVES_SPECIES_OFFSET + "
                f"{species_name}"
            ),
        ])

        for move_id in moves:
            lines.append(
                f"    .2byte {move_names[move_id]}"
            )

    lines.extend([
        "",
        "    .2byte EGG_MOVES_TERMINATOR",
        "",
    ])

    return "\n".join(lines)


def main() -> None:
    args = parse_args()

    if not args.rom.is_file():
        raise SystemExit(
            f"ROMが見つかりません: {args.rom}"
        )

    rom = args.rom.read_bytes()

    try:
        species_names = find_constant_names(
            prefix="SPECIES_",
            size=args.num_species,
            specified_file=args.species_file,
        )

        move_names = find_constant_names(
            prefix="MOVE_",
            size=args.num_moves,
            specified_file=args.moves_file,
        )

        entries, end_offset = parse_egg_move_table(
            rom=rom,
            offset=args.offset,
            num_species=args.num_species,
            num_moves=args.num_moves,
        )
    except (FileNotFoundError, ValueError) as error:
        raise SystemExit(str(error)) from error

    output = create_output(
        entries=entries,
        species_names=species_names,
        move_names=move_names,
        rom_offset=args.offset,
        end_offset=end_offset,
    )

    args.output.parent.mkdir(
        parents=True,
        exist_ok=True,
    )

    args.output.write_text(
        output,
        encoding="utf-8",
    )

    print(f"Input ROM:     {args.rom}")
    print(f"Output file:   {args.output}")
    print(f"ROM range:     0x{args.offset:X}-0x{end_offset:X}")
    print(f"Species sets:  {len(entries)}")
    print(f"Extracted:     0x{end_offset - args.offset:X} bytes")


if __name__ == "__main__":
    main()
