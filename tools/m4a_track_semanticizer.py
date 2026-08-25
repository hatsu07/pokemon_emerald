#!/usr/bin/env python3

from __future__ import annotations

import argparse
import dataclasses
import re
import sys
from collections import Counter
from pathlib import Path
from typing import Optional


SOURCE_ROOTS = (Path("asm"), Path("data"))
SOURCE_SUFFIXES = {".s", ".inc"}

TRACK_RE = re.compile(
    r"^\s*(SongTrack_[A-Za-z0-9_.$]+):{1,2}\s*(?:@.*)?$"
)
SONG_HEADER_RE = re.compile(
    r"^\s*(SongHeader_[A-Za-z0-9_.$]+):{1,2}\s*(?:@.*)?$"
)
LABEL_ADDR_RE = re.compile(
    r"^\s*([A-Za-z_.$][A-Za-z0-9_.$]*):{1,2}"
    r"\s*@\s*0x(08[0-9A-Fa-f]{6})\b"
)
ANY_LABEL_RE = re.compile(
    r"^\s*([A-Za-z_.$][A-Za-z0-9_.$]*):{1,2}\s*(?:@.*)?$"
)
BYTE_RE = re.compile(r"^(\s*)\.byte\s+(.+?)\s*$")

MACRO_RE = re.compile(
    r"^\s*(m4a_[A-Za-z0-9_]+)\b(?:\s+(.*?))?\s*(?:@.*)?$"
)

HEX_BYTE_RE = re.compile(r"^0[xX][0-9A-Fa-f]+$")
DEC_BYTE_RE = re.compile(r"^[0-9]+$")


WAIT_LENGTHS = (
    list(range(0, 25))
    + [28, 30, 32, 36, 40, 42, 44, 48, 52, 54, 56, 60,
       64, 66, 68, 72, 76, 78, 80, 84, 88, 90, 92, 96]
)
WAIT_NAME = {
    0x80 + i: f"W{n:02d}"
    for i, n in enumerate(WAIT_LENGTHS)
}

NOTE_LENGTHS = (
    list(range(1, 25))
    + [28, 30, 32, 36, 40, 42, 44, 48, 52, 54, 56, 60,
       64, 66, 68, 72, 76, 78, 80, 84, 88, 90, 92, 96]
)
NOTE_NAME = {
    0xD0 + i: f"N{n:02d}"
    for i, n in enumerate(NOTE_LENGTHS)
}

