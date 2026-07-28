#!/usr/bin/env python3

from __future__ import annotations

import ast
import operator
import re
import struct
import sys
from pathlib import Path


ROM_PATH = Path("baserom.gba")
OUTPUT_PATH = Path("data/wild_encounters/battle_pyramid_mons.inc")

START_OFFSET = 0x52E3B8
GROUP_COUNT = 7
SLOTS_PER_GROUP = 12

WILD_MON_SIZE = 4
WILD_MON_INFO_SIZE = 8
GROUP_SIZE = SLOTS_PER_GROUP * WILD_MON_SIZE + WILD_MON_INFO_SIZE

GBA_ROM_BASE = 0x08000000


# 定数式で許可する演算
BINARY_OPERATORS = {
    ast.Add: operator.add,
    ast.Sub: operator.sub,
    ast.Mult: operator.mul,
    ast.FloorDiv: operator.floordiv,
    ast.Mod: operator.mod,
    ast.LShift: operator.lshift,
    ast.RShift: operator.rshift,
    ast.BitOr: operator.or_,
    ast.BitAnd: operator.and_,
    ast.BitXor: operator.xor,
}

UNARY_OPERATORS = {
    ast.UAdd: operator.pos,
    ast.USub: operator.neg,
    ast.Invert: operator.invert,
}


def remove_comments(text: str) -> str:
    """C、C++、アセンブリの行コメントを除去する。"""
    text = re.sub(r"/\*.*?\*/", "", text, flags=re.DOTALL)

    lines: list[str] = []

    for line in text.splitlines():
        line = re.sub(r"//.*$", "", line)
        line = re.sub(r"@.*$", "", line)
        lines.append(line)

    return "\n".join(lines)


def normalize_integer_suffixes(expression: str) -> str:
    """0x123U、123ULなどのC整数サフィックスを除去する。"""
    return re.sub(
        r"(?<=\d)[uUlL]+\b",
        "",
        expression,
    )


def evaluate_expression(
    expression: str,
    constants: dict[str, int],
) -> int | None:
    """
    数値、定数名、基本的な整数演算だけを安全に評価する。
    未解決の名前を含む場合はNoneを返す。
    """
    expression = normalize_integer_suffixes(expression.strip())

    # Cのキャストを単純除去
    expression = re.sub(
        r"\(\s*(?:u?int(?:8|16|32|64)_t|unsigned|signed|int|short|long)\s*\)",
        "",
        expression,
    )

    try:
        node = ast.parse(expression, mode="eval")
    except SyntaxError:
        return None

    def visit(current: ast.AST) -> int:
        if isinstance(current, ast.Expression):
            return visit(current.body)

        if isinstance(current, ast.Constant):
            if isinstance(current.value, int):
                return current.value
            raise ValueError

        if isinstance(current, ast.Name):
            if current.id not in constants:
                raise KeyError(current.id)
            return constants[current.id]

        if isinstance(current, ast.BinOp):
            operation = BINARY_OPERATORS.get(type(current.op))
            if operation is None:
                raise ValueError

            return operation(
                visit(current.left),
                visit(current.right),
            )

        if isinstance(current, ast.UnaryOp):
            operation = UNARY_OPERATORS.get(type(current.op))
            if operation is None:
                raise ValueError

            return operation(visit(current.operand))

        raise ValueError

    try:
        return visit(node)
    except (KeyError, ValueError, ZeroDivisionError):
        return None


def collect_constant_expressions(root: Path) -> dict[str, str]:
    """リポジトリ全体から定数定義らしき行を収集する。"""
    expressions: dict[str, str] = {}

    suffixes = {
        ".h",
        ".inc",
        ".s",
        ".c",
        ".txt",
    }

    define_pattern = re.compile(
        r"^\s*#define\s+"
        r"([A-Za-z_][A-Za-z0-9_]*)\s+"
        r"(.+?)\s*$"
    )

    asm_pattern = re.compile(
        r"^\s*\.(?:set|equ)\s+"
        r"([A-Za-z_][A-Za-z0-9_]*)\s*,\s*"
        r"(.+?)\s*$"
    )

    assignment_pattern = re.compile(
        r"^\s*"
        r"([A-Za-z_][A-Za-z0-9_]*)\s*=\s*"
        r"(.+?)"
        r",?\s*$"
    )

    for path in root.rglob("*"):
        if not path.is_file():
            continue

        if ".git" in path.parts:
            continue

        if path.suffix.lower() not in suffixes:
            continue

        try:
            text = path.read_text(
                encoding="utf-8",
                errors="ignore",
            )
        except OSError:
            continue

        text = remove_comments(text)

        for line in text.splitlines():
            match = define_pattern.match(line)

            if match is None:
                match = asm_pattern.match(line)

            if match is None:
                match = assignment_pattern.match(line)

            if match is None:
                continue

            name = match.group(1)
            expression = match.group(2).strip()

            # 関数形式マクロは除外
            if "(" in name:
                continue

            expressions.setdefault(name, expression)

    return expressions


