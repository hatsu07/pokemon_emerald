#!/usr/bin/env python3
"""Generate lossless, in-place editable text sources for the Japanese ROM.

The original ROM stores most text in two opaque data sections.  This tool
combines byte-for-byte matches from the local PokeEm-expansion-CanuseJP
checkout with three source-independent proofs: field-script text operands,
Thumb literals that flow directly to a text API, and statically indexed Thumb
text tables that flow to those APIs.  Every emitted value is
round-tripped through the project's preprocessor and kept at its original
address.

The generated files are intentionally included from data/event_scripts.s and
data/data.s, rather than linked as a separate object.  This preserves existing
raw pointers and therefore keeps make compare valid before any text is edited.

Text entries are fixed-size slots.  Ordinary slots may be shortened, while
slots with an internal pointer or terminator have an exact-length guard.
Growing any slot is rejected by the assembler; a future relocation mode would
be needed for longer translations.
"""

from __future__ import annotations

import argparse
import ast
from bisect import bisect_left, bisect_right
import collections
import json
import math
import re
import subprocess
import tempfile
from collections import defaultdict
from dataclasses import asdict, dataclass, field, replace
from pathlib import Path
from typing import Iterable


ROM_BASE = 0x08000000
SCRIPT_RANGE = (0x1DABAC, 0x28D2F8)
RODATA_RANGE = (0x29BDA4, 0x1000000)

LABEL_RE = re.compile(r"^\s*([A-Za-z_][A-Za-z0-9_]*):{1,2}\s*$")
STRING_RE = re.compile(r'^\s*\.string\s+"((?:[^"\\]|\\.)*)"')
C_STRING_RE = re.compile(r'"((?:\\.|[^"\\])*)"')
C_DECL_RE = re.compile(
    r"(?:(?:static\s+)?const\s+)?u8\s+([A-Za-z_][A-Za-z0-9_]*)"
    r"\s*\[\]\s*=\s*(?:__|_|COMPOUND_STRING)\(\s*"
    r'((?:"(?:\\.|[^"\\])*"\s*)+)\s*\)',
    re.DOTALL,
)
C_CALL_RE = re.compile(
    r"(?<![A-Za-z0-9_])(?:__|_|COMPOUND_STRING)\(\s*"
    r'((?:"(?:\\.|[^"\\])*"\s*)+)\s*\)',
    re.DOTALL,
)
PREPROC_LABEL_RE = re.compile(r"^__TEXT_(\d+):$")
BYTE_RE = re.compile(r"0x([0-9A-Fa-f]{2})")
ASM_LABEL_ADDR_RE = re.compile(
    r"^\s*([A-Za-z_][A-Za-z0-9_]*):\s*@\s*0x([0-9A-Fa-f]{7,8})\s*$"
)
ASMINCBIN_RE = re.compile(
    r'^\s*\.incbin\s+"baserom\.gba",\s*0x([0-9A-Fa-f]+),\s*0x([0-9A-Fa-f]+)\s*$'
)
ASM_INCLUDE_RE = re.compile(r'^\s*\.include\s+"(data/text/[^"]+)"\s*$')
ASM_LITERAL_RE = re.compile(
    r"^\s*([A-Za-z_][A-Za-z0-9_]*):\s*\.4byte\s+(0x08[0-9A-Fa-f]{6})\b"
)
ASM_LDR_RE = re.compile(
    r"^\s*ldr(?:b|h|sb|sh)?\s+(r(?:[0-7]|1[0-5])),\s*([A-Za-z_][A-Za-z0-9_]*)\b"
)
ASM_INDEXED_LITERAL_LOAD_RE = re.compile(
    r"^\s*ldr\s+(r(?:[0-7]|1[0-5])),\s*([A-Za-z_][A-Za-z0-9_]*)\b"
)
ASM_INDEXED_SHIFT_RE = re.compile(
    r"^\s*lsls?\s+(r(?:[0-7]|1[0-5])),\s+(r(?:[0-7]|1[0-5])),\s*#(0x[0-9A-Fa-f]+|\d+)\b"
)
ASM_INDEXED_ADD_RE = re.compile(
    r"^\s*adds?\s+(r(?:[0-7]|1[0-5])),\s+(r(?:[0-7]|1[0-5])),\s+(r(?:[0-7]|1[0-5]))\b"
)
ASM_INDEXED_TABLE_LOAD_RE = re.compile(
    r"^\s*ldr\s+(r(?:[0-7]|1[0-5])),\s*\[(r(?:[0-7]|1[0-5]))(?:,\s*#0)?\]\s*$"
)
ASM_CALL_RE = re.compile(r"^\s*bl\s+([A-Za-z_][A-Za-z0-9_]*)\b")
ASM_ANY_LABEL_RE = re.compile(r"^\s*[A-Za-z_][A-Za-z0-9_]*:")
BRAILLE_FORMAT_RE = re.compile(
    r"^\s*brailleformat\s+([0-9A-Fa-fx]+)\s*,\s*([0-9A-Fa-fx]+)\s*,\s*"
    r"([0-9A-Fa-fx]+)\s*,\s*([0-9A-Fa-fx]+)\s*,\s*([0-9A-Fa-fx]+)\s*,\s*([0-9A-Fa-fx]+)\s*$"
)

# ABI-stable normal-string source argument registers.  This is intentionally
# a narrow direct-dataflow set: only APIs whose source argument is passed in a
# register are listed here, so the scanner never needs to infer stack values
# or indirect calls.
ASM_TEXT_CONSUMERS = {
    "StringExpandPlaceholders": "r1",
    "AddTextPrinterToWindow1": "r0",
    "AddTextPrinterParameterized": "r2",
    "AddTextPrinterParameterized2": "r2",
    # Field and battle display APIs accept their immutable source in r0.
    "ShowFieldMessage": "r0",
    "ShowFieldAutoScrollMessage": "r0",
    "BattleStringExpandPlaceholdersToDisplayedString": "r0",
    # These copies compose normal charmap text into a display buffer.  The
    # source is r1 for every audited variant below.
    "StringCopy": "r1",
    "StringAppend": "r1",
    "StringCopyN": "r1",
    "StringAppendN": "r1",
    "StringCopy7": "r1",
}

# Static tables larger than this need a dedicated bound proof rather than the
# intentionally local recognition below.  The largest accepted table in this
# ROM is far smaller than this cap.
MAX_INDEXED_TEXT_TABLE_BYTES = 0x1000
MIN_INDEXED_TEXT_TABLE_ENTRIES = 3

# Field-script instructions whose operand is a normal charmap string pointer.
# The scanner below intentionally excludes braille and trainerbattle layouts:
# those use different encodings/layouts and must not be guessed as text.
DIRECT_TEXT_OPS = {
    0x67: "message",
    0x9B: "messageautoscroll",
    0xBD: "vmessage",
    0xBE: "vbuffermessage",
    0xDB: "messageinstant",
}

# Fixed Japanese Emerald map/event ABI used to prove field-script roots.  The
# map-group table is part of the original ROM image, not a source-label lookup:
# its 34 pointer arrays end immediately before gMapGroups itself.  Keeping the
# layout here makes the reachability proof reproducible even after the opaque
# script-data source has been replaced by generated includes.
MAP_GROUPS_OFFSET = 0x45E998
MAP_GROUP_COUNT = 34
MAP_HEADER_SIZE = 28
MAP_HEADER_EVENTS_OFFSET = 4
MAP_HEADER_SCRIPTS_OFFSET = 8
MAP_EVENTS_SIZE = 20
MAP_EVENTS_OBJECTS_OFFSET = 4
MAP_EVENTS_COORDS_OFFSET = 12
MAP_EVENTS_BGS_OFFSET = 16
OBJECT_EVENT_SIZE = 24
OBJECT_EVENT_SCRIPT_OFFSET = 16
COORD_EVENT_SIZE = 16
COORD_EVENT_SCRIPT_OFFSET = 12
BG_EVENT_SIZE = 12
BG_EVENT_KIND_OFFSET = 4
BG_EVENT_SCRIPT_OFFSET = 8
MAP_SCRIPT_ENTRY_SIZE = 5
MAP_SCRIPT_DIRECT_TYPES = frozenset((1, 3, 5, 6, 7))
MAP_SCRIPT_CONDITION_TYPES = frozenset((2, 4))
MAX_MAP_SCRIPT_ENTRIES = 128
MAX_MAP_SCRIPT_CONDITIONS = 512

# gotostd/callstd indices resolve through the literal table used by the field
# script interpreter.  They are also roots because standard scripts can carry
# ordinary text even when a map path is not followed in this static walk.
STANDARD_SCRIPT_TABLE_OFFSET = 0x1DB7BC
STANDARD_SCRIPT_COUNT = 11

# Exact byte length for every fixed-size event command in this ROM's command
# table (asm/macros/event.inc).  Command 0x5C (trainerbattle) is intentionally
# zero here: its size is selected by the battle type below and is parsed
# separately rather than guessed from subsequent bytes.
FIELD_SCRIPT_OPCODE_LENGTHS = (
    1, 1, 1, 1, 5, 5, 6, 6, 2, 2, 3, 3, 1, 1, 2, 6,
    3, 6, 6, 6, 3, 9, 5, 5, 5, 5, 5, 3, 3, 6, 6, 6,
    9, 5, 5, 5, 5, 3, 5, 1, 3, 3, 3, 3, 5, 1, 1, 3,
    1, 3, 1, 4, 3, 1, 3, 2, 2, 8, 8, 8, 3, 8, 8, 8,
    8, 8, 5, 1, 5, 5, 5, 5, 3, 5, 5, 3, 3, 3, 3, 7,
    9, 3, 5, 3, 5, 3, 5, 7, 5, 5, 1, 4, 0, 1, 1, 1,
    3, 3, 3, 7, 3, 4, 1, 5, 1, 1, 1, 1, 1, 1, 3, 5,
    6, 6, 1, 5, 5, 5, 1, 2, 5, 15, 3, 5, 3, 4, 2, 4,
    4, 4, 4, 4, 4, 6, 5, 5, 5, 3, 4, 1, 1, 1, 1, 3,
    6, 6, 6, 4, 1, 3, 3, 2, 3, 3, 2, 5, 3, 4, 3, 3,
    1, 5, 9, 1, 3, 1, 2, 3, 6, 5, 9, 3, 5, 5, 1, 5,
    5, 8, 1, 3, 3, 3, 6, 1, 5, 5, 5, 6, 6, 5, 5, 6,
    3, 3, 3, 2, 8, 1, 4, 2, 5, 1, 1, 1, 6, 3, 3, 1,
    3, 8, 4, 3, 1, 3, 1, 8, 1, 1, 1, 5, 2, 4, 4, 5,
    8, 4, 6,
)

# trainerbattle begins with opcode, type, trainer id, and local id (six
# bytes), followed by a type-specific number of pointers.  Only the listed
# pointer positions are normal charmap strings; the remaining positions are
# event-script continuations and must be fed back into the exact CFG walker.
TRAINERBATTLE_POINTER_COUNTS = {
    0: 2, 1: 3, 2: 3, 3: 1, 4: 3, 5: 2, 6: 4,
    7: 3, 8: 4, 9: 2, 10: 2, 11: 2, 12: 2,
}
TRAINERBATTLE_TEXT_POINTER_FIELDS = {
    0: (0, 1), 1: (0, 1), 2: (0, 1), 3: (0,), 4: (0, 1, 2),
    5: (0, 1), 6: (0, 1, 2), 7: (0, 1, 2), 8: (0, 1, 2),
    9: (0, 1), 10: (0, 1), 11: (0, 1), 12: (0, 1),
}
TRAINERBATTLE_EVENT_SCRIPT_POINTER_FIELDS = {
    1: (2,), 2: (2,), 6: (3,), 8: (3,),
}

if len(FIELD_SCRIPT_OPCODE_LENGTHS) != 0xE3:
    raise RuntimeError("field-script opcode-length table must cover 0x00-0xE2")

