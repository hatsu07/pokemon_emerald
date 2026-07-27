#!/usr/bin/env python3

from __future__ import annotations

import argparse
import re
import struct
from pathlib import Path


DEFAULT_ROM = Path("baserom.gba")
DEFAULT_OUTPUT = Path("data/pokemon/tmhm_learnsets.inc")

TMHM_ROM_OFFSET = 0x2EF220
BYTES_PER_SPECIES = 8
DEFAULT_NUM_SPECIES = 412


# ビット0～57の順番。
# TM01～TM50、HM01～HM08。
TMHM_NAMES = [
    "TM01_FOCUS_PUNCH",
    "TM02_DRAGON_CLAW",
    "TM03_WATER_PULSE",
    "TM04_CALM_MIND",
    "TM05_ROAR",
    "TM06_TOXIC",
    "TM07_HAIL",
    "TM08_BULK_UP",
    "TM09_BULLET_SEED",
    "TM10_HIDDEN_POWER",
    "TM11_SUNNY_DAY",
    "TM12_TAUNT",
    "TM13_ICE_BEAM",
    "TM14_BLIZZARD",
    "TM15_HYPER_BEAM",
    "TM16_LIGHT_SCREEN",
    "TM17_PROTECT",
    "TM18_RAIN_DANCE",
    "TM19_GIGA_DRAIN",
    "TM20_SAFEGUARD",
    "TM21_FRUSTRATION",
    "TM22_SOLAR_BEAM",
    "TM23_IRON_TAIL",
    "TM24_THUNDERBOLT",
    "TM25_THUNDER",
    "TM26_EARTHQUAKE",
    "TM27_RETURN",
    "TM28_DIG",
    "TM29_PSYCHIC",
    "TM30_SHADOW_BALL",
    "TM31_BRICK_BREAK",
    "TM32_DOUBLE_TEAM",
    "TM33_REFLECT",
    "TM34_SHOCK_WAVE",
    "TM35_FLAMETHROWER",
    "TM36_SLUDGE_BOMB",
    "TM37_SANDSTORM",
    "TM38_FIRE_BLAST",
    "TM39_ROCK_TOMB",
    "TM40_AERIAL_ACE",
    "TM41_TORMENT",
    "TM42_FACADE",
    "TM43_SECRET_POWER",
    "TM44_REST",
    "TM45_ATTRACT",
    "TM46_THIEF",
    "TM47_STEEL_WING",
    "TM48_SKILL_SWAP",
    "TM49_SNATCH",
    "TM50_OVERHEAT",
    "HM01_CUT",
    "HM02_FLY",
    "HM03_SURF",
    "HM04_STRENGTH",
    "HM05_FLASH",
    "HM06_ROCK_SMASH",
    "HM07_WATERFALL",
    "HM08_DIVE",
]


# 以下の形式に対応する。
#
# #define SPECIES_BULBASAUR 1
# .equ SPECIES_BULBASAUR, 1
# SPECIES_BULBASAUR = 1
SPECIES_DEFINE_PATTERNS = [
    re.compile(
        r"^\s*#define\s+"
        r"(SPECIES_[A-Z0-9_]+)\s+"
        r"(0x[0-9A-Fa-f]+|\d+)\b"
    ),
    re.compile(
        r"^\s*\.equ\s+"
        r"(SPECIES_[A-Z0-9_]+)\s*,\s*"
        r"(0x[0-9A-Fa-f]+|\d+)\b"
    ),
    re.compile(
        r"^\s*"
        r"(SPECIES_[A-Z0-9_]+)\s*=\s*"
        r"(0x[0-9A-Fa-f]+|\d+)\b"
    ),
]


