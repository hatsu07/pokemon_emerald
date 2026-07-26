#!/usr/bin/env python3
"""
ポケモンのステータステーブルをオリジナルROMから抽出し、
編集可能な .byte ディレクティブ形式で出力するツール。

ベースステッツテーブル:
  ROMアドレス: 0x082F0D54
  エントリサイズ: 28バイト
  エントリ数: 421 (species 0〜420)
  合計サイズ: 11,788バイト (0x2E0C)

構造体レイアウト (28バイト):
  offset 0:  HP (u8)
  offset 1:  Attack (u8)
  offset 2:  Defense (u8)
  offset 3:  Speed (u8)
  offset 4:  SpAttack (u8)
  offset 5:  SpDefense (u8)
  offset 6:  Type1 (u8)
  offset 7:  Type2 (u8)
  offset 8:  CatchRate (u8)
  offset 9:  BaseExp (u8)
  offset 10: EVYield (u8, ビットフィールド)
  offset 11: GrowthRate (u8)
  offset 12: EggGroup1 (u8)
  offset 13: EggGroup2 (u8)
  offset 14: Ability1 (u8)
  offset 15: Ability2 (u8)
  offset 16-27: その他のデータ (パディング等)
"""

import json
import os

# テーブルの基本情報
TABLE_ROM_ADDR = 0x082F0D54
TABLE_ROM_OFFSET = TABLE_ROM_ADDR - 0x08000000  # 0x2F0D54
ENTRY_SIZE = 28
NUM_SPECIES = 421  # species 0〜420
TABLE_SIZE = ENTRY_SIZE * NUM_SPECIES  # 11788

# rodata.inc での incbin ブロック分割
# gUnknown_82F0D54: 0x2f0d54, 0xc
# gUnknown_82F0D60: 0x2f0d60, 0x2
# gUnknown_82F0D62: 0x2f0d62, 0x3
# gUnknown_82F0D65: 0x2f0d65, 0x4f3f
# テーブル終端: 0x2f0d54 + 0x2e0c = 0x2f3b60
# gUnknown_82F0D65 の残りデータ: 0x2f3b60 から 0x2f5ca4 まで = 0x2134 バイト
TABLE_END_OFFSET = TABLE_ROM_OFFSET + TABLE_SIZE  # 0x2f3b60
GUNKNOWN_82F0D65_REMAINING = 0x2f5ca4 - TABLE_END_OFFSET  # 0x2134

# タイプ名
TYPE_NAMES = {
    0: "NORMAL", 1: "FIGHT", 2: "FLYING", 3: "POISON",
    4: "GROUND", 5: "ROCK", 6: "BUG", 7: "GHOST",
    8: "STEEL", 9: "??", 10: "FIRE", 11: "WATER",
    12: "GRASS", 13: "ELECTRIC", 14: "PSYCHIC", 15: "ICE",
    16: "DRAGON", 17: "DARK", 18: "??",
}

# 成長率名
GROWTH_RATE_NAMES = {
    0: "MediumFast",
    1: "Erratic",
    2: "Fluctuating",
    3: "MediumSlow",
    4: "Fast",
    5: "Slow",
}


def load_species_names():
    """species_constants.inc から種族ID→名前のマッピングを読み込む

    エイリアス (例: SPECIES_CASTFORM = SPECIES_CASTFORM_NORMAL) を解決する。
    """
    names = {}
    aliases = {}
    inc_path = os.path.join(os.path.dirname(__file__), "..", "constants", "species_constants.inc")
    with open(inc_path, "r") as f:
        for line in f:
            line = line.strip()
            if line.startswith(".set SPECIES_"):
                parts = line.split(",")
                if len(parts) == 2:
                    name = parts[0].replace(".set SPECIES_", "").strip()
                    value_str = parts[1].strip()
                    try:
                        value = int(value_str, 0)
                        names[value] = name
                    except ValueError:
                        # エイリアスの場合
                        alias_target = value_str.replace("SPECIES_", "").strip()
                        aliases[name] = alias_target
    # エイリアスを解決
    for alias_name, target_name in aliases.items():
        for value, name in names.items():
            if name == target_name:
                names[value] = alias_name
                break
    return names


