#!/usr/bin/env python3
from __future__ import annotations

import argparse
import dataclasses
import json
import re
import sys
from collections import Counter, defaultdict
from pathlib import Path
from typing import Iterable, Optional

ROOT = Path(__file__).resolve().parents[1]

LABEL_RE = re.compile(
    r"^\s*([A-Za-z_.$][A-Za-z0-9_.$]*):{1,2}"
    r"(?:\s*@\s*(0x[0-9A-Fa-f]+))?\s*$"
)
SET_RE = re.compile(
    r"^\s*\.set\s+([A-Za-z_.$][A-Za-z0-9_.$]*)\s*,"
)
GLOBL_RE = re.compile(
    r"^\s*\.globl\s+([A-Za-z_.$][A-Za-z0-9_.$]*)\s*$"
)
ADDR_COMMENT_RE = re.compile(r"@\s*(0x[0-9A-Fa-f]{8})\b")
SONG_HEADER_RE = re.compile(
    r"^(\s*)m4a_song_header\s+(.+?)(\s*(?:@.*)?)$"
)
SONG_TABLE_RE = re.compile(
    r"^\s*song\s+([A-Za-z_.$][A-Za-z0-9_.$]*)\s*,"
)
TRACK_PTR_RE = re.compile(
    r"^\s*\.4byte\s+(SongTrack_[A-Za-z0-9_.$]+)\s*(?:@.*)?$"
)
NUMERIC_BYTE_RE = re.compile(
    r"^(\s*)\.byte\s+"
    r"((?:0x[0-9A-Fa-f]+|\d+)"
    r"(?:\s*,\s*(?:0x[0-9A-Fa-f]+|\d+))*)"
    r"\s*(?:@.*)?$"
)
DATA_DIRECTIVE_RE = re.compile(r"^\s*\.(?:byte|2byte|4byte)\b")
VOICE_MACRO_RE = re.compile(
    r"^\s*(voice_directsound(?:_no_resample|_alt)?|"
    r"voice_square_[12](?:_alt)?|"
    r"voice_programmable_wave(?:_alt)?|"
    r"voice_noise(?:_alt)?|"
    r"voice_keysplit(?:_all)?|cry2?|cry)\b"
)
ENTRY_START_MACRO_RE = re.compile(
    r"^\s*(?:voice_directsound(?:_no_resample|_alt)?|"
    r"voice_square_[12](?:_alt)?|"
    r"voice_programmable_wave(?:_alt)?|"
    r"voice_noise(?:_alt)?|"
    r"voice_keysplit(?:_all)?|cry2?|cry)\b"
)
DIRECTSOUND_MACRO_RE = re.compile(
    r"^\s*(voice_directsound(?:_no_resample|_alt)?)\s+(.+?)(?:\s+@.*)?$"
)
CRY_MACRO_RE = re.compile(
    r"^\s*(cry2?|cry)\s+([A-Za-z_.$][A-Za-z0-9_.$]*)"
)
PROGRAMMABLE_RE = re.compile(
    r"^\s*(voice_programmable_wave(?:_alt)?)\s+(.+?)(?:\s+@.*)?$"
)
KEYSPLIT_RE = re.compile(
    r"^\s*(voice_keysplit(?:_all)?)\s+(.+?)(?:\s+@.*)?$"
)

VOICEGROUP_PREFIXES = ("VoiceGroup_", "voicegroup_")
DIRECTSOUND_PREFIX = "DirectSoundWaveData_"
PROGRAMMABLE_PREFIXES = (
    "M4aProgrammableWave_",
    "ProgrammableWaveData_",
    "programmable_wave_",
)
KEYSPLIT_PREFIXES = (
    "M4aKeySplitTable_",
    "KeySplit",
    "keysplit_",
)


@dataclasses.dataclass
class Source:
    path: Path
    lines: list[str]
    final_newline: bool
    changed: bool = False