# Number of bytes following each text-control identifier (0xFC).  Keeping this
# grammar explicit lets the source-independent scanner reject invalid streams.
FC_PAYLOAD = {
    0x00: 0, 0x01: 1, 0x02: 1, 0x03: 1, 0x04: 3, 0x05: 1,
    0x06: 1, 0x07: 0, 0x08: 1, 0x09: 0, 0x0A: 0, 0x0B: 2,
    0x0C: 1, 0x0D: 1, 0x0E: 1, 0x0F: 0, 0x10: 2, 0x11: 1,
    0x12: 1, 0x13: 1, 0x14: 1, 0x15: 0, 0x16: 0, 0x17: 0,
    0x18: 0, 0x19: 1, 0x1A: 1, 0x1B: 1, 0x1C: 3, 0x1D: 0,
}

FC_CONSTANT = {
    0x00: "NAME_END", 0x01: "COLOR", 0x02: "HIGHLIGHT", 0x03: "SHADOW",
    0x04: "COLOR_HIGHLIGHT_SHADOW", 0x05: "PALETTE", 0x06: "FONT",
    0x07: "RESET_FONT", 0x08: "PAUSE", 0x09: "PAUSE_UNTIL_PRESS",
    0x0A: "WAIT_SE", 0x0B: "PLAY_BGM", 0x0C: "ESCAPE",
    0x0D: "SHIFT_RIGHT", 0x0E: "SHIFT_DOWN", 0x0F: "FILL_WINDOW",
    0x10: "PLAY_SE", 0x11: "CLEAR", 0x12: "SKIP", 0x13: "CLEAR_TO",
    0x14: "MIN_LETTER_SPACING", 0x15: "JPN", 0x16: "ENG",
    0x17: "PAUSE_MUSIC", 0x18: "RESUME_MUSIC", 0x19: "SPEAKER",
    0x1A: "ACCENT", 0x1B: "BACKGROUND", 0x1C: "TEXT_COLORS", 0x1D: "AUTO",
}


@dataclass(frozen=True)
class SourceEntry:
    text: str
    source_path: str
    source_label: str
    source_kind: str
    line: int


@dataclass(frozen=True)
class TextAlias:
    offset: int
    sources: tuple[SourceEntry, ...]
    evidence: tuple[dict[str, object], ...] = ()


@dataclass(frozen=True)
class TextHit:
    offset: int
    data: bytes
    text: str
    sources: tuple[SourceEntry, ...]
    evidence: tuple[dict[str, object], ...] = ()
    semantic_aliases: tuple[TextAlias, ...] = ()
    encoding: str = "string"

    @property
    def end(self) -> int:
        return self.offset + len(self.data)


@dataclass(frozen=True)
class ExternalBlock:
    start: int
    end: int
    include_path: str


@dataclass
class RegionLayout:
    name: str
    start: int
    end: int
    labels: list[tuple[int, str]] = field(default_factory=list)
    external_blocks: list[ExternalBlock] = field(default_factory=list)


@dataclass(frozen=True)
class LexedText:
    data: bytes
    units: int
    glyphs: int
    controls: int


@dataclass(frozen=True)
class AsmTextReference:
    target: int
    api: str
    source_path: str
    function: str
    ldr_line: int
    literal_line: int


@dataclass(frozen=True)
class AsmIndexedTextTableReference:
    table: int
    api: str
    source_path: str
    function: str
    literal_line: int
    ldr_line: int
    table_load_line: int
    call_line: int


@dataclass(frozen=True)
class IndexedTextTableEntry:
    table: int
    entry_offset: int
    target: int
    lexed: LexedText
    text: str


@dataclass(frozen=True)
class ScriptRoot:
    """A script entry proved by the original map/event ABI."""

    offset: int
    kind: str
    pointer_offset: int | None = None
    map_group: int | None = None
    map_num: int | None = None
    map_script_tag: int | None = None
    event_index: int | None = None
    condition_index: int | None = None
    standard_script_index: int | None = None


@dataclass(frozen=True)
class ScriptReachability:
    """One concrete root-to-instruction CFG proof."""

    root: ScriptRoot
    predecessor: int | None
    edge_kind: str
    depth: int


@dataclass(frozen=True)
class TrainerBattleTextReference:
    """A type-checked trainerbattle text operand reached from a real root."""

    target: int
    command_offset: int
    battle_type: int
    field_index: int
    reachability: ScriptReachability


def write_layout(path: Path, layouts: Iterable[RegionLayout]) -> None:
    """Persist the small amount of structure needed to regenerate includes.

    Once the opaque section sources become one-line wrappers, this file remains
    the source of truth for their original labels and manually maintained
    include blocks.  It deliberately contains no ROM bytes.
    """
    payload = {
        "version": 1,
        "regions": {
            layout.name: {
                "start": f"0x{layout.start:X}",
                "end": f"0x{layout.end:X}",
                "labels": [
                    {"offset": f"0x{offset:X}", "label": label}
                    for offset, label in layout.labels
                ],
                "external_blocks": [
                    {
                        "start": f"0x{block.start:X}",
                        "end": f"0x{block.end:X}",
                        "include_path": block.include_path,
                    }
                    for block in layout.external_blocks
                ],
            }
            for layout in layouts
        },
    }
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(json.dumps(payload, ensure_ascii=False, indent=2) + "\n", encoding="utf-8")


def read_layout(path: Path) -> dict[str, RegionLayout]:
    """Load the immutable address/label layout emitted by :func:`write_layout`."""
    try:
        payload = json.loads(path.read_text(encoding="utf-8"))
        regions = payload["regions"]
    except (OSError, ValueError, KeyError, TypeError) as error:
        raise RuntimeError(f"cannot read layout file {path}: {error}") from error

    result: dict[str, RegionLayout] = {}
    for name, expected_range in (("script_data", SCRIPT_RANGE), ("rodata", RODATA_RANGE)):
        try:
            region = regions[name]
            start = int(region["start"], 0)
            end = int(region["end"], 0)
            labels = [
                (int(item["offset"], 0), str(item["label"]))
                for item in region["labels"]
            ]
            external_blocks = [
                ExternalBlock(
                    start=int(item["start"], 0),
                    end=int(item["end"], 0),
                    include_path=str(item["include_path"]),
                )
                for item in region["external_blocks"]
            ]
        except (KeyError, TypeError, ValueError) as error:
            raise RuntimeError(f"invalid {name} layout in {path}: {error}") from error
        if (start, end) != expected_range:
            raise RuntimeError(
                f"{name} range in {path} is 0x{start:X}-0x{end:X}, "
                f"expected 0x{expected_range[0]:X}-0x{expected_range[1]:X}"
            )
        result[name] = RegionLayout(
            name=name,
            start=start,
            end=end,
            labels=sorted(set(labels)),
            external_blocks=sorted(external_blocks, key=lambda block: block.start),
        )
    return result


def normalize_text(text: str, add_terminator: bool) -> str:
    text = text.replace("{JPN}", "")
    if add_terminator and "$" not in text:
        text += "$"
    return text


def parse_inc_entries(source_root: Path) -> list[SourceEntry]:
    entries: list[SourceEntry] = []
    roots = (source_root / "data" / "maps", source_root / "data" / "text")
    for directory in roots:
        if not directory.exists():
            continue
        for path in sorted(directory.rglob("*.inc")):
            current_label: str | None = None
            current_line = 0
            fragments: list[str] = []

            def finish() -> None:
                if current_label is None or not fragments:
                    return
                text = normalize_text("".join(fragments), add_terminator=False)
                if "$" not in text:
                    return
                entries.append(
                    SourceEntry(
                        text=text,
                        source_path=path.relative_to(source_root).as_posix(),
                        source_label=current_label,
                        source_kind="inc",
                        line=current_line,
                    )
                )

            for line_number, raw in enumerate(
                path.read_text(encoding="utf-8", errors="replace").splitlines(), start=1
            ):
                label_match = LABEL_RE.match(raw)
                if label_match:
                    finish()
                    current_label = label_match.group(1)
                    current_line = line_number
                    fragments = []
                    continue
                string_match = STRING_RE.match(raw)
                if string_match and current_label:
                    fragments.append(string_match.group(1))
            finish()
    return entries


def parse_c_entries(source_root: Path) -> list[SourceEntry]:
    entries: list[SourceEntry] = []
    for directory in (source_root / "src", source_root / "data"):
        if not directory.exists():
            continue
        for path in sorted(
            candidate
            for candidate in directory.rglob("*")
            if candidate.suffix in {".c", ".h"}
        ):
            content = path.read_text(encoding="utf-8", errors="replace")
            relative = path.relative_to(source_root).as_posix()
            declared_spans: set[tuple[int, int]] = set()
            for match in C_DECL_RE.finditer(content):
                text = normalize_text(
                    "".join(C_STRING_RE.findall(match.group(2))), add_terminator=True
                )
                entries.append(
                    SourceEntry(
                        text=text,
                        source_path=relative,
                        source_label=match.group(1),
                        source_kind="c-declaration",
                        line=content.count("\n", 0, match.start()) + 1,
                    )
                )
                declared_spans.add(match.span())

            # Some fixed-width name tables consist of anonymous _() calls.  Keep
            # them too; their source location becomes the stable catalog name.
            for match in C_CALL_RE.finditer(content):
                if any(start <= match.start() and match.end() <= end for start, end in declared_spans):
                    continue
                text = normalize_text(
                    "".join(C_STRING_RE.findall(match.group(1))), add_terminator=True
                )
                if not text or text == "$":
                    continue
                line = content.count("\n", 0, match.start()) + 1
                entries.append(
                    SourceEntry(
                        text=text,
                        source_path=relative,
                        source_label=f"{path.stem}_line_{line}",
                        source_kind="c-literal",
                        line=line,
                    )
                )
    return entries


def unique_entries(entries: Iterable[SourceEntry]) -> list[SourceEntry]:
    seen: set[tuple[str, str, str, str, int]] = set()
    result: list[SourceEntry] = []
    for entry in entries:
        key = (
            entry.text,
            entry.source_path,
            entry.source_label,
            entry.source_kind,
            entry.line,
        )
        if key not in seen:
            seen.add(key)
            result.append(entry)
    return result


def encode_entries(
    entries: list[SourceEntry], preproc: Path, charmap: Path
) -> tuple[dict[int, bytes], list[dict[str, object]]]:
    """Use the project's preproc so generated text always uses its exact syntax."""
    failures: list[dict[str, object]] = []
    encoded: dict[int, bytes] = {}
    with tempfile.TemporaryDirectory(prefix="extract_all_text_") as temp_dir:
        input_path = Path(temp_dir) / "batch.s"
        with input_path.open("w", encoding="utf-8") as stream:
            for index, entry in enumerate(entries):
                stream.write(f"__TEXT_{index}:\n\t.string \"{entry.text}\"\n")

        process = subprocess.run(
            [str(preproc), str(input_path), str(charmap)],
            check=False,
            capture_output=True,
            text=True,
            encoding="utf-8",
            errors="replace",
        )
        if process.returncode:
            raise RuntimeError(
                "tools/preproc failed while encoding the source catalog:\n"
                + process.stderr.strip()
            )

        current: int | None = None
        byte_lists: dict[int, bytearray] = {}
        for raw in process.stdout.splitlines():
            label_match = PREPROC_LABEL_RE.match(raw.strip())
            if label_match:
                current = int(label_match.group(1))
                byte_lists[current] = bytearray()
                continue
            if current is not None and ".byte" in raw:
                byte_lists[current].extend(
                    int(value, 16) for value in BYTE_RE.findall(raw)
                )

        for index, entry in enumerate(entries):
            data = bytes(byte_lists.get(index, b""))
            if not data or data[-1] != 0xFF:
                failures.append(
                    {
                        "source_path": entry.source_path,
                        "source_label": entry.source_label,
                        "line": entry.line,
                        "reason": "preproc did not produce a terminated text string",
                    }
                )
                continue
            encoded[index] = data
    return encoded, failures


def occurrences_limited(
    blob: bytes, needle: bytes, ranges: tuple[tuple[int, int], ...], maximum: int
) -> list[int] | None:
    """Return target-range occurrences, or None when a pattern is too ambiguous."""
    positions: list[int] = []
    start = 0
    while True:
        offset = blob.find(needle, start)
        if offset < 0:
            return positions
        if any(begin <= offset and offset + len(needle) <= end for begin, end in ranges):
            positions.append(offset)
            if len(positions) > maximum:
                return None
        start = offset + 1