def parse_entry(data, species_id):
    """28バイトのエントリを解析して辞書形式で返す"""
    return {
        "species_id": species_id,
        "hp": data[0],
        "attack": data[1],
        "defense": data[2],
        "speed": data[3],
        "sp_attack": data[4],
        "sp_defense": data[5],
        "type1": data[6],
        "type2": data[7],
        "catch_rate": data[8],
        "base_exp": data[9],
        "ev_yield": data[10],
        "growth_rate": data[11],
        "egg_group1": data[12],
        "egg_group2": data[13],
        "ability1": data[14],
        "ability2": data[15],
        "raw": data,
    }


def generate_inc(rom_data, species_names):
    """編集可能な .inc ファイルの内容を生成

    ラベルは元の rodata.inc の incbin ブロックと同じバイトオフセットに配置される。
    - gUnknown_82F0D54: オフセット 0 (テーブル開始)
    - gUnknown_82F0D60: オフセット 12
    - gUnknown_82F0D62: オフセット 14
    - gUnknown_82F0D65: オフセット 17
    """
    lines = []

    # テーブル全体の生データを取得
    table_data = rom_data[TABLE_ROM_OFFSET:TABLE_ROM_OFFSET + TABLE_SIZE]

    # ラベル gUnknown_82F0D54 (テーブル開始, オフセット 0)
    lines.append("\t.globl gUnknown_82F0D54")
    lines.append("gUnknown_82F0D54: @ 0x082F0D54")
    lines.append("")

    # 各エントリを出力
    for i in range(NUM_SPECIES):
        entry_start = i * ENTRY_SIZE
        entry_data = table_data[entry_start:entry_start + ENTRY_SIZE]
        parsed = parse_entry(entry_data, i)
        name = species_names.get(i, f"SPECIES_{i}")

        lines.append(f"@ Species {i}: {name}")
        lines.append(f"@   HP={parsed['hp']} Atk={parsed['attack']} Def={parsed['defense']} "
                      f"Spe={parsed['speed']} SpA={parsed['sp_attack']} SpD={parsed['sp_defense']}")
        type1_name = TYPE_NAMES.get(parsed['type1'], f"Type{parsed['type1']}")
        type2_name = TYPE_NAMES.get(parsed['type2'], f"Type{parsed['type2']}")
        gr_name = GROWTH_RATE_NAMES.get(parsed['growth_rate'], f"GR{parsed['growth_rate']}")
        lines.append(f"@   Types={type1_name}({parsed['type1']}),{type2_name}({parsed['type2']}) "
                      f"Catch={parsed['catch_rate']} Exp={parsed['base_exp']}")
        lines.append(f"@   EVYield=0x{parsed['ev_yield']:02x} Growth={gr_name}({parsed['growth_rate']})")
        lines.append(f"@   EggGroup1={parsed['egg_group1']} EggGroup2={parsed['egg_group2']} "
                      f"Ability1={parsed['ability1']} Ability2={parsed['ability2']}")

        if i == 0:
            # エントリ0はラベルが途中にあるため、バイト単位で分割して出力
            # バイト 0-6 (7バイト)
            row_bytes = entry_data[0:7]
            lines.append("\t.byte " + ", ".join(f"0x{b:02x}" for b in row_bytes))
            # バイト 7-11 (5バイト)
            row_bytes = entry_data[7:12]
            lines.append("\t.byte " + ", ".join(f"0x{b:02x}" for b in row_bytes))
            # ラベル gUnknown_82F0D60 (バイト 12)
            lines.append("")
            lines.append("\t.globl gUnknown_82F0D60")
            lines.append("gUnknown_82F0D60: @ 0x082F0D60")
            # バイト 12-13 (2バイト)
            row_bytes = entry_data[12:14]
            lines.append("\t.byte " + ", ".join(f"0x{b:02x}" for b in row_bytes))
            # ラベル gUnknown_82F0D62 (バイト 14)
            lines.append("")
            lines.append("\t.globl gUnknown_82F0D62")
            lines.append("gUnknown_82F0D62: @ 0x082F0D62")
            # バイト 14-16 (3バイト)
            row_bytes = entry_data[14:17]
            lines.append("\t.byte " + ", ".join(f"0x{b:02x}" for b in row_bytes))
            # ラベル gUnknown_82F0D65 (バイト 17)
            lines.append("")
            lines.append("\t.globl gUnknown_82F0D65")
            lines.append("gUnknown_82F0D65: @ 0x082F0D65")
            # バイト 17-27 (11バイト)
            row_bytes = entry_data[17:28]
            lines.append("\t.byte " + ", ".join(f"0x{b:02x}" for b in row_bytes))
        else:
            # 28バイトを .byte ディレクティブで出力 (7バイトずつ, 4行)
            for row_start in range(0, ENTRY_SIZE, 7):
                row_bytes = entry_data[row_start:row_start + 7]
                bytes_str = ", ".join(f"0x{b:02x}" for b in row_bytes)
                lines.append(f"\t.byte {bytes_str}")

        lines.append("")

    return "\n".join(lines)


