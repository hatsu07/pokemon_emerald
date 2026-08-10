#!/usr/bin/env python3
"""Convert proven M4A SongTrack raw byte blocks into track command macros."""

from __future__ import annotations

import argparse
import re
import sys
from pathlib import Path


CLOCK_TABLE = [
    0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07,
    0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F,
    0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17,
    0x18, 0x1C, 0x1E, 0x20, 0x24, 0x28, 0x2A, 0x2C,
    0x30, 0x34, 0x36, 0x38, 0x3C, 0x40, 0x42, 0x44,
    0x48, 0x4C, 0x4E, 0x50, 0x54, 0x58, 0x5A, 0x5C,
    0x60, 0x00, 0x00, 0x00,
]

ONE_ARG_COMMANDS = {
    0xBA: ("m4a_prio", "PRIO"),
    0xBB: ("m4a_tempo", "TEMPO"),
    0xBC: ("m4a_keysh", "KEYSH"),
    0xBD: ("m4a_voice", "VOICE"),
    0xBE: ("m4a_vol", "VOL"),
    0xBF: ("m4a_pan", "PAN"),
    0xC0: ("m4a_bend", "BEND"),
    0xC1: ("m4a_bendr", "BENDR"),
    0xC2: ("m4a_lfos", "LFOS"),
    0xC3: ("m4a_lfodl", "LFODL"),
    0xC4: ("m4a_mod", "MOD"),
    0xC5: ("m4a_modt", "MODT"),
    0xC8: ("m4a_tune", "TUNE"),
    0xCC: ("m4a_port", "PORT"),
}

UNSUPPORTED_COMMANDS = {
    0xB6, 0xB7, 0xB8, 0xB9,
    0xC6, 0xC7, 0xC9, 0xCA, 0xCB,
    0xCD,
}

BYTE_RE = re.compile(r"^\s*\.byte\s+(.+?)(?:\s*@.*)?$")
TRACK_LABEL_RE = re.compile(r"^SongTrack_[A-Za-z0-9_]+:\s*@\s*0x([0-9A-Fa-f]+)")
GLOBL_RE = re.compile(r"^\s*\.globl\s+")


class DecodeError(Exception):
    pass


def h(value: int) -> str:
    return f"0x{value:02X}"


def ptr(bytes_: list[int], pos: int) -> int:
    if pos + 4 > len(bytes_):
        raise DecodeError("truncated pointer operand")
    return (
        bytes_[pos]
        | (bytes_[pos + 1] << 8)
        | (bytes_[pos + 2] << 16)
        | (bytes_[pos + 3] << 24)
    )


def clock_name(prefix: str, command: int, base: int) -> str:
    index = command - base
    value = CLOCK_TABLE[index] if 0 <= index < len(CLOCK_TABLE) else 0
    return f"{prefix}{value:02d}"


def parse_byte_values(lines: list[str]) -> list[int] | None:
    values: list[int] = []
    found = False
    for line in lines:
        match = BYTE_RE.match(line)
        if not match:
            continue
        found = True
        for token in match.group(1).split(","):
            token = token.strip()
            if not token:
                continue
            value = int(token, 0)
            if not 0 <= value <= 0xFF:
                raise DecodeError(f"byte value out of range: {token}")
            values.append(value)
    return values if found else None


def format_note(status: int, operands: list[int], implicit: bool) -> str:
    name = "TIE" if status == 0xCF else clock_name("N", status, 0xCF)
    values = ", ".join(h(value) for value in operands)
    suffix = " (running status)" if implicit else ""
    comment = f" @ {name}{suffix}"

    if status == 0xCF and not implicit:
        macros = {
            0: "m4a_tie",
            1: "m4a_tie_key",
            2: "m4a_tie_key_vel",
            3: "m4a_tie_key_vel_gate",
        }
        macro = macros[len(operands)]
        return f"\t{macro}{(' ' + values) if values else ''}{comment}"

    if implicit:
        macros = {
            1: "m4a_running_note_key",
            2: "m4a_running_note_key_vel",
            3: "m4a_running_note_key_vel_gate",
        }
        macro = macros[len(operands)]
        return f"\t{macro} {values}{comment}"

    macros = {
        0: "m4a_note",
        1: "m4a_note_key",
        2: "m4a_note_key_vel",
        3: "m4a_note_key_vel_gate",
    }
    macro = macros[len(operands)]
    if values:
        return f"\t{macro} {h(status)}, {values}{comment}"
    return f"\t{macro} {h(status)}{comment}"


