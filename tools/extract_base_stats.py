#!/usr/bin/env python3
"""
ポケモンのステータステーブルをオリジナルROMから抽出し、
編集可能な .base_stats マクロ形式で出力するツール。

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
  offset 11: GenderRatio (u8)
  offset 12: EggCycles (u8)
  offset 13: BaseFriendship (u8)
  offset 14: GrowthRate (u8)
  offset 15: EggGroup1 (u8)
  offset 16: EggGroup2 (u8)
  offset 17: Ability1 (u8)
  offset 18: Ability2 (u8)
  offset 19: Item1 (u16, リトルエンディアン)
  offset 21: Item2 (u16, リトルエンディアン)
  offset 23: SafariFleeRate (u8)
  offset 24: BodyColor (u8)
  offset 25: FlipFlag (u8)
  offset 26-27: パディング (0x00 0x00)
"""

import json
import os

# テーブルの基本情報
TABLE_ROM_ADDR = 0x082F0D54
TABLE_ROM_OFFSET = TABLE_ROM_ADDR - 0x08000000  # 0x2F0D54
ENTRY_SIZE = 28
NUM_SPECIES = 421  # species 0〜420
TABLE_SIZE = ENTRY_SIZE * NUM_SPECIES  # 11788

# 定数名マッピング
TYPE_NAMES = {
    0x00: "TYPE_NORMAL",
    0x01: "TYPE_FIGHT",
    0x02: "TYPE_FLYING",
    0x03: "TYPE_POISON",
    0x04: "TYPE_GROUND",
    0x05: "TYPE_ROCK",
    0x06: "TYPE_BUG",
    0x07: "TYPE_GHOST",
    0x08: "TYPE_STEEL",
    0x0a: "TYPE_FIRE",
    0x0b: "TYPE_WATER",
    0x0c: "TYPE_GRASS",
    0x0d: "TYPE_ELECTRIC",
    0x0e: "TYPE_PSYCHIC",
    0x0f: "TYPE_ICE",
    0x10: "TYPE_DRAGON",
    0x11: "TYPE_DARK",
}

GROWTH_RATE_NAMES = {
    0x00: "GROWTH_MEDIUM_FAST",
    0x01: "GROWTH_ERRATIC",
    0x02: "GROWTH_FLUCTUATING",
    0x03: "GROWTH_MEDIUM_SLOW",
    0x04: "GROWTH_FAST",
    0x05: "GROWTH_SLOW",
}

GENDER_RATIO_NAMES = {
    0x00: "GENDER_RATIO_MALE_ONLY",
    0x01: "GENDER_RATIO_FEMALE_12_5",
    0x02: "GENDER_RATIO_MALE_25",
    0x04: "GENDER_RATIO_MALE_50",
    0x06: "GENDER_RATIO_FEMALE_25",
    0x08: "GENDER_RATIO_FEMALE_50",
    0x0c: "GENDER_RATIO_FEMALE_75",
    0x0e: "GENDER_RATIO_FEMALE_ONLY",
    0x0f: "GENDER_RATIO_NO_GENDER",
}

EGG_GROUP_NAMES = {
    0x00: "EGG_GROUP_NONE",
    0x01: "EGG_GROUP_MONSTER",
    0x02: "EGG_GROUP_WATER_1",
    0x03: "EGG_GROUP_BUG",
    0x04: "EGG_GROUP_FLYING",
    0x05: "EGG_GROUP_GRASS",
    0x06: "EGG_GROUP_HUMAN_LIKE",
    0x07: "EGG_GROUP_FAIRY",
    0x08: "EGG_GROUP_UNDISCOVERED",
    0x09: "EGG_GROUP_MINERAL",
    0x0a: "EGG_GROUP_AMORPHOUS",
    0x0b: "EGG_GROUP_WATER_2",
    0x0c: "EGG_GROUP_DITTO",
    0x0d: "EGG_GROUP_DRAGON",
    0x0e: "EGG_GROUP_FIELD",
}

