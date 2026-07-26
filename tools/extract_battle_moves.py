#!/usr/bin/env python3
from __future__ import annotations

import argparse
import re
import struct
from pathlib import Path

ROM_BASE = 0x08000000
TABLE_ROM_ADDR = 0x082ED220
TABLE_ROM_END = 0x082EE2C4
TABLE_ROM_OFFSET = TABLE_ROM_ADDR - ROM_BASE
TABLE_ROM_END_OFFSET = TABLE_ROM_END - ROM_BASE
ENTRY_SIZE = 12
TABLE_SIZE = TABLE_ROM_END_OFFSET - TABLE_ROM_OFFSET

if TABLE_SIZE % ENTRY_SIZE:
    raise RuntimeError("battle move table size is not divisible by 12")

NUM_MOVES = TABLE_SIZE // ENTRY_SIZE

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

EFFECT_NAMES = {
    0: "EFFECT_HIT",
    1: "EFFECT_SLEEP",
    2: "EFFECT_POISON_HIT",
    3: "EFFECT_ABSORB",
    4: "EFFECT_BURN_HIT",
    5: "EFFECT_FREEZE_HIT",
    6: "EFFECT_PARALYZE_HIT",
    7: "EFFECT_EXPLOSION",
    8: "EFFECT_DREAM_EATER",
    9: "EFFECT_MIRROR_MOVE",
    10: "EFFECT_ATTACK_UP",
    11: "EFFECT_DEFENSE_UP",
    12: "EFFECT_SPEED_UP",
    13: "EFFECT_SPECIAL_ATTACK_UP",
    14: "EFFECT_SPECIAL_DEFENSE_UP",
    15: "EFFECT_ACCURACY_UP",
    16: "EFFECT_EVASION_UP",
    17: "EFFECT_ALWAYS_HIT",
    18: "EFFECT_ATTACK_DOWN",
    19: "EFFECT_DEFENSE_DOWN",
    20: "EFFECT_SPEED_DOWN",
    21: "EFFECT_SPECIAL_ATTACK_DOWN",
    22: "EFFECT_SPECIAL_DEFENSE_DOWN",
    23: "EFFECT_ACCURACY_DOWN",
    24: "EFFECT_EVASION_DOWN",
    25: "EFFECT_HAZE",
    26: "EFFECT_BIDE",
    27: "EFFECT_RAMPAGE",
    28: "EFFECT_ROAR",
    29: "EFFECT_MULTI_HIT",
    30: "EFFECT_CONVERSION",
    31: "EFFECT_FLINCH_HIT",
    32: "EFFECT_RESTORE_HP",
    33: "EFFECT_TOXIC",
    34: "EFFECT_PAY_DAY",
    35: "EFFECT_LIGHT_SCREEN",
    36: "EFFECT_TRI_ATTACK",
    37: "EFFECT_REST",
    38: "EFFECT_OHKO",
    39: "EFFECT_RAZOR_WIND",
    40: "EFFECT_SUPER_FANG",
    41: "EFFECT_DRAGON_RAGE",
    42: "EFFECT_TRAP",
    43: "EFFECT_HIGH_CRITICAL",
    44: "EFFECT_DOUBLE_HIT",
    45: "EFFECT_RECOIL_IF_MISS",
    46: "EFFECT_MIST",
    47: "EFFECT_FOCUS_ENERGY",
    48: "EFFECT_RECOIL",
    49: "EFFECT_CONFUSE",
    50: "EFFECT_ATTACK_UP_2",
    51: "EFFECT_DEFENSE_UP_2",
    52: "EFFECT_SPEED_UP_2",
    53: "EFFECT_SPECIAL_ATTACK_UP_2",
    54: "EFFECT_SPECIAL_DEFENSE_UP_2",
    55: "EFFECT_ACCURACY_UP_2",
    56: "EFFECT_EVASION_UP_2",
    57: "EFFECT_TRANSFORM",
    58: "EFFECT_ATTACK_DOWN_2",
    59: "EFFECT_DEFENSE_DOWN_2",
    60: "EFFECT_SPEED_DOWN_2",
    61: "EFFECT_SPECIAL_ATTACK_DOWN_2",
    62: "EFFECT_SPECIAL_DEFENSE_DOWN_2",
    63: "EFFECT_ACCURACY_DOWN_2",
    64: "EFFECT_EVASION_DOWN_2",
    65: "EFFECT_REFLECT",
    66: "EFFECT_POISON",
    67: "EFFECT_PARALYZE",
    68: "EFFECT_ATTACK_DOWN_HIT",
    69: "EFFECT_DEFENSE_DOWN_HIT",
    70: "EFFECT_SPEED_DOWN_HIT",
    71: "EFFECT_SPECIAL_ATTACK_DOWN_HIT",
    72: "EFFECT_SPECIAL_DEFENSE_DOWN_HIT",
    73: "EFFECT_ACCURACY_DOWN_HIT",
    74: "EFFECT_EVASION_DOWN_HIT",
    75: "EFFECT_SKY_ATTACK",
    76: "EFFECT_CONFUSE_HIT",
    77: "EFFECT_TWINEEDLE",
    78: "EFFECT_VITAL_THROW",
    79: "EFFECT_SUBSTITUTE",
    80: "EFFECT_RECHARGE",
    81: "EFFECT_RAGE",
    82: "EFFECT_MIMIC",
    83: "EFFECT_METRONOME",
    84: "EFFECT_LEECH_SEED",
    85: "EFFECT_SPLASH",
    86: "EFFECT_DISABLE",
    87: "EFFECT_LEVEL_DAMAGE",
    88: "EFFECT_PSYWAVE",
    89: "EFFECT_COUNTER",
    90: "EFFECT_ENCORE",
    91: "EFFECT_PAIN_SPLIT",
    92: "EFFECT_SNORE",
    93: "EFFECT_CONVERSION_2",
    94: "EFFECT_LOCK_ON",
    95: "EFFECT_SKETCH",
    96: "EFFECT_UNUSED_60",
    97: "EFFECT_SLEEP_TALK",
    98: "EFFECT_DESTINY_BOND",
    99: "EFFECT_FLAIL",
    100: "EFFECT_SPITE",
    101: "EFFECT_FALSE_SWIPE",
    102: "EFFECT_HEAL_BELL",
    103: "EFFECT_QUICK_ATTACK",
    104: "EFFECT_TRIPLE_KICK",
    105: "EFFECT_THIEF",
    106: "EFFECT_MEAN_LOOK",
    107: "EFFECT_NIGHTMARE",
    108: "EFFECT_MINIMIZE",
    109: "EFFECT_CURSE",
    110: "EFFECT_UNUSED_6E",
    111: "EFFECT_PROTECT",
    112: "EFFECT_SPIKES",
    113: "EFFECT_FORESIGHT",
    114: "EFFECT_PERISH_SONG",
    115: "EFFECT_SANDSTORM",
    116: "EFFECT_ENDURE",
    117: "EFFECT_ROLLOUT",
    118: "EFFECT_SWAGGER",
    119: "EFFECT_FURY_CUTTER",
    120: "EFFECT_ATTRACT",
    121: "EFFECT_RETURN",
    122: "EFFECT_PRESENT",
    123: "EFFECT_FRUSTRATION",
    124: "EFFECT_SAFEGUARD",
    125: "EFFECT_THAW_HIT",
    126: "EFFECT_MAGNITUDE",
    127: "EFFECT_BATON_PASS",
    128: "EFFECT_PURSUIT",
    129: "EFFECT_RAPID_SPIN",
    130: "EFFECT_SONICBOOM",
    131: "EFFECT_UNUSED_83",
    132: "EFFECT_MORNING_SUN",
    133: "EFFECT_SYNTHESIS",
    134: "EFFECT_MOONLIGHT",
    135: "EFFECT_HIDDEN_POWER",
    136: "EFFECT_RAIN_DANCE",
    137: "EFFECT_SUNNY_DAY",
    138: "EFFECT_DEFENSE_UP_HIT",
    139: "EFFECT_ATTACK_UP_HIT",
    140: "EFFECT_ALL_STATS_UP_HIT",
    141: "EFFECT_UNUSED_8D",
    142: "EFFECT_BELLY_DRUM",
    143: "EFFECT_PSYCH_UP",
    144: "EFFECT_MIRROR_COAT",
    145: "EFFECT_SKULL_BASH",
    146: "EFFECT_TWISTER",
    147: "EFFECT_EARTHQUAKE",
    148: "EFFECT_FUTURE_SIGHT",
    149: "EFFECT_GUST",
    150: "EFFECT_FLINCH_MINIMIZE_HIT",
    151: "EFFECT_SOLAR_BEAM",
    152: "EFFECT_THUNDER",
    153: "EFFECT_TELEPORT",
    154: "EFFECT_BEAT_UP",
    155: "EFFECT_SEMI_INVULNERABLE",
    156: "EFFECT_DEFENSE_CURL",
    157: "EFFECT_SOFTBOILED",
    158: "EFFECT_FAKE_OUT",
    159: "EFFECT_UPROAR",
    160: "EFFECT_STOCKPILE",
    161: "EFFECT_SPIT_UP",
    162: "EFFECT_SWALLOW",
    163: "EFFECT_UNUSED_A3",
    164: "EFFECT_HAIL",
    165: "EFFECT_TORMENT",
    166: "EFFECT_FLATTER",
    167: "EFFECT_WILL_O_WISP",
    168: "EFFECT_MEMENTO",
    169: "EFFECT_FACADE",
    170: "EFFECT_FOCUS_PUNCH",
    171: "EFFECT_SMELLINGSALT",
    172: "EFFECT_FOLLOW_ME",
    173: "EFFECT_NATURE_POWER",
    174: "EFFECT_CHARGE",
    175: "EFFECT_TAUNT",
    176: "EFFECT_HELPING_HAND",
    177: "EFFECT_TRICK",
    178: "EFFECT_ROLE_PLAY",
    179: "EFFECT_WISH",
    180: "EFFECT_ASSIST",
    181: "EFFECT_INGRAIN",
    182: "EFFECT_SUPERPOWER",
    183: "EFFECT_MAGIC_COAT",
    184: "EFFECT_RECYCLE",
    185: "EFFECT_REVENGE",
    186: "EFFECT_BRICK_BREAK",
    187: "EFFECT_YAWN",
    188: "EFFECT_KNOCK_OFF",
    189: "EFFECT_ENDEAVOR",
    190: "EFFECT_ERUPTION",
    191: "EFFECT_SKILL_SWAP",
    192: "EFFECT_IMPRISON",
    193: "EFFECT_REFRESH",
    194: "EFFECT_GRUDGE",
    195: "EFFECT_SNATCH",
    196: "EFFECT_LOW_KICK",
    197: "EFFECT_SECRET_POWER",
    198: "EFFECT_DOUBLE_EDGE",
    199: "EFFECT_TEETER_DANCE",
    200: "EFFECT_BLAZE_KICK",
    201: "EFFECT_MUD_SPORT",
    202: "EFFECT_POISON_FANG",
    203: "EFFECT_WEATHER_BALL",
    204: "EFFECT_OVERHEAT",
    205: "EFFECT_TICKLE",
    206: "EFFECT_COSMIC_POWER",
    207: "EFFECT_SKY_UPPERCUT",
    208: "EFFECT_BULK_UP",
    209: "EFFECT_POISON_TAIL",
    210: "EFFECT_WATER_SPORT",
    211: "EFFECT_CALM_MIND",
    212: "EFFECT_DRAGON_DANCE",
    213: "EFFECT_CAMOUFLAGE",
}