def collect_hits(
    rom: bytes,
    entries: list[SourceEntry],
    encoded: dict[int, bytes],
    ranges: tuple[tuple[int, int], ...],
    minimum_bytes: int,
    maximum_occurrences: int,
) -> tuple[list[TextHit], list[dict[str, object]]]:
    by_location: dict[tuple[int, bytes], list[SourceEntry]] = defaultdict(list)
    skipped: list[dict[str, object]] = []

    for index, entry in enumerate(entries):
        data = encoded.get(index)
        if data is None:
            continue
        # Very short source literals such as a single space have millions of
        # byte matches.  A unique occurrence remains safe and is accepted.
        limit = maximum_occurrences if len(data) >= minimum_bytes else 1
        positions = occurrences_limited(rom, data, ranges, limit)
        if positions is None:
            skipped.append(
                {
                    "source_path": entry.source_path,
                    "source_label": entry.source_label,
                    "line": entry.line,
                    "reason": "too many identical byte sequences in target data",
                    "byte_length": len(data),
                }
            )
            continue
        if not positions:
            skipped.append(
                {
                    "source_path": entry.source_path,
                    "source_label": entry.source_label,
                    "line": entry.line,
                    "reason": "no exact match in baserom",
                    "byte_length": len(data),
                }
            )
            continue
        for offset in positions:
            by_location[(offset, data)].append(entry)

    hits = [
        TextHit(
            offset=offset,
            data=data,
            text=sources[0].text,
            sources=tuple(sources),
        )
        for (offset, data), sources in by_location.items()
    ]
    return hits, skipped


def merge_intervals(intervals: Iterable[tuple[int, int]]) -> list[tuple[int, int]]:
    """Return a sorted union for quickly excluding already represented data."""
    merged: list[tuple[int, int]] = []
    for start, end in sorted(intervals):
        if not merged or start > merged[-1][1]:
            merged.append((start, end))
        elif end > merged[-1][1]:
            merged[-1] = (merged[-1][0], end)
    return merged


def interval_contains(intervals: list[tuple[int, int]], position: int) -> bool:
    starts = [start for start, _ in intervals]
    index = bisect_right(starts, position) - 1
    return index >= 0 and position < intervals[index][1]


def script_pointer_kinds(rom: bytes, source: int) -> set[str]:
    """Identify only script operands whose command format proves text intent."""
    kinds: set[str] = set()
    if source >= 1 and rom[source - 1] in DIRECT_TEXT_OPS:
        kinds.add(DIRECT_TEXT_OPS[rom[source - 1]])
    # msgbox expands to `loadword 0, text; callstd type`; the callstd byte
    # removes the ambiguity that a generic loadword would otherwise have.
    if (
        source >= 2
        and rom[source - 2] == 0x0F
        and rom[source - 1] == 0
        and source + 4 < len(rom)
        and rom[source + 4] == 0x09
    ):
        kinds.add("msgbox_loadword0_callstd")
    # bufferstring and vbufferstring carry one stringvar byte before pointer.
    if source >= 2 and rom[source - 2] == 0x85:
        kinds.add("bufferstring")
    if source >= 2 and rom[source - 2] == 0xBF:
        kinds.add("vbufferstring")
    return kinds


def find_field_script_text_references(rom: bytes) -> dict[int, list[tuple[int, str]]]:
    """Find unaligned GBA pointers used by normal field-script text commands."""
    references: dict[int, list[tuple[int, str]]] = defaultdict(list)
    for source in range(SCRIPT_RANGE[0], SCRIPT_RANGE[1] - 3):
        if rom[source + 3] != 0x08:
            continue
        target = rom[source] | (rom[source + 1] << 8) | (rom[source + 2] << 16)
        if not (SCRIPT_RANGE[0] <= target < SCRIPT_RANGE[1] or RODATA_RANGE[0] <= target < RODATA_RANGE[1]):
            continue
        for kind in sorted(script_pointer_kinds(rom, source)):
            references[target].append((source, kind))
    return references


def lex_normal_text(rom: bytes, start: int, maximum: int = 0x200) -> LexedText | None:
    """Validate the normal text-engine grammar through its final EOS byte."""
    end = min(len(rom), start + maximum)
    position = start
    units = glyphs = controls = 0
    while position < end:
        byte = rom[position]
        if byte == 0xFF:
            return LexedText(rom[start : position + 1], units, glyphs, controls)
        if byte == 0xFC:
            if position + 1 >= end or rom[position + 1] not in FC_PAYLOAD:
                return None
            size = 2 + FC_PAYLOAD[rom[position + 1]]
            if position + size > end:
                return None
            position += size
            units += 1
            controls += 1
            continue
        if byte == 0xFD:
            if position + 1 >= end or rom[position + 1] > 0x46:
                return None
            position += 2
            units += 1
            controls += 1
            continue
        if byte in (0xF7, 0xF8, 0xF9):
            if position + 1 >= end:
                return None
            position += 2
            units += 1
            controls += 1
            continue
        if byte in (0xFA, 0xFB, 0xFE):
            position += 1
            units += 1
            controls += 1
            continue
        position += 1
        units += 1
        glyphs += 1
    return None


def strip_charmap_comment(line: str) -> str:
    in_character = False
    escaped = False
    for index, character in enumerate(line):
        if in_character:
            if escaped:
                escaped = False
            elif character == "\\":
                escaped = True
            elif character == "'":
                in_character = False
        elif character == "'":
            in_character = True
        elif character == "@":
            return line[:index]
    return line


def parse_charmap_reverse(path: Path) -> dict[int, str]:
    """Choose a readable one-byte glyph per code for lossless rendering."""
    options: dict[int, list[str]] = defaultdict(list)
    for raw in path.read_text(encoding="utf-8").splitlines():
        line = strip_charmap_comment(raw).strip()
        if "=" not in line:
            continue
        left, right = (part.strip() for part in line.split("=", 1))
        if not (left.startswith("'") and left.endswith("'")):
            continue
        body = left[1:-1]
        if body.startswith("\\"):
            continue
        try:
            character = ast.literal_eval(left)
        except (SyntaxError, ValueError):
            continue
        values = re.findall(r"(?i)\b[0-9a-f]{2}\b", right)
        if len(character) != 1 or len(values) != 1 or character in {'"', "\\", "$"}:
            continue
        options[int(values[0], 16)].append(character)

    def preference(character: str) -> tuple[int, int]:
        code = ord(character)
        if 0x3040 <= code <= 0x30FF:
            return (0, code)
        if code >= 0x3000:
            return (1, code)
        if 0x20 <= code <= 0x7E:
            return (2, code)
        return (3, code)

    return {byte: min(characters, key=preference) for byte, characters in options.items()}


def raw_byte(byte: int) -> str:
    return f"{{0x{byte:02X}}}"


def render_lossless_text(data: bytes, glyphs: dict[int, str]) -> str:
    """Render a validated byte string as a `.string` body without guessing."""
    rendered: list[str] = []
    position = 0
    while position < len(data):
        byte = data[position]
        if byte == 0xFF:
            rendered.append("$")
            position += 1
        elif byte == 0xFE:
            rendered.append("\\n")
            position += 1
        elif byte == 0xFA:
            rendered.append("\\l")
            position += 1
        elif byte == 0xFB:
            rendered.append("\\p")
            position += 1
        elif byte == 0xFC:
            code = data[position + 1]
            rendered.append("{" + FC_CONSTANT[code] + "}")
            rendered.extend(raw_byte(value) for value in data[position + 2 : position + 2 + FC_PAYLOAD[code]])
            position += 2 + FC_PAYLOAD[code]
        elif byte == 0xFD:
            rendered.extend((raw_byte(byte), raw_byte(data[position + 1])))
            position += 2
        elif byte in (0xF7, 0xF8, 0xF9):
            rendered.extend((raw_byte(byte), raw_byte(data[position + 1])))
            position += 2
        else:
            rendered.append(glyphs.get(byte, raw_byte(byte)))
            position += 1
    return "".join(rendered)


def build_language_score(rom: bytes, intervals: Iterable[tuple[int, int]]):
    """Build a small Japanese-byte model from already verified text slots."""
    unigram: collections.Counter[int] = collections.Counter()
    bigram: collections.Counter[tuple[int, int]] = collections.Counter()
    preceding: collections.Counter[int] = collections.Counter()
    total = 0
    for start, end in intervals:
        terminator = rom.find(b"\xff", start, end)
        if terminator < 0:
            continue
        body = rom[start:terminator]
        unigram.update(body)
        total += len(body)
        for left, right in zip(body, body[1:]):
            bigram[left, right] += 1
            preceding[left] += 1
    smoothing = 0.1
    initial = [
        math.log((unigram[value] + smoothing) / (total + 256 * smoothing) * 256)
        for value in range(256)
    ]
    transition = [
        [
            math.log((bigram[left, right] + smoothing) / (preceding[left] + 256 * smoothing) * 256)
            for right in range(256)
        ]
        for left in range(256)
    ]

    def score(data: bytes) -> float:
        body = data[:-1]
        if not body:
            return float("-inf")
        return (initial[body[0]] + sum(transition[left][right] for left, right in zip(body, body[1:]))) / len(body)

    return score


def collect_field_script_hits(
    rom: bytes,
    charmap: Path,
    preproc: Path,
    covered_intervals: Iterable[tuple[int, int]],
    model_intervals: Iterable[tuple[int, int]],
) -> tuple[list[TextHit], dict[str, int]]:
    """Add only independently proven field-script strings outside source matches."""
    covered = merge_intervals(covered_intervals)
    references = find_field_script_text_references(rom)
    glyphs = parse_charmap_reverse(charmap)
    score = build_language_score(rom, model_intervals)
    candidates: list[tuple[int, LexedText, str, list[tuple[int, str]], float, str]] = []
    skipped: collections.Counter[str] = collections.Counter()
    for offset, refs in references.items():
        if interval_contains(covered, offset):
            skipped["already-represented"] += 1
            continue
        lexed = lex_normal_text(rom, offset)
        if lexed is None:
            skipped["invalid-normal-text"] += 1
            continue
        if not lexed.units or not lexed.glyphs:
            skipped["control-only"] += 1
            continue
        language_score = score(lexed.data)
        has_msgbox_proof = any(kind == "msgbox_loadword0_callstd" for _, kind in refs)
        if has_msgbox_proof:
            confidence = "field-script-msgbox-proof"
        elif language_score >= 0.0:
            confidence = "field-script-direct-plus-language"
        else:
            skipped["low-language-score"] += 1
            continue
        candidates.append((offset, lexed, render_lossless_text(lexed.data, glyphs), refs, language_score, confidence))

    entries = [
        SourceEntry(
            text=text,
            source_path="field-script",
            source_label=f"FieldScriptText_{offset:06X}",
            source_kind="semantic-pointer",
            line=refs[0][0],
        )
        for offset, _, text, refs, _, _ in candidates
    ]
    encoded, failures = encode_entries(entries, preproc, charmap)
    skipped["encoding-failure"] += len(failures)
    hits: list[TextHit] = []
    for index, (offset, lexed, text, refs, language_score, confidence) in enumerate(candidates):
        if encoded.get(index) != lexed.data:
            skipped["roundtrip-mismatch"] += 1
            continue
        hits.append(
            TextHit(
                offset=offset,
                data=lexed.data,
                text=text,
                sources=(entries[index],),
                evidence=tuple(
                    {
                        "pointer_offset": f"0x{source:06X}",
                        "pointer_address": f"0x{ROM_BASE + source:08X}",
                        "kind": kind,
                    }
                    for source, kind in refs
                )
                + ({"confidence": confidence, "language_score": round(language_score, 4)},),
            )
        )
    summary = {
        "semantic_pointer_targets": len(references),
        "candidates": len(candidates),
        "accepted": len(hits),
        **dict(sorted(skipped.items())),
    }
    return hits, summary


