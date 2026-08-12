#!/usr/bin/env python3
"""Exact editable DirectSound assets for Pokemon Emerald JP.

The WaveData header remains semantic ASM. This tool converts only its sample
payload between editable mono 8-bit WAV and the exact bytes consumed by the
ROM build.

Format bit 0:
  0: signed 8-bit PCM payload
  1: Pokemon M4A 4-bit DPCM payload, 0x40 samples per block

The DPCM encoder intentionally matches wav2agb lookahead=1 / --no-pad
behavior, including the vanilla odd-tail behavior. Source payloads are padded
with zero bytes to the next 4-byte WaveData alignment because the current JP
source segments include that alignment in the extracted .bin payload.
"""

from __future__ import annotations

import argparse
import hashlib
import json
import re
import struct
import sys
from dataclasses import dataclass, asdict
from pathlib import Path
from typing import Iterable

DPCM_BLOCK = 0x40
DPCM_DELTA = (0, 1, 4, 9, 16, 25, 36, 49,
              -64, -49, -36, -25, -16, -9, -4, -1)

LABEL_RE = re.compile(r'^\s*([A-Za-z_.$][A-Za-z0-9_.$]*):{1,2}\s*(?:@.*)?$')
HEADER_RE = re.compile(
    r'^\s*m4a_wave_data_header\s+'
    r'(0x[0-9A-Fa-f]+|\d+)\s*,\s*'
    r'(0x[0-9A-Fa-f]+|\d+)\s*,\s*'
    r'(0x[0-9A-Fa-f]+|\d+)\s*,\s*'
    r'(0x[0-9A-Fa-f]+|\d+)\s*(?:@.*)?$'
)
INCBIN_RE = re.compile(r'^\s*\.incbin\s+"(audio/direct_sound/[^"]+\.bin)"')
ADDRESS_RE = re.compile(r'_JP_(08[0-9A-Fa-f]{6})$')


def align4(n: int) -> int:
    return (n + 3) & ~3


def dpcm_raw_size(sample_count: int) -> int:
    full, rem = divmod(sample_count, DPCM_BLOCK)
    size = full * 33
    if rem:
        # wav2agb --no-pad: initial signed sample + floor(rem / 2) bytes.
        size += 1 + rem // 2
    return size


def expected_payload_size(flags: int, sample_count: int) -> int:
    if flags & 1:
        return align4(dpcm_raw_size(sample_count))
    return align4(sample_count)


def sha1(data: bytes) -> str:
    return hashlib.sha1(data).hexdigest()


@dataclass
class Asset:
    label: str
    source: str
    source_line: int
    source_bin: str
    wav: str
    build_bin: str
    address: str | None
    flags: int
    pitch: int
    loop_start: int
    sample_count_minus_1: int
    sample_count: int
    encoding: str
    loop_enabled: bool
    sample_rate_hint: int
    source_size: int
    expected_size: int
    source_sha1: str
    status: str
    synthetic_tail_sample: bool


def source_files(repo: Path) -> list[Path]:
    files: list[Path] = []
    for root_name in ("asm", "data"):
        root = repo / root_name
        if not root.exists():
            continue
        for p in root.rglob("*"):
            if p.is_file() and p.suffix in (".s", ".inc"):
                files.append(p)
    return sorted(files)


