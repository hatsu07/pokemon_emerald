#!/usr/bin/env python3

from __future__ import annotations

import argparse
import re
import struct
from pathlib import Path


DEFAULT_ROM = Path("baserom.gba")
DEFAULT_OUTPUT = Path("data/pokemon/tutor_learnsets.inc")
DEFAULT_SPECIES_FILE = Path("constants/species_constants.inc")
DEFAULT_MOVE_FILE = Path("constants/move_constants.inc")

TUTOR_MOVES_ROM_OFFSET = 0x5E08C4
TUTOR_LEARNSETS_ROM_OFFSET = 0x5E0900

NUM_TUTOR_MOVES = 30
NUM_SPECIES = 412
BYTES_PER_SPECIES = 4


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


def parse_integer(value: str) -> int:
    value = value.strip()

    if value.lower().startswith("0x"):
        return int(value, 16)

    return int(value, 10)


def parse_args() -> argparse.Namespace:
    parser = argparse.ArgumentParser(
        description=(
            "日本版ポケットモンスター エメラルドROMから、"
            "おしえわざ一覧と習得可否テーブルを抽出します。"
        )
    )

    parser.add_argument(
        "--rom",
        type=Path,
        default=DEFAULT_ROM,
        help=f"入力ROM。既定値: {DEFAULT_ROM}",
    )

    parser.add_argument(
        "--output",
        type=Path,
        default=DEFAULT_OUTPUT,
        help=f"出力ファイル。既定値: {DEFAULT_OUTPUT}",
    )

    parser.add_argument(
        "--species-file",
        type=Path,
        default=DEFAULT_SPECIES_FILE,
        help=f"種族定数。既定値: {DEFAULT_SPECIES_FILE}",
    )

    parser.add_argument(
        "--moves-file",
        type=Path,
        default=DEFAULT_MOVE_FILE,
        help=f"技定数。既定値: {DEFAULT_MOVE_FILE}",
    )

    parser.add_argument(
        "--num-species",
        type=int,
        default=NUM_SPECIES,
    )

    return parser.parse_args()


def load_constants(
    path: Path,
    prefix: str,
) -> dict[int, str]:
    if not path.is_file():
        raise FileNotFoundError(
            f"定数ファイルが見つかりません: {path}"
        )

    constants: dict[int, str] = {}

    text = path.read_text(
        encoding="utf-8",
        errors="ignore",
    )

    for line in text.splitlines():
        for pattern in CONSTANT_PATTERNS:
            match = pattern.match(line)

            if match is None:
                continue

            name = match.group(1)

            if not name.startswith(prefix):
                break

            value = parse_integer(match.group(2))
            constants[value] = name
            break

    print(
        f"{prefix} constants: {path} "
        f"({len(constants)} entries)"
    )

    return constants


def extract_tutor_moves(
    rom: bytes,
    offset: int,
) -> list[int]:
    size = NUM_TUTOR_MOVES * 2
    end = offset + size

    if end > len(rom):
        raise ValueError(
            "ROMサイズが不足しています: "
            f"required end=0x{end:X}"
        )

    return list(
        struct.unpack_from(
            f"<{NUM_TUTOR_MOVES}H",
            rom,
            offset,
        )
    )


def extract_learnsets(
    rom: bytes,
    offset: int,
    num_species: int,
) -> list[int]:
    size = num_species * BYTES_PER_SPECIES
    end = offset + size

    if end > len(rom):
        raise ValueError(
            "ROMサイズが不足しています: "
            f"required end=0x{end:X}"
        )

    return [
        struct.unpack_from(
            "<I",
            rom,
            offset + species_id * BYTES_PER_SPECIES,
        )[0]
        for species_id in range(num_species)
    ]


def make_flag_names(
    tutor_move_ids: list[int],
    move_names: dict[int, str],
) -> list[str]:
    result: list[str] = []

    for tutor_index, move_id in enumerate(tutor_move_ids):
        move_name = move_names.get(
            move_id,
            f"MOVE_UNKNOWN_{move_id}",
        )

        # 同じ技名が重複しても一意になるよう、
        # おしえわざ番号を含める。
        result.append(
            f"TUTOR_FLAG_{tutor_index:02}_{move_name}"
        )

    return result