@dataclasses.dataclass
class Stats:
    files: int = 0
    song_table_entries: int = 0
    song_headers: int = 0
    song_track_pointers: int = 0
    numeric_voicegroup_ptrs_before: int = 0
    numeric_voicegroup_ptrs_after: int = 0
    voicegroup_labels: int = 0
    voicegroup_labels_added: int = 0
    voicegroup_ptrs_rewritten: int = 0
    raw_voice_blocks_before: int = 0
    raw_voice_bytes_before: int = 0
    raw_voice_blocks_after: int = 0
    raw_voice_bytes_after: int = 0
    raw_voice_records_converted: int = 0
    directsound_voice_refs: int = 0
    cry_refs: int = 0
    programmable_refs: int = 0
    keysplit_refs: int = 0


def source_paths() -> list[Path]:
    paths: set[Path] = set()
    for root_name in ("asm", "data"):
        root = ROOT / root_name
        for pat in ("*.s", "*.inc"):
            paths.update(root.rglob(pat))
    # Macro definitions describe encodings; they are not ROM data instances.
    return sorted(
        p for p in paths
        if "asm/macros" not in p.as_posix()
    )


def load_sources() -> list[Source]:
    result: list[Source] = []
    for path in source_paths():
        try:
            text = path.read_text(encoding="utf-8")
        except UnicodeDecodeError:
            continue
        result.append(
            Source(
                path=path,
                lines=text.splitlines(),
                final_newline=text.endswith("\n"),
            )
        )
    return result


def write_sources(sources: Iterable[Source]) -> None:
    for src in sources:
        if not src.changed:
            continue
        text = "\n".join(src.lines)
        if src.final_newline:
            text += "\n"
        src.path.write_text(text, encoding="utf-8")


def parse_int(token: str) -> Optional[int]:
    token = token.strip()
    try:
        return int(token, 0)
    except ValueError:
        return None


def split_args(text: str) -> list[str]:
    # M4A/ToneData invocations used here contain no nested comma expressions.
    return [x.strip() for x in text.split(",")]


def parse_numeric_byte_line(line: str) -> Optional[tuple[str, list[int]]]:
    m = NUMERIC_BYTE_RE.match(line)
    if not m:
        return None
    vals: list[int] = []
    for token in m.group(2).split(","):
        value = int(token.strip(), 0)
        if not 0 <= value <= 0xFF:
            return None
        vals.append(value)
    return m.group(1), vals


def labels_by_addr(
    sources: list[Source],
) -> tuple[dict[int, list[str]], set[str]]:
    by_addr: dict[int, list[str]] = defaultdict(list)
    names: set[str] = set()
    for src in sources:
        for line in src.lines:
            m = LABEL_RE.match(line)
            if m:
                name = m.group(1)
                names.add(name)
                if m.group(2):
                    by_addr[int(m.group(2), 16)].append(name)
                continue
            m = SET_RE.match(line)
            if m:
                names.add(m.group(1))
    for labels in by_addr.values():
        labels.sort()
    return dict(by_addr), names


def canonical_label(
    labels: list[str],
    prefixes: tuple[str, ...] = (),
    exact: Optional[str] = None,
) -> Optional[str]:
    if exact and exact in labels:
        return exact
    preferred = [
        x for x in labels
        if not prefixes or x.startswith(prefixes)
    ]
    if not preferred:
        return None
    preferred.sort(key=lambda x: (len(x), x))
    return preferred[0]


def find_voice_entry_start(
    sources: list[Source], addr: int
) -> Optional[tuple[Source, int]]:
    hits: list[tuple[Source, int]] = []
    for src in sources:
        for i, line in enumerate(src.lines):
            am = ADDR_COMMENT_RE.search(line)
            if not am or int(am.group(1), 16) != addr:
                continue
            if ENTRY_START_MACRO_RE.match(line):
                hits.append((src, i))
    if len(hits) == 1:
        return hits[0]
    return None


