#!/usr/bin/env python3
from __future__ import annotations

import argparse
import re
from pathlib import Path

ROM_BASE = 0x08000000
TABLE_ROM_ADDR = 0x082F0D54
TABLE_ROM_END = 0x082F3A64
TABLE_ROM_OFFSET = TABLE_ROM_ADDR - ROM_BASE
TABLE_ROM_END_OFFSET = TABLE_ROM_END - ROM_BASE
ENTRY_SIZE = 28
TABLE_SIZE = TABLE_ROM_END_OFFSET - TABLE_ROM_OFFSET

if TABLE_SIZE % ENTRY_SIZE:
    raise RuntimeError("base stats table size is not divisible by 28")

NUM_SPECIES = TABLE_SIZE // ENTRY_SIZE

TYPE_NAMES = {
    0: "TYPE_NORMAL",
    1: "TYPE_FIGHTING",
    2: "TYPE_FLYING",
    3: "TYPE_POISON",
    4: "TYPE_GROUND",
    5: "TYPE_ROCK",
    6: "TYPE_BUG",
    7: "TYPE_GHOST",
    8: "TYPE_STEEL",
    9: "TYPE_MYSTERY",
    10: "TYPE_FIRE",
    11: "TYPE_WATER",
    12: "TYPE_GRASS",
    13: "TYPE_ELECTRIC",
    14: "TYPE_PSYCHIC",
    15: "TYPE_ICE",
    16: "TYPE_DRAGON",
    17: "TYPE_DARK",
}

GENDER_RATIO_NAMES = {
    0x00: "GENDER_MALE_ONLY",
    0x1F: "GENDER_FEMALE_12_5",
    0x3F: "GENDER_FEMALE_25",
    0x7F: "GENDER_FEMALE_50",
    0xBF: "GENDER_FEMALE_75",
    0xDF: "GENDER_FEMALE_87_5",
    0xFE: "GENDER_FEMALE_ONLY",
    0xFF: "GENDERLESS",
}

GROWTH_RATE_NAMES = {
    0: "GROWTH_MEDIUM_FAST",
    1: "GROWTH_ERRATIC",
    2: "GROWTH_FLUCTUATING",
    3: "GROWTH_MEDIUM_SLOW",
    4: "GROWTH_FAST",
    5: "GROWTH_SLOW",
}

EGG_GROUP_NAMES = {
    0: "EGG_GROUP_NONE",
    1: "EGG_GROUP_MONSTER",
    2: "EGG_GROUP_WATER_1",
    3: "EGG_GROUP_BUG",
    4: "EGG_GROUP_FLYING",
    5: "EGG_GROUP_FIELD",
    6: "EGG_GROUP_FAIRY",
    7: "EGG_GROUP_GRASS",
    8: "EGG_GROUP_HUMAN_LIKE",
    9: "EGG_GROUP_WATER_3",
    10: "EGG_GROUP_MINERAL",
    11: "EGG_GROUP_AMORPHOUS",
    12: "EGG_GROUP_WATER_2",
    13: "EGG_GROUP_DITTO",
    14: "EGG_GROUP_DRAGON",
    15: "EGG_GROUP_UNDISCOVERED",
}