def create_output(
    tutor_move_ids: list[int],
    learnsets: list[int],
    species_names: dict[int, str],
    move_names: dict[int, str],
) -> str:
    flag_names = make_flag_names(
        tutor_move_ids,
        move_names,
    )

    lines = [
        "@ Move Tutor learnsets",
        "@ Extracted from baserom.gba",
        f"@ Tutor move list ROM offset: 0x{TUTOR_MOVES_ROM_OFFSET:06X}",
        f"@ Learnset ROM offset:        0x{TUTOR_LEARNSETS_ROM_OFFSET:06X}",
        f"@ Tutor move count:           {NUM_TUTOR_MOVES}",
        f"@ Species count:              {len(learnsets)}",
        "",
        "@ 編集方法:",
        "@ 習得させる場合は、対象ポケモンの.4byteに",
        "@ TUTOR_FLAG_*を追加します。",
        "@ 習得させない場合は該当フラグを削除します。",
        "",
        "@ おしえわざ一覧",
    ]

    for tutor_index, move_id in enumerate(tutor_move_ids):
        move_name = move_names.get(
            move_id,
            f"MOVE_UNKNOWN_{move_id}",
        )

        lines.append(
            f"@ {tutor_index:2}: {move_name} "
            f"(move id {move_id})"
        )

    lines.extend([
        "",
        "@ ビット定義",
    ])

    for bit, flag_name in enumerate(flag_names):
        lines.append(
            f".equ {flag_name}, (1 << {bit})"
        )

    lines.extend([
        "",
        "    .align 2",
        "",
        "    .globl gUnknown_85E08C4",
        "gUnknown_85E08C4: @ 0x085E08C4",
    ])

    for move_id in tutor_move_ids:
        move_name = move_names.get(
            move_id,
            f"MOVE_UNKNOWN_{move_id}",
        )

        # 実際の値は定数名で出力する。
        lines.append(
            f"    .2byte {move_name}"
        )

    lines.extend([
        "",
        "    .align 2",
        "",
        "    .globl gUnknown_85E0900",
        "gUnknown_85E0900: @ 0x085E0900",
    ])

    valid_mask = (1 << NUM_TUTOR_MOVES) - 1

    for species_id, flags in enumerate(learnsets):
        species_name = species_names.get(
            species_id,
            f"SPECIES_UNKNOWN_{species_id}",
        )

        enabled_flags = [
            flag_names[bit]
            for bit in range(NUM_TUTOR_MOVES)
            if flags & (1 << bit)
        ]

        expression = (
            " | ".join(enabled_flags)
            if enabled_flags
            else "0"
        )

        unknown_bits = flags & ~valid_mask

        lines.extend([
            "",
            f"@ {species_id}: {species_name}",
            f"@ Original: 0x{flags:08X}",
        ])

        if unknown_bits:
            lines.append(
                f"@ WARNING: unknown upper bits: "
                f"0x{unknown_bits:08X}"
            )

        # GNU assemblerでの改行問題を避けるため、
        # 式全体を必ず1物理行にする。
        lines.append(
            f"    .4byte {expression}"
        )

    lines.append("")

    return "\n".join(lines)


def verify_tutor_moves(
    tutor_move_ids: list[int],
    rom: bytes,
) -> None:
    generated = struct.pack(
        f"<{len(tutor_move_ids)}H",
        *tutor_move_ids,
    )

    start = TUTOR_MOVES_ROM_OFFSET
    end = start + len(generated)

    if generated != rom[start:end]:
        raise RuntimeError(
            "おしえわざ一覧の検証に失敗しました"
        )


def verify_learnsets(
    learnsets: list[int],
    rom: bytes,
) -> None:
    generated = b"".join(
        struct.pack("<I", flags)
        for flags in learnsets
    )

    start = TUTOR_LEARNSETS_ROM_OFFSET
    end = start + len(generated)

    if generated != rom[start:end]:
        raise RuntimeError(
            "習得可否テーブルの検証に失敗しました"
        )


def main() -> None:
    args = parse_args()

    if not args.rom.is_file():
        raise SystemExit(
            f"ROMが見つかりません: {args.rom}"
        )

    try:
        rom = args.rom.read_bytes()

        species_names = load_constants(
            args.species_file,
            "SPECIES_",
        )

        move_names = load_constants(
            args.moves_file,
            "MOVE_",
        )

        tutor_move_ids = extract_tutor_moves(
            rom,
            TUTOR_MOVES_ROM_OFFSET,
        )

        learnsets = extract_learnsets(
            rom,
            TUTOR_LEARNSETS_ROM_OFFSET,
            args.num_species,
        )

        verify_tutor_moves(
            tutor_move_ids,
            rom,
        )

        verify_learnsets(
            learnsets,
            rom,
        )

        output = create_output(
            tutor_move_ids=tutor_move_ids,
            learnsets=learnsets,
            species_names=species_names,
            move_names=move_names,
        )

    except (
        FileNotFoundError,
        ValueError,
        RuntimeError,
        struct.error,
    ) as error:
        raise SystemExit(str(error)) from error

    args.output.parent.mkdir(
        parents=True,
        exist_ok=True,
    )

    args.output.write_text(
        output,
        encoding="utf-8",
    )

    learnset_size = (
        args.num_species * BYTES_PER_SPECIES
    )

    print(f"Input ROM:       {args.rom}")
    print(f"Output file:     {args.output}")
    print(
        "Tutor moves:     "
        f"0x{TUTOR_MOVES_ROM_OFFSET:X}-"
        f"0x{TUTOR_LEARNSETS_ROM_OFFSET:X}"
    )
    print(
        "Tutor learnsets: "
        f"0x{TUTOR_LEARNSETS_ROM_OFFSET:X}-"
        f"0x{TUTOR_LEARNSETS_ROM_OFFSET + learnset_size:X}"
    )
    print(f"Tutor move count: {len(tutor_move_ids)}")
    print(f"Species entries:  {len(learnsets)}")
    print(f"Learnset size:     0x{learnset_size:X}")
    print("Verification:      OK")


if __name__ == "__main__":
    main()
