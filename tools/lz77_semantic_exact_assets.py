#!/usr/bin/env python3
from __future__ import annotations
import argparse, hashlib, json, subprocess, sys, tempfile
from pathlib import Path
from lz77_exact import FORMAT, repack_raw_with_plan

def gba_lz77_decompress(data: bytes) -> bytes:
    if len(data) < 4 or data[0] != 0x10:
        raise ValueError("not GBA LZ77 type 0x10")
    out_size = data[1] | (data[2] << 8) | (data[3] << 16)
    src = 4
    out = bytearray()
    while len(out) < out_size:
        if src >= len(data):
            raise ValueError("truncated flag byte")
        flags = data[src]
        src += 1
        for bit in range(7, -1, -1):
            if len(out) >= out_size:
                break
            if flags & (1 << bit):
                if src + 1 >= len(data):
                    raise ValueError("truncated compressed token")
                a, b = data[src], data[src + 1]
                src += 2
                length = (a >> 4) + 3
                back = (((a & 0x0F) << 8) | b) + 1
                if back > len(out):
                    raise ValueError("invalid backreference")
                for _ in range(length):
                    out.append(out[-back])
                    if len(out) >= out_size:
                        break
            else:
                if src >= len(data):
                    raise ValueError("truncated literal")
                out.append(data[src])
                src += 1
    return bytes(out)

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--manifest", required=True, type=Path)
    ap.add_argument("--generic-manifest", required=True, type=Path)
    ap.add_argument("--relative-output", required=True)
    ap.add_argument("--png-tool", required=True, type=Path)
    ap.add_argument("--repo", required=True, type=Path)
    ap.add_argument("output", type=Path)
    a = ap.parse_args()

    sem = json.loads(a.manifest.read_text(encoding="utf-8"))
    if sem.get("format") != "pokemon-emerald-jp-lz77-semantic-exact-v2":
        raise ValueError("unsupported semantic manifest")
    e = sem["entries"][a.relative_output]
    key = e["key"]
    kind = e["source_kind"]
    source = a.repo / e["source"]

    gen = json.loads(a.generic_manifest.read_text(encoding="utf-8"))
    if gen.get("format") != FORMAT:
        raise ValueError("unsupported generic manifest")
    orig = gen["entries"][key]

    if kind == "png":
        with tempfile.TemporaryDirectory(prefix="lz77-semantic-exact-") as td:
            rawp = Path(td) / "asset.4bpp"
            subprocess.run(
                [sys.executable, str(a.png_tool), "--format", "4bpp-tiled",
                 str(source), str(rawp)],
                check=True, cwd=a.repo, stdout=subprocess.DEVNULL)
            raw = rawp.read_bytes()
    elif kind == "build_lz":
        raw = gba_lz77_decompress(source.read_bytes())
    elif kind == "build_raw":
        raw = source.read_bytes()
    else:
        raise ValueError(f"{key}: unsupported source_kind {kind!r}")

    raw_sha = hashlib.sha256(raw).hexdigest()
    if raw_sha != orig["decompressed_sha256"]:
        raise ValueError(
            f"{key}: source raw SHA mismatch {raw_sha} != "
            f"{orig['decompressed_sha256']}"
        )

    packed = repack_raw_with_plan(raw, orig["plan"])
    packed_sha = hashlib.sha256(packed).hexdigest()
    if packed_sha != orig["compressed_sha256"]:
        raise ValueError(
            f"{key}: exact repack SHA mismatch {packed_sha} != "
            f"{orig['compressed_sha256']}"
        )
    if len(packed) != int(orig["plan"]["compressed_size"]):
        raise ValueError(f"{key}: compressed size mismatch")

    a.output.parent.mkdir(parents=True, exist_ok=True)
    a.output.write_bytes(packed)

if __name__ == "__main__":
    main()