BODY_COLOR_NAMES = {
    0x00: "BODY_COLOR_RED",
    0x01: "BODY_COLOR_BLUE",
    0x02: "BODY_COLOR_YELLOW",
    0x03: "BODY_COLOR_GREEN",
    0x04: "BODY_COLOR_BLACK",
    0x05: "BODY_COLOR_BROWN",
    0x06: "BODY_COLOR_PURPLE",
    0x07: "BODY_COLOR_GRAY",
    0x08: "BODY_COLOR_WHITE",
    0x09: "BODY_COLOR_PINK",
}

SAFARI_FLEE_RATE_NAMES = {
    0x00: "SAFARI_FLEE_RATE_0",
    0x25: "SAFARI_FLEE_RATE_25",
    0x50: "SAFARI_FLEE_RATE_50",
    0x75: "SAFARI_FLEE_RATE_75",
    0x64: "SAFARI_FLEE_RATE_100",
}

FLIP_FLAG_NAMES = {
    0x00: "NO_FLIP",
    0x80: "FLIP_BACKWARDS",
}


def get_ev_yield_constant(ev_byte):
    """努力値バイトを定数名に変換"""
    flags = []
    if ev_byte == 0:
        return "EV_YIELD_NONE"
    if ev_byte & 0x01:
        flags.append("EV_YIELD_HP")
    if ev_byte & 0x02:
        flags.append("EV_YIELD_ATTACK")
    if ev_byte & 0x04:
        flags.append("EV_YIELD_DEFENSE")
    if ev_byte & 0x08:
        flags.append("EV_YIELD_SPEED")
    if ev_byte & 0x10:
        flags.append("EV_YIELD_SP_ATTACK")
    if ev_byte & 0x20:
        flags.append("EV_YIELD_SP_DEFENSE")
    if ev_byte & 0x40:
        flags.append("EV_YIELD_HP_2")
    if ev_byte & 0x80:
        flags.append("EV_YIELD_SP_ATTACK_2")
    return " | ".join(flags)


def get_item_constant(item_val):
    """アイテム値を定数名に変換"""
    if item_val == 0:
        return "ITEM_NONE"
    # 簡易マッピング（必要なものだけ）
    item_map = {
        0x0004: "ITEM_POTION",
        0x0007: "ITEM_ANTIDOTE",
        0x0008: "ITEM_SUPER_POTION",
        0x000f: "ITEM_FULL_HEAL",
        0x0010: "ITEM_REVIVE",
        0x0013: "ITEM_RARE_CANDY",
        0x0014: "ITEM_MASTER_BALL",
        0x0015: "ITEM_ULTRA_BALL",
        0x0016: "ITEM_GREAT_BALL",
        0x0017: "ITEM_POKE_BALL",
        0x0018: "ITEM_SAFARI_BALL",
        0x00c2: "ITEM_LEFTOVERS",
        0x00d1: "ITEM_KINGS_ROCK",
        0x00e4: "ITEM_METAL_COAT",
        0x00f0: "ITEM_DRAGON_SCALE",
        0x00f1: "ITEM_UPGRADE",
        0x0190: "ITEM_SOUL_DEW",
        0x01a5: "ITEM_DEEP_SEA_TOOTH",
        0x01a6: "ITEM_DEEP_SEA_SCALE",
        0x01aa: "ITEM_WHITE_HERB",
        0x01b4: "ITEM_THICK_CLUB",
        0x01b6: "ITEM_LIGHT_BALL",
        0x01b8: "ITEM_LEEK",
        0x01b9: "ITEM_CHOICE_BAND",
        0x01ba: "ITEM_CHOICE_SPECS",
        0x01bb: "ITEM_CHOICE_SCARF",
        0x01bc: "ITEM_FOCUS_SASH",
        0x01be: "ITEM_EXPERT_BELT",
        0x01bf: "ITEM_SCOPE_LENS",
    }
    return item_map.get(item_val, f"0x{item_val:04x}")


