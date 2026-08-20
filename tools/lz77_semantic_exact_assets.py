#!/usr/bin/env python3
from __future__ import annotations
import argparse, hashlib, json, struct, subprocess, sys, tempfile
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

def png_plte_rgb555(path: Path, expected_entries: int) -> bytes:
    data = path.read_bytes()
    if data[:8] != b"\x89PNG\r\n\x1a\n":
        raise ValueError(f"{path}: not PNG")
    pos = 8
    plte = None
    while pos + 12 <= len(data):
        n = struct.unpack(">I", data[pos:pos + 4])[0]
        typ = data[pos + 4:pos + 8]
        payload = data[pos + 8:pos + 8 + n]
        pos += 12 + n
        if typ == b"PLTE":
            plte = payload
        if typ == b"IEND":
            break
    if plte is None:
        raise ValueError(f"{path}: PNG PLTE missing")
    if len(plte) != expected_entries * 3:
        raise ValueError(
            f"{path}: expected {expected_entries} palette entries, "
            f"got {len(plte) // 3}"
        )
    out = bytearray()
    for i in range(0, len(plte), 3):
        r, g, b = plte[i:i + 3]
        value = (r >> 3) | ((g >> 3) << 5) | ((b >> 3) << 10)
        out += struct.pack("<H", value)
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
    elif kind == "png_palette_rgb555":
        raw = png_plte_rgb555(source, int(e["palette_entries"]))
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
