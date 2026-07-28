#!/usr/bin/env python3
"""
Extract all normal map wild encounter tables from baserom.gba.

What this script does:
  1. Reads encounter definitions from pret/pokeemerald wild_encounters.json.
  2. Reads Japanese species IDs from constants/species.inc.
  3. Locates each WildPokemon[] + WildPokemonInfo block in baserom.gba.
  4. Generates one file per map under data/wild_encounters/maps/.
  5. Splits/replaces matching .incbin lines with .include directives.
  6. Leaves Battle Pyramid and other non-map encounter groups untouched.

Run from the repository root.

Recommended first run:
    python3 tools/extract_wild_encounters.py --dry-run

Apply:
    python3 tools/extract_wild_encounters.py

Then:
    make -j4
    make compare

The script creates backups with the suffix ".wildbak" before modifying files.
"""

from __future__ import annotations

import argparse
import json
import re
import shutil
import struct
import sys
import urllib.request
from dataclasses import dataclass
from pathlib import Path
from typing import Iterable

ROM_BASE = 0x08000000
DEFAULT_JSON_URL = (
    "https://raw.githubusercontent.com/pret/pokeemerald/master/"
    "src/data/wild_encounters.json"
)

FIELD_ORDER = (
    "land_mons",
    "water_mons",
    "rock_smash_mons",
    "fishing_mons",
)

FIELD_SUFFIX = {
    "land_mons": "LandMons",
    "water_mons": "WaterMons",
    "rock_smash_mons": "RockSmashMons",
    "fishing_mons": "FishingMons",
}

INCBIN_RE = re.compile(
    r'^(?P<indent>[ \t]*)\.incbin\s+"baserom\.gba"\s*,\s*'
    r'(?P<start>0x[0-9A-Fa-f]+|\d+)\s*,\s*'
    r'(?P<size>0x[0-9A-Fa-f]+|\d+)'
    r'(?P<tail>[^\n]*)$',
    re.MULTILINE,
)

SET_RE = re.compile(
    r"^\s*\.set\s+([A-Za-z_][A-Za-z0-9_]*)\s*,\s*"
    r"(0x[0-9A-Fa-f]+|\d+)\s*(?:@.*)?$",
    re.MULTILINE,
)


@dataclass(frozen=True)
class EncounterBlock:
    map_name: str
    base_label: str
    field_name: str
    offset: int
    end: int
    encounter_rate: int
    mons: tuple[dict, ...]

    @property
    def label(self) -> str:
        return f"{self.base_label}_{FIELD_SUFFIX[self.field_name]}"

    @property
    def info_label(self) -> str:
        return f"{self.label}Info"


@dataclass(frozen=True)
class MapRegion:
    map_name: str
    base_label: str
    filename: str
    start: int
    end: int
    blocks: tuple[EncounterBlock, ...]


def fail(message: str) -> "NoReturn":
    raise RuntimeError(message)


def parse_int(value: str) -> int:
    return int(value, 0)


def camel_to_snake(value: str) -> str:
    value = re.sub(r"^g", "", value)
    value = re.sub(r"([A-Z]+)([A-Z][a-z])", r"\1_\2", value)
    value = re.sub(r"([a-z0-9])([A-Z])", r"\1_\2", value)
    return value.lower()


def read_species_constants(path: Path) -> dict[str, int]:
    if not path.exists():
        fail(f"species constant file not found: {path}")

    text = path.read_text(encoding="utf-8")
    constants = {name: parse_int(value) for name, value in SET_RE.findall(text)}

    if not constants:
        fail(f"No '.set NAME, VALUE' constants found in {path}")

    return constants


def load_json(path: Path | None, cache_path: Path, url: str) -> dict:
    if path is not None:
        return json.loads(path.read_text(encoding="utf-8"))

    if cache_path.exists():
        print(f"[json] using cache: {cache_path}")
        return json.loads(cache_path.read_text(encoding="utf-8"))

    print(f"[json] downloading: {url}")
    cache_path.parent.mkdir(parents=True, exist_ok=True)

    try:
        with urllib.request.urlopen(url, timeout=30) as response:
            data = response.read()
    except Exception as exc:
        fail(
            "Failed to download wild_encounters.json.\n"
            f"URL: {url}\n"
            "Download it manually and pass --json PATH.\n"
            f"Cause: {exc}"
        )

    cache_path.write_bytes(data)
    return json.loads(data.decode("utf-8"))


