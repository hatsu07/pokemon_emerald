#!/usr/bin/env python3
"""Label ObjectEvent SpriteFrameImage payload references."""

from __future__ import annotations

import argparse
import re
from pathlib import Path


FRAME_REFS = Path("data/maps/0640-0643_maps_data.inc")
FIELD_OBJECT_TILES = Path("data/maps/0625_maps_data.inc")
LABEL_ROOT = Path("data/generated/rodata")
FIELD_TILES_BIN = "build/graphics/analyzed/field_object_tiles_846fa4c.4bpp"
FIELD_TILES_START = 0x0846FA4C
FIELD_TILES_FRAME_SIZE = 0x100
FIELD_TILES_FRAME_COUNT = 18

GLOBL_RE = re.compile(r"^\t\.globl (gObjectEventFrame(?:Gfx)?_JP_([0-9A-F]{8}))$", re.MULTILINE)
FRAME_REF_RE = re.compile(r"sprite_frame_image (0x08[0-9A-Fa-f]{6}), (0x[0-9A-Fa-f]+|\d+)")
LABEL_RE = re.compile(r"^([A-Za-z_][A-Za-z0-9_]*): @ 0x([0-9A-Fa-f]{8})")
DIRECTIVE_RE = re.compile(r"^\t\.(byte|2byte|4byte)\s+(.+)$")
INCBIN_RE = re.compile(r'^\t\.incbin "([^"]+)"(?:,\s*([^,]+)(?:,\s*([^,]+))?)?')


def collect_labels(overrides: dict[Path, str] | None = None, extra_text: str = "") -> dict[int, str]:
    labels: dict[int, str] = {}
    overrides = overrides or {}
    for path in LABEL_ROOT.rglob("*.inc"):
        text = overrides.get(path, path.read_text(encoding="utf-8"))
        for label, raw_addr in GLOBL_RE.findall(text):
            addr = int(raw_addr, 16)
            labels.setdefault(addr, label)
    for label, raw_addr in GLOBL_RE.findall(extra_text):
        addr = int(raw_addr, 16)
        labels.setdefault(addr, label)
    return labels


def strip_comment(text: str) -> str:
    return text.split("@", 1)[0].strip()


def split_values(text: str) -> list[str]:
    return [part.strip() for part in strip_comment(text).split(",") if part.strip()]


def parse_int(text: str) -> int | None:
    try:
        return int(strip_comment(text), 0)
    except ValueError:
        return None


def directive_size(line: str) -> int | None:
    match = DIRECTIVE_RE.match(line)
    if match:
        width = {"byte": 1, "2byte": 2, "4byte": 4}[match.group(1)]
        return width * len(split_values(match.group(2)))
    match = INCBIN_RE.match(line)
    if match:
        count = parse_int(match.group(3) or "")
        if count is not None:
            return count
        path = Path(match.group(1))
        if path.exists():
            skip = parse_int(match.group(2) or "") or 0
            return path.stat().st_size - skip
    return 0


def frame_gfx_label(addr: int) -> str:
    return f"gObjectEventFrameGfx_JP_{addr:08X}"


def add_frame_payload_labels(
    path: Path, text: str, targets: dict[int, str], labels: dict[int, str]
) -> str:
    wanted = {addr: size for addr, size in targets.items() if addr not in labels}
    if not wanted:
        return text

    out: list[str] = []
    current_addr: int | None = None
    inserted: set[int] = set()

    def maybe_insert(addr: int | None) -> None:
        if addr in wanted and addr not in inserted:
            label = frame_gfx_label(addr)
            out.append(f"\t.globl {label}")
            out.append(f"{label}: @ 0x{addr:08X}")
            out.append(f"\t@ 4bpp frame payload; byte size = {wanted[addr]} from SpriteFrameImage")
            inserted.add(addr)

    def emit_byte_values(values: list[str]) -> None:
        if values:
            out.append("\t.byte " + ", ".join(values))

    for line in text.splitlines():
        label = LABEL_RE.match(line)
        if label:
            current_addr = int(label.group(2), 16)
            maybe_insert(current_addr)
            out.append(line)
            continue

        byte_directive = DIRECTIVE_RE.match(line)
        if current_addr is not None and byte_directive and byte_directive.group(1) == "byte":
            values = split_values(byte_directive.group(2))
            if any(current_addr < addr < current_addr + len(values) for addr in set(wanted) - inserted):
                chunk: list[str] = []
                for index, value in enumerate(values):
                    addr = current_addr + index
                    if addr in wanted and addr not in inserted:
                        emit_byte_values(chunk)
                        chunk = []
                        maybe_insert(addr)
                    chunk.append(value)
                emit_byte_values(chunk)
                current_addr += len(values)
                continue

        maybe_insert(current_addr)
        out.append(line)
        if current_addr is not None:
            size = directive_size(line)
            current_addr = None if size is None else current_addr + size

    return "\n".join(out) + ("\n" if text.endswith("\n") else "")


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
    overrides: dict[Path, str] = {}
    if new_field_text != field_text:
        overrides[FIELD_OBJECT_TILES] = new_field_text

    frame_text = FRAME_REFS.read_text(encoding="utf-8")
    frame_targets: dict[int, str] = {}
    for match in FRAME_REF_RE.finditer(frame_text):
        frame_targets.setdefault(int(match.group(1), 16), match.group(2))

    labels = collect_labels(overrides, new_field_text)
    for path in LABEL_ROOT.rglob("*.inc"):
        text = overrides.get(path, path.read_text(encoding="utf-8"))
        new_text = add_frame_payload_labels(path, text, frame_targets, labels)
        if new_text != text:
            overrides[path] = new_text
            labels = collect_labels(overrides, new_field_text)

    frame_text = overrides.get(FRAME_REFS, frame_text)
    new_frame_text, converted, missing = rewrite_frame_refs(frame_text, labels)
    if missing:
        missing_text = ", ".join(f"0x{addr:08X}" for addr in missing[:20])
        raise SystemExit(f"{FRAME_REFS}: missing frame labels for {missing_text}")
    if new_frame_text != frame_text:
        overrides[FRAME_REFS] = new_frame_text

    changed = bool(overrides)
    if args.check:
        if changed:
            raise SystemExit("ObjectEvent frame refs are not semanticized")
    elif not args.dry_run:
        for path, text in sorted(overrides.items()):
            path.write_text(text, encoding="utf-8")

    print(f"{FRAME_REFS}: semanticized {converted} SpriteFrameImage references")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