TARGET_NAMES = {
    0x00: "MOVE_TARGET_SELECTED",
    0x01: "MOVE_TARGET_DEPENDS",
    0x02: "MOVE_TARGET_USER_OR_SELECTED",
    0x04: "MOVE_TARGET_RANDOM",
    0x08: "MOVE_TARGET_BOTH",
    0x10: "MOVE_TARGET_USER",
    0x20: "MOVE_TARGET_FOES_AND_ALLY",
    0x40: "MOVE_TARGET_OPPONENTS_FIELD",
}

FLAG_NAMES = [
    (0x01, "FLAG_MAKES_CONTACT"),
    (0x02, "FLAG_PROTECT_AFFECTED"),
    (0x04, "FLAG_MAGIC_COAT_AFFECTED"),
    (0x08, "FLAG_SNATCH_AFFECTED"),
    (0x10, "FLAG_MIRROR_MOVE_AFFECTED"),
    (0x20, "FLAG_KINGS_ROCK_AFFECTED"),
]

_MOVE_RE = re.compile(
    r"^\s*\.set\s+MOVE_([A-Za-z0-9_]+)\s*,\s*(0x[0-9A-Fa-f]+|[0-9]+)\s*(?:@.*)?$"
)


def load_move_names(path: Path) -> dict[int, str]:
    names: dict[int, str] = {}
    if not path.exists():
        return names
    for line in path.read_text(encoding="utf-8").splitlines():
        match = _MOVE_RE.match(line)
        if match:
            name, value = match.groups()
            names[int(value, 0)] = f"MOVE_{name}"
    return names


