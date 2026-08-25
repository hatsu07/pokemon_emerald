#!/usr/bin/env python3
from __future__ import annotations

import argparse
import re
import sys
from collections import defaultdict
from pathlib import Path
from typing import Optional

ROOT = Path(__file__).resolve().parents[1]

LABEL_RE = re.compile(
    r"^\s*([A-Za-z_.$][A-Za-z0-9_.$]*):{1,2}"
    r"(?:\s*@\s*(0x[0-9A-Fa-f]+))?\s*$"
)
SONG_HEADER_RE = re.compile(
    r"^(\s*)m4a_song_header\s+(.+?)(\s*(?:@.*)?)$"
)
MACRO_RE = re.compile(
    r"^(\s*)"
    r"(voice_keysplit_all|voice_keysplit|"
    r"voice_programmable_wave_alt|voice_programmable_wave|"
    r"voice_directsound_no_resample|voice_directsound_alt|voice_directsound)"
    r"\s+(.+?)(\s*(?:@.*)?)$"
)

VOICEGROUP_PREFIXES = ("VoiceGroup_", "voicegroup_")
KEYSPLIT_PREFIXES = ("M4aKeySplitTable_", "KeySplit", "keysplit_")
PROGRAMMABLE_PREFIXES = (
    "M4aProgrammableWave_",
    "ProgrammableWaveData_",
    "programmable_wave_",
)
DIRECTSOUND_PREFIXES = ("DirectSoundWaveData_",)


def source_paths() -> list[Path]:
    paths: set[Path] = set()
    for root_name in ("asm", "data"):
        root = ROOT / root_name
        for pat in ("*.s", "*.inc"):
            paths.update(root.rglob(pat))
    return sorted(
        p for p in paths
        if "asm/macros" not in p.as_posix()
    )


def split_args(s: str) -> list[str]:
    return [x.strip() for x in s.split(",")]


def parse_int(s: str) -> Optional[int]:
    try:
        return int(s.strip(), 0)
    except ValueError:
        return None


def build_symbols():
    by_addr: dict[int, list[str]] = defaultdict(list)
    name_to_addr: dict[str, int] = {}

    for p in source_paths():
        try:
            lines = p.read_text(encoding="utf-8").splitlines()
        except UnicodeDecodeError:
            continue
        for line in lines:
            m = LABEL_RE.match(line)
            if not m or not m.group(2):
                continue
            name = m.group(1)
            addr = int(m.group(2), 16)
            by_addr[addr].append(name)
            old = name_to_addr.get(name)
            if old is not None and old != addr:
                raise SystemExit(
                    f"ERROR: symbol {name} has conflicting addresses "
                    f"0x{old:08X} and 0x{addr:08X}"
                )
            name_to_addr[name] = addr

    for names in by_addr.values():
        names.sort()
    return dict(by_addr), name_to_addr


def resolve(
    token: str,
    prefixes: tuple[str, ...],
    by_addr: dict[int, list[str]],
    name_to_addr: dict[str, int],
    context: str,
) -> tuple[str, Optional[int], bool]:
    value = parse_int(token)
    if value is None:
        if token not in name_to_addr:
            raise ValueError(f"{context}: undefined symbol {token}")
        if not token.startswith(prefixes):
            raise ValueError(
                f"{context}: symbol {token} has unexpected semantic namespace"
            )
        return token, name_to_addr[token], False

    names = [
        x for x in by_addr.get(value, [])
        if x.startswith(prefixes)
    ]
    if not names:
        all_names = by_addr.get(value, [])
        suffix = (
            f"; labels_at_address={','.join(all_names)}"
            if all_names else ""
        )
        raise ValueError(
            f"{context}: no proven semantic label at 0x{value:08X}{suffix}"
        )

    names.sort(key=lambda x: (len(x), x))
    return names[0], value, True


