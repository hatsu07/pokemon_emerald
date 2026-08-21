#!/usr/bin/env python3
"""Name ObjectEventGraphicsInfo resource pointers in generated map rodata."""

from __future__ import annotations

import argparse
import re
from pathlib import Path


DEFAULT_INPUT = Path("data/maps/0640-0643_maps_data.inc")

ALIASES = {
    "0x084E1500": "sObjectEventAnimTable_084E1500",
    "0x084E1504": "sObjectEventAnimTable_084E1504",
    "0x084E1554": "sObjectEventAnimTable_084E1554",
    "0x084E15A4": "sObjectEventAnimTable_084E15A4",
    "0x084E15F4": "sObjectEventAnimTable_084E15F4",
    "0x084E168C": "sObjectEventAnimTable_084E168C",
    "0x084E16DC": "sObjectEventAnimTable_084E16DC",
    "0x084E173C": "sObjectEventAnimTable_084E173C",
    "0x084E17DC": "sObjectEventAnimTable_084E17DC",
    "0x084E183C": "sObjectEventAnimTable_084E183C",
    "0x084E1890": "sObjectEventAnimTable_084E1890",
    "0x084E1894": "sObjectEventAnimTable_084E1894",
    "0x084E18A8": "sObjectEventAnimTable_084E18A8",
    "0x084E18B0": "sObjectEventAnimTable_084E18B0",
    "0x084E18B8": "sObjectEventAnimTable_084E18B8",
    "0x084E18E8": "sObjectEventAffineAnimTable_084E18E8",
    "0x084E1940": "sObjectEventOam_8x8",
    "0x084E1950": "sObjectEventOam_16x16",
    "0x084E1968": "sObjectEventOam_16x32",
    "0x084E1970": "sObjectEventOam_32x32",
    "0x084E1978": "sObjectEventOam_64x64",
    "0x084E19A0": "sObjectEventSubspriteTables_16x16",
    "0x084E19F4": "sObjectEventSubspriteTables_16x32",
    "0x084E1A48": "sObjectEventSubspriteTables_32x32",
    "0x084E1AA8": "sObjectEventSubspriteTables_48x48",
    "0x084E1B28": "sObjectEventSubspriteTables_64x64",
    "0x084E1C48": "sObjectEventSubspriteTables_96x40",
    "0x084E1D78": "sObjectEventSubspriteTables_88x32",
}

ALIAS_BLOCK_MARKER = "@ Named ObjectEventGraphicsInfo resource pointer targets."


def collect_frame_image_labels(text: str) -> dict[str, str]:
    labels: dict[str, str] = {}
    label_re = re.compile(r"^(gSpriteFrameImages_JP_([0-9A-F]{8})):", re.MULTILINE)
    for match in label_re.finditer(text):
        labels[f"0x{match.group(2)}"] = match.group(1)
    return labels


def alias_block() -> str:
    lines = ["\t" + ALIAS_BLOCK_MARKER]
    for value, label in ALIASES.items():
        lines.append(f"\t.set {label}, {value}")
    return "\n".join(lines) + "\n"


def insert_alias_block(text: str) -> str:
    if ALIAS_BLOCK_MARKER in text:
        return text
    needle = "\t@ preserved non-SpriteFrameImage data: 0x084E0E50-0x084E18FF\n"
    if needle not in text:
        raise SystemExit(f"could not find insertion point: {needle.strip()}")
    return text.replace(needle, needle + alias_block(), 1)


def rewrite_object_event_graphics_info(text: str, labels: dict[str, str]) -> tuple[str, int]:
    mapping = dict(ALIASES)
    mapping.update(labels)
    changed = 0
    out: list[str] = []
    for line in text.splitlines(keepends=True):
        if "object_event_graphics_info" not in line:
            out.append(line)
            continue
        prefix, args_text = line.split("object_event_graphics_info", 1)
        ending = "\n" if args_text.endswith("\n") else ""
        args_body = args_text[:-1] if ending else args_text
        args = [part.strip() for part in args_body.split(",")]
        if len(args) != 13:
            out.append(line)
            continue
        for i in range(8, 13):
            if args[i] in mapping:
                args[i] = mapping[args[i]]
        new_line = f"{prefix}object_event_graphics_info " + ", ".join(args) + ending
        if new_line != line:
            changed += 1
        out.append(new_line)
    return "".join(out), changed


def main() -> int:
    parser = argparse.ArgumentParser()
    parser.add_argument("path", nargs="?", type=Path, default=DEFAULT_INPUT)
    parser.add_argument("--dry-run", action="store_true")
    parser.add_argument("--check", action="store_true")
    args = parser.parse_args()

    text = args.path.read_text(encoding="utf-8")
    labels = collect_frame_image_labels(text)
    rewritten = insert_alias_block(text)
    rewritten, changed = rewrite_object_event_graphics_info(rewritten, labels)
    if args.check:
        if rewritten != text:
            raise SystemExit(f"{args.path}: not semanticized")
    elif not args.dry_run:
        args.path.write_text(rewritten, encoding="utf-8")
    print(f"{args.path}: rewrote {changed} ObjectEventGraphicsInfo entries")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