def parse_braille_headers(source_root: Path) -> set[bytes]:
    """Read only the six-byte legacy headers from the reference Braille data.

    Japanese Braille bodies use a separate dot-code alphabet, so the English
    reference bodies are deliberately not treated as a text translation.
    These headers are still a useful structural signature for the original
    `braillemessage` command.
    """
    path = source_root / "data" / "text" / "braille.inc"
    if not path.exists():
        return set()
    headers: set[bytes] = set()
    for raw in path.read_text(encoding="utf-8", errors="replace").splitlines():
        match = BRAILLE_FORMAT_RE.match(raw.split("@", 1)[0].rstrip())
        if match:
            headers.add(bytes(int(value, 0) for value in match.groups()))
    return headers


def collect_braille_hits(
    rom: bytes,
    source_root: Path,
    covered_intervals: Iterable[tuple[int, int]],
) -> tuple[list[TextHit], dict[str, int]]:
    """Expose Japanese Braille records as fixed raw-byte text slots.

    The original ROM's Braille dot encoding is not the reference project's
    English `.braille` text, so these records intentionally remain `.byte`
    data.  The opcode + known six-byte header + EOS proof prevents ordinary
    binary blobs from being included.
    """
    headers = parse_braille_headers(source_root)
    covered = merge_intervals(covered_intervals)
    references: dict[int, list[int]] = defaultdict(list)
    skipped: collections.Counter[str] = collections.Counter()
    for source in range(SCRIPT_RANGE[0], SCRIPT_RANGE[1] - 4):
        if rom[source] != 0x78 or rom[source + 4] != 0x08:
            continue
        target = rom[source + 1] | (rom[source + 2] << 8) | (rom[source + 3] << 16)
        if not (SCRIPT_RANGE[0] <= target < SCRIPT_RANGE[1]):
            skipped["target-outside-script-data"] += 1
            continue
        if rom[target : target + 6] not in headers:
            skipped["unknown-header"] += 1
            continue
        end = rom.find(b"\xff", target + 6, min(target + 0x200, len(rom)))
        if end < 0:
            skipped["missing-eos"] += 1
            continue
        references[target].append(source)

    hits: list[TextHit] = []
    for offset, sources in sorted(references.items()):
        if interval_contains(covered, offset):
            skipped["already-represented"] += 1
            continue
        data_end = rom.find(b"\xff", offset + 6, min(offset + 0x200, len(rom))) + 1
        data = rom[offset:data_end]
        entry = SourceEntry(
            text="",
            source_path="field-script",
            source_label=f"BrailleMessage_{offset:06X}",
            source_kind="braille-opcode",
            line=sources[0],
        )
        hits.append(
            TextHit(
                offset=offset,
                data=data,
                text="",
                sources=(entry,),
                evidence=tuple(
                    {
                        "opcode_offset": f"0x{source:06X}",
                        "opcode_address": f"0x{ROM_BASE + source:08X}",
                        "kind": "braillemessage",
                    }
                    for source in sources
                ),
                encoding="braille-bytes",
            )
        )
    summary = {
        "known_headers": len(headers),
        "opcode_targets": len(references),
        "accepted": len(hits),
        **dict(sorted(skipped.items())),
    }
    return hits, summary


def read_rom_pointer(rom: bytes, offset: int) -> int | None:
    """Read a canonical ROM pointer without accepting arbitrary u32 data."""
    if offset < 0 or offset + 4 > len(rom):
        return None
    raw = int.from_bytes(rom[offset : offset + 4], "little")
    if ROM_BASE <= raw < ROM_BASE + len(rom):
        return raw - ROM_BASE
    return None


def is_field_script_offset(offset: int) -> bool:
    return SCRIPT_RANGE[0] <= offset < SCRIPT_RANGE[1]


def is_extractable_text_offset(offset: int) -> bool:
    return is_field_script_offset(offset) or RODATA_RANGE[0] <= offset < RODATA_RANGE[1]


def collect_event_script_roots(
    rom: bytes,
) -> tuple[list[ScriptRoot], dict[int, int], dict[str, object]]:
    """Read only map/event roots described by the fixed original ROM ABI.

    The group-pointer arrays are bounded by their neighboring table addresses,
    rather than by source names or a loose scan for pointer-looking values.
    Map scripts, object scripts, coordinate scripts, script-bearing BG events,
    and the interpreter's standard-script table then become explicit CFG roots.
    """
    if MAP_GROUPS_OFFSET + MAP_GROUP_COUNT * 4 > len(rom):
        raise RuntimeError("ROM is too small for the fixed gMapGroups table")

    group_starts: list[int] = []
    for group in range(MAP_GROUP_COUNT):
        pointer = read_rom_pointer(rom, MAP_GROUPS_OFFSET + group * 4)
        if pointer is None:
            raise RuntimeError(f"invalid gMapGroups pointer for group {group}")
        group_starts.append(pointer)

    group_bounds: list[tuple[int, int]] = []
    for group, start in enumerate(group_starts):
        end = (
            group_starts[group + 1]
            if group + 1 < len(group_starts)
            else MAP_GROUPS_OFFSET
        )
        if start % 4 or not (0 <= start < end <= MAP_GROUPS_OFFSET):
            raise RuntimeError(
                "gMapGroups does not have the expected contiguous pointer-array "
                f"layout at group {group} (0x{start:X}-0x{end:X})"
            )
        group_bounds.append((start, end))

    roots: list[ScriptRoot] = []
    skipped: collections.Counter[str] = collections.Counter()
    map_headers = 0

    def add_root(
        target: int | None,
        kind: str,
        pointer_offset: int,
        *,
        map_group: int | None = None,
        map_num: int | None = None,
        map_script_tag: int | None = None,
        event_index: int | None = None,
        condition_index: int | None = None,
        standard_script_index: int | None = None,
    ) -> None:
        if target is None:
            skipped["invalid-script-root-pointer"] += 1
            return
        if not is_field_script_offset(target):
            skipped["script-root-outside-script-data"] += 1
            return
        roots.append(
            ScriptRoot(
                offset=target,
                kind=kind,
                pointer_offset=pointer_offset,
                map_group=map_group,
                map_num=map_num,
                map_script_tag=map_script_tag,
                event_index=event_index,
                condition_index=condition_index,
                standard_script_index=standard_script_index,
            )
        )

    def add_map_script_roots(
        table: int, group: int, map_num: int
    ) -> None:
        terminated = False
        for entry_index in range(MAX_MAP_SCRIPT_ENTRIES):
            entry = table + entry_index * MAP_SCRIPT_ENTRY_SIZE
            if entry + MAP_SCRIPT_ENTRY_SIZE > len(rom):
                skipped["truncated-map-script-table"] += 1
                break
            script_type = rom[entry]
            if script_type == 0:
                terminated = True
                break
            target = read_rom_pointer(rom, entry + 1)
            if script_type in MAP_SCRIPT_DIRECT_TYPES:
                add_root(
                    target,
                    "map-script",
                    entry + 1,
                    map_group=group,
                    map_num=map_num,
                    map_script_tag=script_type,
                    event_index=entry_index,
                )
                continue
            if script_type not in MAP_SCRIPT_CONDITION_TYPES:
                skipped["unknown-map-script-type"] += 1
                continue
            if target is None:
                skipped["invalid-map-script-condition-table-pointer"] += 1
                continue
            condition_terminated = False
            for condition_index in range(MAX_MAP_SCRIPT_CONDITIONS):
                condition = target + condition_index * 8
                if condition + 8 > len(rom):
                    skipped["truncated-map-script-condition-table"] += 1
                    break
                variable = int.from_bytes(rom[condition : condition + 2], "little")
                if variable == 0:
                    condition_terminated = True
                    break
                add_root(
                    read_rom_pointer(rom, condition + 4),
                    "map-script-condition",
                    condition + 4,
                    map_group=group,
                    map_num=map_num,
                    map_script_tag=script_type,
                    event_index=entry_index,
                    condition_index=condition_index,
                )
            if not condition_terminated:
                skipped["unterminated-map-script-condition-table"] += 1
        if not terminated:
            skipped["unterminated-map-script-table"] += 1

    def add_event_roots(
        table: int | None,
        count: int,
        record_size: int,
        script_offset: int,
        kind: str,
        group: int,
        map_num: int,
        *,
        script_bearing_bg: bool = False,
    ) -> None:
        if count == 0:
            return
        if table is None:
            skipped[f"invalid-{kind}-table-pointer"] += 1
            return
        if table + count * record_size > len(rom):
            skipped[f"truncated-{kind}-table"] += 1
            return
        for event_index in range(count):
            record = table + event_index * record_size
            if script_bearing_bg and rom[record + BG_EVENT_KIND_OFFSET] > 4:
                skipped["non-script-bg-event"] += 1
                continue
            add_root(
                read_rom_pointer(rom, record + script_offset),
                kind,
                record + script_offset,
                map_group=group,
                map_num=map_num,
                event_index=event_index,
            )

    for group, (group_start, group_end) in enumerate(group_bounds):
        for map_num, header_pointer_offset in enumerate(range(group_start, group_end, 4)):
            header = read_rom_pointer(rom, header_pointer_offset)
            if header is None or header + MAP_HEADER_SIZE > len(rom):
                skipped["invalid-map-header-pointer"] += 1
                continue
            map_headers += 1

            raw_scripts = int.from_bytes(
                rom[header + MAP_HEADER_SCRIPTS_OFFSET : header + MAP_HEADER_SCRIPTS_OFFSET + 4],
                "little",
            )
            if raw_scripts:
                scripts = read_rom_pointer(rom, header + MAP_HEADER_SCRIPTS_OFFSET)
                if scripts is None:
                    skipped["invalid-map-script-table-pointer"] += 1
                else:
                    add_map_script_roots(scripts, group, map_num)

            raw_events = int.from_bytes(
                rom[header + MAP_HEADER_EVENTS_OFFSET : header + MAP_HEADER_EVENTS_OFFSET + 4],
                "little",
            )
            if not raw_events:
                continue
            events = read_rom_pointer(rom, header + MAP_HEADER_EVENTS_OFFSET)
            if events is None or events + MAP_EVENTS_SIZE > len(rom):
                skipped["invalid-map-events-pointer"] += 1
                continue
            object_count, _warp_count, coord_count, bg_count = rom[events : events + 4]
            add_event_roots(
                read_rom_pointer(rom, events + MAP_EVENTS_OBJECTS_OFFSET),
                object_count,
                OBJECT_EVENT_SIZE,
                OBJECT_EVENT_SCRIPT_OFFSET,
                "map-object-event",
                group,
                map_num,
            )
            add_event_roots(
                read_rom_pointer(rom, events + MAP_EVENTS_COORDS_OFFSET),
                coord_count,
                COORD_EVENT_SIZE,
                COORD_EVENT_SCRIPT_OFFSET,
                "map-coordinate-event",
                group,
                map_num,
            )
            add_event_roots(
                read_rom_pointer(rom, events + MAP_EVENTS_BGS_OFFSET),
                bg_count,
                BG_EVENT_SIZE,
                BG_EVENT_SCRIPT_OFFSET,
                "map-bg-event",
                group,
                map_num,
                script_bearing_bg=True,
            )

    standard_scripts: dict[int, int] = {}
    if STANDARD_SCRIPT_TABLE_OFFSET + STANDARD_SCRIPT_COUNT * 4 > len(rom):
        raise RuntimeError("ROM is too small for the standard-script table")
    for index in range(STANDARD_SCRIPT_COUNT):
        pointer_offset = STANDARD_SCRIPT_TABLE_OFFSET + index * 4
        target = read_rom_pointer(rom, pointer_offset)
        if target is not None and is_field_script_offset(target):
            standard_scripts[index] = target
        add_root(
            target,
            "standard-script",
            pointer_offset,
            standard_script_index=index,
        )

    roots.sort(
        key=lambda root: (
            root.offset,
            root.kind,
            root.map_group if root.map_group is not None else -1,
            root.map_num if root.map_num is not None else -1,
            root.pointer_offset if root.pointer_offset is not None else -1,
        )
    )
    root_kinds = collections.Counter(root.kind for root in roots)
    summary: dict[str, object] = {
        "map_groups": MAP_GROUP_COUNT,
        "map_headers": map_headers,
        "roots": len(roots),
        "root_kinds": dict(sorted(root_kinds.items())),
        **dict(sorted(skipped.items())),
    }
    return roots, standard_scripts, summary


