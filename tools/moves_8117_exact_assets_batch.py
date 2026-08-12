#!/usr/bin/env python3
from __future__ import annotations

import argparse
import hashlib
import json
import os
import sys
import tempfile
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))

from moves_8117_exact_assets import encode_png_raw, repack_raw_with_plan

EXPECTED_STREAMS = 378
EXPECTED_FORMAT = "pokeemerald-jp-exact-lz77-plan-v1"


def sha1_bytes(data: bytes) -> str:
    return hashlib.sha1(data).hexdigest()


def generate_one(repo: Path, stream: dict) -> bytes:
    key = str(stream["key"])
    raw = encode_png_raw(repo, stream)

    if len(raw) != int(stream["raw_size"]):
        raise ValueError(
            f"{key}: raw size mismatch: expected=0x{int(stream['raw_size']):X}, "
            f"got=0x{len(raw):X}"
        )

    raw_sha = sha1_bytes(raw)
    if raw_sha != stream["raw_sha1"]:
        raise ValueError(
            f"{key}: editable PNG raw SHA1 mismatch: "
            f"expected={stream['raw_sha1']}, got={raw_sha}"
        )

    encoded = repack_raw_with_plan(raw, stream["exact_plan"])
    slot_sha = sha1_bytes(encoded)

    if slot_sha != stream["slot_sha1"]:
        raise ValueError(
            f"{key}: exact LZ slot SHA1 mismatch: "
            f"expected={stream['slot_sha1']}, got={slot_sha}"
        )

    expected_size = int(stream["compressed_size_aligned"])
    if len(encoded) != expected_size:
        raise ValueError(
            f"{key}: encoded slot size mismatch: expected=0x{expected_size:X}, "
            f"got=0x{len(encoded):X}"
        )

    return encoded


def atomic_write(path: Path, data: bytes) -> None:
    path.parent.mkdir(parents=True, exist_ok=True)
    fd, temp_name = tempfile.mkstemp(
        prefix=path.name + ".",
        suffix=".tmp",
        dir=str(path.parent),
    )
    try:
        with os.fdopen(fd, "wb") as f:
            f.write(data)
            f.flush()
            os.fsync(f.fileno())
        os.replace(temp_name, path)
    except Exception:
        try:
            os.unlink(temp_name)
        except OSError:
            pass
        raise


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("--manifest", required=True)
    parser.add_argument("--repo-root", required=True)
    parser.add_argument("--output-dir", required=True)
    parser.add_argument("--quiet", action="store_true")
    args = parser.parse_args()

    manifest_path = Path(args.manifest).resolve()
    repo = Path(args.repo_root).resolve()
    output_dir = Path(args.output_dir).resolve()

    manifest = json.loads(manifest_path.read_text(encoding="utf-8"))
    if manifest.get("format") != EXPECTED_FORMAT:
        raise ValueError(f"unexpected manifest format: {manifest.get('format')!r}")

    streams = manifest.get("streams")
    if not isinstance(streams, list):
        raise ValueError("manifest streams is not a list")
    if len(streams) != EXPECTED_STREAMS:
        raise ValueError(f"expected {EXPECTED_STREAMS} streams, got {len(streams)}")

    keys = [str(x["key"]) for x in streams]
    expected_keys = [f"stream_{i:04d}" for i in range(EXPECTED_STREAMS)]
    if keys != expected_keys:
        raise ValueError("stream keys are not exactly stream_0000..stream_0377")

    output_dir.mkdir(parents=True, exist_ok=True)
    expected_names = {f"{key}.lz" for key in expected_keys}

    for path in output_dir.glob("stream_*.lz"):
        if path.name not in expected_names:
            path.unlink()

    total = 0
    for index, stream in enumerate(streams):
        key = str(stream["key"])
        data = generate_one(repo, stream)
        atomic_write(output_dir / f"{key}.lz", data)
        total += len(data)
        if not args.quiet and ((index + 1) % 50 == 0 or index + 1 == len(streams)):
            print(f"[moves8117] generated {index + 1}/{len(streams)}")

    actual = sorted(p.name for p in output_dir.glob("stream_*.lz"))
    if actual != sorted(expected_names):
        raise ValueError("generated output set is incomplete or unexpected")

    stamp = output_dir / ".moves_8117_exact.stamp"
    stamp.write_text(
        json.dumps(
            {
                "manifest_sha1": hashlib.sha1(manifest_path.read_bytes()).hexdigest(),
                "streams": len(streams),
                "slot_bytes": total,
            },
            sort_keys=True,
        ) + "\n",
        encoding="utf-8",
    )

    if not args.quiet:
        print(f"[moves8117] complete: {len(streams)} exact streams, 0x{total:X} slot bytes")


if __name__ == "__main__":
    main()
