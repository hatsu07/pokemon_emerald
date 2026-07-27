#!/usr/bin/env python3
"""
Pokémon Emerald の進化条件テーブルを baserom.gba から抽出する。

出力:
    data/pokemon/evolution.inc

特徴:
- ROMオフセットを固定せず、先頭の既知進化パターンから自動検出
- include/constants/species.h などから SPECIES_* 名を取得
- EVO_*、ITEM_* 定数も可能な範囲で既存ヘッダから取得
- pokeemerald の struct Evolution:
      u16 method;
      u16 param;
      u16 targetSpecies;
  および EVOS_PER_MON = 5 を前提とする
"""

from __future__ import annotations

from pathlib import Path
import re
import struct
import sys


ROM_PATH = Path("baserom.gba")
OUTPUT_PATH = Path("data/pokemon/evolution.inc")

SPECIES_CONSTANTS_PATH = Path("constants/species_constants.inc")
ITEM_CONSTANTS_CANDIDATES = [
    Path("constants/item_constants.inc"),
    Path("constants/items.inc"),
    Path("include/constants/items.h"),
]
EVO_CONSTANTS_CANDIDATES = [
    Path("constants/evolution_constants.inc"),
    Path("constants/evolution.inc"),
    Path("include/constants/pokemon.h"),
]

EVOS_PER_MON = 5
FIELD_DATA_SIZE = 6  # method, param, targetSpecies の3つのu16

# 日本版ROMスキャンで見つかったフシギダネの先頭進化レコード
JP_BULBASAUR_RECORD_OFFSET = 0x002F5CCC

# vanilla Emerald の進化方式。ヘッダから取得できない場合のフォールバック。
FALLBACK_EVO_METHODS = {
    0: "EVO_NONE",
    1: "EVO_FRIENDSHIP",
    2: "EVO_FRIENDSHIP_DAY",
    3: "EVO_FRIENDSHIP_NIGHT",
    4: "EVO_LEVEL",
    5: "EVO_TRADE",
    6: "EVO_TRADE_ITEM",
    7: "EVO_ITEM",
    8: "EVO_LEVEL_ATK_GT_DEF",
    9: "EVO_LEVEL_ATK_EQ_DEF",
    10: "EVO_LEVEL_ATK_LT_DEF",
    11: "EVO_LEVEL_SILCOON",
    12: "EVO_LEVEL_CASCOON",
    13: "EVO_LEVEL_NINJASK",
    14: "EVO_LEVEL_SHEDINJA",
    15: "EVO_BEAUTY",
}


def read_u16(data: bytes, offset: int) -> int:
    return struct.unpack_from("<H", data, offset)[0]


def iter_constant_files() -> list[Path]:
    roots = [Path("include/constants"), Path("constants"), Path("include")]
    files: list[Path] = []
    seen: set[Path] = set()

    for root in roots:
        if not root.exists():
            continue

        for pattern in ("*.h", "*.inc", "*.s"):
            for path in root.rglob(pattern):
                resolved = path.resolve()
                if resolved not in seen:
                    seen.add(resolved)
                    files.append(path)

    return files


def load_asm_constant_file(path: Path, prefix: str) -> dict[int, str]:
    """指定したASM定数ファイルから .set/.equ 定義を読み込む。"""
    if not path.exists():
        return {}

    text = path.read_text(encoding="utf-8")
    result: dict[int, str] = {}

    pattern = re.compile(
        rf"^\s*\.(?:set|equ)\s+"
        rf"({re.escape(prefix)}[A-Z0-9_]+)\s*,\s*"
        r"(0[xX][0-9A-Fa-f]+|\d+)\b",
        re.MULTILINE,
    )

    for name, raw_value in pattern.findall(text):
        result.setdefault(int(raw_value, 0), name)

    return result


def load_first_existing_constants(
    candidates: list[Path],
    prefix: str,
) -> dict[int, str]:
    result: dict[int, str] = {}

    for path in candidates:
        for value, name in load_asm_constant_file(path, prefix).items():
            result.setdefault(value, name)

    return result