def insert_missing_voicegroup_labels(
    sources: list[Source], apply: bool, stats: Stats
) -> list[str]:
    by_addr, _names = labels_by_addr(sources)
    targets: set[int] = set()

    for src in sources:
        for line in src.lines:
            m = SONG_HEADER_RE.match(line)
            if not m:
                continue
            args = split_args(m.group(2))
            if len(args) != 5:
                continue
            value = parse_int(args[4])
            if value is not None and 0x08000000 <= value <= 0x09FFFFFF:
                targets.add(value)

    unresolved: list[str] = []
    insertions: dict[Path, list[tuple[int, list[str]]]] = defaultdict(list)

    for addr in sorted(targets):
        exact = f"VoiceGroup_JP_{addr:08X}"
        current = canonical_label(
            by_addr.get(addr, []),
            prefixes=VOICEGROUP_PREFIXES,
            exact=exact,
        )
        if current:
            continue

        hit = find_voice_entry_start(sources, addr)
        if hit is None:
            unresolved.append(
                f"voicegroup target 0x{addr:08X}: "
                "no exact VoiceGroup label and no unique semantic ToneData entry"
            )
            continue

        src, idx = hit
        block = [
            f"\t.globl {exact}",
            f"{exact}: @ 0x{addr:08X}",
        ]
        insertions[src.path].append((idx, block))

    if apply:
        src_map = {s.path: s for s in sources}
        for path, items in insertions.items():
            src = src_map[path]
            for idx, block in sorted(items, reverse=True):
                src.lines[idx:idx] = block
                src.changed = True
                stats.voicegroup_labels_added += 1
    else:
        stats.voicegroup_labels_added += sum(
            len(x) for x in insertions.values()
        )

    return unresolved


def rewrite_header_voicegroup_ptrs(
    sources: list[Source], apply: bool, stats: Stats
) -> list[str]:
    by_addr, _names = labels_by_addr(sources)
    unresolved: list[str] = []

    for src in sources:
        new_lines: list[str] = []
        for lineno, line in enumerate(src.lines, 1):
            m = SONG_HEADER_RE.match(line)
            if not m:
                new_lines.append(line)
                continue

            args = split_args(m.group(2))
            if len(args) != 5:
                unresolved.append(
                    f"{src.path.relative_to(ROOT)}:{lineno}: "
                    f"m4a_song_header arg count={len(args)}"
                )
                new_lines.append(line)
                continue

            value = parse_int(args[4])
            if value is None:
                new_lines.append(line)
                continue

            if not 0x08000000 <= value <= 0x09FFFFFF:
                unresolved.append(
                    f"{src.path.relative_to(ROOT)}:{lineno}: "
                    f"voicegroup is non-ROM numeric value {args[4]}"
                )
                new_lines.append(line)
                continue

            stats.numeric_voicegroup_ptrs_before += 1
            exact = f"VoiceGroup_JP_{value:08X}"
            label = canonical_label(
                by_addr.get(value, []),
                prefixes=VOICEGROUP_PREFIXES,
                exact=exact,
            )
            if label is None:
                unresolved.append(
                    f"{src.path.relative_to(ROOT)}:{lineno}: "
                    f"unresolved voicegroup pointer 0x{value:08X}"
                )
                new_lines.append(line)
                continue

            args[4] = label
            code = m.group(1) + "m4a_song_header " + ", ".join(args)
            replacement = code + m.group(3)
            if apply and replacement != line:
                src.changed = True
                stats.voicegroup_ptrs_rewritten += 1
                new_lines.append(replacement)
            else:
                if not apply:
                    stats.voicegroup_ptrs_rewritten += 1
                new_lines.append(line)

        if apply:
            src.lines = new_lines

    return unresolved


def ptr32(rec: list[int], off: int) -> int:
    return (
        rec[off]
        | (rec[off + 1] << 8)
        | (rec[off + 2] << 16)
        | (rec[off + 3] << 24)
    )


def resolve_ptr_label(
    by_addr: dict[int, list[str]],
    addr: int,
    prefixes: tuple[str, ...],
    description: str,
) -> str:
    labels = by_addr.get(addr, [])
    label = canonical_label(labels, prefixes=prefixes)
    if label is None:
        raise ValueError(
            f"{description} 0x{addr:08X} has no proven semantic label"
        )
    return label