def get_ability_constant(ability_val):
    """特性値を定数名に変換"""
    if ability_val == 0:
        return "ABILITY_NONE"
    # 簡易マッピング（既知のもののみ）
    ability_map = {
        0x26: "ABILITY_OVERGROW",
        0x27: "ABILITY_BLAZE",
        0x28: "ABILITY_TORRENT",
        0x29: "ABILITY_SWARM",
        0x2b: "ABILITY_ARENA_TRAP",
        0x2d: "ABILITY_VITAL_SPIRIT",
        0x30: "ABILITY_SHELL_ARMOR",
        0x31: "ABILITY_CACOPHONY",
        0x83: "ABILITY_LEVITATE",
        0x95: "ABILITY_INTIMIDATE",
        0x96: "ABILITY_SHADOW_TAG",
    }
    return ability_map.get(ability_val, f"0x{ability_val:02x}")


def load_species_names():
    """species_constants.inc から種族ID→名前のマッピングを読み込む"""
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
    # アイテムはリトルエンディアン
    item1 = data[19] | (data[20] << 8)
    item2 = data[21] | (data[22] << 8)
    
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
        "gender_ratio": data[11],
        "egg_cycles": data[12],
        "base_friendship": data[13],
        "growth_rate": data[14],
        "egg_group1": data[15],
        "egg_group2": data[16],
        "ability1": data[17],
        "ability2": data[18],
        "item1": item1,
        "item2": item2,
        "safari_flee_rate": data[23],
        "body_color": data[24],
        "flip_flag": data[25],
        "padding": data[26:28],
    }