def strip_c_comments(text: str) -> str:
    text = re.sub(r"/\*.*?\*/", "", text, flags=re.DOTALL)
    return re.sub(r"//.*", "", text)


def parse_int_literal(value: str) -> int | None:
    value = value.strip()
    value = re.sub(r"[uUlL]+$", "", value)

    try:
        return int(value, 0)
    except ValueError:
        return None


def load_asm_constants(prefix: str) -> dict[int, str]:
    """
    ASM定数を読む。

    対応形式:
        .set SPECIES_BULBASAUR, 1
        .equ SPECIES_BULBASAUR, 1
        SPECIES_BULBASAUR = 1
    """
    result: dict[int, str] = {}

    directive_pattern = re.compile(
        rf"^\s*\.(?:set|equ)\s+"
        rf"({re.escape(prefix)}[A-Z0-9_]+)\s*,\s*"
        r"(0[xX][0-9A-Fa-f]+|\d+)\b",
        re.MULTILINE,
    )

    assignment_pattern = re.compile(
        rf"^\s*({re.escape(prefix)}[A-Z0-9_]+)\s*=\s*"
        r"(0[xX][0-9A-Fa-f]+|\d+)\b",
        re.MULTILINE,
    )

    for path in iter_constant_files():
        try:
            text = path.read_text(encoding="utf-8")
        except UnicodeDecodeError:
            continue

        # ASMの @ コメントとC形式コメントを除去する。
        text = "\\n".join(line.split("@", 1)[0] for line in text.splitlines())
        text = strip_c_comments(text)

        for pattern in (directive_pattern, assignment_pattern):
            for name, raw_value in pattern.findall(text):
                value = parse_int_literal(raw_value)
                if value is not None:
                    result.setdefault(value, name)

    return result


def load_numeric_defines(prefix: str) -> dict[int, str]:
    """
    #define PREFIX_NAME 123 のような単純な数値定義を読む。
    同じ値に別名がある場合は最初の定義を採用する。
    """
    result: dict[int, str] = {}
    pattern = re.compile(
        rf"^\s*#define\s+({re.escape(prefix)}[A-Z0-9_]+)\s+"
        r"(0[xX][0-9A-Fa-f]+|\d+)[uUlL]*\b",
        re.MULTILINE,
    )

    for path in iter_constant_files():
        try:
            text = strip_c_comments(path.read_text(encoding="utf-8"))
        except UnicodeDecodeError:
            continue

        for name, raw_value in pattern.findall(text):
            value = parse_int_literal(raw_value)
            if value is not None:
                result.setdefault(value, name)

    return result


def load_enum_constants(prefix: str) -> dict[int, str]:
    """
    enum 内の PREFIX_* を簡易解析する。
    明示値と、その後の自動インクリメントに対応する。
    """
    result: dict[int, str] = {}

    for path in iter_constant_files():
        try:
            text = strip_c_comments(path.read_text(encoding="utf-8"))
        except UnicodeDecodeError:
            continue

        for enum_body in re.findall(r"enum\s*(?:[A-Za-z_]\w*)?\s*\{(.*?)\}", text, re.DOTALL):
            current = -1

            for raw_entry in enum_body.split(","):
                entry = raw_entry.strip()
                if not entry:
                    continue

                match = re.match(
                    rf"^({re.escape(prefix)}[A-Z0-9_]+)"
                    r"(?:\s*=\s*(0[xX][0-9A-Fa-f]+|\d+))?$",
                    entry,
                )
                if match is None:
                    continue

                name, explicit = match.groups()
                if explicit is not None:
                    current = int(explicit, 0)
                else:
                    current += 1

                result.setdefault(current, name)

    return result


def load_constants(prefix: str) -> dict[int, str]:
    values = load_asm_constants(prefix)

    for value, name in load_numeric_defines(prefix).items():
        values.setdefault(value, name)

    for value, name in load_enum_constants(prefix).items():
        values.setdefault(value, name)

    return values


