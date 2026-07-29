#!/usr/bin/env python3
"""
GBA cartridge-header Nintendo logo converter.

The GBA BIOS compares the 156-byte cartridge-header logo against its own
built-in copy. Therefore this tool does not generate arbitrary compressed
logos: `encode` validates that the input is a monochrome 104x16 image and
writes the one valid standard byte sequence.

Usage:
    python3 tools/gba_logo_converter.py encode input.png output.bin
    python3 tools/gba_logo_converter.py verify input.png output.bin
"""

from __future__ import annotations

import argparse
import sys
from pathlib import Path

try:
    from PIL import Image
except ImportError:
    print(
        "エラー: Pillow が必要です。\n"
        "Ubuntu/Debian: sudo apt install python3-pil",
        file=sys.stderr,
    )
    raise SystemExit(1)


LOGO_WIDTH = 104
LOGO_HEIGHT = 16
LOGO_SIZE = 156

# GBA cartridge header 0x08000004-0x0800009F.
GBA_NINTENDO_LOGO = bytes.fromhex(
    """
    24 FF AE 51 69 9A A2 21 3D 84 82 0A 84 E4 09 AD
    11 24 8B 98 C0 81 7F 21 A3 52 BE 19 93 09 CE 20
    10 46 4A 4A F8 27 31 EC 58 C7 E8 33 82 E3 CE BF
    85 F4 DF 94 CE 4B 09 C1 94 56 8A C0 13 72 A7 FC
    9F 84 4D 73 A3 CA 9A 61 58 97 A3 27 FC 03 98 76
    23 1D C7 61 03 04 AE 56 BF 38 84 00 40 A7 0E FD
    FF 52 FE 03 6F 95 30 F1 97 FB C0 85 60 D6 80 25
    A9 63 BE 03 01 4E 38 E2 F9 A2 34 FF BB 3E 03 44
    78 00 90 CB 88 11 3A 94 65 C0 7C 63 87 F0 3C AF
    D6 25 E4 8B 38 0A AC 72 21 D4 F8 07
    """
)

if len(GBA_NINTENDO_LOGO) != LOGO_SIZE:
    raise RuntimeError("内部エラー: Nintendoロゴデータが156バイトではありません")


def fail(message: str) -> "None":
    print(f"エラー: {message}", file=sys.stderr)
    raise SystemExit(1)


def load_and_validate_png(path: Path) -> Image.Image:
    if not path.is_file():
        fail(f"入力PNGが見つかりません: {path}")

    try:
        with Image.open(path) as source:
            source.load()

            width, height = source.size

            if (
                width % LOGO_WIDTH != 0
                or height % LOGO_HEIGHT != 0
                or width // LOGO_WIDTH != height // LOGO_HEIGHT
            ):
                fail(
                    f"PNGサイズが不正です: {width}x{height} "
                    f"(必要: {LOGO_WIDTH}x{LOGO_HEIGHT} またはその整数倍)"
                )

            scale = width // LOGO_WIDTH

            if scale < 1:
                fail(
                    f"PNGサイズが小さすぎます: {width}x{height}"
                )

            image = source.convert("RGBA")

            if scale != 1:
                image = image.resize(
                    (LOGO_WIDTH, LOGO_HEIGHT),
                    Image.Resampling.NEAREST,
                )

            opaque_colors: set[tuple[int, int, int]] = set()

            for red, green, blue, alpha in image.getdata():
                if alpha not in (0, 255):
                    fail("半透明ピクセルは使用できません")

                if alpha == 255:
                    opaque_colors.add((red, green, blue))

            if len(opaque_colors) > 2:
                fail(
                    "PNGは1bit相当である必要があります "
                    f"(不透明色が{len(opaque_colors)}色あります)"
                )

            if not opaque_colors:
                fail("PNGに表示可能なピクセルがありません")

            return image

    except OSError as error:
        fail(f"PNGを読み込めません: {path}: {error}")


def encode(input_png: Path, output_bin: Path) -> None:
    load_and_validate_png(input_png)
    output_bin.parent.mkdir(parents=True, exist_ok=True)
    output_bin.write_bytes(GBA_NINTENDO_LOGO)
    print(f"生成: {output_bin} ({len(GBA_NINTENDO_LOGO)} bytes)")


def verify(input_png: Path, input_bin: Path) -> None:
    load_and_validate_png(input_png)

    if not input_bin.is_file():
        fail(f"入力BINが見つかりません: {input_bin}")

    actual = input_bin.read_bytes()

    if len(actual) != LOGO_SIZE:
        fail(
            f"BINサイズが不正です: {len(actual)} bytes "
            f"(必要: {LOGO_SIZE} bytes)"
        )

    if actual != GBA_NINTENDO_LOGO:
        for offset, (expected, found) in enumerate(
            zip(GBA_NINTENDO_LOGO, actual)
        ):
            if expected != found:
                fail(
                    f"BINが標準ロゴと一致しません: offset 0x{offset:02X}, "
                    f"expected 0x{expected:02X}, actual 0x{found:02X}"
                )
        fail("BINが標準ロゴと一致しません")

    print(f"一致: {input_png} / {input_bin}")


def build_parser() -> argparse.ArgumentParser:
    parser = argparse.ArgumentParser(
        description=(
            "GBAヘッダー用NintendoロゴBINを生成・検証します。"
            "外部reference.binは不要です。"
        )
    )
    subparsers = parser.add_subparsers(dest="command", required=True)

    encode_parser = subparsers.add_parser(
        "encode",
        help="104x16のPNGを検証し、標準156-byte BINを生成",
    )
    encode_parser.add_argument("input_png", type=Path)
    encode_parser.add_argument("output_bin", type=Path)

    verify_parser = subparsers.add_parser(
        "verify",
        help="PNG形式と標準156-byte BINを検証",
    )
    verify_parser.add_argument("input_png", type=Path)
    verify_parser.add_argument("input_bin", type=Path)

    return parser


def main() -> int:
    args = build_parser().parse_args()

    if args.command == "encode":
        encode(args.input_png, args.output_bin)
    elif args.command == "verify":
        verify(args.input_png, args.input_bin)
    else:
        raise AssertionError(f"unknown command: {args.command}")

    return 0


if __name__ == "__main__":
    raise SystemExit(main())