def envelope_ok(a: int, d: int, s: int, r: int) -> bool:
    return a <= 7 and d <= 7 and s <= 15 and r <= 7


def tone_record_to_macro(
    rec: list[int],
    by_addr: dict[int, list[str]],
) -> str:
    if len(rec) != 12:
        raise ValueError("ToneData record is not 12 bytes")

    t = rec[0]

    if t in (0, 8, 16):
        if rec[2] != 0:
            raise ValueError(
                f"DirectSound reserved byte is 0x{rec[2]:02X}, expected 0"
            )
        pan_raw = rec[3]
        if pan_raw == 0:
            pan = 0
        elif pan_raw == 0x80:
            raise ValueError(
                "DirectSound pan byte 0x80 is not exactly representable "
                "by the existing project macro (pan=0 encodes 0x00)"
            )
        elif pan_raw & 0x80:
            pan = pan_raw & 0x7F
        else:
            raise ValueError(
                f"DirectSound pan byte 0x{pan_raw:02X} is not encodable"
            )
        ptr = ptr32(rec, 4)
        sample = resolve_ptr_label(
            by_addr, ptr, (DIRECTSOUND_PREFIX,), "DirectSound sample"
        )
        macro = {
            0: "voice_directsound",
            8: "voice_directsound_no_resample",
            16: "voice_directsound_alt",
        }[t]
        return (
            f"\t{macro} {rec[1]}, {pan}, {sample}, "
            f"{rec[8]}, {rec[9]}, {rec[10]}, {rec[11]}"
        )

    if t in (1, 9):
        if rec[1] != 60 or rec[2] != 0:
            raise ValueError(
                "square1 entry is not representable by project macro "
                "(base key/pan differ from fixed project encoding)"
            )
        if rec[4] > 3 or rec[5:8] != [0, 0, 0]:
            raise ValueError("square1 reserved/duty fields are invalid")
        if not envelope_ok(*rec[8:12]):
            raise ValueError("square1 envelope exceeds macro bit width")
        macro = "voice_square_1" if t == 1 else "voice_square_1_alt"
        return (
            f"\t{macro} {rec[3]}, {rec[4]}, "
            f"{rec[8]}, {rec[9]}, {rec[10]}, {rec[11]}"
        )

    if t in (2, 10):
        if rec[1:4] != [60, 0, 0]:
            raise ValueError(
                "square2 entry is not representable by project macro"
            )
        if rec[4] > 3 or rec[5:8] != [0, 0, 0]:
            raise ValueError("square2 reserved/duty fields are invalid")
        if not envelope_ok(*rec[8:12]):
            raise ValueError("square2 envelope exceeds macro bit width")
        macro = "voice_square_2" if t == 2 else "voice_square_2_alt"
        return (
            f"\t{macro} {rec[4]}, "
            f"{rec[8]}, {rec[9]}, {rec[10]}, {rec[11]}"
        )

    if t in (3, 11):
        if rec[1:4] != [60, 0, 0]:
            raise ValueError(
                "programmable-wave entry is not representable by project macro"
            )
        if not envelope_ok(*rec[8:12]):
            raise ValueError(
                "programmable-wave envelope exceeds macro bit width"
            )
        ptr = ptr32(rec, 4)
        wave = resolve_ptr_label(
            by_addr,
            ptr,
            PROGRAMMABLE_PREFIXES,
            "programmable-wave sample",
        )
        macro = (
            "voice_programmable_wave"
            if t == 3
            else "voice_programmable_wave_alt"
        )
        return (
            f"\t{macro} {wave}, "
            f"{rec[8]}, {rec[9]}, {rec[10]}, {rec[11]}"
        )

    if t in (4, 12):
        if rec[1:4] != [60, 0, 0]:
            raise ValueError(
                "noise entry is not representable by project macro"
            )
        if rec[4] > 1 or rec[5:8] != [0, 0, 0]:
            raise ValueError("noise reserved/period fields are invalid")
        if not envelope_ok(*rec[8:12]):
            raise ValueError("noise envelope exceeds macro bit width")
        macro = "voice_noise" if t == 4 else "voice_noise_alt"
        return (
            f"\t{macro} {rec[4]}, "
            f"{rec[8]}, {rec[9]}, {rec[10]}, {rec[11]}"
        )

    if t == 0x40:
        if rec[1:4] != [0, 0, 0]:
            raise ValueError("keysplit reserved bytes are nonzero")
        vg_ptr = ptr32(rec, 4)
        ks_ptr = ptr32(rec, 8)
        vg = resolve_ptr_label(
            by_addr, vg_ptr, VOICEGROUP_PREFIXES, "keysplit voicegroup"
        )
        ks = resolve_ptr_label(
            by_addr, ks_ptr, KEYSPLIT_PREFIXES, "keysplit table"
        )
        return f"\tvoice_keysplit {vg}, {ks}"

    if t == 0x80:
        if rec[1:4] != [0, 0, 0] or ptr32(rec, 8) != 0:
            raise ValueError("keysplit-all reserved fields are invalid")
        vg_ptr = ptr32(rec, 4)
        vg = resolve_ptr_label(
            by_addr, vg_ptr, VOICEGROUP_PREFIXES, "keysplit-all voicegroup"
        )
        return f"\tvoice_keysplit_all {vg}"

    if t in (0x20, 0x30):
        if rec[1:4] != [60, 0, 0] or rec[8:12] != [0xFF, 0, 0xFF, 0]:
            raise ValueError("cry ToneData fields do not match cry macro")
        ptr = ptr32(rec, 4)
        sample = resolve_ptr_label(
            by_addr, ptr, (DIRECTSOUND_PREFIX,), "cry sample"
        )
        macro = "cry" if t == 0x20 else "cry2"
        return f"\t{macro} {sample}"

    raise ValueError(f"unsupported ToneData type 0x{t:02X}")