def require_species_constants(species: dict[int, str]) -> None:
    required = {
        1: "SPECIES_BULBASAUR",
        2: "SPECIES_IVYSAUR",
        3: "SPECIES_VENUSAUR",
        4: "SPECIES_CHARMANDER",
        5: "SPECIES_CHARMELEON",
        6: "SPECIES_CHARIZARD",
    }

    missing = [
        expected
        for value, expected in required.items()
        if species.get(value) != expected
    ]

    if missing:
        raise SystemExit(
            "種族定数を正しく読み込めませんでした: "
            + ", ".join(missing)
            + f"\n{SPECIES_CONSTANTS_PATH} を確認してください。"
        )


def evolution_record(method: int, param: int, target: int) -> bytes:
    return struct.pack("<HHH", method, param, target)


def species_evolution_entry(records: list[tuple[int, int, int]]) -> bytes:
    if len(records) > EVOS_PER_MON:
        raise ValueError("進化数が EVOS_PER_MON を超えています")

    result = b"".join(
        evolution_record(method, param, target)
        for method, param, target in records
    )
    return result.ljust(SPECIES_ENTRY_SIZE, b"\x00")


def build_detection_signature(evo_level: int) -> bytes:
    """
    species 0～6:
      NONE
      BULBASAUR  -> IVYSAUR Lv16
      IVYSAUR    -> VENUSAUR Lv32
      CHARMANDER -> CHARMELEON Lv16
      CHARMELEON -> CHARIZARD Lv36
      SQUIRTLE   -> WARTORTLE Lv16
      WARTORTLE  -> BLASTOISE Lv36
    """
    entries = [
        species_evolution_entry([]),
        species_evolution_entry([(evo_level, 16, 2)]),
        species_evolution_entry([(evo_level, 32, 3)]),
        species_evolution_entry([(evo_level, 16, 5)]),
        species_evolution_entry([(evo_level, 36, 6)]),
        species_evolution_entry([(evo_level, 16, 8)]),
        species_evolution_entry([(evo_level, 36, 9)]),
    ]
    return b"".join(entries)


def find_all(data: bytes, needle: bytes) -> list[int]:
    offsets: list[int] = []
    start = 0

    while True:
        offset = data.find(needle, start)
        if offset < 0:
            return offsets
        offsets.append(offset)
        start = offset + 1


def validate_layout(
    rom: bytes,
    bulbasaur_offset: int,
    species_stride: int,
    record_stride: int,
    evo_level: int,
) -> bool:
    """既知の序盤進化でレイアウト候補を検証する。"""
    expected = [
        (1, 16, 2),
        (2, 32, 3),
        (4, 16, 5),
        (5, 36, 6),
        (7, 16, 8),
        (8, 36, 9),
        (10, 7, 11),
        (11, 10, 12),
    ]

    if species_stride != EVOS_PER_MON * record_stride:
        return False

    for species_id, param, target in expected:
        offset = bulbasaur_offset + (species_id - 1) * species_stride

        if offset < 0 or offset + FIELD_DATA_SIZE > len(rom):
            return False

        if (
            read_u16(rom, offset) != evo_level
            or read_u16(rom, offset + 2) != param
            or read_u16(rom, offset + 4) != target
        ):
            return False

    return True


