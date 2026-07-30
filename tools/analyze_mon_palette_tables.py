#!/usr/bin/env python3

from pathlib import Path
import argparse
import struct
import sys


ROM_BASE = 0x08000000
ENTRY_SIZE = 8
SPECIES_COUNT = 440

TABLES = (
    {
        "name": "gMonPaletteTable",
        "offset": 0x2D6F08,
        "incbin_size": 0xDC0,
        "label_prefix": "gMonPalette",
    },
    {
        "name": "gMonShinyPaletteTable",
        "offset": 0x2D7CC8,
        "incbin_size": 0xF34,
        "label_prefix": "gMonShinyPalette",
    },
)


def is_rom_pointer(value: int, rom_size: int) -> bool:
    return ROM_BASE <= value < ROM_BASE + rom_size


def read_names(path: Path | None) -> list[str]:
    if path is None:
        return []

    names = []

    for line in path.read_text(encoding="utf-8").splitlines():
        line = line.strip()

        if not line or line.startswith("#"):
            continue

        names.append(line)

    return names


def sanitize_name(name: str) -> str:
    result = []

    for char in name:
        if char.isascii() and char.isalnum():
            result.append(char)
        else:
            result.append("_")

    value = "".join(result).strip("_")
    return value or "Unknown"


def species_name(index: int, names: list[str]) -> str:
    if index < len(names):
        return sanitize_name(names[index])

    return f"Species{index:03d}"


def read_entry(
    rom: bytes,
    offset: int,
) -> tuple[int, int, int]:
    return struct.unpack_from("<IHH", rom, offset)


def analyze_table(
    rom: bytes,
    table: dict,
    names: list[str],
) -> list[dict]:
    table_name = table["name"]
    table_offset = table["offset"]
    incbin_size = table["incbin_size"]
    label_prefix = table["label_prefix"]

    incbin_end = table_offset + incbin_size
    expected_size = SPECIES_COUNT * ENTRY_SIZE
    expected_end = table_offset + expected_size

    print()
    print(f"===== {table_name} =====")
    print(f"開始             : 0x{table_offset:06X}")
    print(f"incbinサイズ     : 0x{incbin_size:X}")
    print(f"incbin終了       : 0x{incbin_end:06X}")
    print(f"440件分サイズ    : 0x{expected_size:X}")
    print(f"440件分終了      : 0x{expected_end:06X}")

    if incbin_size != expected_size:
        difference = incbin_size - expected_size

        if difference > 0:
            print(f"440件以降の余剰  : 0x{difference:X}バイト")
        else:
            print(f"不足             : 0x{-difference:X}バイト")

    entries = []

    invalid_pointer_count = 0
    unexpected_tag_count = 0
    nonzero_extra_count = 0

    for index in range(SPECIES_COUNT):
        entry_offset = table_offset + index * ENTRY_SIZE

        if entry_offset + ENTRY_SIZE > len(rom):
            raise ValueError(
                f"{table_name}: entry {index} がROM範囲外です"
            )

        pointer, tag, extra = read_entry(rom, entry_offset)

        pointer_valid = is_rom_pointer(pointer, len(rom))
        tag_expected = tag == index
        extra_zero = extra == 0

        if not pointer_valid:
            invalid_pointer_count += 1

        if not tag_expected:
            unexpected_tag_count += 1

        if not extra_zero:
            nonzero_extra_count += 1

        name = species_name(index, names)

        entries.append(
            {
                "index": index,
                "name": name,
                "entry_offset": entry_offset,
                "pointer": pointer,
                "rom_offset": (
                    pointer - ROM_BASE if pointer_valid else None
                ),
                "tag": tag,
                "extra": extra,
                "pointer_valid": pointer_valid,
                "tag_expected": tag_expected,
                "extra_zero": extra_zero,
                "label": f"{label_prefix}_{name}",
            }
        )

    print()
    print(f"有効ROMポインタ   : {SPECIES_COUNT - invalid_pointer_count}"
          f"/{SPECIES_COUNT}")
    print(f"indexと異なるtag  : {unexpected_tag_count}")
    print(f"非0の末尾値       : {nonzero_extra_count}")

    print()
    print("先頭10件:")

    for entry in entries[:10]:
        pointer_text = (
            f"0x{entry['pointer']:08X}"
            if entry["pointer_valid"]
            else f"INVALID(0x{entry['pointer']:08X})"
        )

        print(
            f"{entry['index']:3d} "
            f"entry=0x{entry['entry_offset']:06X} "
            f"ptr={pointer_text} "
            f"tag={entry['tag']:3d} "
            f"extra=0x{entry['extra']:04X} "
            f"{entry['label']}"
        )

    print()
    print("末尾5件:")

    for entry in entries[-5:]:
        pointer_text = (
            f"0x{entry['pointer']:08X}"
            if entry["pointer_valid"]
            else f"INVALID(0x{entry['pointer']:08X})"
        )

        print(
            f"{entry['index']:3d} "
            f"entry=0x{entry['entry_offset']:06X} "
            f"ptr={pointer_text} "
            f"tag={entry['tag']:3d} "
            f"extra=0x{entry['extra']:04X} "
            f"{entry['label']}"
        )

    return entries