ABILITY_NAMES = {
    0: "ABILITY_NONE", 1: "ABILITY_STENCH", 2: "ABILITY_DRIZZLE",
    3: "ABILITY_SPEED_BOOST", 4: "ABILITY_BATTLE_ARMOR",
    5: "ABILITY_STURDY", 6: "ABILITY_DAMP", 7: "ABILITY_LIMBER",
    8: "ABILITY_SAND_VEIL", 9: "ABILITY_STATIC",
    10: "ABILITY_VOLT_ABSORB", 11: "ABILITY_WATER_ABSORB",
    12: "ABILITY_OBLIVIOUS", 13: "ABILITY_CLOUD_NINE",
    14: "ABILITY_COMPOUND_EYES", 15: "ABILITY_INSOMNIA",
    16: "ABILITY_COLOR_CHANGE", 17: "ABILITY_IMMUNITY",
    18: "ABILITY_FLASH_FIRE", 19: "ABILITY_SHIELD_DUST",
    20: "ABILITY_OWN_TEMPO", 21: "ABILITY_SUCTION_CUPS",
    22: "ABILITY_INTIMIDATE", 23: "ABILITY_SHADOW_TAG",
    24: "ABILITY_ROUGH_SKIN", 25: "ABILITY_WONDER_GUARD",
    26: "ABILITY_LEVITATE", 27: "ABILITY_EFFECT_SPORE",
    28: "ABILITY_SYNCHRONIZE", 29: "ABILITY_CLEAR_BODY",
    30: "ABILITY_NATURAL_CURE", 31: "ABILITY_LIGHTNING_ROD",
    32: "ABILITY_SERENE_GRACE", 33: "ABILITY_SWIFT_SWIM",
    34: "ABILITY_CHLOROPHYLL", 35: "ABILITY_ILLUMINATE",
    36: "ABILITY_TRACE", 37: "ABILITY_HUGE_POWER",
    38: "ABILITY_POISON_POINT", 39: "ABILITY_INNER_FOCUS",
    40: "ABILITY_MAGMA_ARMOR", 41: "ABILITY_WATER_VEIL",
    42: "ABILITY_MAGNET_PULL", 43: "ABILITY_SOUNDPROOF",
    44: "ABILITY_RAIN_DISH", 45: "ABILITY_SAND_STREAM",
    46: "ABILITY_PRESSURE", 47: "ABILITY_THICK_FAT",
    48: "ABILITY_EARLY_BIRD", 49: "ABILITY_FLAME_BODY",
    50: "ABILITY_RUN_AWAY", 51: "ABILITY_KEEN_EYE",
    52: "ABILITY_HYPER_CUTTER", 53: "ABILITY_PICKUP",
    54: "ABILITY_TRUANT", 55: "ABILITY_HUSTLE",
    56: "ABILITY_CUTE_CHARM", 57: "ABILITY_PLUS",
    58: "ABILITY_MINUS", 59: "ABILITY_FORECAST",
    60: "ABILITY_STICKY_HOLD", 61: "ABILITY_SHED_SKIN",
    62: "ABILITY_GUTS", 63: "ABILITY_MARVEL_SCALE",
    64: "ABILITY_LIQUID_OOZE", 65: "ABILITY_OVERGROW",
    66: "ABILITY_BLAZE", 67: "ABILITY_TORRENT",
    68: "ABILITY_SWARM", 69: "ABILITY_ROCK_HEAD",
    70: "ABILITY_DROUGHT", 71: "ABILITY_ARENA_TRAP",
    72: "ABILITY_VITAL_SPIRIT", 73: "ABILITY_WHITE_SMOKE",
    74: "ABILITY_PURE_POWER", 75: "ABILITY_SHELL_ARMOR",
    76: "ABILITY_CACOPHONY", 77: "ABILITY_AIR_LOCK",
}

BODY_COLOR_NAMES = {
    0: "BODY_COLOR_RED", 1: "BODY_COLOR_BLUE",
    2: "BODY_COLOR_YELLOW", 3: "BODY_COLOR_GREEN",
    4: "BODY_COLOR_BLACK", 5: "BODY_COLOR_BROWN",
    6: "BODY_COLOR_PURPLE", 7: "BODY_COLOR_GRAY",
    8: "BODY_COLOR_WHITE", 9: "BODY_COLOR_PINK",
}


def read_u16(data: bytes, offset: int) -> int:
    return int.from_bytes(data[offset:offset + 2], "little")


def parse_entry(data: bytes, species_id: int) -> dict[str, int | bytes]:
    if len(data) != ENTRY_SIZE:
        raise ValueError(f"species {species_id}: expected 28 bytes, got {len(data)}")
    return {
        "hp": data[0], "attack": data[1], "defense": data[2],
        "speed": data[3], "sp_attack": data[4], "sp_defense": data[5],
        "type1": data[6], "type2": data[7], "catch_rate": data[8],
        "base_exp": data[9], "ev_yield": read_u16(data, 10),
        "item1": read_u16(data, 12), "item2": read_u16(data, 14),
        "gender_ratio": data[16], "egg_cycles": data[17],
        "base_friendship": data[18], "growth_rate": data[19],
        "egg_group1": data[20], "egg_group2": data[21],
        "ability1": data[22], "ability2": data[23],
        "safari_flee_rate": data[24], "body_color_and_flip": data[25],
        "padding": data[26:28],
    }


_SET_RE = re.compile(r"^\s*\.set\s+SPECIES_([A-Za-z0-9_]+)\s*,\s*(0x[0-9A-Fa-f]+|[0-9]+)\s*(?:@.*)?$")


def _load_species_file(path: Path, names: dict[int, str], *, override: bool) -> None:
    for line in path.read_text(encoding="utf-8").splitlines():
        match = _SET_RE.match(line)
        if match:
            name, value = match.groups()
            species_id = int(value, 0)
            if override:
                names[species_id] = name
            else:
                names.setdefault(species_id, name)


def load_species_names(root: Path) -> dict[int, str]:
    names: dict[int, str] = {}
    _load_species_file(root / "constants/species.inc", names, override=False)
    return names


def format_enum(value: int, names: dict[int, str], width: int = 2) -> str:
    return names.get(value, f"0x{value:0{width}X}")


def format_body_color(value: int) -> str:
    color = value & 0x7F
    name = BODY_COLOR_NAMES.get(color)
    if name is None:
        return f"0x{value:02X}"
    if value & 0x80:
        return f"{name}_FLIP"
    return name


