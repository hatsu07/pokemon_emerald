#!/usr/bin/env python3
"""Label ObjectEvent SpriteFrameImage payload references."""

from __future__ import annotations

import argparse
import re
from pathlib import Path


FRAME_REFS = Path("data/generated/rodata/maps/0640-0643_maps_data.inc")
FIELD_OBJECT_TILES = Path("data/generated/rodata/maps/0625_maps_data.inc")
LABEL_ROOT = Path("data/generated/rodata")
FIELD_TILES_BIN = "build/graphics/analyzed/field_object_tiles_846fa4c.4bpp"
FIELD_TILES_START = 0x0846FA4C
FIELD_TILES_FRAME_SIZE = 0x100
FIELD_TILES_FRAME_COUNT = 18

GLOBL_RE = re.compile(r"^\t\.globl (gObjectEventFrame(?:Gfx)?_JP_([0-9A-F]{8}))$", re.MULTILINE)
FRAME_REF_RE = re.compile(r"sprite_frame_image (0x08[0-9A-Fa-f]{6}), (0x[0-9A-Fa-f]+|\d+)")


def collect_labels(extra_text: str = "") -> dict[int, str]:
    labels: dict[int, str] = {}
    for path in LABEL_ROOT.rglob("*.inc"):
        text = path.read_text(encoding="utf-8")
        for label, raw_addr in GLOBL_RE.findall(text):
            addr = int(raw_addr, 16)
            labels.setdefault(addr, label)
    for label, raw_addr in GLOBL_RE.findall(extra_text):
        addr = int(raw_addr, 16)
        labels.setdefault(addr, label)
    return labels


def build_field_tiles_block() -> str:
    lines = ["sFieldObjectTiles_846FA4C:"]
    for index in range(FIELD_TILES_FRAME_COUNT):
        addr = FIELD_TILES_START + index * FIELD_TILES_FRAME_SIZE
        label = f"gObjectEventFrame_JP_{addr:08X}"
        lines.extend(
            [
                f"\t.globl {label}",
                f"{label}: @ 0x{addr:08X}",
                f"\t@ SpriteFrameImage 4bpp data; field object tiles frame {index}; size=0x100",
                f"\t.incbin \"{FIELD_TILES_BIN}\", 0x{index * FIELD_TILES_FRAME_SIZE:X}, 0x100",
            ]
        )
    lines.extend(
        [
            "sFieldObjectTiles_846FA4C_End:",
            "\t.if (. - sFieldObjectTiles_846FA4C) != 0x1200",
            '\t.error "field object tiles must be 0x1200 bytes"',
            "\t.endif",
        ]
    )
    return "\n".join(lines)


def rewrite_field_tiles(text: str) -> str:
    old = (
        "sFieldObjectTiles_846FA4C:\n"
        f"\t.incbin \"{FIELD_TILES_BIN}\"\n"
        "\t.if (. - sFieldObjectTiles_846FA4C) != 0x1200\n"
        '\t.error "field object tiles must be 0x1200 bytes"\n'
        "\t.endif"
    )
    new = build_field_tiles_block()
    if old in text:
        return text.replace(old, new)
    if new in text:
        return text
    raise SystemExit(f"{FIELD_OBJECT_TILES}: could not locate field object tiles block")


def rewrite_frame_refs(text: str, labels: dict[int, str]) -> tuple[str, int, list[int]]:
    converted = 0
    missing: set[int] = set()

    def repl(match: re.Match[str]) -> str:
        nonlocal converted
        addr = int(match.group(1), 16)
        label = labels.get(addr)
        if label is None:
            missing.add(addr)
            return match.group(0)
        converted += 1
        return f"sprite_frame_image {label}, {match.group(2)}"

    rewritten = FRAME_REF_RE.sub(repl, text)
    return rewritten, converted, sorted(missing)


def main() -> int:
    parser = argparse.ArgumentParser()
    parser.add_argument("--dry-run", action="store_true")
    parser.add_argument("--check", action="store_true")
    args = parser.parse_args()

    field_text = FIELD_OBJECT_TILES.read_text(encoding="utf-8")
    new_field_text = rewrite_field_tiles(field_text)
    labels = collect_labels(new_field_text)

    frame_text = FRAME_REFS.read_text(encoding="utf-8")
    new_frame_text, converted, missing = rewrite_frame_refs(frame_text, labels)
    if missing:
        missing_text = ", ".join(f"0x{addr:08X}" for addr in missing[:20])
        raise SystemExit(f"{FRAME_REFS}: missing frame labels for {missing_text}")

    changed = (new_field_text != field_text) or (new_frame_text != frame_text)
    if args.check:
        if changed:
            raise SystemExit("ObjectEvent frame refs are not semanticized")
    elif not args.dry_run:
        FIELD_OBJECT_TILES.write_text(new_field_text, encoding="utf-8")
        FRAME_REFS.write_text(new_frame_text, encoding="utf-8")

    print(f"{FRAME_REFS}: semanticized {converted} SpriteFrameImage references")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
