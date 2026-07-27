#!/usr/bin/env python3
from __future__ import annotations

import argparse
import csv
import struct
from dataclasses import dataclass
from pathlib import Path
from typing import Iterator, Sequence

ROM_BASE = 0x08000000


@dataclass(frozen=True)
class PointerRun:
    start_offset: int
    pointers: tuple[int, ...]
    unique_count: int
    ascending_pairs: int
    terminator_matches: int

    @property
    def count(self) -> int:
        return len(self.pointers)

    @property
    def end_offset(self) -> int:
        return self.start_offset + self.count * 4

    @property
    def unique_ratio(self) -> float:
        return self.unique_count / self.count if self.count else 0.0

    @property
    def ascending_ratio(self) -> float:
        return self.ascending_pairs / max(1, self.count - 1)

    @property
    def terminator_ratio(self) -> float:
        return self.terminator_matches / self.count if self.count else 0.0

    def score(self, prefer_terminated: bool) -> float:
        score = float(self.count)
        score += self.unique_ratio * 10.0
        score += self.ascending_ratio * 8.0
        if prefer_terminated:
            score += self.terminator_ratio * 20.0
        return score


class GbaRom:
    def __init__(self, data: bytes, base: int = ROM_BASE) -> None:
        self.data = data
        self.base = base
        self.end_address = base + len(data)

    def contains_address(self, address: int, size: int = 1) -> bool:
        offset = address - self.base
        return 0 <= offset and offset + size <= len(self.data)

    def offset_to_address(self, offset: int) -> int:
        return self.base + offset

    def u16_at_offset(self, offset: int) -> int:
        return struct.unpack_from("<H", self.data, offset)[0]

    def u32_at_offset(self, offset: int) -> int:
        return struct.unpack_from("<I", self.data, offset)[0]


def parse_int(value: str) -> int:
    return int(value, 0)


def normalize_pointer(value: int, allow_thumb_bit: bool) -> int:
    return value & ~1 if allow_thumb_bit else value


def is_rom_pointer(value: int, rom: GbaRom, allow_thumb_bit: bool) -> bool:
    address = normalize_pointer(value, allow_thumb_bit)
    return rom.base <= address < rom.end_address


def looks_like_terminated_u16_list(
    rom: GbaRom,
    address: int,
    *,
    terminator: int,
    max_entries: int,
) -> bool:
    if address % 2 or not rom.contains_address(address, 2):
        return False

    offset = address - rom.base
    for index in range(max_entries):
        entry_offset = offset + index * 2
        if entry_offset + 2 > len(rom.data):
            return False
        if rom.u16_at_offset(entry_offset) == terminator:
            return index > 0
    return False


def build_run(
    rom: GbaRom,
    start_offset: int,
    pointers: Sequence[int],
    *,
    terminator: int | None,
    max_list_entries: int,
) -> PointerRun:
    terminator_matches = 0
    if terminator is not None:
        for pointer in pointers:
            if looks_like_terminated_u16_list(
                rom,
                pointer,
                terminator=terminator,
                max_entries=max_list_entries,
            ):
                terminator_matches += 1

    return PointerRun(
        start_offset=start_offset,
        pointers=tuple(pointers),
        unique_count=len(set(pointers)),
        ascending_pairs=sum(a <= b for a, b in zip(pointers, pointers[1:])),
        terminator_matches=terminator_matches,
    )


def iter_pointer_runs(
    rom: GbaRom,
    *,
    start_offset: int,
    end_offset: int,
    alignment: int,
    min_count: int,
    allow_thumb_bit: bool,
    require_aligned_targets: bool,
    target_alignment: int,
    terminator: int | None,
    max_list_entries: int,
) -> Iterator[PointerRun]:
    offset = start_offset

    while offset + 4 <= end_offset:
        raw = rom.u32_at_offset(offset)
        if not is_rom_pointer(raw, rom, allow_thumb_bit):
            offset += alignment
            continue

        run_start = offset
        pointers: list[int] = []

        while offset + 4 <= end_offset:
            raw = rom.u32_at_offset(offset)
            if not is_rom_pointer(raw, rom, allow_thumb_bit):
                break

            pointer = normalize_pointer(raw, allow_thumb_bit)
            if require_aligned_targets and pointer % target_alignment:
                break

            pointers.append(pointer)
            offset += 4

        if len(pointers) >= min_count:
            yield build_run(
                rom,
                run_start,
                pointers,
                terminator=terminator,
                max_list_entries=max_list_entries,
            )

        if offset == run_start:
            offset += alignment