def format_entry(label: str, e: dict[str, int | bytes]) -> str:
    values = [
        str(e["hp"]), str(e["attack"]), str(e["defense"]), str(e["speed"]),
        str(e["sp_attack"]), str(e["sp_defense"]),
        format_enum(int(e["type1"]), TYPE_NAMES),
        format_enum(int(e["type2"]), TYPE_NAMES),
        str(e["catch_rate"]), str(e["base_exp"]),
        f"0x{e['ev_yield']:04X}", f"0x{e['item1']:04X}", f"0x{e['item2']:04X}",
        format_enum(int(e["gender_ratio"]), GENDER_RATIO_NAMES),
        str(e["egg_cycles"]), str(e["base_friendship"]),
        format_enum(int(e["growth_rate"]), GROWTH_RATE_NAMES),
        format_enum(int(e["egg_group1"]), EGG_GROUP_NAMES),
        format_enum(int(e["egg_group2"]), EGG_GROUP_NAMES),
        format_enum(int(e["ability1"]), ABILITY_NAMES),
        format_enum(int(e["ability2"]), ABILITY_NAMES),
        str(e["safari_flee_rate"]),
        format_body_color(int(e["body_color_and_flip"])),
    ]
    return f"\tbase_stats {label}, " + ", ".join(values)


def generate_inc(rom_data: bytes, species_names: dict[int, str]) -> str:
    table = rom_data[TABLE_ROM_OFFSET:TABLE_ROM_END_OFFSET]
    if len(table) != TABLE_SIZE:
        raise ValueError(f"ROM is too short: got {len(table)} table bytes")
    lines = [
        "@ Generated by tools/extract_base_stats.py. Do not edit by hand.",
        "@ Fields: HP, Atk, Def, Speed, SpAtk, SpDef, Type1, Type2,",
        "@ CatchRate, BaseExp, EVYield, Item1, Item2, Gender, EggCycles,",
        "@ Friendship, GrowthRate, EggGroup1, EggGroup2, Ability1, Ability2,",
        "@ SafariFleeRate, BodyColorAndFlip",
        '.include "constants/type_constants.inc"',
        '.include "constants/base_stats_constants.inc"',
        "",
        ".globl gUnknown_82F0D54",
        "gUnknown_82F0D54: @ 0x082F0D54",
        "",
    ]
    for species_id in range(NUM_SPECIES):
        start = species_id * ENTRY_SIZE
        entry = parse_entry(table[start:start + ENTRY_SIZE], species_id)
        if entry["padding"] != b"\x00\x00":
            raise ValueError(f"species {species_id}: non-zero padding {bytes(entry['padding']).hex()}")
        label = species_names.get(species_id, f"SPECIES_INTERNAL_{species_id}")
        lines.extend([format_entry(label, entry), ""])
    return "\n".join(lines).rstrip() + "\n"


def verify_round_trip(rom_data: bytes) -> None:
    original = rom_data[TABLE_ROM_OFFSET:TABLE_ROM_END_OFFSET]
    rebuilt = bytearray()
    for species_id in range(NUM_SPECIES):
        start = species_id * ENTRY_SIZE
        e = parse_entry(original[start:start + ENTRY_SIZE], species_id)
        rebuilt.extend(int(e[k]) for k in ("hp", "attack", "defense", "speed", "sp_attack", "sp_defense", "type1", "type2", "catch_rate", "base_exp"))
        rebuilt.extend(int(e["ev_yield"]).to_bytes(2, "little"))
        rebuilt.extend(int(e["item1"]).to_bytes(2, "little"))
        rebuilt.extend(int(e["item2"]).to_bytes(2, "little"))
        rebuilt.extend(int(e[k]) for k in ("gender_ratio", "egg_cycles", "base_friendship", "growth_rate", "egg_group1", "egg_group2", "ability1", "ability2", "safari_flee_rate", "body_color_and_flip"))
        rebuilt.extend(b"\x00\x00")
    if bytes(rebuilt) != original:
        raise RuntimeError("internal round-trip validation failed")


def main() -> int:
    parser = argparse.ArgumentParser()
    parser.add_argument("--rom", default="baserom.gba")
    parser.add_argument("--output", default="data/pokemon/base_stats.inc")
    args = parser.parse_args()
    root = Path(__file__).resolve().parent.parent
    rom_data = (root / args.rom).read_bytes()
    verify_round_trip(rom_data)
    output = generate_inc(rom_data, load_species_names(root))
    output_path = root / args.output
    output_path.parent.mkdir(parents=True, exist_ok=True)
    output_path.write_text(output, encoding="utf-8")
    print(f"generated: {output_path}")
    print(f"entries: {NUM_SPECIES}, bytes: {TABLE_SIZE} (0x{TABLE_SIZE:X})")
    print("raw round-trip: OK")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
