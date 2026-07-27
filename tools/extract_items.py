#!/usr/bin/env python3

from pathlib import Path
import ast
import struct

ROM_PATH = Path("baserom.gba")
OUTPUT_PATH = Path("data/items/items.inc")
CHARMAP_PATH = Path("tools/charmap.txt")

ITEM_TABLE_OFFSET = 0x55CEE8
ITEM_STRUCT_SIZE = 0x28
ITEM_COUNT = 377
COMMENT_COLUMN = 72

TERMINATOR = 0xFF


def u16(data: bytes, offset: int) -> int:
    return struct.unpack_from("<H", data, offset)[0]


def u32(data: bytes, offset: int) -> int:
    return struct.unpack_from("<I", data, offset)[0]


def format_name_bytes(data: bytes) -> str:
    return ", ".join(f"0x{value:02X}" for value in data)


def format_asm_line(value: str, comment: str) -> str:
    prefix = f"\t{value}"
    padding = max(1, COMMENT_COLUMN - len(prefix))
    return f"{prefix}{' ' * padding}@ {comment}"


def strip_charmap_comment(line: str) -> str:
    in_quote = False
    escaped = False

    for index, char in enumerate(line):
        if escaped:
            escaped = False
            continue

        if char == "\\" and in_quote:
            escaped = True
            continue

        if char == "'":
            in_quote = not in_quote
            continue

        if char == "@" and not in_quote:
            return line[:index]

    return line


def split_charmap_assignment(line: str) -> tuple[str, str] | None:
    """引用符の外側にある = だけを定義の区切りとして扱う。"""
    in_quote = False
    escaped = False

    for index, char in enumerate(line):
        if escaped:
            escaped = False
            continue

        if char == "\\" and in_quote:
            escaped = True
            continue

        if char == "'":
            in_quote = not in_quote
            continue

        if char == "=" and not in_quote:
            return line[:index], line[index + 1:]

    return None


def parse_token(raw_token: str) -> tuple[str, bool]:
    token = raw_token.strip()

    if len(token) >= 2 and token[0] == "'" and token[-1] == "'":
        try:
            return str(ast.literal_eval(token)), True
        except (SyntaxError, ValueError):
            return token[1:-1], True

    return token, False


def is_japanese_text(text: str) -> bool:
    return any(
        "\u3040" <= char <= "\u30ff"
        or "\u3000" <= char <= "\u303f"
        for char in text
    )


def load_charmap(path: Path) -> dict[bytes, tuple[str, bool]]:
    if not path.exists():
        raise SystemExit(f"{path} が見つかりません")

    mapping: dict[bytes, tuple[str, bool]] = {}

    preferred_tokens = {
        bytes([0x00]): "　",
        bytes([0xAD]): "。",
        bytes([0xAE]): "ー",
        bytes([0xAF]): "・",
        bytes([0xB7]): "円",
    }

    for line_number, raw_line in enumerate(
        path.read_text(encoding="utf-8").splitlines(),
        start=1,
    ):
        line = strip_charmap_comment(raw_line).strip()
        if not line:
            continue

        assignment = split_charmap_assignment(line)
        if assignment is None:
            continue

        raw_token, raw_bytes = assignment
        token, is_quoted = parse_token(raw_token)

        try:
            encoded = bytes(
                int(part, 16)
                for part in raw_bytes.replace(",", " ").split()
            )
        except ValueError as error:
            raise SystemExit(
                f"{path}:{line_number}: バイト列を解析できません: {raw_line}"
            ) from error

        if not encoded:
            continue

        candidate = (token, is_quoted)
        preferred = preferred_tokens.get(encoded)

        if preferred is not None:
            if token == preferred or encoded not in mapping:
                mapping[encoded] = candidate
            continue

        previous = mapping.get(encoded)
        if previous is None:
            mapping[encoded] = candidate
            continue

        previous_token, previous_is_quoted = previous

        if is_quoted and not previous_is_quoted:
            mapping[encoded] = candidate
            continue

        if (
            is_quoted
            and previous_is_quoted
            and is_japanese_text(token)
            and not is_japanese_text(previous_token)
        ):
            mapping[encoded] = candidate

    return mapping