def write_assembly(
    output: Path,
    normal_entries: list[dict],
    shiny_entries: list[dict],
) -> None:
    lines = [
        "@ 自動生成",
        "@ Pokémon通常色・色違いパレットテーブル",
        "",
        ".macro mon_palette_entry palette:req, tag:req, extra=0",
        "\t.4byte \\palette",
        "\t.2byte \\tag",
        "\t.2byte \\extra",
        ".endm",
        "",
        ".globl gMonPaletteTable",
        "gMonPaletteTable: @ 0x082D6F08",
    ]

    for entry in normal_entries:
        lines.append(
            f"\tmon_palette_entry {entry['label']}, "
            f"{entry['tag']}, 0x{entry['extra']:04X}"
            f" @ 0x{entry['pointer']:08X}"
        )

    lines.extend(
        [
            "",
            ".globl gMonShinyPaletteTable",
            "gMonShinyPaletteTable: @ 0x082D7CC8",
        ]
    )

    for entry in shiny_entries:
        lines.append(
            f"\tmon_palette_entry {entry['label']}, "
            f"{entry['tag']}, 0x{entry['extra']:04X}"
            f" @ 0x{entry['pointer']:08X}"
        )

    lines.append("")

    output.parent.mkdir(parents=True, exist_ok=True)
    output.write_text("\n".join(lines), encoding="utf-8")


def write_pointer_list(
    output: Path,
    normal_entries: list[dict],
    shiny_entries: list[dict],
) -> None:
    combined = []

    for kind, entries in (
        ("normal", normal_entries),
        ("shiny", shiny_entries),
    ):
        for entry in entries:
            if entry["rom_offset"] is None:
                continue

            combined.append(
                (
                    entry["rom_offset"],
                    kind,
                    entry["index"],
                    entry["label"],
                    entry["pointer"],
                )
            )

    combined.sort()

    lines = []

    for rom_offset, kind, index, label, pointer in combined:
        lines.append(
            f"0x{rom_offset:06X} "
            f"0x{pointer:08X} "
            f"{kind:6s} "
            f"{index:3d} "
            f"{label}"
        )

    output.parent.mkdir(parents=True, exist_ok=True)
    output.write_text("\n".join(lines) + "\n", encoding="utf-8")


def inspect_shiny_tail(rom: bytes) -> None:
    start = 0x2D7CC8 + SPECIES_COUNT * ENTRY_SIZE
    end = 0x2D7CC8 + 0xF34

    print()
    print("===== gMonShinyPaletteTableの440件以降 =====")
    print(f"範囲: 0x{start:06X}-0x{end - 1:06X}")
    print(f"サイズ: 0x{end - start:X}")

    print()
    print("先頭64バイト:")

    for row_start in range(start, min(start + 64, end), 16):
        chunk = rom[row_start:min(row_start + 16, end)]
        hex_text = " ".join(f"{byte:02x}" for byte in chunk)
        print(f"{row_start:08x}: {hex_text}")

    print()
    print("8バイト単位で解釈した先頭8件:")

    count = min(8, (end - start) // ENTRY_SIZE)

    for index in range(count):
        offset = start + index * ENTRY_SIZE
        pointer, value1, value2 = read_entry(rom, offset)

        pointer_status = (
            "ROM_PTR"
            if is_rom_pointer(pointer, len(rom))
            else "not_ptr"
        )

        print(
            f"0x{offset:06X}: "
            f"0x{pointer:08X} "
            f"0x{value1:04X} "
            f"0x{value2:04X} "
            f"{pointer_status}"
        )


def main() -> int:
    parser = argparse.ArgumentParser(
        description=(
            "gMonPaletteTableとgMonShinyPaletteTableを解析します"
        )
    )
    parser.add_argument(
        "rom",
        type=Path,
        nargs="?",
        default=Path("baserom.gba"),
    )
    parser.add_argument(
        "--names",
        type=Path,
        help="1行1種の英語シンボル名一覧",
    )
    parser.add_argument(
        "--asm-output",
        type=Path,
        default=Path("data/pokemon/mon_palette_tables.inc"),
    )
    parser.add_argument(
        "--pointer-output",
        type=Path,
        default=Path("/tmp/mon_palette_pointers.txt"),
    )
    args = parser.parse_args()

    try:
        rom = args.rom.read_bytes()
        names = read_names(args.names)

        normal_entries = analyze_table(
            rom,
            TABLES[0],
            names,
        )
        shiny_entries = analyze_table(
            rom,
            TABLES[1],
            names,
        )

        write_assembly(
            args.asm_output,
            normal_entries,
            shiny_entries,
        )
        write_pointer_list(
            args.pointer_output,
            normal_entries,
            shiny_entries,
        )

        inspect_shiny_tail(rom)

    except (OSError, ValueError, struct.error) as error:
        print(f"エラー: {error}", file=sys.stderr)
        return 1

    print()
    print(f"テーブルinc: {args.asm_output}")
    print(f"実体位置一覧: {args.pointer_output}")

    return 0


if __name__ == "__main__":
    raise SystemExit(main())
