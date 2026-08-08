#!/usr/bin/env python3
"""人が読めるGBA BGタイルマップとリトルエンディアンバイナリを相互変換する。"""

from __future__ import annotations

import argparse
import re
import sys
from pathlib import Path


TILE_TOKEN_PATTERN = re.compile(
    r"^T([0-9A-Fa-f]{1,3}):P(0|[1-9]|1[0-5])(?::(H|V|HV|VH))?$"
)


def parse_int(value: str) -> int:
    return int(value, 0)


def parse_tile_token(token: str, path: Path, line_number: int) -> int:
    match = TILE_TOKEN_PATTERN.fullmatch(token)
    if match is None:
        raise ValueError(
            f"{path}:{line_number}: タイル値はT001:P1、"
            f"T01F:P0:Hの形式で指定してください: {token}"
        )

    tile = int(match.group(1), 16)
    palette = int(match.group(2), 10)
    flips = match.group(3) or ""
    if tile > 0x3FF:
        raise ValueError(
            f"{path}:{line_number}: タイル番号が0x3FFを超えています: {token}"
        )

    value = tile | (palette << 12)
    if "H" in flips:
        value |= 1 << 10
    if "V" in flips:
        value |= 1 << 11
    return value


def format_tile_token(value: int) -> str:
    tile = value & 0x3FF
    palette = value >> 12
    flips = ""
    if value & (1 << 10):
        flips += "H"
    if value & (1 << 11):
        flips += "V"
    suffix = f":{flips}" if flips else ""
    return f"T{tile:03X}:P{palette}{suffix}"


def parse_text_tilemap(path: Path) -> tuple[int, int, list[list[int]]]:
    width: int | None = None
    height: int | None = None
    maps: list[list[int]] = []
    current_map: list[int] | None = None
    current_rows = 0

    for line_number, source_line in enumerate(
        path.read_text(encoding="utf-8").splitlines(),
        start=1,
    ):
        line = source_line.split("#", 1)[0].strip()
        if not line:
            continue

        fields = line.split()
        directive = fields[0].lower()

        if directive in {"width", "height"}:
            if len(fields) != 2 or maps:
                raise ValueError(
                    f"{path}:{line_number}: {directive}はmapより前に1回だけ指定してください"
                )
            value = parse_int(fields[1])
            if value <= 0:
                raise ValueError(
                    f"{path}:{line_number}: {directive}は正数である必要があります"
                )
            if directive == "width":
                if width is not None:
                    raise ValueError(f"{path}:{line_number}: widthが重複しています")
                width = value
            else:
                if height is not None:
                    raise ValueError(f"{path}:{line_number}: heightが重複しています")
                height = value
            continue

        if directive == "map":
            if len(fields) != 2:
                raise ValueError(f"{path}:{line_number}: mapには番号が必要です")
            if width is None or height is None:
                raise ValueError(
                    f"{path}:{line_number}: mapより前にwidthとheightを指定してください"
                )
            if current_map is not None and current_rows != height:
                raise ValueError(
                    f"{path}:{line_number}: map {len(maps) - 1}の行数が"
                    f"{current_rows}です（期待: {height}）"
                )
            index = parse_int(fields[1])
            if index != len(maps):
                raise ValueError(
                    f"{path}:{line_number}: map番号は{len(maps)}である必要があります"
                )
            current_map = []
            maps.append(current_map)
            current_rows = 0
            continue

        if current_map is None or width is None or height is None:
            raise ValueError(f"{path}:{line_number}: データ行の前にmapを指定してください")
        if current_rows >= height:
            raise ValueError(
                f"{path}:{line_number}: map {len(maps) - 1}の行数が多すぎます"
            )
        if len(fields) != width:
            raise ValueError(
                f"{path}:{line_number}: 列数が{len(fields)}です（期待: {width}）"
            )

        for field in fields:
            current_map.append(parse_tile_token(field, path, line_number))
        current_rows += 1

    if width is None or height is None:
        raise ValueError(f"{path}: widthとheightが必要です")
    if not maps:
        raise ValueError(f"{path}: mapがありません")
    if current_rows != height:
        raise ValueError(
            f"{path}: map {len(maps) - 1}の行数が{current_rows}です（期待: {height}）"
        )

    return width, height, maps


def encode(input_path: Path, output_path: Path) -> None:
    _, _, maps = parse_text_tilemap(input_path)
    output = bytearray()
    for tilemap in maps:
        for value in tilemap:
            output.extend(value.to_bytes(2, "little"))

    output_path.parent.mkdir(parents=True, exist_ok=True)
    temporary = output_path.with_name(f".{output_path.name}.tmp")
    temporary.write_bytes(output)
    temporary.replace(output_path)


def decode(
    input_path: Path,
    output_path: Path,
    width: int,
    height: int,
) -> None:
    raw = input_path.read_bytes()
    bytes_per_map = width * height * 2
    if len(raw) == 0 or len(raw) % bytes_per_map != 0:
        raise ValueError(
            f"{input_path}: サイズ0x{len(raw):X}を"
            f"{width}x{height}のマップへ分割できません"
        )

    lines = [
        "# GBA text BG tilemap.",
        "# Cell format: T<hex tile>:P<decimal palette>[:H|V|HV]",
        "# Example: T01F:P2:H = tile 0x01F, palette 2, horizontal flip",
        f"width {width}",
        f"height {height}",
    ]
    values = [
        int.from_bytes(raw[offset:offset + 2], "little")
        for offset in range(0, len(raw), 2)
    ]
    values_per_map = width * height

    for map_index in range(len(values) // values_per_map):
        lines.extend(("", f"map {map_index}"))
        start = map_index * values_per_map
        for row in range(height):
            row_start = start + row * width
            row_values = values[row_start:row_start + width]
            lines.append(" ".join(format_tile_token(value) for value in row_values))

    output_path.parent.mkdir(parents=True, exist_ok=True)
    output_path.write_text("\n".join(lines) + "\n", encoding="utf-8")


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    subparsers = parser.add_subparsers(dest="command", required=True)

    encode_parser = subparsers.add_parser("encode", help="テキストからバイナリへ変換")
    encode_parser.add_argument("input", type=Path)
    encode_parser.add_argument("output", type=Path)

    decode_parser = subparsers.add_parser("decode", help="バイナリからテキストへ変換")
    decode_parser.add_argument("input", type=Path)
    decode_parser.add_argument("output", type=Path)
    decode_parser.add_argument("--width", type=parse_int, default=32)
    decode_parser.add_argument("--height", type=parse_int, default=32)

    args = parser.parse_args()
    try:
        if args.command == "encode":
            encode(args.input, args.output)
        else:
            decode(args.input, args.output, args.width, args.height)
    except (OSError, ValueError) as exc:
        print(f"エラー: {exc}", file=sys.stderr)
        return 1
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