def scan(repo: Path) -> list[Asset]:
    result: list[Asset] = []
    seen_bins: set[str] = set()

    for path in source_files(repo):
        try:
            lines = path.read_text(encoding="utf-8", errors="replace").splitlines()
        except OSError:
            continue

        current_label: str | None = None
        current_header: tuple[int, int, int, int] | None = None

        for lineno, line in enumerate(lines, 1):
            lm = LABEL_RE.match(line)
            if lm:
                current_label = lm.group(1)
                current_header = None

            hm = HEADER_RE.match(line)
            if hm:
                current_header = tuple(int(x, 0) for x in hm.groups())  # type: ignore[assignment]
                continue

            im = INCBIN_RE.match(line)
            if not im or current_label is None or current_header is None:
                continue

            rel_bin = im.group(1)
            if rel_bin in seen_bins:
                raise RuntimeError(f"duplicate DirectSound payload reference: {rel_bin}")
            seen_bins.add(rel_bin)

            bin_path = repo / rel_bin
            if not bin_path.exists():
                raise RuntimeError(f"missing DirectSound source payload: {rel_bin}")

            flags, pitch, loop_start, count_minus_1 = current_header
            sample_count = count_minus_1 + 1
            expected = expected_payload_size(flags, sample_count)
            data = bin_path.read_bytes()
            status = "complete" if len(data) == expected else "truncated"

            wav_rel = str(Path(rel_bin).with_suffix(".wav"))
            build_rel = str(Path("build") / Path(rel_bin))
            am = ADDRESS_RE.search(current_label)
            address = f"0x{am.group(1)}" if am else None

            # WAV sample rate is an integer field. Preserve exact GBA pitch in
            # the agbp chunk and manifest; this value is only a playback hint.
            rate_hint = max(1, int(round(pitch / 1024.0)))

            result.append(Asset(
                label=current_label,
                source=str(path.relative_to(repo)),
                source_line=lineno,
                source_bin=rel_bin,
                wav=wav_rel,
                build_bin=build_rel,
                address=address,
                flags=flags,
                pitch=pitch,
                loop_start=loop_start,
                sample_count_minus_1=count_minus_1,
                sample_count=sample_count,
                encoding="dpcm4" if flags & 1 else "pcm_s8",
                loop_enabled=bool(flags & 0x40000000),
                sample_rate_hint=rate_hint,
                source_size=len(data),
                expected_size=expected,
                source_sha1=sha1(data),
                status=status,
                synthetic_tail_sample=bool((flags & 1) and (sample_count % 64) % 2 == 1),
            ))
            current_header = None

    return result


def _riff_chunk(tag: bytes, payload: bytes) -> bytes:
    if len(tag) != 4:
        raise ValueError("RIFF tag must be 4 bytes")
    out = bytearray(tag)
    out += struct.pack("<I", len(payload))
    out += payload
    if len(payload) & 1:
        out += b"\0"
    return bytes(out)


def write_wav(path: Path, samples: list[int], asset: Asset) -> None:
    for s in samples:
        if not -128 <= s <= 127:
            raise ValueError(f"sample out of s8 range: {s}")

    data = bytes((s + 128) & 0xFF for s in samples)
    rate = asset.sample_rate_hint
    fmt = struct.pack("<HHIIHH", 1, 1, rate, rate, 1, 8)

    # agbp: exact GBA pitch (not rounded WAV rate).
    # agbl: exact original stored fourth WaveData field.
    body = bytearray(b"WAVE")
    body += _riff_chunk(b"fmt ", fmt)
    body += _riff_chunk(b"agbp", struct.pack("<I", asset.pitch))
    body += _riff_chunk(b"agbl", struct.pack("<I", asset.sample_count_minus_1))
    body += _riff_chunk(b"data", data)

    riff = b"RIFF" + struct.pack("<I", len(body)) + bytes(body)
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_bytes(riff)


def read_wav(path: Path) -> tuple[list[int], dict[str, int]]:
    b = path.read_bytes()
    if len(b) < 12 or b[:4] != b"RIFF" or b[8:12] != b"WAVE":
        raise ValueError(f"not RIFF/WAVE: {path}")
    if struct.unpack_from("<I", b, 4)[0] + 8 != len(b):
        raise ValueError(f"invalid RIFF length: {path}")

    pos = 12
    fmt: bytes | None = None
    data: bytes | None = None
    meta: dict[str, int] = {}
    while pos + 8 <= len(b):
        tag = b[pos:pos + 4]
        size = struct.unpack_from("<I", b, pos + 4)[0]
        pos += 8
        if pos + size > len(b):
            raise ValueError(f"RIFF chunk exceeds file: {path}")
        payload = b[pos:pos + size]
        pos += size + (size & 1)
        if tag == b"fmt ":
            fmt = payload
        elif tag == b"data":
            data = payload
        elif tag == b"agbp" and len(payload) >= 4:
            meta["agbp"] = struct.unpack_from("<I", payload)[0]
        elif tag == b"agbl" and len(payload) >= 4:
            meta["agbl"] = struct.unpack_from("<I", payload)[0]

    if fmt is None or len(fmt) < 16:
        raise ValueError(f"missing fmt chunk: {path}")
    audio_fmt, channels, _rate, _byte_rate, block_align, bits = struct.unpack_from("<HHIIHH", fmt)
    if (audio_fmt, channels, block_align, bits) != (1, 1, 1, 8):
        raise ValueError(f"WAV must be mono PCM8: {path}")
    if data is None:
        raise ValueError(f"missing data chunk: {path}")

    samples = [x - 128 for x in data]
    return samples, meta