def format_enum(value: int, names: dict[int, str], width: int = 2) -> str:
    return names.get(value, f"0x{value:0{width}X}")


def format_flags(value: int) -> str:
    if value == 0:
        return "0"

    parts: list[str] = []
    remaining = value
    for mask, name in FLAG_NAMES:
        if remaining & mask:
            parts.append(name)
            remaining &= ~mask

    if remaining:
        parts.append(f"0x{remaining:02X}")

    return " | ".join(parts)


def parse_entry(data: bytes, move_id: int) -> dict[str, int | bytes]:
    if len(data) != ENTRY_SIZE:
        raise ValueError(f"move {move_id}: expected {ENTRY_SIZE} bytes, got {len(data)}")

    effect, power, move_type, accuracy, pp, secondary_chance, target, priority, flags, padding = (
        struct.unpack("<7BbB3s", data)
    )
    return {
        "effect": effect,
        "power": power,
        "type": move_type,
        "accuracy": accuracy,
        "pp": pp,
        "secondary_chance": secondary_chance,
        "target": target,
        "priority": priority,
        "flags": flags,
        "padding": padding,
    }


def format_entry(move_name: str, entry: dict[str, int | bytes]) -> str:
    padding = bytes(entry["padding"])
    return "\n".join(
        [
            f"\t@ {move_name}",
            f"\t.byte {format_enum(int(entry['effect']), EFFECT_NAMES)}",
            f"\t.byte {int(entry['power'])}",
            f"\t.byte {format_enum(int(entry['type']), TYPE_NAMES)}",
            f"\t.byte {int(entry['accuracy'])}",
            f"\t.byte {int(entry['pp'])}",
            f"\t.byte {int(entry['secondary_chance'])}",
            f"\t.byte {format_enum(int(entry['target']), TARGET_NAMES)}",
            f"\t.byte {int(entry['priority'])}",
            f"\t.byte {format_flags(int(entry['flags']))}",
            f"\t.byte 0x{padding[0]:02X}, 0x{padding[1]:02X}, 0x{padding[2]:02X}",
        ]
    )