U8_COMMANDS = {
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

MACRO_TO_RUNNING_COMMAND = {
    "m4a_prio": 0xBA,
    "m4a_tempo": 0xBB,
    "m4a_keysh": 0xBC,
    "m4a_voice": 0xBD,
    "m4a_vol": 0xBE,
    "m4a_pan": 0xBF,
    "m4a_bend": 0xC0,
    "m4a_bendr": 0xC1,
    "m4a_lfos": 0xC2,
    "m4a_lfodl": 0xC3,
    "m4a_mod": 0xC4,
    "m4a_modt": 0xC5,
    "m4a_tune": 0xC8,
    "m4a_port": 0xCC,
    "m4a_xcmd": 0xCD,
    "m4a_xcmd_u8": 0xCD,
    "m4a_xcmd_u16": 0xCD,
    "m4a_xcmd_ptr": 0xCD,
    "m4a_eot": 0xCE,
    "m4a_eot_key": 0xCE,
    "m4a_tie": 0xCF,
    "m4a_tie_key": 0xCF,
    "m4a_tie_key_vel": 0xCF,
    "m4a_tie_key_vel_gate": 0xCF,
}


@dataclasses.dataclass
class DecodeState:
    running_cmd: Optional[int] = None


@dataclasses.dataclass
class BlockResult:
    ok: bool
    lines: list[str]
    state: DecodeState
    reason: str = ""
    event_counts: Counter = dataclasses.field(default_factory=Counter)


def hx(value: int) -> str:
    return f"0x{value:02X}"


def ptr_hx(value: int) -> str:
    return f"0x{value:08X}"


def source_files() -> list[Path]:
    result = []
    for root in SOURCE_ROOTS:
        if not root.exists():
            continue
        for path in root.rglob("*"):
            if path.is_file() and path.suffix in SOURCE_SUFFIXES:
                result.append(path)
    return sorted(result)


def split_code_comment(line: str) -> tuple[str, str]:
    # '@' is the assembler comment marker in this project.
    if "@" in line:
        code, comment = line.split("@", 1)
        return code.rstrip(), "@" + comment
    return line.rstrip(), ""


def parse_numeric_byte_line(line: str) -> Optional[tuple[str, list[int]]]:
    code, _comment = split_code_comment(line)
    m = BYTE_RE.match(code)
    if not m:
        return None

    indent = m.group(1)
    expr = m.group(2)
    parts = [x.strip() for x in expr.split(",")]
    if not parts or any(not p for p in parts):
        return None

    values: list[int] = []
    for p in parts:
        if HEX_BYTE_RE.match(p):
            v = int(p, 16)
        elif DEC_BYTE_RE.match(p):
            v = int(p, 10)
        else:
            return None
        if not 0 <= v <= 0xFF:
            return None
        values.append(v)

    return indent, values


def build_address_labels(paths: list[Path]) -> dict[int, str]:
    by_addr: dict[int, list[str]] = {}

    for path in paths:
        try:
            lines = path.read_text(
                encoding="utf-8", errors="replace"
            ).splitlines()
        except OSError:
            continue

        for line in lines:
            m = LABEL_ADDR_RE.match(line)
            if not m:
                continue
            label = m.group(1)
            addr = int(m.group(2), 16)
            by_addr.setdefault(addr, []).append(label)

    def score(label: str) -> tuple[int, int, str]:
        # Prefer already meaningful M4A labels over address-like/unknown labels.
        if label.startswith("SongTrack_"):
            rank = 0
        elif "Pattern" in label or "Patt" in label:
            rank = 1
        elif label.startswith("Song"):
            rank = 2
        elif label.startswith("gUnknown_") or label.startswith("sUnknown_"):
            rank = 8
        elif re.search(r"_[0-9A-Fa-f]{6,8}$", label):
            rank = 7
        else:
            rank = 3
        return (rank, len(label), label)

    return {
        addr: sorted(labels, key=score)[0]
        for addr, labels in by_addr.items()
    }


def read_ptr_le(data: list[int], pos: int) -> Optional[int]:
    if pos + 4 > len(data):
        return None
    return (
        data[pos]
        | (data[pos + 1] << 8)
        | (data[pos + 2] << 16)
        | (data[pos + 3] << 24)
    )


def take_optional_data(
    data: list[int], pos: int, max_count: int
) -> tuple[list[int], int]:
    args = []
    while (
        pos < len(data)
        and len(args) < max_count
        and data[pos] < 0x80
    ):
        args.append(data[pos])
        pos += 1
    return args, pos


def emit_note(
    indent: str, cmd: int, args: list[int], running: bool
) -> str:
    note = NOTE_NAME.get(cmd, f"NOTE_{cmd:02X}")
    suffix = " (running status)" if running else ""

    if running:
        macro = {
            1: "m4a_running_note_key",
            2: "m4a_running_note_key_vel",
            3: "m4a_running_note_key_vel_gate",
        }.get(len(args))
        if macro is None:
            # A running note with no data has no encoded bytes and cannot occur.
            raise ValueError("running note has no data")
        return (
            f"{indent}{macro} "
            + ", ".join(hx(v) for v in args)
            + f" @ {note}{suffix}"
        )

    macro = {
        0: "m4a_note",
        1: "m4a_note_key",
        2: "m4a_note_key_vel",
        3: "m4a_note_key_vel_gate",
    }[len(args)]
    values = [hx(cmd)] + [hx(v) for v in args]
    return f"{indent}{macro} " + ", ".join(values) + f" @ {note}"


def emit_tie(
    indent: str, args: list[int], running: bool
) -> str:
    suffix = " (running status)" if running else ""

    if running:
        macro = {
            1: "m4a_running_note_key",
            2: "m4a_running_note_key_vel",
            3: "m4a_running_note_key_vel_gate",
        }.get(len(args))
        if macro is None:
            raise ValueError("running TIE has no data")
        return (
            f"{indent}{macro} "
            + ", ".join(hx(v) for v in args)
            + f" @ TIE{suffix}"
        )

    macro = {
        0: "m4a_tie",
        1: "m4a_tie_key",
        2: "m4a_tie_key_vel",
        3: "m4a_tie_key_vel_gate",
    }[len(args)]
    if args:
        return f"{indent}{macro} " + ", ".join(hx(v) for v in args) + " @ TIE"
    return f"{indent}{macro}"


def decode_block(
    data: list[int],
    indent: str,
    initial_state: DecodeState,
    addr_labels: dict[int, str],
) -> BlockResult:
    pos = 0
    out: list[str] = []
    state = DecodeState(initial_state.running_cmd)
    counts: Counter = Counter()

    def fail(reason: str) -> BlockResult:
        return BlockResult(
            ok=False,
            lines=[],
            state=DecodeState(initial_state.running_cmd),
            reason=reason,
            event_counts=Counter(),
        )

    while pos < len(data):
        b = data[pos]

        # Running-status data byte.
        if b < 0x80:
            cmd = state.running_cmd
            if cmd is None:
                return fail(
                    f"data byte {hx(b)} without proven running status"
                )

            if cmd in NOTE_NAME:
                args, new_pos = take_optional_data(data, pos, 3)
                if not args:
                    return fail("empty running note")
                try:
                    out.append(emit_note(indent, cmd, args, True))
                except ValueError as e:
                    return fail(str(e))
                pos = new_pos
                counts["running_note"] += 1
                continue

            if cmd == 0xCF:
                args, new_pos = take_optional_data(data, pos, 3)
                if not args:
                    return fail("empty running TIE")
                try:
                    out.append(emit_tie(indent, args, True))
                except ValueError as e:
                    return fail(str(e))
                pos = new_pos
                counts["running_tie"] += 1
                continue

            if cmd == 0xCE:
                out.append(
                    f"{indent}m4a_running_eot_key {hx(b)}"
                    " @ EOT (running status)"
                )
                pos += 1
                counts["running_eot"] += 1
                continue

            if cmd in U8_COMMANDS:
                _macro, name = U8_COMMANDS[cmd]
                out.append(
                    f"{indent}m4a_running_cmd_u8 {hx(b)}"
                    f" @ {name} (running status)"
                )
                pos += 1
                counts["running_u8"] += 1
                continue

            if cmd == 0xCD:
                # XCMD running status begins with the XCMD subcommand.
                sub = b
                if sub not in (0x08,):
                    return fail(
                        f"unsupported running XCMD subtype {hx(sub)}"
                    )
                if pos + 1 >= len(data) or data[pos + 1] >= 0x80:
                    return fail("truncated running XCMD u8")
                value = data[pos + 1]
                out.append(
                    f"{indent}m4a_running_xcmd_u8 "
                    f"{hx(sub)}, {hx(value)}"
                    " @ XIECV (running status)"
                )
                pos += 2
                counts["running_xcmd"] += 1
                continue

            return fail(
                f"unsupported running status command {hx(cmd)}"
            )

        # Explicit event/command byte.
        if 0x80 <= b <= 0xB0:
            wait = WAIT_NAME[b]
            out.append(f"{indent}m4a_wait {hx(b)} @ {wait}")
            pos += 1
            counts["wait"] += 1
            # WAIT deliberately does not replace running status.
            continue

        if b == 0xB1:
            out.append(f"{indent}m4a_fine")
            pos += 1
            counts["fine"] += 1
            continue

        if b in (0xB2, 0xB3):
            ptr = read_ptr_le(data, pos + 1)
            if ptr is None:
                return fail("truncated GOTO/PATT pointer")
            label = addr_labels.get(ptr)
            if label is None:
                return fail(
                    f"unresolved control-flow pointer {ptr_hx(ptr)}"
                )
            macro = "m4a_goto" if b == 0xB2 else "m4a_patt"
            out.append(f"{indent}{macro} {label}")
            pos += 5
            counts["goto" if b == 0xB2 else "patt"] += 1
            continue

        if b == 0xB4:
            out.append(f"{indent}m4a_pend")
            pos += 1
            counts["pend"] += 1
            continue

        if b == 0xB5:
            if pos + 6 > len(data):
                return fail("truncated REPT")
            count = data[pos + 1]
            ptr = read_ptr_le(data, pos + 2)
            if ptr is None:
                return fail("truncated REPT pointer")
            label = addr_labels.get(ptr)
            if label is None:
                return fail(
                    f"unresolved REPT pointer {ptr_hx(ptr)}"
                )
            out.append(
                f"{indent}m4a_rept {hx(count)}, {label}"
            )
            pos += 6
            counts["rept"] += 1
            continue

        # 0xB6-0xB8 are intentionally not guessed.
        if 0xB6 <= b <= 0xB8:
            return fail(f"unsupported command {hx(b)}")

        # MEMACC is variable-length depending on operation. Leave such raw
        # blocks untouched until its operation semantics are proven locally.
        if b == 0xB9:
            return fail("MEMACC intentionally deferred")

        if b in U8_COMMANDS:
            if pos + 1 >= len(data):
                return fail(f"truncated {U8_COMMANDS[b][1]}")
            value = data[pos + 1]
            if value >= 0x80:
                return fail(
                    f"{U8_COMMANDS[b][1]} argument is not a data byte"
                )
            macro, name = U8_COMMANDS[b]
            out.append(f"{indent}{macro} {hx(value)}")
            pos += 2
            state.running_cmd = b
            counts[name.lower()] += 1
            continue

        if b in (0xC6, 0xC7, 0xC9, 0xCA, 0xCB):
            return fail(f"unsupported command {hx(b)}")

        if b == 0xCD:
            if pos + 1 >= len(data):
                return fail("truncated XCMD")
            sub = data[pos + 1]
            if sub not in (0x08,):
                return fail(f"unsupported XCMD subtype {hx(sub)}")
            if pos + 2 >= len(data):
                return fail("truncated XCMD u8")
            value = data[pos + 2]
            if value >= 0x80:
                return fail("XCMD u8 argument is not a data byte")
            out.append(
                f"{indent}m4a_xcmd_u8 {hx(sub)}, {hx(value)} @ XIECV"
            )
            pos += 3
            state.running_cmd = 0xCD
            counts["xcmd"] += 1
            continue

        if b == 0xCE:
            pos += 1
            args, new_pos = take_optional_data(data, pos, 1)
            if args:
                out.append(
                    f"{indent}m4a_eot_key {hx(args[0])} @ EOT"
                )
            else:
                out.append(f"{indent}m4a_eot")
            pos = new_pos
            state.running_cmd = 0xCE
            counts["eot"] += 1
            continue

        if b == 0xCF:
            pos += 1
            args, new_pos = take_optional_data(data, pos, 3)
            try:
                out.append(emit_tie(indent, args, False))
            except ValueError as e:
                return fail(str(e))
            pos = new_pos
            state.running_cmd = 0xCF
            counts["tie"] += 1
            continue

        if b in NOTE_NAME:
            cmd = b
            pos += 1
            args, new_pos = take_optional_data(data, pos, 3)
            try:
                out.append(emit_note(indent, cmd, args, False))
            except ValueError as e:
                return fail(str(e))
            pos = new_pos
            state.running_cmd = cmd
            counts["note"] += 1
            continue

        return fail(f"unknown byte {hx(b)}")

    return BlockResult(
        ok=True,
        lines=out,
        state=state,
        event_counts=counts,
    )


def parse_first_arg_u8(arg_text: str) -> Optional[int]:
    if not arg_text:
        return None
    token = arg_text.split(",", 1)[0].strip()
    try:
        value = int(token, 0)
    except ValueError:
        return None
    if 0 <= value <= 0xFF:
        return value
    return None


def update_state_from_macro(line: str, state: DecodeState) -> None:
    code, _comment = split_code_comment(line)
    m = MACRO_RE.match(code)
    if not m:
        return

    name = m.group(1)
    args = (m.group(2) or "").strip()

    if name in MACRO_TO_RUNNING_COMMAND:
        state.running_cmd = MACRO_TO_RUNNING_COMMAND[name]
        return

    if name.startswith("m4a_note"):
        cmd = parse_first_arg_u8(args)
        if cmd is not None and cmd in NOTE_NAME:
            state.running_cmd = cmd
        return

    # running_* macros intentionally preserve the current status.
    # wait/control-flow macros also do not replace it here.


@dataclasses.dataclass
class FileStats:
    tracks: int = 0
    raw_blocks: int = 0
    raw_bytes: int = 0
    converted_blocks: int = 0
    converted_bytes: int = 0
    skipped_blocks: int = 0
    skipped_bytes: int = 0
    events: Counter = dataclasses.field(default_factory=Counter)
    skip_reasons: Counter = dataclasses.field(default_factory=Counter)


def transform_file(
    path: Path,
    addr_labels: dict[int, str],
    apply: bool,
) -> tuple[bool, FileStats]:
    text = path.read_text(encoding="utf-8", errors="strict")
    had_final_newline = text.endswith("\n")
    lines = text.splitlines()

    out: list[str] = []
    stats = FileStats()
    changed = False

    in_track = False
    state = DecodeState()

    i = 0
    while i < len(lines):
        line = lines[i]

        tm = TRACK_RE.match(line)
        if tm:
            in_track = True
            state = DecodeState()
            stats.tracks += 1
            out.append(line)
            i += 1
            continue

        if SONG_HEADER_RE.match(line):
            in_track = False
            state = DecodeState()
            out.append(line)
            i += 1
            continue

        # A different top-level SongTrack starts above via TRACK_RE.
        # Other internal labels are allowed, but a label creates a possible
        # control-flow entry. Do not carry a linear running status across it.
        lm = ANY_LABEL_RE.match(line)
        if in_track and lm:
            state = DecodeState()
            out.append(line)
            i += 1
            continue

        if not in_track:
            out.append(line)
            i += 1
            continue

        parsed = parse_numeric_byte_line(line)
        if parsed is None:
            update_state_from_macro(line, state)
            out.append(line)
            i += 1
            continue

        # Gather a consecutive block of numeric .byte lines so optional note
        # parameters split by source line boundaries remain one byte stream.
        indent = parsed[0]
        data: list[int] = []
        original: list[str] = []
        j = i

        while j < len(lines):
            p = parse_numeric_byte_line(lines[j])
            if p is None:
                break
            # Keep mixed indentation blocks separate.
            if p[0] != indent and data:
                break
            original.append(lines[j])
            data.extend(p[1])
            j += 1

        stats.raw_blocks += 1
        stats.raw_bytes += len(data)

        result = decode_block(
            data=data,
            indent=indent,
            initial_state=state,
            addr_labels=addr_labels,
        )

        if result.ok:
            stats.converted_blocks += 1
            stats.converted_bytes += len(data)
            stats.events.update(result.event_counts)
            state = result.state

            if apply:
                out.extend(result.lines)
                if result.lines != original:
                    changed = True
            else:
                out.extend(original)
        else:
            stats.skipped_blocks += 1
            stats.skipped_bytes += len(data)
            stats.skip_reasons[result.reason] += 1
            # Raw bytes may contain commands we intentionally do not decode.
            # Do not make assumptions about running state after this block.
            state = DecodeState()
            out.extend(original)

        i = j

    if apply and changed:
        new_text = "\n".join(out)
        if had_final_newline:
            new_text += "\n"
        path.write_text(new_text, encoding="utf-8")

    return changed, stats


def run(apply: bool) -> int:
    paths = source_files()
    addr_labels = build_address_labels(paths)

    total = FileStats()
    changed_files: list[Path] = []

    for path in paths:
        try:
            changed, stats = transform_file(path, addr_labels, apply)
        except UnicodeDecodeError:
            continue

        if changed:
            changed_files.append(path)

        total.tracks += stats.tracks
        total.raw_blocks += stats.raw_blocks
        total.raw_bytes += stats.raw_bytes
        total.converted_blocks += stats.converted_blocks
        total.converted_bytes += stats.converted_bytes
        total.skipped_blocks += stats.skipped_blocks
        total.skipped_bytes += stats.skipped_bytes
        total.events.update(stats.events)
        total.skip_reasons.update(stats.skip_reasons)

    mode = "apply" if apply else "scan"
    print(f"mode={mode}")
    print(f"address_labels={len(addr_labels)}")
    print(f"song_tracks={total.tracks}")
    print(f"raw_blocks={total.raw_blocks}")
    print(f"raw_bytes={total.raw_bytes}")
    print(f"convertible_blocks={total.converted_blocks}")
    print(f"convertible_bytes={total.converted_bytes}")
    print(f"skipped_blocks={total.skipped_blocks}")
    print(f"skipped_bytes={total.skipped_bytes}")
    print(f"changed_files={len(changed_files)}")

    print("events:")
    for key, value in sorted(total.events.items()):
        print(f"  {key}={value}")

    print("skip_reasons:")
    for reason, count in total.skip_reasons.most_common():
        print(f"  {count}\t{reason}")

    if apply:
        print("changed:")
        for path in changed_files:
            print(f"  {path}")

    return 0


def main() -> int:
    parser = argparse.ArgumentParser(
        description=(
            "Conservatively semanticize numeric .byte blocks rooted in "
            "proven SongTrack labels using existing asm/macros/m4a.inc macros."
        )
    )
    group = parser.add_mutually_exclusive_group(required=True)
    group.add_argument("--scan", action="store_true")
    group.add_argument("--apply", action="store_true")
    args = parser.parse_args()

    return run(apply=args.apply)


if __name__ == "__main__":
    sys.exit(main())