def decode_dpcm(payload: bytes, sample_count: int) -> list[int]:
    raw_len = dpcm_raw_size(sample_count)
    payload = payload[:raw_len]
    pos = 0
    out: list[int] = []

    remaining = sample_count
    while remaining:
        r = min(DPCM_BLOCK, remaining)
        if pos >= len(payload):
            raise ValueError("DPCM payload ended before block initial sample")

        level = payload[pos]
        if level >= 128:
            level -= 256
        pos += 1
        block: list[int] = [level]

        encoded_bytes = r // 2
        if pos + encoded_bytes > len(payload):
            raise ValueError("DPCM payload ended inside a block")

        if encoded_bytes:
            # wav2agb writes the first delta in the LOW nibble and leaves the
            # high nibble unused for this first byte.
            byte = payload[pos]
            pos += 1
            idx = byte & 0x0F
            level += DPCM_DELTA[idx]
            block.append(level)

            for _ in range(1, encoded_bytes):
                byte = payload[pos]
                pos += 1
                idx = (byte >> 4) & 0x0F
                level += DPCM_DELTA[idx]
                block.append(level)
                idx = byte & 0x0F
                level += DPCM_DELTA[idx]
                block.append(level)

        # --no-pad has a historical odd-tail behavior: when the last partial
        # block has an odd sample count, the final sample is not emitted.
        # It is outside the encoded bytes, so synthesize silence in the WAV.
        # Re-encoding ignores that sample exactly as wav2agb does.
        if len(block) < r:
            if len(block) != r - 1:
                raise ValueError("unexpected DPCM decoded block length")
            block.append(0)

        out.extend(block)
        remaining -= r

    if pos != raw_len:
        raise ValueError(f"DPCM decoder consumed {pos}, expected {raw_len}")
    if len(out) != sample_count:
        raise ValueError("DPCM sample count mismatch")
    return out


def _choose_delta(target: int, prev: int) -> tuple[int, int]:
    best: tuple[int, int, int] | None = None
    for idx, delta in enumerate(DPCM_DELTA):
        level = prev + delta
        if level < -128 or level > 127:
            continue
        err = (target - level) * (target - level)
        candidate = (err, idx, level)
        if best is None or candidate[0] < best[0]:
            best = candidate
    if best is None:
        raise ValueError("no valid DPCM delta")
    return best[1], best[2]


def encode_dpcm(samples: list[int]) -> bytes:
    out = bytearray()

    for base in range(0, len(samples), DPCM_BLOCK):
        block = samples[base:base + DPCM_BLOCK]
        if not block:
            continue
        level = block[0]
        if level < -128 or level > 127:
            raise ValueError("initial DPCM sample out of range")
        out.append(level & 0xFF)

        r = len(block)
        if r <= 1:
            continue

        # Match wav2agb convert_dpcm_impl(...), lookahead=1.
        inner = 1
        idx, level = _choose_delta(block[inner], level)
        out_data = idx & 0x0F  # first delta is low nibble
        inner += 1
        out.append(out_data)

        while inner < r:
            idx, level = _choose_delta(block[inner], level)
            out_data = (idx & 0x0F) << 4
            inner += 1

            # Exact --no-pad odd-tail behavior: high-only byte is not written.
            if inner >= r:
                break

            idx, level = _choose_delta(block[inner], level)
            out_data |= idx & 0x0F
            inner += 1
            out.append(out_data)

    return bytes(out)


def decode_payload(data: bytes, asset: Asset) -> list[int]:
    if len(data) != asset.expected_size:
        raise ValueError(f"payload size mismatch for {asset.label}")
    if asset.flags & 1:
        return decode_dpcm(data, asset.sample_count)
    return [x if x < 128 else x - 256 for x in data[:asset.sample_count]]


def encode_payload(samples: list[int], asset: Asset) -> bytes:
    if len(samples) != asset.sample_count:
        raise ValueError(
            f"{asset.label}: WAV has {len(samples)} samples, expected {asset.sample_count}"
        )
    if any(s < -128 or s > 127 for s in samples):
        raise ValueError(f"{asset.label}: sample outside signed PCM8 range")

    if asset.flags & 1:
        raw = bytearray(encode_dpcm(samples))
    else:
        raw = bytearray(s & 0xFF for s in samples)

    if len(raw) > asset.expected_size:
        raise ValueError(f"{asset.label}: encoded payload too large")
    raw.extend(b"\0" * (asset.expected_size - len(raw)))
    if len(raw) != asset.expected_size:
        raise AssertionError("internal payload sizing error")
    return bytes(raw)


