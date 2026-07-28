#!/usr/bin/env python3

from __future__ import annotations

import ast
import operator
import re
from pathlib import Path

ROM_PATH = Path("baserom.gba")
EVENT_SCRIPTS_PATH = Path("data/text/generated/event_scripts.inc")

SETWILDBATTLE_OPCODE = 0xB6
COMMAND_SIZE = 6

SEARCH_SUFFIXES = {
    ".h",
    ".inc",
    ".s",
}


BINARY_OPERATORS = {
    ast.Add: operator.add,
    ast.Sub: operator.sub,
    ast.Mult: operator.mul,
    ast.FloorDiv: operator.floordiv,
    ast.Div: operator.floordiv,
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


def evaluate_expression(
    expression: str,
    known_constants: dict[str, int],
) -> int | None:
    expression = expression.strip()

    # コメントを除去
    expression = expression.split("@", 1)[0]
    expression = expression.split("//", 1)[0]
    expression = expression.split("/*", 1)[0].strip()

    # Cの整数接尾辞を除去
    expression = re.sub(
        r"(?<=\d)[uUlL]+\b",
        "",
        expression,
    )

    # 既知の定数を数値へ置換
    def replace_name(match: re.Match[str]) -> str:
        name = match.group(0)

        if name in known_constants:
            return str(known_constants[name])

        return name

    expression = re.sub(
        r"\b[A-Za-z_][A-Za-z0-9_]*\b",
        replace_name,
        expression,
    )

    try:
        tree = ast.parse(expression, mode="eval")
    except SyntaxError:
        return None

    def evaluate_node(node: ast.AST) -> int:
        if isinstance(node, ast.Expression):
            return evaluate_node(node.body)

        if isinstance(node, ast.Constant):
            if isinstance(node.value, int):
                return node.value

            raise ValueError

        if isinstance(node, ast.BinOp):
            operation = BINARY_OPERATORS.get(type(node.op))

            if operation is None:
                raise ValueError

            return operation(
                evaluate_node(node.left),
                evaluate_node(node.right),
            )

        if isinstance(node, ast.UnaryOp):
            operation = UNARY_OPERATORS.get(type(node.op))

            if operation is None:
                raise ValueError

            return operation(evaluate_node(node.operand))

        raise ValueError

    try:
        return evaluate_node(tree)
    except (ValueError, ZeroDivisionError):
        return None


def find_constant_files() -> list[Path]:
    ignored_dirs = {
        ".git",
        "build",
        "tools/binutils",
    }

    results: list[Path] = []

    for path in Path(".").rglob("*"):
        if not path.is_file():
            continue

        if path.suffix.lower() not in SEARCH_SUFFIXES:
            continue

        if any(part in ignored_dirs for part in path.parts):
            continue

        results.append(path)

    return results


def load_all_constants(
    paths: list[Path],
) -> dict[str, int]:
    definitions: list[tuple[str, str]] = []

    patterns = (
        # #define NAME value
        re.compile(
            r"^\s*#define\s+"
            r"([A-Za-z_][A-Za-z0-9_]*)"
            r"\s+(.+?)\s*$"
        ),

        # .set NAME, value
        re.compile(
            r"^\s*\.set\s+"
            r"([A-Za-z_][A-Za-z0-9_]*)"
            r"\s*,\s*(.+?)\s*$"
        ),

        # .equ NAME, value
        re.compile(
            r"^\s*\.equ\s+"
            r"([A-Za-z_][A-Za-z0-9_]*)"
            r"\s*,\s*(.+?)\s*$"
        ),

        # NAME = value
        re.compile(
            r"^\s*"
            r"([A-Za-z_][A-Za-z0-9_]*)"
            r"\s*=\s*(.+?)\s*$"
        ),
    )

    for path in paths:
        try:
            text = path.read_text(
                encoding="utf-8",
                errors="ignore",
            )
        except OSError:
            continue

        for line in text.splitlines():
            for pattern in patterns:
                match = pattern.match(line)

                if not match:
                    continue

                name = match.group(1)
                expression = match.group(2)

                # 引数付きCマクロは除外
                if "(" in name:
                    continue

                definitions.append((name, expression))
                break

    known: dict[str, int] = {}

    # 前に定義された別定数を使う式にも対応するため複数回解決
    for _ in range(20):
        changed = False

        for name, expression in definitions:
            if name in known:
                continue

            value = evaluate_expression(expression, known)

            if value is None:
                continue

            known[name] = value
            changed = True

        if not changed:
            break

    return known


def reverse_constants(
    constants: dict[str, int],
    prefix: str,
) -> dict[int, str]:
    result: dict[int, str] = {}

    for name, value in constants.items():
        if not name.startswith(prefix):
            continue

        # 終端値などより実際の定数名を優先
        if name.endswith((
            "_COUNT",
            "_END",
            "_MAX",
        )):
            continue

        result.setdefault(value, name)

    return result


def parse_incbin_ranges(
    text: str,
) -> list[tuple[int, int, int]]:
    pattern = re.compile(
        r'^\s*\.incbin\s+"baserom\.gba"\s*,\s*'
        r"(0x[0-9A-Fa-f]+|\d+)\s*,\s*"
        r"(0x[0-9A-Fa-f]+|\d+)",
        re.MULTILINE,
    )

    ranges: list[tuple[int, int, int]] = []

    for match in pattern.finditer(text):
        start = int(match.group(1), 0)
        size = int(match.group(2), 0)
        line = text.count("\n", 0, match.start()) + 1

        ranges.append((
            start,
            start + size,
            line,
        ))

    return ranges


def find_containing_incbin(
    ranges: list[tuple[int, int, int]],
    offset: int,
) -> tuple[int, int, int] | None:
    for start, end, line in ranges:
        if start <= offset and offset + COMMAND_SIZE <= end:
            return start, end, line

    return None


def main() -> int:
    if not ROM_PATH.exists():
        print(f"エラー: {ROM_PATH} がありません")
        return 1

    if not EVENT_SCRIPTS_PATH.exists():
        print(f"エラー: {EVENT_SCRIPTS_PATH} がありません")
        return 1

    rom = ROM_PATH.read_bytes()
    source = EVENT_SCRIPTS_PATH.read_text(
        encoding="utf-8",
        errors="ignore",
    )

    constant_files = find_constant_files()
    all_constants = load_all_constants(constant_files)

    species = reverse_constants(
        all_constants,
        "SPECIES_",
    )

    items = reverse_constants(
        all_constants,
        "ITEM_",
    )

    incbin_ranges = parse_incbin_ranges(source)

    print(f"検索した定数ファイル: {len(constant_files)}件")
    print(f"読み込んだ全定数: {len(all_constants)}件")
    print(f"種族定数: {len(species)}件")
    print(f"道具定数: {len(items)}件")
    print(f"incbin範囲: {len(incbin_ranges)}件")
    print()

    rayquaza = all_constants.get("SPECIES_RAYQUAZA")
    item_none = all_constants.get("ITEM_NONE")

    print(
        "SPECIES_RAYQUAZA:",
        rayquaza
        if rayquaza is not None
        else "未検出",
    )

    print(
        "ITEM_NONE:",
        item_none
        if item_none is not None
        else "未検出",
    )

    print()

    candidates: list[
        tuple[
            int,
            str,
            int,
            str,
            int,
            int,
            int,
        ]
    ] = []

    # ROM全体を走査してから、event_scripts.inc内の
    # incbinに含まれるものだけ残す
    for offset in range(
        0,
        len(rom) - COMMAND_SIZE + 1,
    ):
        if rom[offset] != SETWILDBATTLE_OPCODE:
            continue

        containing = find_containing_incbin(
            incbin_ranges,
            offset,
        )

        if containing is None:
            continue

        species_id = int.from_bytes(
            rom[offset + 1:offset + 3],
            "little",
        )

        level = rom[offset + 3]

        item_id = int.from_bytes(
            rom[offset + 4:offset + 6],
            "little",
        )

        if species_id not in species:
            continue

        if not 1 <= level <= 100:
            continue

        # ITEM_NONEが未定義の場合も0を許可
        if item_id != 0 and item_id not in items:
            continue

        start, end, source_line = containing

        species_name = species[species_id]
        item_name = items.get(item_id)

        if item_name is None:
            item_name = (
                "ITEM_NONE"
                if item_id == 0
                else str(item_id)
            )

        candidates.append((
            offset,
            species_name,
            level,
            item_name,
            start,
            end,
            source_line,
        ))

    if not candidates:
        print("setwildbattle候補は見つかりませんでした")
        return 0

    for index, candidate in enumerate(candidates, 1):
        (
            offset,
            species_name,
            level,
            item_name,
            incbin_start,
            incbin_end,
            source_line,
        ) = candidate

        before_size = offset - incbin_start
        after_start = offset + COMMAND_SIZE
        after_size = incbin_end - after_start

        print(f"候補 {index}")
        print(f"  ROMオフセット : 0x{offset:08X}")
        print(f"  GBAアドレス   : 0x{offset + 0x08000000:08X}")
        print(f"  incbin行      : {source_line}")
        print(
            f"  incbin範囲    : "
            f"0x{incbin_start:X}-0x{incbin_end:X}"
        )
        print(
            f"  マクロ        : "
            f"setwildbattle {species_name}, "
            f"{level}, {item_name}"
        )
        print()
        print("  置換例:")
        print(
            f'    .incbin "baserom.gba", '
            f"0x{incbin_start:x}, "
            f"0x{before_size:x}"
        )
        print(
            f"    setwildbattle {species_name}, "
            f"{level}, {item_name}"
        )
        print(
            f'    .incbin "baserom.gba", '
            f"0x{after_start:x}, "
            f"0x{after_size:x}"
        )
        print()

    print(f"候補数: {len(candidates)}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