def detect_evolution_layout(
    rom: bytes,
    evo_methods: dict[int, str],
) -> tuple[int, int, int]:
    """
    戻り値:
        species1_offset, species_stride, record_stride

    6バイト構造体と、末尾パディング付き8バイト構造体の両方を試す。
    """
    evo_level_values = [
        value
        for value, name in evo_methods.items()
        if name == "EVO_LEVEL"
    ] or list(range(1, 16))

    bulbasaur_candidates: set[int] = {JP_BULBASAUR_RECORD_OFFSET}

    for evo_level in evo_level_values:
        needle = evolution_record(evo_level, 16, 2)
        start = 0
        while True:
            offset = rom.find(needle, start)
            if offset < 0:
                break
            bulbasaur_candidates.add(offset)
            start = offset + 1

    layouts: list[tuple[int, int, int, int]] = []

    # record_stride 6ならspecies_stride 30、
    # record_stride 8ならspecies_stride 40。
    for record_stride in (6, 8):
        species_stride = EVOS_PER_MON * record_stride

        for evo_level in evo_level_values:
            for bulbasaur_offset in sorted(bulbasaur_candidates):
                if validate_layout(
                    rom,
                    bulbasaur_offset,
                    species_stride,
                    record_stride,
                    evo_level,
                ):
                    layouts.append(
                        (
                            bulbasaur_offset,
                            species_stride,
                            record_stride,
                            evo_level,
                        )
                    )

    # 重複除去
    layouts = sorted(set(layouts))

    if not layouts:
        raise SystemExit(
            "進化テーブルのレイアウトを検出できませんでした。\n"
            "診断モードを実行してください:\n"
            "python3 tools/extract_evolutions.py --scan-evo-layout"
        )

    if len(layouts) > 1:
        details = "\n".join(
            "  "
            f"species1=0x{offset:08X}, "
            f"species_stride={species_stride}, "
            f"record_stride={record_stride}, "
            f"EVO_LEVEL={method}"
            for offset, species_stride, record_stride, method in layouts
        )
        raise SystemExit(
            "進化テーブル候補が複数見つかりました:\n" + details
        )

    offset, species_stride, record_stride, method = layouts[0]
    print(
        "進化テーブルレイアウト: "
        f"species1=0x{offset:08X}, "
        f"species_stride={species_stride}, "
        f"record_stride={record_stride}, "
        f"EVO_LEVEL={method}"
    )
    return offset, species_stride, record_stride


def scan_evolution_layout(rom: bytes) -> None:
    """既知レコード間隔を調べる診断モード。"""
    print(
        "フシギダネ候補 0x002F5CCC を基準に"
        "種族間隔30/40バイトを検証:"
    )

    for record_stride in (6, 8):
        species_stride = EVOS_PER_MON * record_stride

        for method in range(1, 16):
            ok = validate_layout(
                rom,
                JP_BULBASAUR_RECORD_OFFSET,
                species_stride,
                record_stride,
                method,
            )
            print(
                f"  record_stride={record_stride}, "
                f"species_stride={species_stride}, "
                f"method={method}: "
                f"{'OK' if ok else 'NG'}"
            )


def scan_evolution_candidates(rom: bytes) -> None:
    print("EVO_LEVEL候補 / BULBASAURレコード候補:")

    found = False

    for method in range(1, 32):
        needle = evolution_record(method, 16, 2)
        start = 0
        offsets: list[int] = []

        while len(offsets) < 20:
            offset = rom.find(needle, start)
            if offset < 0:
                break
            offsets.append(offset)
            start = offset + 1

        if offsets:
            found = True
            rendered = ", ".join(f"0x{x:08X}" for x in offsets)
            print(f"  method={method}: {rendered}")

    if not found:
        print("  候補なし")


def format_constant(mapping: dict[int, str], value: int, fallback: str) -> str:
    return mapping.get(value, f"{fallback}_{value:03d}")


def format_param(
    method_name: str,
    param: int,
    items: dict[int, str],
) -> str:
    if method_name in {"EVO_ITEM", "EVO_TRADE_ITEM"}:
        return format_constant(items, param, "ITEM")

    return str(param)


def determine_species_count(
    species: dict[int, str],
    species1_offset: int,
    species_stride: int,
    rom_size: int,
) -> int:
    """
    ヘッダにある最大種族IDから件数を決める。
    拡張定義が混在してROMを超える場合は、ROMサイズで制限する。
    """
    if not species:
        raise SystemExit("SPECIES_* 定数が見つかりません")

    count = max(species) + 1
    max_from_rom = 1 + (rom_size - species1_offset) // species_stride
    count = min(count, max_from_rom)

    # vanilla Emeraldでは少なくとも386種＋内部種族がある。
    if count < 387:
        raise SystemExit(f"種族数が不自然です: {count}")

    return count