def manifest_dict(repo: Path, assets: list[Asset]) -> dict:
    complete = sum(a.status == "complete" for a in assets)
    truncated = len(assets) - complete
    return {
        "format": "pokemon-emerald-jp-directsound-v1",
        "note": (
            "WaveData headers remain in ASM. WAV files represent editable sample payloads only. "
            "agbp preserves the exact GBA pitch field; agbl preserves the original stored fourth header field."
        ),
        "asset_count": len(assets),
        "complete_count": complete,
        "truncated_count": truncated,
        "assets": [asdict(a) for a in assets],
    }


def save_manifest(path: Path, repo: Path, assets: list[Asset]) -> None:
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(json.dumps(manifest_dict(repo, assets), indent=2) + "\n", encoding="utf-8")


def load_manifest(path: Path) -> list[Asset]:
    obj = json.loads(path.read_text(encoding="utf-8"))
    if obj.get("format") != "pokemon-emerald-jp-directsound-v1":
        raise ValueError("unsupported DirectSound manifest format")
    return [Asset(**item) for item in obj["assets"]]


def extract(repo: Path, manifest: Path) -> list[Asset]:
    assets = scan(repo)
    complete = [a for a in assets if a.status == "complete"]
    truncated = [a for a in assets if a.status != "complete"]

    print(f"assets={len(assets)} complete={len(complete)} truncated={len(truncated)}")
    if truncated:
        print("truncated assets left as .bin:")
        for a in truncated:
            print(
                f"  {a.label}: source={a.source_size} expected={a.expected_size} "
                f"short={a.expected_size - a.source_size}"
            )

    # First prove every complete source asset round-trips exactly in memory.
    for a in complete:
        original = (repo / a.source_bin).read_bytes()
        samples = decode_payload(original, a)
        rebuilt = encode_payload(samples, a)
        if rebuilt != original:
            raise RuntimeError(f"round-trip mismatch before WAV write: {a.label}")

    # Then write WAVs and prove the WAV parser/encoder path too.
    for idx, a in enumerate(complete, 1):
        original = (repo / a.source_bin).read_bytes()
        samples = decode_payload(original, a)
        wav_path = repo / a.wav
        write_wav(wav_path, samples, a)
        from_wav, meta = read_wav(wav_path)
        if meta.get("agbp") != a.pitch:
            raise RuntimeError(f"agbp mismatch: {a.label}")
        if meta.get("agbl") != a.sample_count_minus_1:
            raise RuntimeError(f"agbl mismatch: {a.label}")
        rebuilt = encode_payload(from_wav, a)
        if rebuilt != original:
            raise RuntimeError(f"WAV round-trip mismatch: {a.label}")
        if idx % 50 == 0 or idx == len(complete):
            print(f"WAV round-trip {idx}/{len(complete)}")

    save_manifest(manifest, repo, assets)
    print(f"manifest={manifest.relative_to(repo)}")
    return assets


def verify_against_source(repo: Path, manifest: Path) -> None:
    assets = load_manifest(manifest)
    checked = 0
    for a in assets:
        if a.status != "complete":
            continue
        src = repo / a.source_bin
        if not src.exists():
            raise RuntimeError(f"source .bin missing during source verification: {a.source_bin}")
        samples, _ = read_wav(repo / a.wav)
        rebuilt = encode_payload(samples, a)
        original = src.read_bytes()
        if rebuilt != original:
            raise RuntimeError(f"verify mismatch: {a.label}")
        checked += 1
    print(f"verified_against_source={checked}")


def encode_all(repo: Path, manifest: Path, output_root: Path) -> None:
    assets = load_manifest(manifest)
    count = 0
    for a in assets:
        if a.status != "complete":
            continue
        samples, meta = read_wav(repo / a.wav)
        # Header is ASM-authoritative, but reject metadata drift when present.
        if "agbp" in meta and meta["agbp"] != a.pitch:
            raise RuntimeError(f"{a.label}: agbp changed; edit ASM header/manifest deliberately")
        if "agbl" in meta and meta["agbl"] != a.sample_count_minus_1:
            raise RuntimeError(f"{a.label}: agbl changed; edit ASM header/manifest deliberately")
        data = encode_payload(samples, a)
        rel = Path(a.source_bin).relative_to("audio/direct_sound")
        out = output_root / rel
        out.parent.mkdir(parents=True, exist_ok=True)
        out.write_bytes(data)
        count += 1
    print(f"encoded={count} output_root={output_root}")