def get_map_group(document: dict) -> dict:
    groups = document.get("wild_encounter_groups")
    if not isinstance(groups, list):
        fail("wild_encounter_groups is missing from JSON")

    for group in groups:
        if group.get("for_maps") is True:
            return group

    fail("No encounter group with for_maps=true was found")


def encode_mons(mons: Iterable[dict], species: dict[str, int]) -> bytes:
    output = bytearray()

    for mon in mons:
        species_name = mon["species"]
        if species_name not in species:
            fail(f"Species constant not found: {species_name}")

        species_id = species[species_name]
        min_level = int(mon["min_level"])
        max_level = int(mon["max_level"])

        if not 0 <= min_level <= 255 or not 0 <= max_level <= 255:
            fail(f"Invalid level in {mon}")
        if not 0 <= species_id <= 0xFFFF:
            fail(f"Invalid species ID for {species_name}: {species_id}")

        output += struct.pack("<BBH", min_level, max_level, species_id)

    return bytes(output)


def find_block_candidates(
    rom: bytes,
    mons_bytes: bytes,
    encounter_rate: int,
) -> list[int]:
    """
    Match:
        WildPokemon mons[N]
        WildPokemonInfo {
            encounterRate,
            0, 0, 0,
            &mons
        }

    The pointer makes identical Pokémon arrays at unrelated addresses much less
    likely to be confused.
    """
    candidates: list[int] = []
    search_from = 0

    while True:
        offset = rom.find(mons_bytes, search_from)
        if offset < 0:
            break

        info_offset = offset + len(mons_bytes)
        expected_info = struct.pack(
            "<BBBBI",
            encounter_rate,
            0,
            0,
            0,
            ROM_BASE + offset,
        )

        if rom[info_offset : info_offset + 8] == expected_info:
            candidates.append(offset)

        search_from = offset + 1

    return candidates


def locate_blocks(
    rom: bytes,
    encounters: list[dict],
    species: dict[str, int],
) -> list[EncounterBlock]:
    blocks: list[EncounterBlock] = []
    previous_offset = -1

    for encounter in encounters:
        map_name = encounter["map"]
        base_label = encounter["base_label"]

        for field_name in FIELD_ORDER:
            data = encounter.get(field_name)
            if data is None:
                continue

            mons = tuple(data["mons"])
            rate = int(data["encounter_rate"])
            mons_bytes = encode_mons(mons, species)
            candidates = find_block_candidates(rom, mons_bytes, rate)

            if not candidates:
                fail(
                    f"ROM block not found: {map_name} / {field_name}\n"
                    f"Expected mons bytes: {mons_bytes.hex(' ')}"
                )

            # Encounter data is normally emitted in JSON order. Prefer the first
            # candidate after the previously selected table.
            ordered = [offset for offset in candidates if offset > previous_offset]

            if ordered:
                offset = ordered[0]
            elif len(candidates) == 1:
                offset = candidates[0]
            else:
                formatted = ", ".join(f"0x{x:08X}" for x in candidates)
                fail(
                    f"Ambiguous ROM block: {map_name} / {field_name}\n"
                    f"Candidates: {formatted}"
                )

            end = offset + len(mons_bytes) + 8
            blocks.append(
                EncounterBlock(
                    map_name=map_name,
                    base_label=base_label,
                    field_name=field_name,
                    offset=offset,
                    end=end,
                    encounter_rate=rate,
                    mons=mons,
                )
            )
            previous_offset = offset

            print(
                f"[found] {map_name:<34} {field_name:<16} "
                f"0x{offset:08X}-0x{end:08X}"
            )

    return blocks