def voicegroup_raw_blocks(
    src: Source,
) -> list[tuple[int, int, str, list[int]]]:
    """Return (start,end,indent,bytes) for numeric .byte runs inside groups."""
    out: list[tuple[int, int, str, list[int]]] = []
    active = False
    i = 0

    while i < len(src.lines):
        line = src.lines[i]
        lm = LABEL_RE.match(line)
        if lm:
            active = lm.group(1).startswith(VOICEGROUP_PREFIXES)
            i += 1
            continue

        if not active:
            i += 1
            continue

        parsed = parse_numeric_byte_line(line)
        if parsed is None:
            i += 1
            continue

        indent = parsed[0]
        data: list[int] = []
        j = i
        while j < len(src.lines):
            lm2 = LABEL_RE.match(src.lines[j])
            if lm2:
                break
            p = parse_numeric_byte_line(src.lines[j])
            if p is None:
                break
            if p[0] != indent and data:
                break
            data.extend(p[1])
            j += 1

        out.append((i, j, indent, data))
        i = j

    return out


def convert_raw_voicegroups(
    sources: list[Source], apply: bool, stats: Stats
) -> list[str]:
    by_addr, _names = labels_by_addr(sources)
    errors: list[str] = []

    for src in sources:
        blocks = voicegroup_raw_blocks(src)
        stats.raw_voice_blocks_before += len(blocks)
        stats.raw_voice_bytes_before += sum(len(x[3]) for x in blocks)
        if not blocks:
            continue

        replacements: list[tuple[int, int, list[str]]] = []
        for start, end, _indent, data in blocks:
            if len(data) % 12 != 0:
                errors.append(
                    f"{src.path.relative_to(ROOT)}:{start + 1}: "
                    f"raw VoiceGroup byte run length {len(data)} "
                    "is not divisible by 12"
                )
                continue

            macros: list[str] = []
            try:
                for off in range(0, len(data), 12):
                    macros.append(
                        tone_record_to_macro(data[off:off + 12], by_addr)
                    )
            except ValueError as e:
                errors.append(
                    f"{src.path.relative_to(ROOT)}:{start + 1}: {e}"
                )
                continue

            replacements.append((start, end, macros))
            stats.raw_voice_records_converted += len(macros)

        if apply:
            for start, end, macros in reversed(replacements):
                src.lines[start:end] = macros
                src.changed = True

    return errors


