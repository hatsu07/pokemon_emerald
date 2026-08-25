#!/usr/bin/env python3
from __future__ import annotations
import argparse, re
from pathlib import Path

def parse(path: Path) -> bytes:
    out = bytearray()
    for n, line in enumerate(path.read_text(encoding="utf-8").splitlines(), 1):
        line = line.split("#", 1)[0].strip()
        if not line:
            continue
        for tok in line.replace(",", " ").split():
            if not re.fullmatch(r"(?:0[xX])?[0-9A-Fa-f]{1,4}", tok):
                raise ValueError(f"{path}:{n}: invalid u16 {tok!r}")
            out += int(tok, 16).to_bytes(2, "little")
    return bytes(out)

def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--expected-words", type=int)
    ap.add_argument("input", type=Path)
    ap.add_argument("output", type=Path)
    a = ap.parse_args()
    raw = parse(a.input)
    if a.expected_words is not None and len(raw) != a.expected_words * 2:
        raise ValueError(f"got {len(raw)//2} words, expected {a.expected_words}")
    a.output.parent.mkdir(parents=True, exist_ok=True)
    a.output.write_bytes(raw)
    return 0

if __name__ == "__main__":
    raise SystemExit(main())