def main() -> None:
    if not ROM_PATH.exists():
        raise SystemExit(f"{ROM_PATH} が見つかりません")

    rom = ROM_PATH.read_bytes()

    if "--scan-evo" in sys.argv:
        scan_evolution_candidates(rom)
        return

    if "--scan-evo-layout" in sys.argv:
        scan_evolution_layout(rom)
        return

    # このリポジトリでは種族定数が
    # constants/species_constants.inc の .set 形式で定義されている。
    species = load_asm_constant_file(
        SPECIES_CONSTANTS_PATH,
        "SPECIES_",
    )

    # 明示ファイルで不足する場合だけ汎用探索結果を補う。
    for value, name in load_constants("SPECIES_").items():
        species.setdefault(value, name)

    items = load_first_existing_constants(
        ITEM_CONSTANTS_CANDIDATES,
        "ITEM_",
    )
    for value, name in load_constants("ITEM_").items():
        items.setdefault(value, name)

    evo_methods = load_first_existing_constants(
        EVO_CONSTANTS_CANDIDATES,
        "EVO_",
    )
    for value, name in load_constants("EVO_").items():
        evo_methods.setdefault(value, name)

    print(
        f"種族定数: {len(species)} 件 "
        f"({SPECIES_CONSTANTS_PATH})"
    )

    require_species_constants(species)

    if not evo_methods:
        evo_methods = FALLBACK_EVO_METHODS.copy()
    else:
        for value, name in FALLBACK_EVO_METHODS.items():
            evo_methods.setdefault(value, name)

    species1_offset, species_stride, record_stride = (
        detect_evolution_layout(rom, evo_methods)
    )
    species_count = determine_species_count(
        species,
        species1_offset,
        species_stride,
        len(rom),
    )
    table_size = max(0, species_count - 1) * species_stride

    lines: list[str] = [
        "@ Auto-generated from baserom.gba by tools/extract_evolutions.py",
        f"@ Species 1 ROM offset: 0x{species1_offset:08X}",
        f"@ Species count: {species_count}",
        f"@ Evolutions per species: {EVOS_PER_MON}",
        f"@ Record stride: {record_stride} bytes",
        f"@ Species stride: {species_stride} bytes",
        "",
        ".align 2",
        "gEvolutionTable::",
    ]

    nonempty_count = 0

    for species_id in range(species_count):
        species_name = format_constant(species, species_id, "SPECIES")
        # このROMではテーブルがspecies 1から始まる可能性がある。
        # species 0はゼロエントリとして生成する。
        entry_offset = (
            species1_offset + (species_id - 1) * species_stride
            if species_id > 0
            else -1
        )

        lines.extend(
            [
                "",
                f"@ {species_name}",
                f"@ ROM offset: {f'0x{entry_offset:08X}' if entry_offset >= 0 else 'synthetic'}",
                f"gEvolution_{species_name.removeprefix('SPECIES_')}:",
            ]
        )

        for slot in range(EVOS_PER_MON):
            if species_id == 0:
                method = param = target = 0
            else:
                record_offset = entry_offset + slot * record_stride
                method = read_u16(rom, record_offset)
                param = read_u16(rom, record_offset + 2)
                target = read_u16(rom, record_offset + 4)

            method_name = format_constant(evo_methods, method, "EVO_METHOD")
            target_name = format_constant(species, target, "SPECIES")
            param_name = format_param(method_name, param, items)

            if method == 0 and param == 0 and target == 0:
                lines.append(
                    "\t.2byte EVO_NONE, 0, SPECIES_NONE"
                    f" @ slot {slot}"
                )
            else:
                nonempty_count += 1
                lines.append(
                    f"\t.2byte {method_name}, {param_name}, {target_name}"
                    f" @ slot {slot}"
                )

    OUTPUT_PATH.parent.mkdir(parents=True, exist_ok=True)
    OUTPUT_PATH.write_text("\n".join(lines) + "\n", encoding="utf-8")

    print(f"{OUTPUT_PATH} を生成しました")
    print(f"species 1位置: 0x{species1_offset:08X}")
    print(f"種族エントリ数: {species_count}")
    print(f"有効な進化条件数: {nonempty_count}")
    print(f"抽出サイズ: 0x{table_size:X} bytes")


if __name__ == "__main__":
    try:
        main()
    except (IndexError, struct.error) as error:
        print(f"ROM範囲外を読み込みました: {error}", file=sys.stderr)
        raise SystemExit(1)