def verify_generated(repo: Path, manifest: Path, output_root: Path) -> None:
    assets = load_manifest(manifest)
    checked = 0
    for a in assets:
        if a.status != "complete":
            continue
        rel = Path(a.source_bin).relative_to("audio/direct_sound")
        out = output_root / rel
        if not out.exists():
            raise RuntimeError(f"generated payload missing: {out}")
        data = out.read_bytes()
        if sha1(data) != a.source_sha1 or len(data) != a.expected_size:
            raise RuntimeError(f"generated payload differs from original: {a.label}")
        checked += 1
    print(f"verified_generated={checked}")


def rewrite_sources(repo: Path, manifest: Path) -> None:
    assets = load_manifest(manifest)
    by_source: dict[str, list[Asset]] = {}
    for a in assets:
        if a.status == "complete":
            by_source.setdefault(a.source, []).append(a)

    changed_files = 0
    changed_refs = 0
    for source, items in sorted(by_source.items()):
        path = repo / source
        text = path.read_text(encoding="utf-8")
        original = text
        for a in items:
            old = f'"{a.source_bin}"'
            new = f'"{a.build_bin}"'
            occurrences = text.count(old)
            if occurrences != 1:
                raise RuntimeError(
                    f"{source}: expected one reference to {a.source_bin}, got {occurrences}"
                )
            text = text.replace(old, new, 1)
            changed_refs += 1
        if text != original:
            path.write_text(text, encoding="utf-8")
            changed_files += 1

    print(f"rewritten_source_files={changed_files} rewritten_refs={changed_refs}")


def patch_cmake(repo: Path) -> None:
    path = repo / "CMakeLists.txt"
    text = path.read_text(encoding="utf-8")
    begin = "# BEGIN DIRECTSOUND WAV PIPELINE"
    if begin not in text:
        needle = (
            'file(GLOB_RECURSE AUDIO_SOURCE_BINARIES CONFIGURE_DEPENDS\n'
            '    "${CMAKE_SOURCE_DIR}/audio/*.bin")\n'
        )
        if needle not in text:
            raise RuntimeError("CMake AUDIO_SOURCE_BINARIES block not found")
        block = r'''

# BEGIN DIRECTSOUND WAV PIPELINE
set(AUDIO_BUILD_DIR "${CMAKE_BINARY_DIR}/audio")
set(DIRECTSOUND_MANIFEST
    "${CMAKE_SOURCE_DIR}/audio/direct_sound/manifest.json")
set(DIRECTSOUND_CODEC
    "${CMAKE_SOURCE_DIR}/tools/direct_sound_asset_codec.py")

file(GLOB_RECURSE DIRECTSOUND_WAV_SOURCES CONFIGURE_DEPENDS
    "${CMAKE_SOURCE_DIR}/audio/direct_sound/*.wav")

set(AUDIO_GENERATED_BINARIES)
foreach(DIRECTSOUND_WAV IN LISTS DIRECTSOUND_WAV_SOURCES)
    file(RELATIVE_PATH DIRECTSOUND_RELATIVE
        "${CMAKE_SOURCE_DIR}/audio/direct_sound"
        "${DIRECTSOUND_WAV}")
    string(REGEX REPLACE "[.]wav$" ".bin"
        DIRECTSOUND_BIN_RELATIVE "${DIRECTSOUND_RELATIVE}")
    list(APPEND AUDIO_GENERATED_BINARIES
        "${AUDIO_BUILD_DIR}/direct_sound/${DIRECTSOUND_BIN_RELATIVE}")
endforeach()

if(AUDIO_GENERATED_BINARIES)
    add_custom_command(
        OUTPUT ${AUDIO_GENERATED_BINARIES}
        COMMAND "${CMAKE_COMMAND}" -E make_directory
            "${AUDIO_BUILD_DIR}/direct_sound"
        COMMAND "${Python3_EXECUTABLE}" "${DIRECTSOUND_CODEC}"
            encode-all
            --repo "${CMAKE_SOURCE_DIR}"
            --manifest "${DIRECTSOUND_MANIFEST}"
            --output-root "${AUDIO_BUILD_DIR}/direct_sound"
        DEPENDS
            ${DIRECTSOUND_WAV_SOURCES}
            "${DIRECTSOUND_MANIFEST}"
            "${DIRECTSOUND_CODEC}"
        WORKING_DIRECTORY "${CMAKE_SOURCE_DIR}"
        VERBATIM)
endif()

set_property(DIRECTORY APPEND PROPERTY ADDITIONAL_CLEAN_FILES
    "${AUDIO_BUILD_DIR}")
# END DIRECTSOUND WAV PIPELINE
'''
        text = text.replace(needle, needle + block, 1)

    dep_old = (
        '        ${DATA_INCLUDE_DEPENDENCIES}\n'
        '        ${AUDIO_SOURCE_BINARIES})'
    )
    dep_new = (
        '        ${DATA_INCLUDE_DEPENDENCIES}\n'
        '        ${AUDIO_SOURCE_BINARIES}\n'
        '        ${AUDIO_GENERATED_BINARIES})'
    )
    if '${AUDIO_GENERATED_BINARIES})' not in text:
        if dep_old not in text:
            raise RuntimeError("CMake DATA_OBJECT_DEPENDENCIES audio block not found")
        text = text.replace(dep_old, dep_new, 1)

    path.write_text(text, encoding="utf-8")
    print("patched CMakeLists.txt")