def generate_inc(rom_data, species_names):
    """編集可能な .inc ファイルの内容を生成"""
    lines = []

    # テーブル全体の生データを取得
    table_data = rom_data[TABLE_ROM_OFFSET:TABLE_ROM_OFFSET + TABLE_SIZE]

    # 種族0は特別なラベル群があるため、まずそれを出力
    # gUnknown_82F0D54 (オフセット0)
    lines.append(".globl gUnknown_82F0D54")
    lines.append("gUnknown_82F0D54: @ 0x082F0D54")
    lines.append("")
    
    # 種族0のエントリ（SPECIES_NONE）を出力
    entry0 = parse_entry(table_data[0:28], 0)
    name0 = species_names.get(0, "SPECIES_NONE")
    
    lines.append(f"\tbase_stats {name0},")
    lines.append(f"\t\t{entry0['hp']}, @ HP")
    lines.append(f"\t\t{entry0['attack']}, @ Attack")
    lines.append(f"\t\t{entry0['defense']}, @ Defense")
    lines.append(f"\t\t{entry0['speed']}, @ Speed")
    lines.append(f"\t\t{entry0['sp_attack']}, @ Sp. Attack")
    lines.append(f"\t\t{entry0['sp_defense']}, @ Sp. Defense")
    type1_name = TYPE_NAMES.get(entry0['type1'], f"0x{entry0['type1']:02x}")
    type2_name = TYPE_NAMES.get(entry0['type2'], f"0x{entry0['type2']:02x}")
    lines.append(f"\t\t{type1_name}, @ Type1")
    lines.append(f"\t\t{type2_name}, @ Type2")
    lines.append(f"\t\t{entry0['catch_rate']}, @ Catch rate")
    lines.append(f"\t\t{entry0['base_exp']}, @ Base experience")
    lines.append(f"\t\t{get_ev_yield_constant(entry0['ev_yield'])}, @ EV yield")
    lines.append(f"\t\t{entry0['item1']}, @ Item 1")
    lines.append(f"\t\t{entry0['item2']}, @ Item 2")
    gender_name = GENDER_RATIO_NAMES.get(entry0['gender_ratio'], f"0x{entry0['gender_ratio']:02x}")
    lines.append(f"\t\t{gender_name}, @ Gender ratio")
    lines.append(f"\t\t{entry0['egg_cycles']}, @ Egg cycles")
    lines.append(f"\t\t{entry0['base_friendship']}, @ Base friendship")
    growth_name = GROWTH_RATE_NAMES.get(entry0['growth_rate'], f"0x{entry0['growth_rate']:02x}")
    lines.append(f"\t\t{growth_name}, @ Growth rate")
    egg1_name = EGG_GROUP_NAMES.get(entry0['egg_group1'], f"0x{entry0['egg_group1']:02x}")
    egg2_name = EGG_GROUP_NAMES.get(entry0['egg_group2'], f"0x{entry0['egg_group2']:02x}")
    lines.append(f"\t\t{egg1_name}, @ Egg group 1")
    lines.append(f"\t\t{egg2_name}, @ Egg group 2")
    ability1_name = get_ability_constant(entry0['ability1'])
    ability2_name = get_ability_constant(entry0['ability2'])
    lines.append(f"\t\t{ability1_name}, @ Ability 1")
    lines.append(f"\t\t{ability2_name}, @ Ability 2")
    flee_name = SAFARI_FLEE_RATE_NAMES.get(entry0['safari_flee_rate'], f"0x{entry0['safari_flee_rate']:02x}")
    lines.append(f"\t\t{flee_name}, @ Safari flee rate")
    color_name = BODY_COLOR_NAMES.get(entry0['body_color'], f"0x{entry0['body_color']:02x}")
    lines.append(f"\t\t{color_name}, @ Body color")
    flip_name = FLIP_FLAG_NAMES.get(entry0['flip_flag'], f"0x{entry0['flip_flag']:02x}")
    lines.append(f"\t\t{flip_name}, @ Flip flag")
    lines.append("")
    lines.append("")

    # 残りのエントリ（種族1以降）を出力
    for i in range(1, NUM_SPECIES):
        entry_start = i * ENTRY_SIZE
        entry_data = table_data[entry_start:entry_start + ENTRY_SIZE]
        parsed = parse_entry(entry_data, i)
        name = species_names.get(i, f"SPECIES_{i}")

        lines.append(f"\tbase_stats {name},")
        lines.append(f"\t\t{parsed['hp']}, @ HP")
        lines.append(f"\t\t{parsed['attack']}, @ Attack")
        lines.append(f"\t\t{parsed['defense']}, @ Defense")
        lines.append(f"\t\t{parsed['speed']}, @ Speed")
        lines.append(f"\t\t{parsed['sp_attack']}, @ Sp. Attack")
        lines.append(f"\t\t{parsed['sp_defense']}, @ Sp. Defense")
        type1_name = TYPE_NAMES.get(parsed['type1'], f"0x{parsed['type1']:02x}")
        type2_name = TYPE_NAMES.get(parsed['type2'], f"0x{parsed['type2']:02x}")
        lines.append(f"\t\t{type1_name}, @ Type1")
        lines.append(f"\t\t{type2_name}, @ Type2")
        lines.append(f"\t\t{parsed['catch_rate']}, @ Catch rate")
        lines.append(f"\t\t{parsed['base_exp']}, @ Base experience")
        lines.append(f"\t\t{get_ev_yield_constant(parsed['ev_yield'])}, @ EV yield")
        lines.append(f"\t\t{parsed['item1'] & 0xFF}, @ Item 1 (low byte)")
        lines.append(f"\t\t{(parsed['item1'] >> 8) & 0xFF}, @ Item 1 (high byte)")
        lines.append(f"\t\t{parsed['item2'] & 0xFF}, @ Item 2 (low byte)")
        lines.append(f"\t\t{(parsed['item2'] >> 8) & 0xFF}, @ Item 2 (high byte)")
        gender_name = GENDER_RATIO_NAMES.get(parsed['gender_ratio'], f"0x{parsed['gender_ratio']:02x}")
        lines.append(f"\t\t{gender_name}, @ Gender ratio")
        lines.append(f"\t\t{parsed['egg_cycles']}, @ Egg cycles")
        lines.append(f"\t\t{parsed['base_friendship']}, @ Base friendship")
        growth_name = GROWTH_RATE_NAMES.get(parsed['growth_rate'], f"0x{parsed['growth_rate']:02x}")
        lines.append(f"\t\t{growth_name}, @ Growth rate")
        egg1_name = EGG_GROUP_NAMES.get(parsed['egg_group1'], f"0x{parsed['egg_group1']:02x}")
        egg2_name = EGG_GROUP_NAMES.get(parsed['egg_group2'], f"0x{parsed['egg_group2']:02x}")
        lines.append(f"\t\t{egg1_name}, @ Egg group 1")
        lines.append(f"\t\t{egg2_name}, @ Egg group 2")
        ability1_name = get_ability_constant(parsed['ability1'])
        ability2_name = get_ability_constant(parsed['ability2'])
        lines.append(f"\t\t{ability1_name}, @ Ability 1")
        lines.append(f"\t\t{ability2_name}, @ Ability 2")
        flee_name = SAFARI_FLEE_RATE_NAMES.get(parsed['safari_flee_rate'], f"0x{parsed['safari_flee_rate']:02x}")
        lines.append(f"\t\t{flee_name}, @ Safari flee rate")
        color_name = BODY_COLOR_NAMES.get(parsed['body_color'], f"0x{parsed['body_color']:02x}")
        lines.append(f"\t\t{color_name}, @ Body color")
        flip_name = FLIP_FLAG_NAMES.get(parsed['flip_flag'], f"0x{parsed['flip_flag']:02x}")
        lines.append(f"\t\t{flip_name}, @ Flip flag")
        lines.append("")

    return "\n".join(lines)