def process(apply: bool, report: Path) -> int:
    by_addr, name_to_addr = build_symbols()
    replacements = 0
    numeric_before = 0
    numeric_after = 0
    errors: list[str] = []
    mapping: dict[tuple[str, int], str] = {}
    changed_files: list[str] = []

    for p in source_paths():
        try:
            text = p.read_text(encoding="utf-8")
        except UnicodeDecodeError:
            continue
        final_nl = text.endswith("\n")
        lines = text.splitlines()
        out: list[str] = []
        changed = False

        for lineno, line in enumerate(lines, 1):
            hm = SONG_HEADER_RE.match(line)
            if hm:
                args = split_args(hm.group(2))
                if len(args) == 5:
                    if parse_int(args[4]) is not None:
                        numeric_before += 1
                    try:
                        sym, addr, was_num = resolve(
                            args[4],
                            VOICEGROUP_PREFIXES,
                            by_addr,
                            name_to_addr,
                            f"{p.relative_to(ROOT)}:{lineno} song voicegroup",
                        )
                    except ValueError as e:
                        errors.append(str(e))
                    else:
                        if was_num:
                            args[4] = sym
                            mapping[(sym, addr)] = "song_voicegroup"
                            replacement = (
                                hm.group(1)
                                + "m4a_song_header "
                                + ", ".join(args)
                                + hm.group(3)
                            )
                            if replacement != line:
                                replacements += 1
                                changed = True
                                line = replacement
                        if parse_int(args[4]) is not None:
                            numeric_after += 1
                out.append(line)
                continue

            mm = MACRO_RE.match(line)
            if not mm:
                out.append(line)
                continue

            indent, macro, argtext, tail = (
                mm.group(1), mm.group(2), mm.group(3), mm.group(4)
            )
            args = split_args(argtext)
            fields: list[tuple[int, tuple[str, ...], str]] = []

            if macro == "voice_keysplit_all":
                if len(args) != 1:
                    errors.append(
                        f"{p.relative_to(ROOT)}:{lineno}: "
                        f"{macro} arg count={len(args)}"
                    )
                    out.append(line)
                    continue
                fields = [(0, VOICEGROUP_PREFIXES, "keysplit_all_voicegroup")]

            elif macro == "voice_keysplit":
                if len(args) != 2:
                    errors.append(
                        f"{p.relative_to(ROOT)}:{lineno}: "
                        f"{macro} arg count={len(args)}"
                    )
                    out.append(line)
                    continue
                fields = [
                    (0, VOICEGROUP_PREFIXES, "keysplit_voicegroup"),
                    (1, KEYSPLIT_PREFIXES, "keysplit_table"),
                ]

            elif macro in (
                "voice_programmable_wave",
                "voice_programmable_wave_alt",
            ):
                if len(args) != 5:
                    errors.append(
                        f"{p.relative_to(ROOT)}:{lineno}: "
                        f"{macro} arg count={len(args)}"
                    )
                    out.append(line)
                    continue
                fields = [(0, PROGRAMMABLE_PREFIXES, "programmable_wave")]

            elif macro in (
                "voice_directsound",
                "voice_directsound_no_resample",
                "voice_directsound_alt",
            ):
                if len(args) != 7:
                    errors.append(
                        f"{p.relative_to(ROOT)}:{lineno}: "
                        f"{macro} arg count={len(args)}"
                    )
                    out.append(line)
                    continue
                fields = [(2, DIRECTSOUND_PREFIXES, "directsound_sample")]

            for idx, prefixes, kind in fields:
                if parse_int(args[idx]) is not None:
                    numeric_before += 1
                try:
                    sym, addr, was_num = resolve(
                        args[idx],
                        prefixes,
                        by_addr,
                        name_to_addr,
                        f"{p.relative_to(ROOT)}:{lineno} {kind}",
                    )
                except ValueError as e:
                    errors.append(str(e))
                    continue

                if was_num:
                    args[idx] = sym
                    mapping[(sym, addr)] = kind

            replacement = indent + macro + " " + ", ".join(args) + tail
            if replacement != line:
                replacements += 1
                changed = True
                line = replacement

            for idx, _prefixes, _kind in fields:
                if parse_int(args[idx]) is not None:
                    numeric_after += 1

            out.append(line)

        if apply and changed:
            new_text = "\n".join(out)
            if final_nl:
                new_text += "\n"
            p.write_text(new_text, encoding="utf-8")
            changed_files.append(str(p.relative_to(ROOT)))

    report.parent.mkdir(parents=True, exist_ok=True)
    with report.open("w", encoding="utf-8") as f:
        f.write("kind\taddress\tsymbol\n")
        for (sym, addr), kind in sorted(
            mapping.items(), key=lambda x: (x[0][1], x[0][0])
        ):
            f.write(f"{kind}\t0x{addr:08X}\t{sym}\n")

    print(f"mode={'apply' if apply else 'scan'}")
    print(f"numeric_pointer_operands_before={numeric_before}")
    print(f"numeric_pointer_operands_after={numeric_after}")
    print(f"replacement_lines={replacements}")
    print(f"unique_resolved_targets={len(mapping)}")
    print(f"changed_files={len(changed_files)}")
    for x in changed_files:
        print(f"  changed={x}")
    print(f"report={report}")

    if errors:
        print(f"errors={len(errors)}")
        for e in errors:
            print(f"  ERROR: {e}")
        return 1

    if numeric_after:
        print("ERROR: numeric semantic pointers remain")
        return 1

    print("errors=0")
    print("M4A_POINTER_SEMANTICS=PASS")
    return 0


def main() -> int:
    ap = argparse.ArgumentParser()
    mode = ap.add_mutually_exclusive_group(required=True)
    mode.add_argument("--scan", action="store_true")
    mode.add_argument("--apply", action="store_true")
    mode.add_argument("--verify", action="store_true")
    ap.add_argument(
        "--report",
        default="/tmp/m4a_audio_pointer_map.tsv",
    )
    args = ap.parse_args()
    return process(
        apply=args.apply,
        report=Path(args.report),
    )


if __name__ == "__main__":
    sys.exit(main())