def format_run(run: PointerRun, rom: GbaRom, rank: int, prefer_terminated: bool) -> str:
    lines = [
        f"#{rank} score={run.score(prefer_terminated):.2f}",
        (
            f"  table: offset=0x{run.start_offset:08X} "
            f"address=0x{rom.offset_to_address(run.start_offset):08X} "
            f"end_offset=0x{run.end_offset:08X}"
        ),
        (
            f"  entries={run.count} unique={run.unique_count} "
            f"unique_ratio={run.unique_ratio:.3f} "
            f"ascending_ratio={run.ascending_ratio:.3f}"
        ),
        (
            f"  targets=0x{min(run.pointers):08X}-0x{max(run.pointers):08X}"
        ),
    ]
    if prefer_terminated:
        lines.append(
            f"  terminated_u16={run.terminator_matches}/{run.count} "
            f"ratio={run.terminator_ratio:.3f}"
        )
    lines.append(
        "  first: " + ", ".join(f"0x{x:08X}" for x in run.pointers[:8])
    )
    return "\n".join(lines)


def write_csv(path: Path, runs: Sequence[PointerRun], rom: GbaRom, prefer_terminated: bool) -> None:
    with path.open("w", newline="", encoding="utf-8") as file:
        writer = csv.writer(file)
        writer.writerow([
            "rank", "score", "table_offset", "table_address", "entry_count",
            "unique_count", "unique_ratio", "ascending_ratio", "target_min",
            "target_max", "terminator_matches", "terminator_ratio",
        ])
        for rank, run in enumerate(runs, 1):
            writer.writerow([
                rank,
                f"{run.score(prefer_terminated):.4f}",
                f"0x{run.start_offset:X}",
                f"0x{rom.offset_to_address(run.start_offset):08X}",
                run.count,
                run.unique_count,
                f"{run.unique_ratio:.6f}",
                f"{run.ascending_ratio:.6f}",
                f"0x{min(run.pointers):08X}",
                f"0x{max(run.pointers):08X}",
                run.terminator_matches,
                f"{run.terminator_ratio:.6f}",
            ])


def build_parser() -> argparse.ArgumentParser:
    parser = argparse.ArgumentParser(
        description="Find contiguous pointer tables in a GBA ROM and rank candidates."
    )
    parser.add_argument("rom", nargs="?", default="baserom.gba")
    parser.add_argument("--base", type=parse_int, default=ROM_BASE)
    parser.add_argument("--start", type=parse_int, default=0, help="start file offset")
    parser.add_argument("--end", type=parse_int, help="exclusive end file offset")
    parser.add_argument("--alignment", type=int, choices=(1, 2, 4), default=4)
    parser.add_argument("--min-count", type=int, default=16)
    parser.add_argument("--top", type=int, default=30)
    parser.add_argument("--allow-thumb-bit", action="store_true")
    parser.add_argument("--require-aligned-targets", action="store_true")
    parser.add_argument("--target-alignment", type=int, choices=(2, 4), default=2)
    parser.add_argument(
        "--u16-terminator",
        type=parse_int,
        help="prefer targets containing this u16 terminator; use 0xFFFF for learnsets",
    )
    parser.add_argument("--max-list-entries", type=int, default=128)
    parser.add_argument("--min-terminator-ratio", type=float, default=0.0)
    parser.add_argument("--csv", type=Path)
    return parser


def main() -> int:
    args = build_parser().parse_args()
    rom_path = Path(args.rom)
    data = rom_path.read_bytes()
    rom = GbaRom(data, args.base)

    end_offset = len(data) if args.end is None else args.end
    if not 0 <= args.start < end_offset <= len(data):
        raise SystemExit(
            f"invalid scan range 0x{args.start:X}-0x{end_offset:X}; "
            f"ROM size is 0x{len(data):X}"
        )
    if args.min_count <= 0:
        raise SystemExit("--min-count must be positive")
    if not 0.0 <= args.min_terminator_ratio <= 1.0:
        raise SystemExit("--min-terminator-ratio must be between 0 and 1")

    runs = list(iter_pointer_runs(
        rom,
        start_offset=args.start,
        end_offset=end_offset,
        alignment=args.alignment,
        min_count=args.min_count,
        allow_thumb_bit=args.allow_thumb_bit,
        require_aligned_targets=args.require_aligned_targets,
        target_alignment=args.target_alignment,
        terminator=args.u16_terminator,
        max_list_entries=args.max_list_entries,
    ))

    prefer_terminated = args.u16_terminator is not None
    if prefer_terminated:
        runs = [r for r in runs if r.terminator_ratio >= args.min_terminator_ratio]

    runs.sort(
        key=lambda r: (r.score(prefer_terminated), r.count, r.terminator_ratio, r.unique_ratio),
        reverse=True,
    )

    print(f"ROM: {rom_path}")
    print(f"size: 0x{len(data):X} bytes")
    print(f"scan: 0x{args.start:X}-0x{end_offset:X}")
    print(f"candidates: {len(runs)}\n")

    for rank, run in enumerate(runs[:args.top], 1):
        print(format_run(run, rom, rank, prefer_terminated))
        print()

    if args.csv:
        write_csv(args.csv, runs, rom, prefer_terminated)
        print(f"CSV written: {args.csv}")

    return 0


if __name__ == "__main__":
    raise SystemExit(main())
