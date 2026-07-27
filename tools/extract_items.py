#!/usr/bin/env python3

from pathlib import Path
import struct

ROM_PATH = Path("baserom.gba")
OUTPUT_PATH = Path("data/items/items.inc")

ITEM_TABLE_OFFSET = 0x55CEE8
ITEM_STRUCT_SIZE = 0x28
ITEM_COUNT = 377


def u16(data: bytes, offset: int) -> int:
    return struct.unpack_from("<H", data, offset)[0]


def u32(data: bytes, offset: int) -> int:
    return struct.unpack_from("<I", data, offset)[0]


def format_name_bytes(data: bytes) -> str:
    return ", ".join(f"0x{value:02X}" for value in data)


def main() -> None:
    if not ROM_PATH.exists():
        raise SystemExit(f"{ROM_PATH} が見つかりません")

    rom = ROM_PATH.read_bytes()

    table_end = ITEM_TABLE_OFFSET + ITEM_STRUCT_SIZE * ITEM_COUNT
    if len(rom) < table_end:
        raise SystemExit(
            f"ROMが小さすぎます: 必要サイズ={table_end:#x}, "
            f"実際={len(rom):#x}"
        )

    lines: list[str] = []

    lines.extend(
        [
            "@ Auto-generated from baserom.gba by tools/extract_items.py",
            "@",
            "@ Item structure size: 0x28 bytes",
            "@ Item count: 377",
            "@",
            "@ 名前部分は10バイト固定です。",
            "@ tools/charmap.txt に従って .string に置き換えることもできますが、",
            "@ ROM完全一致を維持するため、初期状態では生バイトで出力します。",
            "",
        ]
    )

    for index in range(ITEM_COUNT):
        rom_offset = ITEM_TABLE_OFFSET + index * ITEM_STRUCT_SIZE
        entry = rom[rom_offset : rom_offset + ITEM_STRUCT_SIZE]

        name = entry[0x00:0x0A]
        item_id = u16(entry, 0x0A)
        price = u16(entry, 0x0C)
        hold_effect = entry[0x0E]
        hold_effect_param = entry[0x0F]
        description = u32(entry, 0x10)
        importance = entry[0x14]
        exits_bag_on_use = entry[0x15]
        pocket = entry[0x16]
        item_type = entry[0x17]
        field_use_func = u32(entry, 0x18)
        field_1c = u32(entry, 0x1C)
        field_20 = u32(entry, 0x20)
        field_24 = u32(entry, 0x24)

        lines.extend(
            [
                "@ ------------------------------------------------------------------",
                f"@ Item table index: {index}",
                f"@ ROM offset: 0x{rom_offset:08X}",
                f"@ Stored item ID: 0x{item_id:04X}",
                "@ ------------------------------------------------------------------",
                f"gItem_{index:03d}:",
                f"\t.byte {format_name_bytes(name)}    @ name[10]",
                f"\t.2byte 0x{item_id:04X}            @ itemId",
                f"\t.2byte {price}                     @ price",
                f"\t.byte 0x{hold_effect:02X}          @ holdEffect",
                f"\t.byte 0x{hold_effect_param:02X}    @ holdEffectParam",
                f"\t.4byte 0x{description:08X}         @ description",
                f"\t.byte {importance}                 @ importance",
                f"\t.byte {exits_bag_on_use}           @ exitsBagOnUse",
                f"\t.byte 0x{pocket:02X}               @ pocket",
                f"\t.byte 0x{item_type:02X}            @ type",
                f"\t.4byte 0x{field_use_func:08X}      @ fieldUseFunc",
                f"\t.4byte 0x{field_1c:08X}            @ field_1C",
                f"\t.4byte 0x{field_20:08X}            @ field_20",
                f"\t.4byte 0x{field_24:08X}            @ field_24",
                "",
            ]
        )

    OUTPUT_PATH.parent.mkdir(parents=True, exist_ok=True)
    OUTPUT_PATH.write_text("\n".join(lines), encoding="utf-8")

    print(f"{OUTPUT_PATH} を生成しました")
    print(f"アイテム数: {ITEM_COUNT}")
    print(f"開始位置: 0x{ITEM_TABLE_OFFSET:08X}")
    print(f"終了位置: 0x{table_end:08X}")


if __name__ == "__main__":
    main()