def remove_converted_bins(repo: Path, manifest: Path) -> None:
    assets = load_manifest(manifest)
    removed = 0
    for a in assets:
        if a.status != "complete":
            continue
        path = repo / a.source_bin
        if path.exists():
            path.unlink()
            removed += 1
    print(f"removed_source_bins={removed}")


def print_scan(repo: Path) -> None:
    assets = scan(repo)
    complete = [a for a in assets if a.status == "complete"]
    truncated = [a for a in assets if a.status != "complete"]
    by_flags: dict[str, int] = {}
    for a in assets:
        key = f"0x{a.flags:08X}"
        by_flags[key] = by_flags.get(key, 0) + 1
    print(f"assets={len(assets)} complete={len(complete)} truncated={len(truncated)}")
    print("flags=" + json.dumps(by_flags, sort_keys=True))
    for a in truncated:
        print(
            f"TRUNCATED {a.label} source={a.source_size} expected={a.expected_size} "
            f"short={a.expected_size - a.source_size} path={a.source_bin}"
        )


def parse_args() -> argparse.Namespace:
    ap = argparse.ArgumentParser()
    sub = ap.add_subparsers(dest="cmd", required=True)

    def repo_arg(p: argparse.ArgumentParser) -> None:
        p.add_argument("--repo", type=Path, default=Path("."))

    p = sub.add_parser("scan")
    repo_arg(p)

    p = sub.add_parser("extract")
    repo_arg(p)
    p.add_argument("--manifest", type=Path, required=True)

    p = sub.add_parser("verify-source")
    repo_arg(p)
    p.add_argument("--manifest", type=Path, required=True)

    p = sub.add_parser("rewrite")
    repo_arg(p)
    p.add_argument("--manifest", type=Path, required=True)

    p = sub.add_parser("patch-cmake")
    repo_arg(p)

    p = sub.add_parser("remove-converted-bins")
    repo_arg(p)
    p.add_argument("--manifest", type=Path, required=True)

    p = sub.add_parser("encode-all")
    repo_arg(p)
    p.add_argument("--manifest", type=Path, required=True)
    p.add_argument("--output-root", type=Path, required=True)

    p = sub.add_parser("verify-generated")
    repo_arg(p)
    p.add_argument("--manifest", type=Path, required=True)
    p.add_argument("--output-root", type=Path, required=True)

    return ap.parse_args()


def main() -> int:
    ns = parse_args()
    repo = ns.repo.resolve()

    if ns.cmd == "scan":
        print_scan(repo)
    elif ns.cmd == "extract":
        extract(repo, ns.manifest.resolve())
    elif ns.cmd == "verify-source":
        verify_against_source(repo, ns.manifest.resolve())
    elif ns.cmd == "rewrite":
        rewrite_sources(repo, ns.manifest.resolve())
    elif ns.cmd == "patch-cmake":
        patch_cmake(repo)
    elif ns.cmd == "remove-converted-bins":
        remove_converted_bins(repo, ns.manifest.resolve())
    elif ns.cmd == "encode-all":
        encode_all(repo, ns.manifest.resolve(), ns.output_root.resolve())
    elif ns.cmd == "verify-generated":
        verify_generated(repo, ns.manifest.resolve(), ns.output_root.resolve())
    else:
        raise AssertionError(ns.cmd)
    return 0


if __name__ == "__main__":
    try:
        raise SystemExit(main())
    except Exception as exc:
        print(f"ERROR: {exc}", file=sys.stderr)
        raise