def audit_song_headers(
    sources: list[Source], stats: Stats
) -> list[str]:
    _by_addr, names = labels_by_addr(sources)
    errors: list[str] = []

    for src in sources:
        current_header: Optional[str] = None
        for i, line in enumerate(src.lines):
            lm = LABEL_RE.match(line)
            if lm:
                name = lm.group(1)
                current_header = (
                    name
                    if name.startswith("SongHeader_")
                    or name.startswith("M4aDummySongHeader")
                    else None
                )

            m = SONG_HEADER_RE.match(line)
            if not m:
                continue

            stats.song_headers += 1
            args = split_args(m.group(2))
            if len(args) != 5:
                errors.append(
                    f"{src.path.relative_to(ROOT)}:{i+1}: "
                    f"m4a_song_header arg count={len(args)}"
                )
                continue

            track_count = parse_int(args[0])
            if track_count is None:
                errors.append(
                    f"{src.path.relative_to(ROOT)}:{i+1}: "
                    f"non-numeric track_count {args[0]}"
                )
                continue

            ptrs: list[str] = []
            j = i + 1
            while j < len(src.lines):
                pm = TRACK_PTR_RE.match(src.lines[j])
                if pm:
                    ptrs.append(pm.group(1))
                    j += 1
                    continue
                stripped = src.lines[j].strip()
                if not stripped or stripped.startswith("@"):
                    j += 1
                    continue
                break

            stats.song_track_pointers += len(ptrs)
            if len(ptrs) != track_count:
                errors.append(
                    f"{src.path.relative_to(ROOT)}:{i+1}: "
                    f"{current_header or '<unknown>'}: "
                    f"track_count={track_count}, pointers={len(ptrs)}"
                )

            for ptr in ptrs:
                if ptr not in names:
                    errors.append(
                        f"{src.path.relative_to(ROOT)}:{i+1}: "
                        f"undefined SongTrack pointer {ptr}"
                    )

            if parse_int(args[4]) is not None:
                stats.numeric_voicegroup_ptrs_after += 1
            elif args[4] not in names:
                errors.append(
                    f"{src.path.relative_to(ROOT)}:{i+1}: "
                    f"undefined voicegroup symbol {args[4]}"
                )

    return errors


def audit_song_table(
    sources: list[Source], stats: Stats
) -> list[str]:
    _by_addr, names = labels_by_addr(sources)
    errors: list[str] = []
    for src in sources:
        for lineno, line in enumerate(src.lines, 1):
            m = SONG_TABLE_RE.match(line)
            if not m:
                continue
            stats.song_table_entries += 1
            label = m.group(1)
            if label not in names:
                errors.append(
                    f"{src.path.relative_to(ROOT)}:{lineno}: "
                    f"song table references undefined {label}"
                )
    return errors