def scan_reachable_trainerbattle_references(
    rom: bytes, roots: Iterable[ScriptRoot], standard_scripts: dict[int, int]
) -> tuple[list[TrainerBattleTextReference], dict[str, object]]:
    """Walk exact event-command CFG edges and collect reachable 0x5C fields.

    This deliberately has no byte-pattern fallback.  A trainerbattle operand is
    accepted only after a path from MapGroups (or a standard script) reaches
    command 0x5C, its type selects a documented normal-text pointer field, and
    the pointer lands in a generated text region.
    """
    worklist: collections.deque[tuple[int, ScriptReachability]] = collections.deque(
        (
            root.offset,
            ScriptReachability(root=root, predecessor=None, edge_kind="root", depth=0),
        )
        for root in roots
    )
    reached: dict[int, ScriptReachability] = {}
    references: list[TrainerBattleTextReference] = []
    skipped: collections.Counter[str] = collections.Counter()
    trainerbattle_commands = 0

    def enqueue(
        target: int | None,
        reachability: ScriptReachability,
        predecessor: int,
        edge_kind: str,
    ) -> None:
        if target is None or not is_field_script_offset(target):
            skipped[f"invalid-{edge_kind}-target"] += 1
            return
        worklist.append(
            (
                target,
                ScriptReachability(
                    root=reachability.root,
                    predecessor=predecessor,
                    edge_kind=edge_kind,
                    depth=reachability.depth + 1,
                ),
            )
        )

    while worklist:
        pc, reachability = worklist.popleft()
        if pc in reached:
            continue
        if not is_field_script_offset(pc):
            skipped["invalid-reached-script-offset"] += 1
            continue
        reached[pc] = reachability
        opcode = rom[pc]
        if opcode >= len(FIELD_SCRIPT_OPCODE_LENGTHS):
            skipped["unknown-opcode"] += 1
            continue

        size = FIELD_SCRIPT_OPCODE_LENGTHS[opcode]
        if opcode == 0x5C:
            trainerbattle_commands += 1
            if pc + 6 > SCRIPT_RANGE[1]:
                skipped["truncated-trainerbattle-header"] += 1
                continue
            battle_type = rom[pc + 1]
            pointer_count = TRAINERBATTLE_POINTER_COUNTS.get(battle_type)
            if pointer_count is None:
                skipped["unknown-trainerbattle-type"] += 1
                continue
            end = pc + 6 + pointer_count * 4
            if end > SCRIPT_RANGE[1]:
                skipped["truncated-trainerbattle-pointers"] += 1
                continue
            for field_index in TRAINERBATTLE_TEXT_POINTER_FIELDS[battle_type]:
                target = read_rom_pointer(rom, pc + 6 + field_index * 4)
                if target is None or not is_extractable_text_offset(target):
                    skipped["invalid-trainerbattle-text-pointer"] += 1
                    continue
                references.append(
                    TrainerBattleTextReference(
                        target=target,
                        command_offset=pc,
                        battle_type=battle_type,
                        field_index=field_index,
                        reachability=reachability,
                    )
                )
            for field_index in TRAINERBATTLE_EVENT_SCRIPT_POINTER_FIELDS.get(battle_type, ()):
                enqueue(
                    read_rom_pointer(rom, pc + 6 + field_index * 4),
                    reachability,
                    pc,
                    "trainerbattle-event-script",
                )
            enqueue(end, reachability, pc, "fallthrough")
            continue

        if size == 0 or pc + size > SCRIPT_RANGE[1]:
            skipped["truncated-fixed-size-command"] += 1
            continue

        # The command forms below are the only direct script CFG transfers in
        # the fixed opcode table.  Their pointer offsets are intentionally
        # explicit because script instructions are not necessarily aligned.
        if opcode == 0x04:  # call
            enqueue(read_rom_pointer(rom, pc + 1), reachability, pc, "call")
            enqueue(pc + size, reachability, pc, "fallthrough")
        elif opcode == 0x05:  # goto
            enqueue(read_rom_pointer(rom, pc + 1), reachability, pc, "goto")
        elif opcode == 0x06:  # goto_if
            enqueue(read_rom_pointer(rom, pc + 2), reachability, pc, "goto-if")
            enqueue(pc + size, reachability, pc, "fallthrough")
        elif opcode == 0x07:  # call_if
            enqueue(read_rom_pointer(rom, pc + 2), reachability, pc, "call-if")
            enqueue(pc + size, reachability, pc, "fallthrough")
        elif opcode in (0x08, 0x09):  # gotostd, callstd
            target = standard_scripts.get(rom[pc + 1])
            if target is None:
                skipped["invalid-standard-script-index"] += 1
            else:
                enqueue(target, reachability, pc, "goto-std" if opcode == 0x08 else "call-std")
            if opcode == 0x09:
                enqueue(pc + size, reachability, pc, "fallthrough")
        elif opcode in (0x0A, 0x0B):  # gotostdif, callstdif
            target = standard_scripts.get(rom[pc + 2])
            if target is None:
                skipped["invalid-standard-script-index"] += 1
            else:
                enqueue(target, reachability, pc, "goto-std-if" if opcode == 0x0A else "call-std-if")
            enqueue(pc + size, reachability, pc, "fallthrough")
        elif opcode in (0x02, 0x03, 0x0C, 0x0D, 0xCF):
            # end, return, returnram, killscript, gotoram
            continue
        elif opcode in (0xB9, 0xBA, 0xBB, 0xBC):
            # Virtual-address branches derive their target from script state.
            # Without a state proof they are not followed.  These forms can
            # still execute their documented fallthrough path as applicable.
            skipped["unresolved-virtual-script-target"] += 1
            if opcode in (0xBA, 0xBB, 0xBC):
                enqueue(pc + size, reachability, pc, "virtual-fallthrough")
        else:
            enqueue(pc + size, reachability, pc, "fallthrough")

    summary: dict[str, object] = {
        "reachable_instruction_offsets": len(reached),
        "trainerbattle_commands": trainerbattle_commands,
        "trainerbattle_text_operands": len(references),
        **dict(sorted(skipped.items())),
    }
    return references, summary


def trainerbattle_reference_evidence(reference: TrainerBattleTextReference) -> dict[str, object]:
    """Make the root/map/script/opcode/type/field proof manifest-friendly."""
    root = reference.reachability.root
    evidence: dict[str, object] = {
        "kind": "trainerbattle-cfg",
        "opcode": "trainerbattle",
        "opcode_value": "0x5C",
        "opcode_offset": f"0x{reference.command_offset:06X}",
        "opcode_address": f"0x{ROM_BASE + reference.command_offset:08X}",
        "battle_type": reference.battle_type,
        "text_field": f"pointer{reference.field_index + 1}",
        "text_field_index": reference.field_index + 1,
        "root_kind": root.kind,
        "root_script_offset": f"0x{root.offset:06X}",
        "root_script_address": f"0x{ROM_BASE + root.offset:08X}",
        "cfg_edge": reference.reachability.edge_kind,
        "cfg_depth": reference.reachability.depth,
    }
    if root.pointer_offset is not None:
        evidence["root_pointer_offset"] = f"0x{root.pointer_offset:06X}"
        evidence["root_pointer_address"] = f"0x{ROM_BASE + root.pointer_offset:08X}"
    if reference.reachability.predecessor is not None:
        evidence["cfg_predecessor_offset"] = (
            f"0x{reference.reachability.predecessor:06X}"
        )
        evidence["cfg_predecessor_address"] = (
            f"0x{ROM_BASE + reference.reachability.predecessor:08X}"
        )
    for key, value in (
        ("map_group", root.map_group),
        ("map_num", root.map_num),
        ("map_script_tag", root.map_script_tag),
        ("event_index", root.event_index),
        ("condition_index", root.condition_index),
        ("standard_script_index", root.standard_script_index),
    ):
        if value is not None:
            evidence[key] = value
    return evidence


def collect_trainerbattle_hits(
    rom: bytes,
    charmap: Path,
    preproc: Path,
    covered_intervals: Iterable[tuple[int, int]],
) -> tuple[list[TextHit], dict[str, object]]:
    """Extract normal strings in reachable, type-checked trainerbattle fields."""
    roots, standard_scripts, root_summary = collect_event_script_roots(rom)
    references, cfg_summary = scan_reachable_trainerbattle_references(
        rom, roots, standard_scripts
    )
    by_target: dict[int, list[TrainerBattleTextReference]] = defaultdict(list)
    for reference in references:
        by_target[reference.target].append(reference)

    covered = merge_intervals(covered_intervals)
    glyphs = parse_charmap_reverse(charmap)
    skipped: collections.Counter[str] = collections.Counter()
    candidates: list[
        tuple[int, LexedText, str, list[TrainerBattleTextReference]]
    ] = []
    represented_targets = 0
    for target, target_references in sorted(by_target.items()):
        if interval_contains(covered, target):
            represented_targets += 1
        lexed = lex_normal_text(rom, target)
        if lexed is None:
            skipped["invalid-normal-text"] += 1
            continue
        if not lexed.glyphs:
            skipped["control-only"] += 1
            continue
        candidates.append(
            (
                target,
                lexed,
                render_lossless_text(lexed.data, glyphs),
                target_references,
            )
        )

    entries = [
        SourceEntry(
            text=text,
            source_path="trainerbattle-cfg",
            source_label=f"TrainerBattleText_{target:06X}",
            source_kind="trainerbattle-cfg",
            line=references[0].command_offset,
        )
        for target, _, text, references in candidates
    ]
    encoded, failures = encode_entries(entries, preproc, charmap)
    skipped["encoding-failure"] += len(failures)

    hits: list[TextHit] = []
    for index, (target, lexed, text, target_references) in enumerate(candidates):
        if encoded.get(index) != lexed.data:
            skipped["roundtrip-mismatch"] += 1
            continue
        hits.append(
            TextHit(
                offset=target,
                data=lexed.data,
                text=text,
                sources=(entries[index],),
                evidence=tuple(
                    trainerbattle_reference_evidence(reference)
                    for reference in target_references
                ),
            )
        )

    summary: dict[str, object] = {
        "root_scan": root_summary,
        "cfg_scan": cfg_summary,
        "unique_targets": len(by_target),
        "candidates": len(candidates),
        "already_represented_targets": represented_targets,
        "new_targets": len(hits) - represented_targets,
        "accepted": len(hits),
        **dict(sorted(skipped.items())),
    }
    return hits, summary


def strip_asm_comment(line: str) -> str:
    return line.split("@", 1)[0].rstrip()


def asm_writes_register(line: str, register: str) -> bool:
    """Conservatively recognize low-register writes in a Thumb source line."""
    text = strip_asm_comment(line).strip()
    if not text or text.startswith((".", "@")):
        return False
    match = re.match(
        r"^(?:ldr(?:b|h|sb|sh)?|movs?|adds?|subs?|rsbs?|adcs?|sbcs?|"
        r"ands?|orrs?|eors?|bics?|muls?|negs?|coms?|lsls?|lsrs?|asrs?|"
        r"rors?|adrs?)\s+(r(?:[0-7]|1[0-5]))\b",
        text,
    )
    if match:
        return match.group(1) == register
    if text.startswith("pop "):
        return re.search(r"\{" + re.escape(register) + r"(?:,|\})", text) is not None
    return False


def asm_ends_basic_block(line: str) -> bool:
    """Return true for a non-call Thumb branch without mistaking `bics` for one."""
    text = strip_asm_comment(line).strip()
    if not text:
        return False
    return re.match(
        r"^(?:b(?:eq|ne|cs|cc|mi|pl|vs|vc|hi|ls|ge|lt|gt|le|al)?|bx|blx)\b",
        text,
    ) is not None


