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
    _load_species_file(root / "constants/species_constants.inc", names, override=False)
    return names


def format_type(value: int) -> str:
    return TYPE_NAMES.get(value, f"0x{value:02X}")


def format_entry(label: str, e: dict[str, int | bytes]) -> str:
    values = [
        str(e["hp"]), str(e["attack"]), str(e["defense"]), str(e["speed"]),
        str(e["sp_attack"]), str(e["sp_defense"]), format_type(int(e["type1"])),
        format_type(int(e["type2"])), str(e["catch_rate"]), str(e["base_exp"]),
        f"0x{e['ev_yield']:04X}", f"0x{e['item1']:04X}", f"0x{e['item2']:04X}",
        f"0x{e['gender_ratio']:02X}", str(e["egg_cycles"]),
        str(e["base_friendship"]), f"0x{e['growth_rate']:02X}",
        f"0x{e['egg_group1']:02X}", f"0x{e['egg_group2']:02X}",
        f"0x{e['ability1']:02X}", f"0x{e['ability2']:02X}",
        f"0x{e['safari_flee_rate']:02X}", f"0x{e['body_color_and_flip']:02X}",
    ]
    return f"\tbase_stats {label}, " + ", ".join(values)


def generate_inc(rom_data: bytes, species_names: dict[int, str]) -> str:
    table = rom_data[TABLE_ROM_OFFSET:TABLE_ROM_END_OFFSET]
    if len(table) != TABLE_SIZE:
        raise ValueError(f"ROM is too short: got {len(table)} table bytes")
    lines = [
        '.include "constants/type_constants.inc"', "",
        ".globl gUnknown_82F0D54", "gUnknown_82F0D54: @ 0x082F0D54", "",
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