def verify_inc(rom_data, inc_path):
    """生成した .inc ファイルをアセンブルし、元ROMと比較"""
    import subprocess
    import tempfile
    
    # アセンブル
    with tempfile.NamedTemporaryFile(mode='w', suffix='.s', delete=False) as src:
        src.write('.cpu arm7tdmi\n')
        src.write('.syntax unified\n')
        src.write('.include "constants/constants.inc"\n')
        src.write('.include "asm/macros/base_stats_macro.inc"\n')
        src.write('.include "' + inc_path.replace('data/pokemon/', '') + '"\n')
        src_path = src.name
    
    with tempfile.NamedTemporaryFile(mode='w', suffix='.o', delete=False) as obj:
        obj_path = obj.name
    
    with tempfile.NamedTemporaryFile(mode='w', suffix='.bin', delete=False) as out:
        out_path = out.name
    
    try:
        # アセンブル実行
        result = subprocess.run(
            ['arm-none-eabi-as', '-o', obj_path, src_path],
            capture_output=True, text=True
        )
        if result.returncode != 0:
            print(f"アセンブルエラー: {result.stderr}")
            return False
        
        # オブジェクトからバイナリ抽出
        result = subprocess.run(
            ['arm-none-eabi-objcopy', '-O', 'binary', obj_path, out_path],
            capture_output=True, text=True
        )
        if result.returncode != 0:
            print(f"objcopyエラー: {result.stderr}")
            return False
        
        # 比較
        with open(out_path, 'rb') as f:
            generated = f.read()
        
        original = rom_data[TABLE_ROM_OFFSET:TABLE_ROM_OFFSET + TABLE_SIZE]
        
        if generated == original:
            print("検証成功: ROMデータと完全一致")
            return True
        else:
            print("検証失敗: 差分があります")
            if len(generated) != len(original):
                print(f"  サイズ不一致: generated={len(generated)}, original={len(original)}")
            for i in range(min(len(generated), len(original))):
                if generated[i] != original[i]:
                    species = i // ENTRY_SIZE
                    offset = i % ENTRY_SIZE
                    print(f"  species={species}, offset={offset}, expected=0x{original[i]:02x}, actual=0x{generated[i]:02x}")
            return False
    finally:
        for f in [src_path, obj_path, out_path]:
            if os.path.exists(f):
                os.unlink(f)


def main():
    import argparse
    parser = argparse.ArgumentParser(description='ポケモン種族データ抽出ツール')
    parser.add_argument('--verify', action='store_true', help='生成後に検証を行う')
    args = parser.parse_args()
    
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
        f.write("\n")  # 末尾改行

    print(f"ベースステッツテーブルを抽出しました: {output_path}")
    print(f"  テーブルアドレス: 0x{TABLE_ROM_ADDR:08X}")
    print(f"  エントリサイズ: {ENTRY_SIZE}バイト")
    print(f"  エントリ数: {NUM_SPECIES}")
    print(f"  合計サイズ: {TABLE_SIZE}バイト (0x{TABLE_SIZE:X})")

    if args.verify:
        if verify_inc(rom_data, output_path):
            print("検証OK")
        else:
            print("検証NG")
            exit(1)


if __name__ == "__main__":
    main()