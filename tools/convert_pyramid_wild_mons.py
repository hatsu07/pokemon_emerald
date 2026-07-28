#!/usr/bin/env python3

import re
import sys
import urllib.request
from pathlib import Path

SOURCE_URL = (
    "https://raw.githubusercontent.com/pret/pokeemerald/"
    "83df84e40623b79281f2397faa611cbf044170bd/"
    "src/data/battle_frontier/battle_pyramid_level_50_wild_mons.h"
)

OUTPUT_PATH = Path(
    "data/battle_frontier/battle_pyramid_level_50_wild_mons.inc"
)

ROUND_PATTERN = re.compile(
    r"static const struct PyramidWildMon "
    r"sLevel50WildMons_Round(\d+)\[\]\s*=\s*"
    r"\{(.*?)\n\};",
    re.DOTALL,
)

ENTRY_PATTERN = re.compile(
    r"\{\s*"
    r"\.species\s*=\s*(SPECIES_[A-Z0-9_]+)\s*,\s*"
    r"\.lvl\s*=\s*(\d+)\s*,\s*"
    r"\.abilityNum\s*=\s*([A-Z0-9_]+)\s*,\s*"
    r"\.moves\s*=\s*\{\s*"
    r"(MOVE_[A-Z0-9_]+)\s*,\s*"
    r"(MOVE_[A-Z0-9_]+)\s*,\s*"
    r"(MOVE_[A-Z0-9_]+)\s*,\s*"
    r"(MOVE_[A-Z0-9_]+)\s*"
    r"\}\s*"
    r"\}",
    re.DOTALL,
)


def download_source() -> str:
    try:
        with urllib.request.urlopen(SOURCE_URL) as response:
            return response.read().decode("utf-8")
    except Exception as exc:
        raise RuntimeError(f"元データの取得に失敗しました: {exc}") from exc


def convert_ability(value: str) -> str:
    # pretのABILITY_RANDOMは構造体上の値2
    if value == "ABILITY_RANDOM":
        return "2"

    return value


def convert(text: str) -> str:
    rounds = ROUND_PATTERN.findall(text)

    if len(rounds) != 20:
        raise RuntimeError(
            f"20ラウンドを検出できませんでした: 検出数={len(rounds)}"
        )

    output: list[str] = []
    total_entries = 0

    for round_number_text, body in rounds:
        round_number = int(round_number_text)
        entries = ENTRY_PATTERN.findall(body)

        if len(entries) != 8:
            raise RuntimeError(
                f"Round{round_number}の件数が8ではありません: "
                f"{len(entries)}"
            )

        output.append(f"sLevel50WildMons_Round{round_number}::")

        for (
            species,
            level,
            ability,
            move1,
            move2,
            move3,
            move4,
        ) in entries:
            output.append(
                "\tpyramidwildmon "
                f"{species}, {level}, {convert_ability(ability)}, "
                f"{move1}, {move2}, {move3}, {move4}"
            )

        output.append("")
        total_entries += len(entries)

    if total_entries != 160:
        raise RuntimeError(
            f"エントリ数が160ではありません: {total_entries}"
        )

    return "\n".join(output).rstrip() + "\n"


def main() -> int:
    try:
        source = download_source()
        converted = convert(source)

        OUTPUT_PATH.parent.mkdir(parents=True, exist_ok=True)
        OUTPUT_PATH.write_text(converted, encoding="utf-8")

        print(f"出力: {OUTPUT_PATH}")
        print("ラウンド数: 20")
        print("エントリ数: 160")
        print("生成サイズ想定: 0x780 bytes")
        return 0

    except Exception as exc:
        print(f"エラー: {exc}", file=sys.stderr)
        return 1


if __name__ == "__main__":
    raise SystemExit(main())