def audit_voicegroup_directives(
    sources: list[Source], stats: Stats
) -> list[str]:
    _by_addr, names = labels_by_addr(sources)
    errors: list[str] = []

    active = False
    for src in sources:
        active = False
        for lineno, line in enumerate(src.lines, 1):
            lm = LABEL_RE.match(line)
            if lm:
                active = lm.group(1).startswith(VOICEGROUP_PREFIXES)

            if not active:
                continue

            if DATA_DIRECTIVE_RE.match(line):
                errors.append(
                    f"{src.path.relative_to(ROOT)}:{lineno}: "
                    f"raw data directive remains inside VoiceGroup: "
                    f"{line.strip()}"
                )

            m = DIRECTSOUND_MACRO_RE.match(line)
            if m:
                args = split_args(m.group(2))
                if len(args) != 7:
                    errors.append(
                        f"{src.path.relative_to(ROOT)}:{lineno}: "
                        f"{m.group(1)} arg count={len(args)}"
                    )
                    continue
                ptr = args[2]
                stats.directsound_voice_refs += 1
                if ptr not in names or not ptr.startswith(DIRECTSOUND_PREFIX):
                    errors.append(
                        f"{src.path.relative_to(ROOT)}:{lineno}: "
                        f"unresolved DirectSound pointer {ptr}"
                    )
                continue

            m = CRY_MACRO_RE.match(line)
            if m:
                stats.cry_refs += 1
                ptr = m.group(2)
                if ptr not in names or not ptr.startswith(DIRECTSOUND_PREFIX):
                    errors.append(
                        f"{src.path.relative_to(ROOT)}:{lineno}: "
                        f"unresolved cry sample {ptr}"
                    )
                continue

            m = PROGRAMMABLE_RE.match(line)
            if m:
                stats.programmable_refs += 1
                args = split_args(m.group(2))
                if len(args) != 5:
                    errors.append(
                        f"{src.path.relative_to(ROOT)}:{lineno}: "
                        f"{m.group(1)} arg count={len(args)}"
                    )
                elif args[0] not in names:
                    errors.append(
                        f"{src.path.relative_to(ROOT)}:{lineno}: "
                        f"unresolved programmable-wave pointer {args[0]}"
                    )
                continue

            m = KEYSPLIT_RE.match(line)
            if m:
                stats.keysplit_refs += 1
                args = split_args(m.group(2))
                expected = 1 if m.group(1) == "voice_keysplit_all" else 2
                if len(args) != expected:
                    errors.append(
                        f"{src.path.relative_to(ROOT)}:{lineno}: "
                        f"{m.group(1)} arg count={len(args)}"
                    )
                    continue
                for ptr in args:
                    if ptr not in names:
                        errors.append(
                            f"{src.path.relative_to(ROOT)}:{lineno}: "
                            f"unresolved keysplit pointer {ptr}"
                        )

    return errors


def audit_directsound_manifest() -> list[str]:
    errors: list[str] = []
    manifest_path = ROOT / "audio/direct_sound/manifest.json"
    manifest = json.loads(manifest_path.read_text(encoding="utf-8"))

    assets = manifest.get("assets", [])
    if manifest.get("asset_count") != 493:
        errors.append(
            f"DirectSound manifest asset_count="
            f"{manifest.get('asset_count')} != 493"
        )
    if manifest.get("complete_count") != 493:
        errors.append(
            f"DirectSound complete_count="
            f"{manifest.get('complete_count')} != 493"
        )
    if manifest.get("truncated_count") != 0:
        errors.append(
            f"DirectSound truncated_count="
            f"{manifest.get('truncated_count')} != 0"
        )
    if len(assets) != 493:
        errors.append(f"DirectSound assets len={len(assets)} != 493")

    wavs = list((ROOT / "audio/direct_sound").rglob("*.wav"))
    bins = list((ROOT / "audio/direct_sound").rglob("*.bin"))
    if len(wavs) != 493:
        errors.append(f"source DirectSound WAV count={len(wavs)} != 493")
    if bins:
        errors.append(f"source DirectSound .bin count={len(bins)} != 0")

    labels = {a.get("label") for a in assets}
    if len(labels) != 493 or None in labels:
        errors.append("DirectSound manifest labels are not 493 unique names")

    for asset in assets:
        if asset.get("status") != "complete":
            errors.append(
                f"DirectSound asset not complete: {asset.get('label')}"
            )
    return errors


def post_raw_voice_stats(sources: list[Source], stats: Stats) -> None:
    for src in sources:
        blocks = voicegroup_raw_blocks(src)
        stats.raw_voice_blocks_after += len(blocks)
        stats.raw_voice_bytes_after += sum(len(x[3]) for x in blocks)