def parse_asm_text_references(path: Path, workspace: Path) -> list[AsmTextReference]:
    """Prove literal-to-text-API flow in one straight-line Thumb block."""
    lines = path.read_text(encoding="utf-8", errors="replace").splitlines()
    literals: dict[str, tuple[int, int]] = {}
    for index, line in enumerate(lines):
        match = ASM_LITERAL_RE.match(strip_asm_comment(line))
        if match:
            literals[match.group(1)] = (int(match.group(2), 16) - ROM_BASE, index)

    try:
        relative_path = path.relative_to(workspace).as_posix()
    except ValueError:
        relative_path = path.as_posix()
    function: str | None = None
    references: list[AsmTextReference] = []
    for index, line in enumerate(lines):
        text = strip_asm_comment(line)
        start = re.match(r"\s*thumb_func_start\s+([A-Za-z_][A-Za-z0-9_]*)", text)
        if start:
            function = start.group(1)
            continue
        if re.match(r"\s*thumb_func_end\b", text):
            function = None
            continue
        if function is None:
            continue
        load = ASM_LDR_RE.match(text)
        if load is None or load.group(2) not in literals:
            continue
        register, literal = load.groups()
        target, literal_line = literals[literal]
        # Do not follow control flow or ABI calls.  The first call must be a
        # documented consumer while the loaded source register remains live.
        for follow in range(index + 1, min(index + 65, len(lines))):
            candidate = strip_asm_comment(lines[follow])
            if ASM_ANY_LABEL_RE.match(candidate):
                break
            call = ASM_CALL_RE.match(candidate)
            if call:
                api = call.group(1)
                if ASM_TEXT_CONSUMERS.get(api) == register:
                    references.append(
                        AsmTextReference(
                            target=target,
                            api=api,
                            source_path=relative_path,
                            function=function,
                            ldr_line=index + 1,
                            literal_line=literal_line + 1,
                        )
                    )
                break
            if asm_ends_basic_block(candidate) or asm_writes_register(candidate, register):
                break
    return references


def collect_asm_rodata_hits(
    rom: bytes,
    asm_dir: Path,
    workspace: Path,
    charmap: Path,
    preproc: Path,
    covered_intervals: Iterable[tuple[int, int]],
) -> tuple[list[TextHit], dict[str, int]]:
    """Extract text-data strings proven by direct asm data flow to text APIs."""
    covered = merge_intervals(covered_intervals)
    by_target: dict[int, list[AsmTextReference]] = defaultdict(list)
    for path in sorted(asm_dir.rglob("*.s")):
        for reference in parse_asm_text_references(path, workspace):
            by_target[reference.target].append(reference)

    glyphs = parse_charmap_reverse(charmap)
    candidates: list[tuple[int, LexedText, str, list[AsmTextReference]]] = []
    skipped: collections.Counter[str] = collections.Counter()
    for offset, references in sorted(by_target.items()):
        if not (
            SCRIPT_RANGE[0] <= offset < SCRIPT_RANGE[1]
            or RODATA_RANGE[0] <= offset < RODATA_RANGE[1]
        ):
            skipped["not-script-or-rodata"] += 1
            continue
        if interval_contains(covered, offset):
            skipped["already-represented"] += 1
            continue
        lexed = lex_normal_text(rom, offset)
        if lexed is None:
            skipped["invalid-normal-text"] += 1
            continue
        if not lexed.glyphs:
            skipped["control-only"] += 1
            continue
        candidates.append((offset, lexed, render_lossless_text(lexed.data, glyphs), references))

    entries = [
        SourceEntry(
            text=text,
            source_path=references[0].source_path,
            source_label=references[0].function,
            source_kind="asm-direct-text-api",
            line=references[0].ldr_line,
        )
        for _, _, text, references in candidates
    ]
    encoded, failures = encode_entries(entries, preproc, charmap)
    skipped["encoding-failure"] += len(failures)
    hits: list[TextHit] = []
    for index, (offset, lexed, text, references) in enumerate(candidates):
        if encoded.get(index) != lexed.data:
            skipped["roundtrip-mismatch"] += 1
            continue
        hits.append(
            TextHit(
                offset=offset,
                data=lexed.data,
                text=text,
                sources=(entries[index],),
                evidence=tuple(
                    {
                        "api": reference.api,
                        "source_path": reference.source_path,
                        "function": reference.function,
                        "ldr_line": reference.ldr_line,
                        "literal_line": reference.literal_line,
                    }
                    for reference in references
                ),
            )
        )
    summary = {
        "asm_direct_text_targets": len(by_target),
        "candidates": len(candidates),
        "accepted": len(hits),
        **dict(sorted(skipped.items())),
    }
    return hits, summary


def parse_asm_indexed_text_table_references(
    path: Path, workspace: Path
) -> list[AsmIndexedTextTableReference]:
    """Prove a literal table lookup feeds a text API in one Thumb block.

    The recognizer intentionally follows only this straight-line shape::

        ldr  base, =table
        lsl  index, ..., #2
        add  address, index, base
        ldr  value, [address]
        bl   TextConsumer

    It does not infer branches, stack values, table bounds, or indirect calls.
    A later static scan requires an initial run of several valid normal-text
    pointers before anything is emitted.
    """
    lines = path.read_text(encoding="utf-8", errors="replace").splitlines()
    literals: dict[str, tuple[int, int]] = {}
    for index, line in enumerate(lines):
        match = ASM_LITERAL_RE.match(strip_asm_comment(line))
        if match:
            literals[match.group(1)] = (int(match.group(2), 16) - ROM_BASE, index)

    try:
        relative_path = path.relative_to(workspace).as_posix()
    except ValueError:
        relative_path = path.as_posix()

    function: str | None = None
    references: list[AsmIndexedTextTableReference] = []
    for index, raw in enumerate(lines):
        line = strip_asm_comment(raw)
        start = re.match(r"\s*thumb_func_start\s+([A-Za-z_][A-Za-z0-9_]*)", line)
        if start:
            function = start.group(1)
            continue
        if re.match(r"\s*thumb_func_end\b", line):
            function = None
            continue
        if function is None:
            continue

        literal_load = ASM_INDEXED_LITERAL_LOAD_RE.match(line)
        if literal_load is None or literal_load.group(2) not in literals:
            continue
        base_register, literal = literal_load.groups()
        table, literal_line = literals[literal]
        if table % 4 or not (RODATA_RANGE[0] <= table < RODATA_RANGE[1]):
            continue

        # Keep only values whose data-flow is explicit within this basic block.
        scaled_registers: set[str] = set()
        address_register: str | None = None
        value_register: str | None = None
        table_load_line: int | None = None
        for follow in range(index + 1, min(index + 65, len(lines))):
            candidate = strip_asm_comment(lines[follow])
            if ASM_ANY_LABEL_RE.match(candidate):
                break
            call = ASM_CALL_RE.match(candidate)
            if call:
                api = call.group(1)
                if (
                    value_register is not None
                    and table_load_line is not None
                    and ASM_TEXT_CONSUMERS.get(api) == value_register
                ):
                    references.append(
                        AsmIndexedTextTableReference(
                            table=table,
                            api=api,
                            source_path=relative_path,
                            function=function,
                            literal_line=literal_line + 1,
                            ldr_line=index + 1,
                            table_load_line=table_load_line,
                            call_line=follow + 1,
                        )
                    )
                # Calls can clobber ABI registers, including a non-consumer.
                break
            if asm_ends_basic_block(candidate):
                break

            shift = ASM_INDEXED_SHIFT_RE.match(candidate)
            if shift:
                destination, _, amount = shift.groups()
                # The literal base must remain available until its indexed
                # address is formed; do not treat a shifted base as an index.
                if destination == base_register:
                    break
                if destination == address_register:
                    address_register = None
                if destination == value_register:
                    value_register = None
                if int(amount, 0) == 2:
                    scaled_registers.add(destination)
                else:
                    scaled_registers.discard(destination)
                continue

            addition = ASM_INDEXED_ADD_RE.match(candidate)
            if addition:
                destination, left, right = addition.groups()
                if (
                    left == base_register and right in scaled_registers
                ) or (
                    right == base_register and left in scaled_registers
                ):
                    address_register = destination
                    if destination == value_register:
                        value_register = None
                    continue

            table_load = ASM_INDEXED_TABLE_LOAD_RE.match(candidate.strip())
            if (
                table_load
                and address_register is not None
                and table_load.group(2) == address_register
            ):
                value_register = table_load.group(1)
                table_load_line = follow + 1
                continue

            # Before the table address is formed, the literal base must stay
            # live.  The table address and resulting value must likewise stay
            # live until the direct consumer call.
            if address_register is None and asm_writes_register(candidate, base_register):
                break
            if (
                address_register is not None
                and value_register is None
                and asm_writes_register(candidate, address_register)
            ):
                break
            if value_register is not None and asm_writes_register(candidate, value_register):
                break
    return references


def scan_indexed_text_table(
    rom: bytes, table: int, glyphs: dict[int, str]
) -> list[IndexedTextTableEntry]:
    """Read an initial contiguous run of canonical normal-text pointers."""
    entries: list[IndexedTextTableEntry] = []
    table_end = min(len(rom), table + MAX_INDEXED_TEXT_TABLE_BYTES)
    for entry_offset in range(table, table_end - 3, 4):
        raw_pointer = int.from_bytes(rom[entry_offset : entry_offset + 4], "little")
        if raw_pointer >> 24 != ROM_BASE >> 24:
            break
        target = raw_pointer - ROM_BASE
        if not (
            SCRIPT_RANGE[0] <= target < SCRIPT_RANGE[1]
            or RODATA_RANGE[0] <= target < RODATA_RANGE[1]
        ):
            break
        lexed = lex_normal_text(rom, target)
        if lexed is None or not lexed.glyphs:
            break
        entries.append(
            IndexedTextTableEntry(
                table=table,
                entry_offset=entry_offset,
                target=target,
                lexed=lexed,
                text=render_lossless_text(lexed.data, glyphs),
            )
        )
    return entries


def collect_asm_indexed_table_hits(
    rom: bytes,
    asm_dir: Path,
    workspace: Path,
    charmap: Path,
    preproc: Path,
    covered_intervals: Iterable[tuple[int, int]],
) -> tuple[list[TextHit], dict[str, int]]:
    """Extract text from statically indexed tables proven to reach text APIs.

    A pointer table is never accepted on its bytes alone.  It must have a
    straight-line Thumb proof and at least three initial, contiguous entries
    that are independently valid, losslessly renderable normal strings.
    Existing source matches are intentionally kept in the candidate stream:
    this lets :func:`select_non_overlapping` preserve duplicate provenance and
    create aliases when a table points to a suffix of a longer source string.
    """
    covered = merge_intervals(covered_intervals)
    references_by_table: dict[int, list[AsmIndexedTextTableReference]] = defaultdict(list)
    for path in sorted(asm_dir.rglob("*.s")):
        for reference in parse_asm_indexed_text_table_references(path, workspace):
            references_by_table[reference.table].append(reference)

    glyphs = parse_charmap_reverse(charmap)
    table_entries: dict[int, list[IndexedTextTableEntry]] = {}
    canonical_by_target: dict[int, IndexedTextTableEntry] = {}
    skipped: collections.Counter[str] = collections.Counter()
    for table in sorted(references_by_table):
        entries = scan_indexed_text_table(rom, table, glyphs)
        if len(entries) < MIN_INDEXED_TEXT_TABLE_ENTRIES:
            skipped["fewer-than-three-initial-text-pointers"] += 1
            continue
        table_entries[table] = entries
        for entry in entries:
            canonical_by_target.setdefault(entry.target, entry)

    canonical_entries = list(canonical_by_target.values())
    roundtrip_entries = [
        SourceEntry(
            text=entry.text,
            source_path="asm-indexed-text-table",
            source_label=f"TableText_{entry.target:06X}",
            source_kind="asm-indexed-text-table",
            line=entry.entry_offset,
        )
        for entry in canonical_entries
    ]
    encoded, failures = encode_entries(roundtrip_entries, preproc, charmap)
    roundtrip_targets = {
        entry.target
        for index, entry in enumerate(canonical_entries)
        if encoded.get(index) == entry.lexed.data
    }
    skipped["encoding-failure"] += len(failures)

    accepted_tables: dict[int, list[IndexedTextTableEntry]] = {}
    for table, entries in table_entries.items():
        if all(entry.target in roundtrip_targets for entry in entries):
            accepted_tables[table] = entries
        else:
            skipped["roundtrip-invalid-table"] += 1

    by_target: dict[
        int, list[tuple[IndexedTextTableEntry, AsmIndexedTextTableReference]]
    ] = defaultdict(list)
    for table, entries in accepted_tables.items():
        for entry in entries:
            for reference in references_by_table[table]:
                by_target[entry.target].append((entry, reference))

    hits: list[TextHit] = []
    represented_targets = 0
    for target, rows in sorted(by_target.items()):
        canonical = canonical_by_target[target]
        if interval_contains(covered, target):
            represented_targets += 1
        sources = tuple(
            unique_entries(
                SourceEntry(
                    text=canonical.text,
                    source_path=reference.source_path,
                    source_label=reference.function,
                    source_kind="asm-indexed-text-table",
                    line=reference.table_load_line,
                )
                for _, reference in rows
            )
        )
        evidence = tuple(
            {
                "kind": "indexed-text-table",
                "table_offset": f"0x{entry.table:06X}",
                "table_address": f"0x{ROM_BASE + entry.table:08X}",
                "entry_offset": f"0x{entry.entry_offset:06X}",
                "entry_address": f"0x{ROM_BASE + entry.entry_offset:08X}",
                "api": reference.api,
                "source_path": reference.source_path,
                "function": reference.function,
                "literal_line": reference.literal_line,
                "ldr_line": reference.ldr_line,
                "table_load_line": reference.table_load_line,
                "call_line": reference.call_line,
            }
            for entry, reference in rows
        )
        hits.append(
            TextHit(
                offset=target,
                data=canonical.lexed.data,
                text=canonical.text,
                sources=sources,
                evidence=evidence,
            )
        )

    summary = {
        "asm_indexed_table_proofs": sum(len(rows) for rows in references_by_table.values()),
        "table_bases_with_proof": len(references_by_table),
        "tables_with_initial_text_run": len(table_entries),
        "accepted_tables": len(accepted_tables),
        "table_entries": sum(len(entries) for entries in accepted_tables.values()),
        "unique_targets": len(by_target),
        "already_represented_targets": represented_targets,
        "new_targets": len(hits) - represented_targets,
        "accepted": len(hits),
        **dict(sorted(skipped.items())),
    }
    return hits, summary


