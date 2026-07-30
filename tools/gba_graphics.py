#!/usr/bin/env python3

from __future__ import annotations

import re
from pathlib import Path
from typing import Iterable

from PIL import Image


ROM_BASE = 0x08000000
ROM_END = 0x0A000000


LZ77_MAX_DISTANCE = 0x1000
LZ77_MAX_LENGTH = 18
LZ77_MIN_LENGTH = 3


def pad_bytes(data: bytes, alignment: int, fill: int = 0) -> bytes:
    """バイト列を指定境界まで埋める。"""
    if alignment <= 0:
        raise ValueError("alignmentは1以上である必要があります")
    if not 0 <= fill <= 0xFF:
        raise ValueError(f"fillが1バイト範囲外です: {fill}")
    padding_size = (-len(data)) % alignment
    return data + bytes([fill]) * padding_size


def find_lz77_longest_match(
    data: bytes,
    position: int,
    *,
    allow_distance_one: bool = False,
) -> tuple[int, int]:
    """GBA LZ77用の最長後方一致を探す。"""
    if not 0 <= position <= len(data):
        raise ValueError(f"positionが範囲外です: {position}")

    window_start = max(0, position - LZ77_MAX_DISTANCE)
    max_length = min(LZ77_MAX_LENGTH, len(data) - position)
    best_length = 0
    best_distance = 0
    nearest_candidate = position - (1 if allow_distance_one else 2)

    for candidate in range(nearest_candidate, window_start - 1, -1):
        distance = position - candidate
        length = 0

        while length < max_length:
            source_byte = data[candidate + (length % distance)]
            if source_byte != data[position + length]:
                break
            length += 1

        if length > best_length:
            best_length = length
            best_distance = distance
            if best_length == max_length:
                break

    if best_length < LZ77_MIN_LENGTH:
        return 0, 0
    return best_length, best_distance


def compress_lz77(
    data: bytes,
    *,
    allow_distance_one: bool = False,
) -> bytes:
    """バイト列をGBA BIOS形式LZ77（type 0x10）へ圧縮する。

    戻り値には末尾アラインメント用パディングを含めない。
    元ROM互換を優先する場合、既定どおり距離1参照を禁止する。
    """
    if len(data) > 0xFFFFFF:
        raise ValueError("入力サイズがGBA LZ77ヘッダーの上限を超えています")

    output = bytearray([0x10])
    output.extend(len(data).to_bytes(3, "little"))
    position = 0

    while position < len(data):
        flag_position = len(output)
        output.append(0)
        flags = 0

        for bit in range(7, -1, -1):
            if position >= len(data):
                break

            length, distance = find_lz77_longest_match(
                data,
                position,
                allow_distance_one=allow_distance_one,
            )
            if length >= LZ77_MIN_LENGTH:
                flags |= 1 << bit
                displacement = distance - 1
                output.append(((length - 3) << 4) | (displacement >> 8))
                output.append(displacement & 0xFF)
                position += length
            else:
                output.append(data[position])
                position += 1

        output[flag_position] = flags

    return bytes(output)


def compress_lz77_aligned(
    data: bytes,
    alignment: int = 4,
    *,
    fill: int = 0,
    allow_distance_one: bool = False,
) -> bytes:
    """LZ77圧縮後、指定境界までパディングする。"""
    compressed = compress_lz77(
        data,
        allow_distance_one=allow_distance_one,
    )
    return pad_bytes(compressed, alignment, fill)


def gba_pointer_to_offset(pointer: int) -> int:
    """GBA ROMポインタをROMファイル内オフセットへ変換する。"""
    if not ROM_BASE <= pointer < ROM_END:
        raise ValueError(f"GBA ROMポインタではありません: 0x{pointer:08X}")
    return pointer - ROM_BASE


def offset_to_gba_pointer(offset: int) -> int:
    """ROMファイル内オフセットをGBA ROMポインタへ変換する。"""
    if offset < 0 or ROM_BASE + offset >= ROM_END:
        raise ValueError(f"ROMオフセットが範囲外です: 0x{offset:X}")
    return ROM_BASE + offset


def decompress_lz77(data: bytes, offset: int = 0) -> tuple[bytes, int]:
    """GBA BIOS形式LZ77（type 0x10）を展開する。

    戻り値:
        (展開後データ, 消費した圧縮データ長)

    消費長には後続のアラインメント用パディングを含めない。
    """
    if offset < 0:
        raise ValueError(f"オフセットが負です: {offset}")
    if offset + 4 > len(data):
        raise ValueError(f"LZ77ヘッダが入力範囲外です: 0x{offset:X}")
    if data[offset] != 0x10:
        raise ValueError(
            f"LZ77形式ではありません: "
            f"offset=0x{offset:X}, type=0x{data[offset]:02X}"
        )

    output_size = int.from_bytes(data[offset + 1:offset + 4], "little")
    src = offset + 4
    output = bytearray()

    while len(output) < output_size:
        if src >= len(data):
            raise ValueError("LZ77フラグが入力範囲を超えました")

        flags = data[src]
        src += 1

        for bit in range(7, -1, -1):
            if len(output) >= output_size:
                break

            if flags & (1 << bit):
                if src + 2 > len(data):
                    raise ValueError("LZ77参照データが入力範囲を超えました")

                value = (data[src] << 8) | data[src + 1]
                src += 2

                length = (value >> 12) + 3
                distance = (value & 0x0FFF) + 1

                if distance > len(output):
                    raise ValueError(
                        f"不正なLZ77参照です: "
                        f"distance={distance}, output={len(output)}"
                    )

                for _ in range(length):
                    output.append(output[-distance])
                    if len(output) >= output_size:
                        break
            else:
                if src >= len(data):
                    raise ValueError("LZ77リテラルが入力範囲を超えました")
                output.append(data[src])
                src += 1

    return bytes(output), src - offset