def parse_args() -> argparse.Namespace:
    parser = argparse.ArgumentParser(
        description=(
            "Japanese Pokémon Emerald ROMから、"
            "編集可能なTM/HM習得テーブルを生成します。"
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
        "--offset",
        type=lambda value: int(value, 0),
        default=TMHM_ROM_OFFSET,
        help=f"ROMオフセット。既定値: 0x{TMHM_ROM_OFFSET:X}",
    )

    parser.add_argument(
        "--num-species",
        type=int,
        default=DEFAULT_NUM_SPECIES,
        help=f"種族エントリ数。既定値: {DEFAULT_NUM_SPECIES}",
    )

    parser.add_argument(
        "--species-file",
        type=Path,
        help=(
            "SPECIES_*定数が書かれたファイル。"
            "省略時はプロジェクト内から自動検索します。"
        ),
    )

    return parser.parse_args()


def parse_species_line(line: str) -> tuple[str, int] | None:
    for pattern in SPECIES_DEFINE_PATTERNS:
        match = pattern.match(line)

        if match is None:
            continue

        name = match.group(1)
        value = int(match.group(2), 0)

        return name, value

    return None


def scan_species_file(
    path: Path,
    species_names: list[str],
) -> int:
    try:
        text = path.read_text(
            encoding="utf-8",
            errors="ignore",
        )
    except OSError:
        return 0

    found = 0

    for line in text.splitlines():
        result = parse_species_line(line)

        if result is None:
            continue

        name, value = result

        if not 0 <= value < len(species_names):
            continue

        species_names[value] = name
        found += 1

    return found


def find_species_names(
    num_species: int,
    specified_file: Path | None,
) -> list[str]:
    species_names = [
        f"SPECIES_UNKNOWN_{species_id}"
        for species_id in range(num_species)
    ]

    if specified_file is not None:
        if not specified_file.is_file():
            raise FileNotFoundError(
                f"種族定数ファイルが見つかりません: {specified_file}"
            )

        found = scan_species_file(
            specified_file,
            species_names,
        )

        print(
            f"Species constants: {specified_file} "
            f"({found} entries)"
        )

        return species_names

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

    found_total = 0

    for path in Path(".").rglob("*"):
        if not path.is_file():
            continue

        if path.suffix.lower() not in allowed_extensions:
            continue

        if any(part in ignored_directories for part in path.parts):
            continue

        found_total += scan_species_file(
            path,
            species_names,
        )

    print(
        f"Species constants found: {found_total}"
    )

    return species_names


def extract_entries(
    rom: bytes,
    offset: int,
    num_species: int,
) -> list[tuple[int, int]]:
    if offset < 0:
        raise ValueError("ROMオフセットに負数は指定できません")

    required_size = (
        offset
        + num_species * BYTES_PER_SPECIES
    )

    if len(rom) < required_size:
        raise ValueError(
            "ROMサイズが不足しています\n"
            f"ROM size:      0x{len(rom):X}\n"
            f"Required size: 0x{required_size:X}"
        )

    entries: list[tuple[int, int]] = []

    for species_id in range(num_species):
        entry_offset = (
            offset
            + species_id * BYTES_PER_SPECIES
        )

        lo, hi = struct.unpack_from(
            "<II",
            rom,
            entry_offset,
        )

        entries.append((lo, hi))

    return entries


def make_flag_name(bit: int) -> str:
    return f"TMHM_FLAG_{TMHM_NAMES[bit]}"


def create_flag_definitions() -> list[str]:
    lines = [
        "@ TM/HMビット定義",
        "@",
        "@ 先頭の.4byte:",
        "@   TM01～TM32",
        "@",
        "@ 2個目の.4byte:",
        "@   TM33～TM50、HM01～HM08",
        "",
    ]

    for bit, name in enumerate(TMHM_NAMES):
        word_bit = bit % 32

        lines.append(
            f".equ TMHM_FLAG_{name}, "
            f"(1 << {word_bit})"
        )

        if bit == 31:
            lines.extend([
                "",
                "@ ここから2個目の.4byte",
                "",
            ])

    return lines


def decode_word(
    value: int,
    first_bit: int,
    count: int,
) -> list[str]:
    flags: list[str] = []

    for word_bit in range(count):
        if value & (1 << word_bit):
            absolute_bit = first_bit + word_bit
            flags.append(make_flag_name(absolute_bit))

    return flags


def format_word(flags: list[str]) -> list[str]:
    if not flags:
        return ["    .4byte 0"]

    expression = " | ".join(flags)
    return [f"    .4byte {expression}"]


def create_species_entry(
    species_id: int,
    species_name: str,
    lo: int,
    hi: int,
) -> list[str]:
    lo_flags = decode_word(
        value=lo,
        first_bit=0,
        count=32,
    )

    # 第2ワードではTM33がbit 0。
    # 使用されるのはbit 0～25。
    hi_flags = decode_word(
        value=hi,
        first_bit=32,
        count=26,
    )

    lines = [
        "",
        f"@ {species_id}: {species_name}",
        f"@ Original: 0x{lo:08X}, 0x{hi:08X}",
    ]

    lines.extend(format_word(lo_flags))
    lines.extend(format_word(hi_flags))

    return lines


def create_output(
    entries: list[tuple[int, int]],
    species_names: list[str],
    rom_offset: int,
) -> str:
    lines = [
        "@ TM/HM learnsets",
        "@ Extracted from baserom.gba",
        f"@ ROM offset: 0x{rom_offset:06X}",
        f"@ Species entries: {len(entries)}",
        "",
        "@ 編集方法:",
        "@ 習得させる場合はTMHM_FLAG_*を追加します。",
        "@ 習得させない場合は該当するTMHM_FLAG_*を削除します。",
        "@",
        "@ TM01～TM32は1個目の.4byteです。",
        "@ TM33～TM50とHM01～HM08は2個目の.4byteです。",
        "",
    ]

    lines.extend(create_flag_definitions())

    lines.extend([
        "",
        "    .align 2",
        "",
        "gTMHMLearnsets::",
    ])

    for species_id, (lo, hi) in enumerate(entries):
        lines.extend(
            create_species_entry(
                species_id=species_id,
                species_name=species_names[species_id],
                lo=lo,
                hi=hi,
            )
        )

    lines.append("")

    return "\n".join(lines)


def verify_entries(
    entries: list[tuple[int, int]],
    rom: bytes,
    offset: int,
) -> None:
    generated = bytearray()

    for lo, hi in entries:
        generated.extend(
            struct.pack("<II", lo, hi)
        )

    size = len(entries) * BYTES_PER_SPECIES
    original = rom[offset:offset + size]

    if generated != original:
        raise RuntimeError(
            "内部検証に失敗しました。"
            "抽出データがROMと一致しません。"
        )


def main() -> None:
    args = parse_args()

    if not args.rom.is_file():
        raise SystemExit(
            f"ROMが見つかりません: {args.rom}"
        )

    if args.num_species <= 0:
        raise SystemExit(
            "--num-speciesには1以上を指定してください"
        )

    rom = args.rom.read_bytes()

    try:
        entries = extract_entries(
            rom=rom,
            offset=args.offset,
            num_species=args.num_species,
        )

        verify_entries(
            entries=entries,
            rom=rom,
            offset=args.offset,
        )

        species_names = find_species_names(
            num_species=args.num_species,
            specified_file=args.species_file,
        )
    except (
        FileNotFoundError,
        ValueError,
        RuntimeError,
    ) as error:
        raise SystemExit(str(error)) from error

    output_text = create_output(
        entries=entries,
        species_names=species_names,
        rom_offset=args.offset,
    )

    args.output.parent.mkdir(
        parents=True,
        exist_ok=True,
    )

    args.output.write_text(
        output_text,
        encoding="utf-8",
    )

    extracted_size = (
        len(entries) * BYTES_PER_SPECIES
    )

    print(f"Input ROM:    {args.rom}")
    print(f"Output file:  {args.output}")
    print(f"Entries:      {len(entries)}")
    print(f"Extracted:    0x{extracted_size:X} bytes")
    print("Verification: OK")


if __name__ == "__main__":
    main()