def source_comment(hit: TextHit) -> str:
    first = hit.sources[0]
    location = (
        f"0x{first.line:06X}"
        if first.source_kind in {
            "semantic-pointer",
            "braille-opcode",
            "trainerbattle-cfg",
        }
        else str(first.line)
    )
    comment = f"{first.source_path}:{location} {first.source_label}"
    if len(hit.sources) > 1:
        comment += f" (+{len(hit.sources) - 1} aliases)"
    return comment


def select_non_overlapping(
    hits: list[TextHit], external_blocks: list[ExternalBlock]
) -> tuple[list[TextHit], list[dict[str, object]]]:
    external_ranges = [(block.start, block.end) for block in external_blocks]
    candidates = [
        hit
        for hit in hits
        if not any(begin <= hit.offset and hit.end <= end for begin, end in external_ranges)
    ]
    candidates.sort(key=lambda hit: (hit.offset, -len(hit.data), source_comment(hit)))
    selected: list[TextHit] = []
    skipped: list[dict[str, object]] = []
    cursor = -1
    for hit in candidates:
        if hit.offset >= cursor:
            selected.append(hit)
            cursor = hit.end
            continue
        if hit.end <= cursor:
            # A suffix text pointer lives inside a longer physical string.
            # Keep one physical span, but expose the pointed-to start as a
            # `.set` alias and require its parent slot to remain exact length.
            parent = selected[-1]
            if (
                hit.offset == parent.offset
                and hit.end == parent.end
                and hit.encoding == parent.encoding
            ):
                # A source match and a semantic proof can describe precisely
                # the same slot.  Keep the physical definition selected first,
                # but retain every provenance/evidence record in the manifest.
                sources_list: list[SourceEntry] = []
                for source in (*parent.sources, *hit.sources):
                    if source not in sources_list:
                        sources_list.append(source)
                evidence_list: list[dict[str, object]] = []
                for item in (*parent.evidence, *hit.evidence):
                    if item not in evidence_list:
                        evidence_list.append(item)
                selected[-1] = replace(
                    parent,
                    sources=tuple(sources_list),
                    evidence=tuple(evidence_list),
                )
            elif hit.offset != parent.offset:
                alias = TextAlias(hit.offset, hit.sources, hit.evidence)
                if alias not in parent.semantic_aliases:
                    selected[-1] = replace(
                        parent,
                        semantic_aliases=(*parent.semantic_aliases, alias),
                    )
            continue
        skipped.append(
            {
                "offset": f"0x{hit.offset:06X}",
                "byte_length": len(hit.data),
                "reason": "partially overlaps another matched source string",
                "source": source_comment(hit),
            }
        )
    return selected, skipped


def parse_region_layout(
    path: Path, name: str, start: int, end: int
) -> RegionLayout:
    lines = path.read_text(encoding="utf-8", errors="replace").splitlines()
    labels: list[tuple[int, str]] = []
    for raw in lines:
        label_match = ASM_LABEL_ADDR_RE.match(raw)
        if label_match:
            address = int(label_match.group(2), 16)
            offset = address - ROM_BASE
            if start <= offset < end:
                labels.append((offset, label_match.group(1)))

    external_blocks: list[ExternalBlock] = []
    latest_incbin_end: int | None = None
    for index, raw in enumerate(lines):
        incbin_match = ASMINCBIN_RE.match(raw)
        if incbin_match:
            latest_incbin_end = int(incbin_match.group(1), 16) + int(
                incbin_match.group(2), 16
            )
            continue
        include_match = ASM_INCLUDE_RE.match(raw)
        if not include_match:
            continue
        if latest_incbin_end is None:
            raise RuntimeError(f"cannot locate start of include in {path}: {raw}")
        next_offset: int | None = None
        for following in lines[index + 1 :]:
            label_match = ASM_LABEL_ADDR_RE.match(following)
            if label_match:
                next_offset = int(label_match.group(2), 16) - ROM_BASE
                break
        if next_offset is None or next_offset <= latest_incbin_end:
            raise RuntimeError(f"cannot locate end of include in {path}: {raw}")
        external_blocks.append(
            ExternalBlock(
                start=latest_incbin_end,
                end=next_offset,
                include_path=include_match.group(1),
            )
        )

    labels = sorted(set(labels))
    external_blocks.sort(key=lambda block: block.start)
    return RegionLayout(
        name=name,
        start=start,
        end=end,
        labels=labels,
        external_blocks=external_blocks,
    )


def emit_incbin(stream, start: int, end: int) -> None:
    if end > start:
        stream.write(f'\t.incbin "baserom.gba", 0x{start:x}, 0x{end - start:x}\n')


def emit_bytes(stream, data: bytes) -> None:
    for start in range(0, len(data), 16):
        values = ", ".join(f"0x{value:02X}" for value in data[start : start + 16])
        stream.write(f"\t.byte {values}\n")


def emit_region(
    output_path: Path, layout: RegionLayout, hits: list[TextHit]
) -> list[dict[str, object]]:
    """Write one physically ordered source include and return its manifest rows."""
    output_path.parent.mkdir(parents=True, exist_ok=True)
    labels_by_offset: dict[int, list[str]] = defaultdict(list)
    for offset, label in layout.labels:
        labels_by_offset[offset].append(label)
    external_by_offset = {block.start: block for block in layout.external_blocks}
    hit_by_offset = {hit.offset: hit for hit in hits}
    label_positions = sorted(labels_by_offset)
    interior_labels_by_hit: dict[int, list[tuple[int, str]]] = {}
    interior_label_positions: set[int] = set()
    for hit in hits:
        first = bisect_right(label_positions, hit.offset)
        last = bisect_left(label_positions, hit.end)
        interior = [
            (position, label)
            for position in label_positions[first:last]
            for label in labels_by_offset[position]
        ]
        if interior:
            interior_labels_by_hit[hit.offset] = interior
            interior_label_positions.update(position for position, _ in interior)
    positions = sorted(
        (set(labels_by_offset) - interior_label_positions)
        | set(external_by_offset)
        | set(hit_by_offset)
    )
    rows: list[dict[str, object]] = []
    cursor = layout.start

    with output_path.open("w", encoding="utf-8") as stream:
        stream.write("@ AUTO-GENERATED by tools/extract_all_text.py.\n")
        stream.write("@ Edit .string values in-place; each slot may not grow.\n")
        stream.write("@ Slots with an exact-length guard contain an internal label or terminator.\n\n")
        for position in positions:
            if position < cursor:
                continue
            emit_incbin(stream, cursor, position)

            for label in labels_by_offset.get(position, []):
                stream.write(f"\t.globl {label}\n{label}: @ 0x{ROM_BASE + position:08X}\n")

            external = external_by_offset.get(position)
            if external is not None:
                stream.write(f'\t.include "{external.include_path}"\n')
                cursor = external.end
                continue

            hit = hit_by_offset.get(position)
            if hit is None:
                cursor = position
                continue
            label = f"gText_Rom_{hit.offset:06X}"
            interior_labels = interior_labels_by_hit.get(hit.offset, [])
            semantic_aliases = hit.semantic_aliases
            has_internal_terminator = 0xFF in hit.data[:-1]
            exact_length_reasons: list[str] = []
            if interior_labels:
                exact_length_reasons.append("internal label")
            if semantic_aliases:
                exact_length_reasons.append("semantic suffix text pointer")
            if has_internal_terminator:
                exact_length_reasons.append("internal terminator")
            if hit.encoding != "string":
                exact_length_reasons.append("raw Braille glyph bytes")
            stream.write(f"\n\t@ {source_comment(hit)}\n")
            if exact_length_reasons:
                stream.write(
                    "\t@ Preserve exact byte length: "
                    + ", ".join(exact_length_reasons)
                    + ".\n"
                )
            stream.write(f"\t.globl {label}\n{label}: @ 0x{ROM_BASE + hit.offset:08X}\n")
            if hit.encoding == "string":
                stream.write(f'\t.string "{hit.text}"\n')
            elif hit.encoding == "braille-bytes":
                stream.write("\t@ Six-byte Braille window header followed by Japanese Braille glyph bytes.\n")
                emit_bytes(stream, hit.data)
            else:
                raise RuntimeError(f"unknown text encoding for {label}: {hit.encoding}")
            if exact_length_reasons:
                stream.write(f"\t.if (. - {label}) != 0x{len(hit.data):x}\n")
                stream.write(f'\t.error "{label} must retain its original byte length"\n')
                stream.write("\t.endif\n")
            else:
                stream.write(f"\t.if (. - {label}) > 0x{len(hit.data):x}\n")
                stream.write(f'\t.error "{label} may not grow beyond its original slot"\n')
                stream.write("\t.endif\n")
                stream.write(f"\t.if (. - {label}) < 0x{len(hit.data):x}\n")
                stream.write(f"\t.space 0x{len(hit.data):x} - (. - {label})\n")
                stream.write("\t.endif\n")
            for alias_offset, alias in interior_labels:
                stream.write(f"\t.globl {alias}\n")
                stream.write(f"\t.set {alias}, {label} + 0x{alias_offset - hit.offset:x}\n")
            for alias in semantic_aliases:
                semantic_label = f"gText_Rom_{alias.offset:06X}"
                stream.write(f"\t.globl {semantic_label}\n")
                stream.write(f"\t.set {semantic_label}, {label} + 0x{alias.offset - hit.offset:x}\n")
            rows.append(
                {
                    "label": label,
                    "offset": f"0x{hit.offset:06X}",
                    "address": f"0x{ROM_BASE + hit.offset:08X}",
                    "byte_length": len(hit.data),
                    "text": hit.text,
                    "encoding": hit.encoding,
                    "aliases": [
                        {
                            "label": alias,
                            "offset": f"0x{alias_offset:06X}",
                            "address": f"0x{ROM_BASE + alias_offset:08X}",
                            "kind": "layout-label",
                        }
                        for alias_offset, alias in interior_labels
                    ]
                    + [
                        {
                            "label": f"gText_Rom_{alias.offset:06X}",
                            "offset": f"0x{alias.offset:06X}",
                            "address": f"0x{ROM_BASE + alias.offset:08X}",
                            "kind": "semantic-text",
                            "sources": [asdict(source) for source in alias.sources],
                            "evidence": list(alias.evidence),
                        }
                        for alias in semantic_aliases
                    ],
                    "requires_exact_length": bool(exact_length_reasons),
                    "exact_length_reasons": exact_length_reasons,
                    "sources": [asdict(source) for source in hit.sources],
                    "evidence": list(hit.evidence),
                }
            )
            cursor = hit.end

        emit_incbin(stream, cursor, layout.end)
    return rows