def generate_inc(
    rom_data: bytes,
    table_rom_addr: int,
    count: int,
    move_names: dict[int, str],
) -> str:
    if table_rom_addr < ROM_BASE:
        raise ValueError(f"table address must be a ROM address >= 0x{ROM_BASE:08X}")

    table_offset = table_rom_addr - ROM_BASE
    table_size = count * ENTRY_SIZE
    table = rom_data[table_offset:table_offset + table_size]
    if len(table) != table_size:
        raise ValueError(
            f"ROM is too short: expected {table_size} bytes at 0x{table_rom_addr:08X}, "
            f"got {len(table)}"
        )

    lines = [
        "@ Generated by tools/extract_battle_moves.py. Do not edit by hand.",
        "@ Fields: Effect, Power, Type, Accuracy, PP, SecondaryEffectChance,",
        "@ Target, Priority, Flags, Padding[3]",
        '.include "constants/type_constants.inc"',
        '.include "constants/battle_move_effect_constants.inc"',
        '.include "constants/battle_move_constants.inc"',
        "",
        ".globl gBattleMoves",
        f"gBattleMoves: @ 0x{table_rom_addr:08X}",
        "",
    ]

    for move_id in range(count):
        start = move_id * ENTRY_SIZE
        entry = parse_entry(table[start:start + ENTRY_SIZE], move_id)
        move_name = move_names.get(move_id, f"MOVE_INTERNAL_{move_id}")
        lines.extend([format_entry(move_name, entry), ""])

    return "\n".join(lines).rstrip() + "\n"


def verify_round_trip(
    rom_data: bytes,
    table_rom_addr: int,
    count: int,
) -> None:
    table_offset = table_rom_addr - ROM_BASE
    original = rom_data[table_offset:table_offset + count * ENTRY_SIZE]
    if len(original) != count * ENTRY_SIZE:
        raise ValueError("ROM is too short for the requested move table")

    rebuilt = bytearray()
    for move_id in range(count):
        start = move_id * ENTRY_SIZE
        entry = parse_entry(original[start:start + ENTRY_SIZE], move_id)
        rebuilt.extend(
            [
                int(entry["effect"]),
                int(entry["power"]),
                int(entry["type"]),
                int(entry["accuracy"]),
                int(entry["pp"]),
                int(entry["secondary_chance"]),
                int(entry["target"]),
            ]
        )
        rebuilt.extend(struct.pack("<b", int(entry["priority"])))
        rebuilt.append(int(entry["flags"]))
        rebuilt.extend(bytes(entry["padding"]))

    if bytes(rebuilt) != original:
        raise RuntimeError("internal round-trip validation failed")


def main() -> int:
    parser = argparse.ArgumentParser(description="Extract the battle move table from the Japanese Emerald ROM")
    parser.add_argument("--rom", default="baserom.gba")
    parser.add_argument("--output", default="data/pokemon/battle_moves.inc")
    parser.add_argument("--moves", default="constants/move_constants.inc")
    args = parser.parse_args()

    root = Path(__file__).resolve().parent.parent
    rom_data = (root / args.rom).read_bytes()
    verify_round_trip(rom_data, TABLE_ROM_ADDR, NUM_MOVES)
    output = generate_inc(
        rom_data,
        TABLE_ROM_ADDR,
        NUM_MOVES,
        load_move_names(root / args.moves),
    )

    output_path = root / args.output
    output_path.parent.mkdir(parents=True, exist_ok=True)
    output_path.write_text(output, encoding="utf-8")

    print(f"generated: {output_path}")
    print(f"entries: {NUM_MOVES}, bytes: {TABLE_SIZE} (0x{TABLE_SIZE:X})")
    print(f"address: 0x{TABLE_ROM_ADDR:08X}-0x{TABLE_ROM_END:08X}")
    print("raw round-trip: OK")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