def resolve_constants(
    expressions: dict[str, str],
) -> dict[str, int]:
    """依存する定数を複数回評価して解決する。"""
    resolved: dict[str, int] = {}
    pending = dict(expressions)

    while pending:
        progress = False

        for name, expression in list(pending.items()):
            value = evaluate_expression(expression, resolved)

            if value is None:
                continue

            resolved[name] = value
            del pending[name]
            progress = True

        if not progress:
            break

    return resolved


def load_species_names(root: Path) -> dict[int, str]:
    expressions = collect_constant_expressions(root)
    constants = resolve_constants(expressions)

    species_names: dict[int, str] = {}

    for name, value in constants.items():
        if not name.startswith("SPECIES_"):
            continue

        # 同値定数がある場合、最初に発見した名前を優先
        species_names.setdefault(value, name)

    return species_names


def species_name(
    species_id: int,
    species_names: dict[int, str],
) -> str:
    return species_names.get(
        species_id,
        f"0x{species_id:04X}",
    )


def decode_group(
    rom: bytes,
    group_index: int,
    species_names: dict[int, str],
) -> tuple[list[str], int, int, bytes]:
    group_offset = START_OFFSET + group_index * GROUP_SIZE

    lines: list[str] = []

    for slot in range(SLOTS_PER_GROUP):
        offset = group_offset + slot * WILD_MON_SIZE

        min_level, max_level, species_id = struct.unpack_from(
            "<BBH",
            rom,
            offset,
        )

        lines.append(
            f"    wildmon {min_level}, {max_level}, "
            f"{species_name(species_id, species_names)}"
        )

    info_offset = group_offset + SLOTS_PER_GROUP * WILD_MON_SIZE

    encounter_rate = rom[info_offset]
    padding = rom[info_offset + 1:info_offset + 4]
    mons_pointer = struct.unpack_from(
        "<I",
        rom,
        info_offset + 4,
    )[0]

    return lines, encounter_rate, mons_pointer, padding


def generate_assembly(
    rom: bytes,
    species_names: dict[int, str],
) -> str:
    output: list[str] = []

    output.append(
        "@ Battle Pyramid wild Pokémon data"
    )
    output.append(
        f"@ ROM 0x{START_OFFSET:06X}-"
        f"0x{START_OFFSET + GROUP_COUNT * GROUP_SIZE - 1:06X}"
    )
    output.append("")

    for group_index in range(GROUP_COUNT):
        group_number = group_index + 1
        group_offset = START_OFFSET + group_index * GROUP_SIZE

        (
            mon_lines,
            encounter_rate,
            mons_pointer,
            padding,
        ) = decode_group(
            rom,
            group_index,
            species_names,
        )

        expected_pointer = GBA_ROM_BASE + group_offset

        if mons_pointer != expected_pointer:
            raise ValueError(
                f"グループ{group_number}のポインタが不一致です: "
                f"実際=0x{mons_pointer:08X}, "
                f"期待=0x{expected_pointer:08X}"
            )

        if padding != b"\x00\x00\x00":
            raise ValueError(
                f"グループ{group_number}のpaddingが0ではありません: "
                f"{padding.hex(' ')}"
            )

        mons_label = (
            f"gBattlePyramidWildMons_{group_number}"
        )
        info_label = (
            f"gBattlePyramidWildMonsInfo_{group_number}"
        )

        output.append(
            f"{mons_label}:: @ 0x{expected_pointer:08X}"
        )
        output.extend(mon_lines)
        output.append("")

        info_address = (
            GBA_ROM_BASE
            + group_offset
            + SLOTS_PER_GROUP * WILD_MON_SIZE
        )

        output.append(
            f"{info_label}:: @ 0x{info_address:08X}"
        )
        output.append(
            f"    wildmoninfo {encounter_rate}, {mons_label}"
        )
        output.append("")

    return "\n".join(output).rstrip() + "\n"


def main() -> int:
    if not ROM_PATH.exists():
        print(
            f"エラー: {ROM_PATH} が見つかりません",
            file=sys.stderr,
        )
        return 1

    rom = ROM_PATH.read_bytes()

    end_offset = START_OFFSET + GROUP_COUNT * GROUP_SIZE

    if end_offset > len(rom):
        print(
            "エラー: ROMサイズが不足しています",
            file=sys.stderr,
        )
        return 1

    print("SPECIES_* 定数を検索しています...")
    species_names = load_species_names(Path("."))

    if not species_names:
        print(
            "エラー: SPECIES_* 定数を1件も取得できませんでした",
            file=sys.stderr,
        )
        return 1

    print(f"種族定数: {len(species_names)}件")

    try:
        assembly = generate_assembly(
            rom,
            species_names,
        )
    except ValueError as error:
        print(
            f"エラー: {error}",
            file=sys.stderr,
        )
        return 1

    OUTPUT_PATH.parent.mkdir(
        parents=True,
        exist_ok=True,
    )

    OUTPUT_PATH.write_text(
        assembly,
        encoding="utf-8",
    )

    print(f"生成完了: {OUTPUT_PATH}")
    print(
        f"対象範囲: 0x{START_OFFSET:X}-"
        f"0x{end_offset:X}"
    )
    print(
        f"生成サイズ: 0x{end_offset - START_OFFSET:X}"
    )

    return 0


if __name__ == "__main__":
    raise SystemExit(main())