def verify_generated_regions(
    output_dir: Path, preproc: Path, charmap: Path, rom: bytes
) -> None:
    """Round-trip both generated sections through the real assembler.

    A source match alone is insufficient: a malformed escape or an include
    that preproc does not recurse into would otherwise remain undetected until
    a later full build.  This check assembles each generated include in its
    actual section, extracts that section, and compares it byte-for-byte with
    the original ROM range.
    """
    output_dir = output_dir.resolve()
    preproc = preproc.resolve()
    charmap = charmap.resolve()
    workspace = charmap.parent
    tools_dir = preproc.parent.parent
    assembler = tools_dir / "binutils" / "bin" / "arm-none-eabi-as"
    objcopy = tools_dir / "binutils" / "bin" / "arm-none-eabi-objcopy"
    required = (preproc, charmap, assembler, objcopy)
    missing = [str(path) for path in required if not path.exists()]
    if missing:
        raise RuntimeError("generated source verification prerequisites are missing: " + ", ".join(missing))

    regions = (
        ("event_scripts.inc", "script_data", SCRIPT_RANGE, 'script_data, "aw", %progbits'),
        ("rodata.inc", ".rodata", RODATA_RANGE, ".rodata"),
    )
    with tempfile.TemporaryDirectory(prefix="verify_generated_text_", dir=output_dir) as temporary:
        temporary_dir = Path(temporary)
        for filename, section, (start, end), section_directive in regions:
            include_path = output_dir / filename
            if not include_path.exists():
                raise RuntimeError(f"generated file is missing: {include_path}")
            source_path = temporary_dir / f"verify_{filename}.s"
            object_path = temporary_dir / f"verify_{filename}.o"
            binary_path = temporary_dir / f"verify_{filename}.bin"
            source_path.write_text(
                f"\t.section {section_directive}\n"
                f'\t.include "{include_path}"\n',
                encoding="utf-8",
            )
            processed = subprocess.run(
                [str(preproc), str(source_path), str(charmap)],
                cwd=workspace,
                capture_output=True,
                text=True,
                encoding="utf-8",
                errors="replace",
                check=False,
            )
            if processed.returncode:
                raise RuntimeError(
                    f"preproc failed while verifying {filename}:\n{processed.stderr.strip()}"
                )
            assembled = subprocess.run(
                [str(assembler), "-mcpu=arm7tdmi", "-o", str(object_path), "-"],
                cwd=workspace,
                input=processed.stdout,
                capture_output=True,
                text=True,
                encoding="utf-8",
                errors="replace",
                check=False,
            )
            if assembled.returncode:
                raise RuntimeError(
                    f"assembler failed while verifying {filename}:\n{assembled.stderr.strip()}"
                )
            copied = subprocess.run(
                [str(objcopy), "-O", "binary", "--only-section", section, str(object_path), str(binary_path)],
                cwd=workspace,
                capture_output=True,
                text=True,
                encoding="utf-8",
                errors="replace",
                check=False,
            )
            if copied.returncode:
                raise RuntimeError(
                    f"objcopy failed while verifying {filename}:\n{copied.stderr.strip()}"
                )
            actual = binary_path.read_bytes()
            expected = rom[start:end]
            if actual != expected:
                mismatch = next(
                    (index for index, (left, right) in enumerate(zip(actual, expected)) if left != right),
                    min(len(actual), len(expected)),
                )
                raise RuntimeError(
                    f"{filename} does not reproduce ROM bytes at 0x{start + mismatch:06X} "
                    f"(generated {len(actual):#x}, expected {len(expected):#x})"
                )


def main() -> int:
    parser = argparse.ArgumentParser(
        description="Extract lossless in-place editable Japanese ROM text."
    )
    parser.add_argument("--rom", type=Path, default=Path("baserom.gba"))
    parser.add_argument("--reference-root", type=Path, default=Path("PokeEm-expansion-CanuseJP"))
    parser.add_argument("--charmap", type=Path, default=Path("data/charmap/charmap.txt"))
    parser.add_argument("--preproc", type=Path, default=Path("tools/preproc/preproc"))
    parser.add_argument(
        "--asm-dir",
        type=Path,
        default=Path("asm"),
        help="Assembly sources scanned for direct and indexed text-API references.",
    )
    parser.add_argument("--event-scripts", type=Path, default=Path("data/event_scripts.s"))
    parser.add_argument("--data-source", type=Path, default=Path("data/data.s"))
    parser.add_argument(
        "--layout",
        type=Path,
        default=Path("data/text/rom_text_layout.json"),
        help="Stable address/label layout retained after section wrappers are generated.",
    )
    parser.add_argument(
        "--refresh-layout",
        action="store_true",
        help="Rebuild --layout from the current opaque section sources.",
    )
    parser.add_argument("--output-dir", type=Path, default=Path("data/text/generated"))
    parser.add_argument("--minimum-bytes", type=int, default=4)
    parser.add_argument("--maximum-occurrences", type=int, default=64)
    parser.add_argument("--dry-run", action="store_true")
    args = parser.parse_args()

    for required in (args.rom, args.reference_root, args.charmap, args.preproc, args.asm_dir):
        if not required.exists():
            raise SystemExit(f"missing required path: {required}")
    rom = args.rom.read_bytes()
    if len(rom) < RODATA_RANGE[0]:
        raise SystemExit("ROM is too small for the expected Japanese Emerald layout")

    if args.layout.exists() and not args.refresh_layout:
        layouts = read_layout(args.layout)
        script_layout = layouts["script_data"]
        rodata_layout = layouts["rodata"]
    else:
        script_layout = parse_region_layout(
            args.event_scripts, "script_data", *SCRIPT_RANGE
        )
        rodata_layout = parse_region_layout(args.data_source, "rodata", *RODATA_RANGE)
        if not args.dry_run:
            write_layout(args.layout, (script_layout, rodata_layout))
    entries = unique_entries(
        [*parse_inc_entries(args.reference_root), *parse_c_entries(args.reference_root)]
    )
    encoded, encoding_failures = encode_entries(entries, args.preproc, args.charmap)
    hits, lookup_skips = collect_hits(
        rom,
        entries,
        encoded,
        (SCRIPT_RANGE, RODATA_RANGE),
        args.minimum_bytes,
        args.maximum_occurrences,
    )
    covered_intervals = [
        *( (hit.offset, hit.end) for hit in hits ),
        *( (block.start, block.end) for block in script_layout.external_blocks ),
        *( (block.start, block.end) for block in rodata_layout.external_blocks ),
    ]
    field_script_hits, field_script_summary = collect_field_script_hits(
        rom,
        args.charmap,
        args.preproc,
        covered_intervals,
        ((hit.offset, hit.end) for hit in hits),
    )
    braille_hits, braille_summary = collect_braille_hits(
        rom,
        args.reference_root,
        [
            *covered_intervals,
            *((hit.offset, hit.end) for hit in field_script_hits),
        ],
    )
    asm_rodata_hits, asm_rodata_summary = collect_asm_rodata_hits(
        rom,
        args.asm_dir,
        args.charmap.parent,
        args.charmap,
        args.preproc,
        [
            *covered_intervals,
            *((hit.offset, hit.end) for hit in field_script_hits),
            *((hit.offset, hit.end) for hit in braille_hits),
        ],
    )
    indexed_table_hits, indexed_table_summary = collect_asm_indexed_table_hits(
        rom,
        args.asm_dir,
        args.charmap.parent,
        args.charmap,
        args.preproc,
        [
            *covered_intervals,
            *((hit.offset, hit.end) for hit in field_script_hits),
            *((hit.offset, hit.end) for hit in braille_hits),
            *((hit.offset, hit.end) for hit in asm_rodata_hits),
        ],
    )
    trainerbattle_hits, trainerbattle_summary = collect_trainerbattle_hits(
        rom,
        args.charmap,
        args.preproc,
        [
            *covered_intervals,
            *((hit.offset, hit.end) for hit in field_script_hits),
            *((hit.offset, hit.end) for hit in braille_hits),
            *((hit.offset, hit.end) for hit in asm_rodata_hits),
            *((hit.offset, hit.end) for hit in indexed_table_hits),
        ],
    )
    script_hits, script_overlap_skips = select_non_overlapping(
        [
            hit
            for hit in [
                *hits,
                *field_script_hits,
                *braille_hits,
                *asm_rodata_hits,
                *indexed_table_hits,
                *trainerbattle_hits,
            ]
            if SCRIPT_RANGE[0] <= hit.offset < SCRIPT_RANGE[1]
        ],
        script_layout.external_blocks,
    )
    rodata_hits, rodata_overlap_skips = select_non_overlapping(
        [
            hit
            for hit in [
                *hits,
                *field_script_hits,
                *braille_hits,
                *asm_rodata_hits,
                *indexed_table_hits,
                *trainerbattle_hits,
            ]
            if RODATA_RANGE[0] <= hit.offset < RODATA_RANGE[1]
        ],
        rodata_layout.external_blocks,
    )

    summary = {
        "reference_entries": len(entries),
        "encoded_entries": len(encoded),
        "exact_source_hits": len(hits),
        "field_script_hits": len(field_script_hits),
        "braille_hits": len(braille_hits),
        "asm_rodata_hits": len(asm_rodata_hits),
        "asm_indexed_table_hits": len(indexed_table_hits),
        "trainerbattle_hits": len(trainerbattle_hits),
        "script_text_slots": len(script_hits),
        "rodata_text_slots": len(rodata_hits),
        "field_script_scan": field_script_summary,
        "braille_scan": braille_summary,
        "asm_rodata_scan": asm_rodata_summary,
        "asm_indexed_table_scan": indexed_table_summary,
        "trainerbattle_scan": trainerbattle_summary,
        "preserved_external_blocks": {
            "script_data": [asdict(block) for block in script_layout.external_blocks],
            "rodata": [asdict(block) for block in rodata_layout.external_blocks],
        },
        "encoding_failures": encoding_failures,
        "lookup_skips": lookup_skips,
        "overlap_skips": [*script_overlap_skips, *rodata_overlap_skips],
    }

    if args.dry_run:
        print(
            json.dumps(
                {
                    key: summary[key]
                    for key in (
                        "reference_entries",
                        "encoded_entries",
                        "exact_source_hits",
                        "field_script_hits",
                        "braille_hits",
                        "asm_rodata_hits",
                        "asm_indexed_table_hits",
                        "trainerbattle_hits",
                        "script_text_slots",
                        "rodata_text_slots",
                    )
                },
                ensure_ascii=False,
                indent=2,
            )
        )
        return 0

    args.output_dir.mkdir(parents=True, exist_ok=True)
    manifest_rows = {
        "script_data": emit_region(
            args.output_dir / "event_scripts.inc", script_layout, script_hits
        ),
        "rodata": emit_region(args.output_dir / "rodata.inc", rodata_layout, rodata_hits),
    }
    manifest = {**summary, "records": manifest_rows}
    (args.output_dir / "manifest.json").write_text(
        json.dumps(manifest, ensure_ascii=False, indent=2) + "\n", encoding="utf-8"
    )
    verify_generated_regions(args.output_dir, args.preproc, args.charmap, rom)
    print(
        "generated "
        f"{len(manifest_rows['script_data'])} script_data slots and "
        f"{len(manifest_rows['rodata'])} rodata slots in {args.output_dir}"
    )
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