def group_regions(blocks: list[EncounterBlock]) -> list[MapRegion]:
    by_map: dict[tuple[str, str], list[EncounterBlock]] = {}

    for block in blocks:
        by_map.setdefault((block.map_name, block.base_label), []).append(block)

    regions: list[MapRegion] = []

    for (map_name, base_label), map_blocks in by_map.items():
        map_blocks.sort(key=lambda block: block.offset)

        # All encounter types for a map should be adjacent in the generated ROM.
        for left, right in zip(map_blocks, map_blocks[1:]):
            if left.end != right.offset:
                fail(
                    f"Non-contiguous encounter blocks for {map_name}:\n"
                    f"  {left.field_name} ends at 0x{left.end:08X}\n"
                    f"  {right.field_name} starts at 0x{right.offset:08X}\n"
                    "Refusing to remove unknown bytes between them."
                )

        regions.append(
            MapRegion(
                map_name=map_name,
                base_label=base_label,
                filename=f"{camel_to_snake(base_label)}.inc",
                start=map_blocks[0].offset,
                end=map_blocks[-1].end,
                blocks=tuple(map_blocks),
            )
        )

    regions.sort(key=lambda region: region.start)

    for left, right in zip(regions, regions[1:]):
        if left.end > right.start:
            fail(
                f"Overlapping regions: {left.map_name} and {right.map_name}"
            )

    return regions


def render_map_file(region: MapRegion) -> str:
    lines = [
        f"@ {region.map_name}",
        f"@ ROM 0x{ROM_BASE + region.start:08X}-0x{ROM_BASE + region.end:08X}",
        "",
    ]

    for block_index, block in enumerate(region.blocks):
        lines.append(f"{block.label}::")
        for mon in block.mons:
            lines.append(
                "\twildmon "
                f"{mon['min_level']}, {mon['max_level']}, {mon['species']}"
            )

        lines.append("")
        lines.append(f"{block.info_label}::")
        lines.append(
            f"\twildmoninfo {block.encounter_rate}, {block.label}"
        )

        if block_index != len(region.blocks) - 1:
            lines.append("")

    lines.append("")
    return "\n".join(lines)


def find_source_files(roots: Iterable[Path]) -> list[Path]:
    files: list[Path] = []

    for root in roots:
        if not root.exists():
            continue
        for path in root.rglob("*"):
            if path.is_file() and path.suffix in {".inc", ".s"}:
                files.append(path)

    return sorted(set(files))


def include_line(output_dir: Path, region: MapRegion, indent: str = "") -> str:
    path = output_dir / region.filename
    return f'{indent}.include "{path.as_posix()}"'


def already_included(source_files: list[Path], output_dir: Path, region: MapRegion) -> bool:
    needle = f'.include "{(output_dir / region.filename).as_posix()}"'

    for path in source_files:
        try:
            text = path.read_text(encoding="utf-8")
        except UnicodeDecodeError:
            continue
        if needle in text:
            return True

    return False


def patch_incbin_file(
    path: Path,
    regions: list[MapRegion],
    output_dir: Path,
    dry_run: bool,
) -> int:
    text = path.read_text(encoding="utf-8")
    replacements: list[tuple[int, int, str]] = []

    for match in INCBIN_RE.finditer(text):
        incbin_start = parse_int(match.group("start"))
        incbin_size = parse_int(match.group("size"))
        incbin_end = incbin_start + incbin_size
        indent = match.group("indent")
        tail = match.group("tail")

        inside = [
            region
            for region in regions
            if incbin_start <= region.start and region.end <= incbin_end
        ]
        if not inside:
            continue

        inside.sort(key=lambda region: region.start)
        pieces: list[str] = []
        cursor = incbin_start

        for region in inside:
            if cursor < region.start:
                pieces.append(
                    f'{indent}.incbin "baserom.gba", '
                    f"0x{cursor:x}, 0x{region.start - cursor:x}"
                )

            pieces.append(include_line(output_dir, region, indent))
            cursor = region.end

        if cursor < incbin_end:
            pieces.append(
                f'{indent}.incbin "baserom.gba", '
                f"0x{cursor:x}, 0x{incbin_end - cursor:x}{tail}"
            )
        elif tail.strip():
            # Preserve a trailing comment if the original incbin ended exactly
            # at the last extracted region.
            pieces[-1] += tail

        replacement = "\n".join(pieces)
        replacements.append((match.start(), match.end(), replacement))

    if not replacements:
        return 0

    new_text = text
    for start, end, replacement in reversed(replacements):
        new_text = new_text[:start] + replacement + new_text[end:]

    print(f"[patch] {path} ({len(replacements)} incbin line(s))")

    if not dry_run:
        backup = path.with_suffix(path.suffix + ".wildbak")
        if not backup.exists():
            shutil.copy2(path, backup)
        path.write_text(new_text, encoding="utf-8")

    return len(replacements)


