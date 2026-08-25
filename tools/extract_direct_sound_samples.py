#!/usr/bin/env python3
"""Extract DirectSound WaveData payload bytes into source binary assets."""

from __future__ import annotations

import argparse
import re
from pathlib import Path


LABEL_RE = re.compile(
    r"^(DirectSoundWaveData_(?:Instrument|Cry)_[A-Za-z0-9_]+):\s*@\s*0x([0-9A-Fa-f]+)"
)
GLOBL_RE = re.compile(r"^\s*\.globl\s+")
BYTE_RE = re.compile(r"^\s*\.byte\s+(.+?)(?:\s*@.*)?$")
INCBIN_RE = re.compile(r'^\s*\.incbin\s+"([^"]+)"')


class ConvertError(Exception):
    pass


def parse_byte_values(lines: list[str]) -> bytes:
    values: list[int] = []
    for line in lines:
        match = BYTE_RE.match(line)
        if not match:
            continue
        for token in match.group(1).split(","):
            token = token.strip()
            if not token:
                continue
            value = int(token, 0)
            if not 0 <= value <= 0xFF:
                raise ConvertError(f"byte value out of range: {token}")
            values.append(value)
    return bytes(values)


def output_path_for(source: Path, label: str, output_root: Path) -> Path:
    stem = source.stem
    return output_root / stem / f"{label}.bin"


def convert_file(path: Path, output_root: Path, dry_run: bool, check: bool) -> tuple[int, int]:
    original = path.read_text().splitlines(keepends=True)
    lines = original[:]
    converted = 0
    written_bytes = 0
    i = 0

    while i < len(lines):
        match = LABEL_RE.match(lines[i])
        if not match:
            i += 1
            continue

        label = match.group(1)
        block_start = i + 1
        block_end = block_start
        while block_end < len(lines) and not GLOBL_RE.match(lines[block_end]):
            block_end += 1

        block = lines[block_start:block_end]
        incbins = [INCBIN_RE.match(line) for line in block]
        incbin_paths = [match.group(1) for match in incbins if match]
        if incbin_paths:
            if check:
                for incbin_path in incbin_paths:
                    existing = Path(incbin_path)
                    if not existing.exists():
                        raise ConvertError(f"{existing} is missing")
                    written_bytes += existing.stat().st_size
                    converted += 1
            i = block_end
            continue

        byte_indices = [n for n, line in enumerate(block) if BYTE_RE.match(line)]
        if not byte_indices:
            i = block_end
            continue

        payload = parse_byte_values(block)
        if not payload:
            raise ConvertError(f"{path}: {label} has no payload bytes")

        output_path = output_path_for(path, label, output_root)
        incbin_path = output_path.as_posix()
        first_byte = byte_indices[0]
        last_byte = byte_indices[-1]
        prefix = block[:first_byte]
        suffix = block[last_byte + 1 :]
        new_block = (
            prefix
            + [f'\t.incbin "{incbin_path}" @ {len(payload)} DirectSound sample bytes\n']
            + suffix
        )

        if check:
            if not output_path.exists():
                raise ConvertError(f"{output_path} is missing")
            existing = output_path.read_bytes()
            if existing != payload:
                raise ConvertError(f"{output_path} does not match {path}:{label}")

        if not dry_run and not check:
            output_path.parent.mkdir(parents=True, exist_ok=True)
            output_path.write_bytes(payload)

        lines[block_start:block_end] = new_block
        delta = len(new_block) - len(block)
        i = block_end + delta
        converted += 1
        written_bytes += len(payload)

    if lines != original and not dry_run and not check:
        path.write_text("".join(lines))
    return converted, written_bytes


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("paths", nargs="+", type=Path)
    parser.add_argument("--output-root", type=Path, default=Path("audio/direct_sound"))
    parser.add_argument("--dry-run", action="store_true")
    parser.add_argument("--check", action="store_true")
    args = parser.parse_args()

    total_converted = 0
    total_bytes = 0
    for path in args.paths:
        converted, written_bytes = convert_file(
            path,
            args.output_root,
            args.dry_run,
            args.check,
        )
        total_converted += converted
        total_bytes += written_bytes
        print(f"{path}: converted {converted}, bytes {written_bytes}")

    return 0 if total_converted or args.check else 1


if __name__ == "__main__":
    raise SystemExit(main())