def print_stats(stats: Stats) -> None:
    print(f"source_files={stats.files}")
    print(f"song_table_entries={stats.song_table_entries}")
    print(f"song_headers={stats.song_headers}")
    print(f"song_track_pointers={stats.song_track_pointers}")
    print(
        "numeric_voicegroup_ptrs_before="
        f"{stats.numeric_voicegroup_ptrs_before}"
    )
    print(
        "numeric_voicegroup_ptrs_after="
        f"{stats.numeric_voicegroup_ptrs_after}"
    )
    print(f"voicegroup_labels={stats.voicegroup_labels}")
    print(f"voicegroup_labels_added={stats.voicegroup_labels_added}")
    print(
        "voicegroup_ptrs_rewritten="
        f"{stats.voicegroup_ptrs_rewritten}"
    )
    print(
        "raw_voice_blocks_before="
        f"{stats.raw_voice_blocks_before}"
    )
    print(
        "raw_voice_bytes_before="
        f"{stats.raw_voice_bytes_before}"
    )
    print(
        "raw_voice_records_converted="
        f"{stats.raw_voice_records_converted}"
    )
    print(f"raw_voice_blocks_after={stats.raw_voice_blocks_after}")
    print(f"raw_voice_bytes_after={stats.raw_voice_bytes_after}")
    print(
        "directsound_voice_refs="
        f"{stats.directsound_voice_refs}"
    )
    print(f"cry_refs={stats.cry_refs}")
    print(f"programmable_refs={stats.programmable_refs}")
    print(f"keysplit_refs={stats.keysplit_refs}")


def run(apply: bool) -> int:
    sources = load_sources()
    stats = Stats(files=len(sources))
    errors: list[str] = []

    # Phase 1: prove/create exact VoiceGroup labels only at semantic ToneData
    # entry boundaries that are explicitly referenced by m4a_song_header.
    errors.extend(insert_missing_voicegroup_labels(sources, apply, stats))
    if apply:
        write_sources(sources)
        sources = load_sources()

    # Phase 2: replace numeric header voicegroup operands using exact labels.
    errors.extend(rewrite_header_voicegroup_ptrs(sources, apply, stats))
    if apply:
        write_sources(sources)
        sources = load_sources()

    # Phase 3: convert any still-raw 12-byte ToneData records, but only when
    # every field is representable by an existing project macro and every
    # pointer resolves in the field's proven schema.
    errors.extend(convert_raw_voicegroups(sources, apply, stats))
    if apply:
        write_sources(sources)
        sources = load_sources()

    # Phase 4: whole-domain relational audit.
    _by_addr, names = labels_by_addr(sources)
    stats.voicegroup_labels = sum(
        1 for n in names if n.startswith(VOICEGROUP_PREFIXES)
    )

    errors.extend(audit_song_table(sources, stats))
    errors.extend(audit_song_headers(sources, stats))
    errors.extend(audit_voicegroup_directives(sources, stats))
    errors.extend(audit_directsound_manifest())
    post_raw_voice_stats(sources, stats)

    mode = "apply" if apply else "scan"
    print(f"mode={mode}")
    print_stats(stats)

    changed = [
        str(s.path.relative_to(ROOT)) for s in sources if s.changed
    ]
    print(f"changed_files={len(changed)}")
    for p in changed:
        print(f"  changed={p}")

    if errors:
        print(f"errors={len(errors)}")
        for e in errors:
            print(f"  ERROR: {e}")
        return 1

    print("errors=0")
    print("AUDIO_STRUCTURE_AUDIT=PASS")
    return 0


def main() -> int:
    p = argparse.ArgumentParser(
        description=(
            "Audit and semanticize Pokemon Emerald JP M4A SongHeader/"
            "VoiceGroup structures without guessing pointer semantics."
        )
    )
    g = p.add_mutually_exclusive_group(required=True)
    g.add_argument("--scan", action="store_true")
    g.add_argument("--apply", action="store_true")
    g.add_argument("--verify", action="store_true")
    args = p.parse_args()

    if args.apply:
        return run(apply=True)
    return run(apply=False)


if __name__ == "__main__":
    sys.exit(main())