def verify_region_coverage(
    source_files: list[Path],
    regions: list[MapRegion],
    output_dir: Path,
) -> tuple[list[MapRegion], list[MapRegion]]:
    included: list[MapRegion] = []
    pending: list[MapRegion] = []

    for region in regions:
        if already_included(source_files, output_dir, region):
            included.append(region)
        else:
            pending.append(region)

    return included, pending


def main() -> int:
    parser = argparse.ArgumentParser()
    parser.add_argument("--rom", type=Path, default=Path("baserom.gba"))
    parser.add_argument(
        "--species",
        type=Path,
        default=Path("constants/species.inc"),
    )
    parser.add_argument(
        "--json",
        type=Path,
        help="Local wild_encounters.json. Downloaded automatically if omitted.",
    )
    parser.add_argument(
        "--json-cache",
        type=Path,
        default=Path("tools/cache/wild_encounters.json"),
    )
    parser.add_argument("--json-url", default=DEFAULT_JSON_URL)
    parser.add_argument(
        "--output-dir",
        type=Path,
        default=Path("data/wild_encounters/maps"),
    )
    parser.add_argument(
        "--source-root",
        action="append",
        type=Path,
        default=None,
        help="Root containing .incbin files. Repeatable. Default: data and asm.",
    )
    parser.add_argument(
        "--dry-run",
        action="store_true",
        help="Locate and report changes without writing files.",
    )
    args = parser.parse_args()

    if not args.rom.exists():
        fail(f"ROM not found: {args.rom}")

    roots = args.source_root or [Path("data"), Path("asm")]
    source_files = find_source_files(roots)

    if not source_files:
        fail("No .inc or .s source files found under the source roots")

    rom = args.rom.read_bytes()
    species = read_species_constants(args.species)
    document = load_json(args.json, args.json_cache, args.json_url)
    map_group = get_map_group(document)
    encounters = map_group["encounters"]

    print(f"[rom] {args.rom} ({len(rom):#x} bytes)")
    print(f"[maps] {len(encounters)} encounter records")

    blocks = locate_blocks(rom, encounters, species)
    regions = group_regions(blocks)

    included, pending = verify_region_coverage(
        source_files, regions, args.output_dir
    )

    for region in included:
        print(f"[skip] already included: {region.map_name}")

    print(
        f"[summary] regions={len(regions)}, "
        f"already_included={len(included)}, pending={len(pending)}"
    )

    if not args.dry_run:
        args.output_dir.mkdir(parents=True, exist_ok=True)

        for region in pending:
            output_path = args.output_dir / region.filename
            if output_path.exists():
                fail(
                    f"Output file already exists but is not included: {output_path}\n"
                    "Move/remove it or add its include before rerunning."
                )
            output_path.write_text(render_map_file(region), encoding="utf-8")
            print(f"[write] {output_path}")

    patched_count = 0
    for path in source_files:
        patched_count += patch_incbin_file(
            path,
            pending,
            args.output_dir,
            args.dry_run,
        )

    # Re-scan after writes because source contents may have changed.
    final_sources = find_source_files(roots)
    _, unresolved = verify_region_coverage(
        final_sources,
        regions,
        args.output_dir,
    )

    if args.dry_run:
        print(f"[dry-run] incbin lines to patch: {patched_count}")
        print("[dry-run] No files were changed.")
        return 0

    if unresolved:
        print("\nERROR: The following regions were not inserted into any incbin:")
        for region in unresolved:
            print(
                f"  {region.map_name}: "
                f"0x{region.start:08X}-0x{region.end:08X}"
            )
        print(
            "\nGenerated files may exist, but source patching is incomplete.\n"
            "Restore *.wildbak files before retrying if necessary."
        )
        return 1

    print("\nExtraction completed.")
    print("Next commands:")
    print("  make -j4")
    print("  make compare")
    print()
    print("After a successful comparison, remove backups:")
    print("  find data asm -type f -name '*.wildbak' -delete")
    return 0


if __name__ == "__main__":
    try:
        raise SystemExit(main())
    except RuntimeError as exc:
        print(f"ERROR: {exc}", file=sys.stderr)
        raise SystemExit(1)