def extract_lz77(data: bytes, offset: int = 0) -> tuple[bytes, bytes]:
    """圧縮データと展開後データを同時に取り出す。"""
    raw, compressed_size = decompress_lz77(data, offset)
    compressed = data[offset:offset + compressed_size]
    return compressed, raw


def decode_4bpp_tiled(raw: bytes, width: int = 64) -> Image.Image:
    """GBA 4bppタイルデータをインデックスカラー画像へ変換する。"""
    if width <= 0 or width % 8 != 0:
        raise ValueError(f"画像幅は正の8px単位である必要があります: {width}")
    if len(raw) % 32 != 0:
        raise ValueError(
            f"4bppデータサイズが32バイト単位ではありません: 0x{len(raw):X}"
        )

    pixel_count = len(raw) * 2
    if pixel_count % width != 0:
        raise ValueError(
            f"画像サイズを計算できません: raw=0x{len(raw):X}, width={width}"
        )

    height = pixel_count // width
    if height % 8 != 0:
        raise ValueError(f"画像高さが8px単位ではありません: {width}x{height}")

    tiles_x = width // 8
    tile_count = len(raw) // 32
    pixels = bytearray(width * height)

    for tile_index in range(tile_count):
        tile_x = tile_index % tiles_x
        tile_y = tile_index // tiles_x
        tile_offset = tile_index * 32

        for y in range(8):
            for x_pair in range(4):
                value = raw[tile_offset + y * 4 + x_pair]
                x = tile_x * 8 + x_pair * 2
                py = tile_y * 8 + y
                pixels[py * width + x] = value & 0x0F
                pixels[py * width + x + 1] = value >> 4

    image = Image.frombytes("P", (width, height), bytes(pixels))
    grayscale = []
    for index in range(256):
        value = index * 17 if index < 16 else 0
        grayscale.extend((value, value, value))
    image.putpalette(grayscale)
    return image


def decode_bgr555_palette(raw: bytes) -> list[tuple[int, int, int]]:
    """GBA BGR555パレットを8bit RGBの一覧へ変換する。"""
    if len(raw) % 2 != 0:
        raise ValueError(f"パレットサイズが2バイト単位ではありません: 0x{len(raw):X}")

    colors: list[tuple[int, int, int]] = []
    for offset in range(0, len(raw), 2):
        value = int.from_bytes(raw[offset:offset + 2], "little")
        red5 = value & 0x1F
        green5 = (value >> 5) & 0x1F
        blue5 = (value >> 10) & 0x1F
        colors.append(
            (
                (red5 << 3) | (red5 >> 2),
                (green5 << 3) | (green5 >> 2),
                (blue5 << 3) | (blue5 >> 2),
            )
        )
    return colors


def encode_bgr555_palette(colors: Iterable[tuple[int, int, int]]) -> bytes:
    """8bit RGB色一覧をGBA BGR555パレットへ変換する。"""
    output = bytearray()
    for index, (red, green, blue) in enumerate(colors):
        if not all(0 <= component <= 255 for component in (red, green, blue)):
            raise ValueError(f"RGB値が範囲外です: index={index}, rgb={(red, green, blue)}")
        red5 = red >> 3
        green5 = green >> 3
        blue5 = blue >> 3
        value = red5 | (green5 << 5) | (blue5 << 10)
        output.extend(value.to_bytes(2, "little"))
    return bytes(output)


def apply_palette(image: Image.Image, colors: Iterable[tuple[int, int, int]]) -> Image.Image:
    """Pモード画像へパレットを設定する。"""
    if image.mode != "P":
        raise ValueError(f"Pモード画像ではありません: {image.mode}")

    palette: list[int] = []
    color_list = list(colors)
    if len(color_list) > 256:
        raise ValueError(f"色数が256色を超えています: {len(color_list)}")

    for red, green, blue in color_list:
        palette.extend((red, green, blue))
    palette.extend([0] * (768 - len(palette)))

    result = image.copy()
    result.putpalette(palette)
    return result


def palette_preview(
    colors: Iterable[tuple[int, int, int]],
    cell_size: int = 24,
    columns: int = 16,
) -> Image.Image:
    """パレットを色見本PNG用のRGB画像へ変換する。"""
    color_list = list(colors)
    if cell_size <= 0 or columns <= 0:
        raise ValueError("cell_sizeとcolumnsは正の値である必要があります")
    if not color_list:
        raise ValueError("パレットが空です")

    rows = (len(color_list) + columns - 1) // columns
    image = Image.new("RGB", (columns * cell_size, rows * cell_size))

    for index, color in enumerate(color_list):
        left = (index % columns) * cell_size
        top = (index // columns) * cell_size
        for y in range(top, top + cell_size):
            for x in range(left, left + cell_size):
                image.putpixel((x, y), color)
    return image


def sanitize_filename(name: str) -> str:
    """ラベル名を安全なファイル名へ変換する。"""
    return re.sub(r"[^A-Za-z0-9_.-]", "_", name)


def read_label_names(
    path: Path,
    pattern: str,
    count: int | None = None,
) -> list[str]:
    """正規表現の第1キャプチャをラベル名一覧として読み出す。"""
    text = path.read_text(encoding="utf-8")
    names = re.findall(pattern, text, flags=re.MULTILINE)

    if count is not None and len(names) != count:
        raise ValueError(
            f"ラベル数が一致しません: {len(names)}件（必要: {count}件）"
        )
    return names