def main():
    rom_path = os.path.join(os.path.dirname(__file__), "..", "baserom.gba")
    output_path = os.path.join(os.path.dirname(__file__), "..", "data", "pokemon", "base_stats.inc")

    # ROMを読み込み
    with open(rom_path, "rb") as f:
        rom_data = f.read()

    # 種族名を読み込み
    species_names = load_species_names()

    # 出力ディレクトリを作成
    os.makedirs(os.path.dirname(output_path), exist_ok=True)

    # .inc ファイルを生成
    inc_content = generate_inc(rom_data, species_names)
    with open(output_path, "w") as f:
        f.write(inc_content)

    print(f"ベースステッツテーブルを抽出しました: {output_path}")
    print(f"  テーブルアドレス: 0x{TABLE_ROM_ADDR:08X}")
    print(f"  エントリサイズ: {ENTRY_SIZE}バイト")
    print(f"  エントリ数: {NUM_SPECIES}")
    print(f"  合計サイズ: {TABLE_SIZE}バイト (0x{TABLE_SIZE:X})")
    print(f"  テーブル終端: 0x{TABLE_ROM_OFFSET + TABLE_SIZE + 0x08000000:08X}")
    print(f"  gUnknown_82F0D65 残りデータ: 0x{GUNKNOWN_82F0D65_REMAINING:X}バイト")

    # 検証: バルスライのステータスを確認
    bulbasaur_offset = TABLE_ROM_OFFSET + 1 * ENTRY_SIZE
    bulbasaur = parse_entry(rom_data[bulbasaur_offset:bulbasaur_offset + ENTRY_SIZE], 1)
    print(f"\n検証 - バルスライ (Species 1):")
    print(f"  HP={bulbasaur['hp']} Atk={bulbasaur['attack']} Def={bulbasaur['defense']} "
          f"Spe={bulbasaur['speed']} SpA={bulbasaur['sp_attack']} SpD={bulbasaur['sp_defense']}")
    print(f"  Types={bulbasaur['type1']},{bulbasaur['type2']} "
          f"Catch={bulbasaur['catch_rate']} Exp={bulbasaur['base_exp']}")

    # JSONマニフェストも生成
    manifest_path = os.path.join(os.path.dirname(output_path), "base_stats_manifest.json")
    manifest = {
        "table_rom_addr": f"0x{TABLE_ROM_ADDR:08X}",
        "table_rom_offset": f"0x{TABLE_ROM_OFFSET:06x}",
        "entry_size": ENTRY_SIZE,
        "num_entries": NUM_SPECIES,
        "total_size": TABLE_SIZE,
        "table_end_rom_offset": f"0x{TABLE_ROM_OFFSET + TABLE_SIZE:06x}",
        "gunknown_82f0d65_remaining": GUNKNOWN_82F0D65_REMAINING,
        "incbin_blocks": [
            {"label": "gUnknown_82F0D54", "offset": "0x2f0d54", "size": 0xc},
            {"label": "gUnknown_82F0D60", "offset": "0x2f0d60", "size": 0x2},
            {"label": "gUnknown_82F0D62", "offset": "0x2f0d62", "size": 0x3},
            {"label": "gUnknown_82F0D65", "offset": "0x2f0d65", "size": 0x4f3f},
        ],
        "struct_layout": {
            "hp": 0, "attack": 1, "defense": 2, "speed": 3,
            "sp_attack": 4, "sp_defense": 5,
            "type1": 6, "type2": 7,
            "catch_rate": 8, "base_exp": 9,
            "ev_yield": 10, "growth_rate": 11,
            "egg_group1": 12, "egg_group2": 13,
            "ability1": 14, "ability2": 15,
        },
    }
    with open(manifest_path, "w") as f:
        json.dump(manifest, f, indent=2, ensure_ascii=False)
    print(f"\nマニフェストを生成しました: {manifest_path}")


if __name__ == "__main__":
    main()