def decode_name(
    data: bytes,
    charmap: dict[bytes, tuple[str, bool]],
) -> str:
    sequences = sorted(
        charmap.items(),
        key=lambda item: len(item[0]),
        reverse=True,
    )

    result: list[str] = []
    offset = 0

    while offset < len(data):
        if data[offset] == TERMINATOR:
            break

        matched = False

        for encoded, (token, is_quoted) in sequences:
            if encoded == bytes([TERMINATOR]):
                continue

            if data.startswith(encoded, offset):
                result.append(token if is_quoted else f"{{{token}}}")
                offset += len(encoded)
                matched = True
                break

        if not matched:
            result.append(f"<0x{data[offset]:02X}>")
            offset += 1

    return "".join(result).rstrip("　") or "(なし)"


def main() -> None:
    if not ROM_PATH.exists():
        raise SystemExit(f"{ROM_PATH} が見つかりません")

    rom = ROM_PATH.read_bytes()
    charmap = load_charmap(CHARMAP_PATH)

    table_end = ITEM_TABLE_OFFSET + ITEM_STRUCT_SIZE * ITEM_COUNT
    if len(rom) < table_end:
        raise SystemExit(
            f"ROMが小さすぎます: 必要サイズ={table_end:#x}, "
            f"実際={len(rom):#x}"
        )

    lines: list[str] = [
        "@ Auto-generated from baserom.gba by tools/extract_items.py",
        "@",
        f"@ Item structure size: 0x{ITEM_STRUCT_SIZE:X} bytes",
        f"@ Item count: {ITEM_COUNT}",
        "@",
        "@ 名前は tools/charmap.txt を使ってコメントへ復号します。",
        "@ ROM完全一致を維持するため、名前本体は生バイトのまま出力します。",
        "",
    ]

    for index in range(ITEM_COUNT):
        rom_offset = ITEM_TABLE_OFFSET + index * ITEM_STRUCT_SIZE
        entry = rom[rom_offset : rom_offset + ITEM_STRUCT_SIZE]

        name = entry[0x00:0x0A]
        item_name = decode_name(name, charmap)
        item_id = u16(entry, 0x0A)

        rows = [
            (f".byte {format_name_bytes(name)}", "name[10]"),
            (f".2byte 0x{item_id:04X}", "itemId"),
            (f".2byte {u16(entry, 0x0C)}", "price"),
            (f".byte 0x{entry[0x0E]:02X}", "holdEffect"),
            (f".byte 0x{entry[0x0F]:02X}", "holdEffectParam"),
            (f".4byte 0x{u32(entry, 0x10):08X}", "description"),
            (f".byte {entry[0x14]}", "importance"),
            (f".byte {entry[0x15]}", "exitsBagOnUse"),
            (f".byte 0x{entry[0x16]:02X}", "pocket"),
            (f".byte 0x{entry[0x17]:02X}", "type"),
            (f".4byte 0x{u32(entry, 0x18):08X}", "fieldUseFunc"),
            (f".4byte 0x{u32(entry, 0x1C):08X}", "field_1C"),
            (f".4byte 0x{u32(entry, 0x20):08X}", "field_20"),
            (f".4byte 0x{u32(entry, 0x24):08X}", "field_24"),
        ]

        lines.extend(
            [
                "@ ------------------------------------------------------------------",
                f"@ Item table index: {index}",
                f"@ Item name: {item_name}",
                f"@ ROM offset: 0x{rom_offset:08X}",
                f"@ Stored item ID: 0x{item_id:04X}",
                "@ ------------------------------------------------------------------",
                f"gItem_{index:03d}: @ {item_name}",
            ]
        )

        for value, comment in rows:
            lines.append(format_asm_line(value, comment))

        lines.append("")

    OUTPUT_PATH.parent.mkdir(parents=True, exist_ok=True)
    OUTPUT_PATH.write_text("\n".join(lines), encoding="utf-8")

    print(f"{OUTPUT_PATH} を生成しました")
    print(f"アイテム数: {ITEM_COUNT}")
    print(f"開始位置: 0x{ITEM_TABLE_OFFSET:08X}")
    print(f"終了位置: 0x{table_end:08X}")


if __name__ == "__main__":
    main()