def decode_command(bytes_: list[int], pos: int, last_status: int | None) -> tuple[list[str], int, int | None]:
    implicit = bytes_[pos] < 0x80
    if implicit:
        if last_status is None:
            raise DecodeError(f"running status without prior status at byte {pos}")
        status = last_status
    else:
        status = bytes_[pos]
        pos += 1
        if status >= 0xBD:
            last_status = status

    if status < 0x80:
        raise DecodeError(f"invalid status {h(status)}")

    if status <= 0xB0:
        wait = clock_name("W", status, 0x80)
        return [f"\tm4a_wait {h(status)} @ {wait}"], pos, last_status

    if status in UNSUPPORTED_COMMANDS:
        raise DecodeError(f"unsupported M4A command {h(status)}")

    if status == 0xB1:
        return ["\tm4a_fine"], pos, last_status

    if status == 0xB2:
        target = ptr(bytes_, pos)
        return [f"\tm4a_goto 0x{target:08X}"], pos + 4, last_status

    if status == 0xB3:
        target = ptr(bytes_, pos)
        return [f"\tm4a_patt 0x{target:08X}"], pos + 4, last_status

    if status == 0xB4:
        return ["\tm4a_pend"], pos, last_status

    if status == 0xB5:
        if pos + 5 > len(bytes_):
            raise DecodeError("truncated REPT operand")
        count = bytes_[pos]
        target = ptr(bytes_, pos + 1)
        return [f"\tm4a_rept {h(count)}, 0x{target:08X}"], pos + 5, last_status

    if status in ONE_ARG_COMMANDS:
        if pos >= len(bytes_) or bytes_[pos] >= 0x80:
            raise DecodeError(f"missing operand for {h(status)}")
        value = bytes_[pos]
        macro, name = ONE_ARG_COMMANDS[status]
        if implicit:
            return [f"\tm4a_running_cmd_u8 {h(value)} @ {name} (running status)"], pos + 1, last_status
        return [f"\t{macro} {h(value)}"], pos + 1, last_status

    if status == 0xCE:
        if pos < len(bytes_) and bytes_[pos] < 0x80:
            value = bytes_[pos]
            if implicit:
                return [f"\tm4a_running_eot_key {h(value)} @ EOT (running status)"], pos + 1, last_status
            return [f"\tm4a_eot_key {h(value)}"], pos + 1, last_status
        if implicit:
            raise DecodeError("implicit EOT without key operand")
        return ["\tm4a_eot"], pos, last_status

    if status >= 0xCF:
        operands: list[int] = []
        while pos < len(bytes_) and bytes_[pos] < 0x80 and len(operands) < 3:
            operands.append(bytes_[pos])
            pos += 1
        if implicit and not operands:
            raise DecodeError("implicit note without operands")
        return [format_note(status, operands, implicit)], pos, last_status

    raise DecodeError(f"unsupported M4A command {h(status)}")


def decode_track(bytes_: list[int]) -> list[str]:
    lines: list[str] = []
    pos = 0
    last_status: int | None = None
    while pos < len(bytes_):
        decoded, pos, last_status = decode_command(bytes_, pos, last_status)
        lines.extend(decoded)
    return lines


def convert_file(path: Path, dry_run: bool) -> tuple[int, int]:
    original = path.read_text().splitlines(keepends=True)
    lines = original[:]
    converted = 0
    skipped = 0
    i = 0
    while i < len(lines):
        if not TRACK_LABEL_RE.match(lines[i]):
            i += 1
            continue
        block_start = i + 1
        block_end = block_start
        while block_end < len(lines) and not GLOBL_RE.match(lines[block_end]):
            block_end += 1
        block = lines[block_start:block_end]
        try:
            bytes_ = parse_byte_values(block)
            if bytes_ is None or any("m4a_" in line for line in block):
                i = block_end
                continue
            decoded = decode_track(bytes_)
        except (ValueError, DecodeError) as error:
            label = lines[i].split(":", 1)[0]
            print(f"skip {label}: {error}", file=sys.stderr)
            skipped += 1
            i = block_end
            continue

        prefix = [line for line in block if not BYTE_RE.match(line)]
        new_block = prefix + [line + "\n" for line in decoded]
        lines[block_start:block_end] = new_block
        delta = len(new_block) - len(block)
        i = block_end + delta
        converted += 1

    if lines != original and not dry_run:
        path.write_text("".join(lines))
    return converted, skipped


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("paths", nargs="+", type=Path)
    parser.add_argument("--dry-run", action="store_true")
    args = parser.parse_args()

    total_converted = 0
    total_skipped = 0
    for path in args.paths:
        converted, skipped = convert_file(path, args.dry_run)
        total_converted += converted
        total_skipped += skipped
        print(f"{path}: converted {converted}, skipped {skipped}")

    return 0 if total_converted else 1


if __name__ == "__main__":
    raise SystemExit(main())
