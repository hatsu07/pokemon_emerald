	@ Six JP-only bytes following the 22-entry table.
	.byte 0xF7, 0x00, 0xAF, 0xF7, 0x01, 0xFF
	.globl gUnknown_82C2454
gUnknown_82C2454: @ 0x082C2454
sTextboxBorder_Pal:
	.2byte 0x4A52 @ RGB5(18, 18, 18)
	.2byte 0x7EF2 @ RGB5(18, 23, 31)
	.2byte 0x7F93 @ RGB5(19, 28, 31)
	.2byte 0x7FF9 @ RGB5(25, 31, 31)
	.2byte 0x79AC @ RGB5(12, 13, 30)
	.2byte 0x56D4 @ RGB5(20, 22, 21)
	.2byte 0x6338 @ RGB5(24, 25, 24)
	.2byte 0x6F9B @ RGB5(27, 28, 27)
	.2byte 0x7FFF @ RGB5(31, 31, 31)
	.2byte 0x0000 @ RGB5(0, 0, 0)
	.2byte 0x0000 @ RGB5(0, 0, 0)
	.2byte 0x0000 @ RGB5(0, 0, 0)
	.2byte 0x318C @ RGB5(12, 12, 12)
	.2byte 0x4A52 @ RGB5(18, 18, 18)
	.2byte 0x6318 @ RGB5(24, 24, 24)
	.2byte 0x0000 @ RGB5(0, 0, 0)
	.globl gUnknown_82C2474
gUnknown_82C2474: @ 0x082C2474
sTextboxBorder_Gfx:
	@ GBA LZ77 stream, decompressed size 0x100 bytes.
	.4byte 0x00010010
	.4byte 0xF0000033
	.4byte 0x22019001
	.4byte 0x9001F022
	.4byte 0x11113301
	.4byte 0x019001F0
	.4byte 0x01F04444
	.4byte 0xF0FE0190
	.4byte 0xF001F071
	.4byte 0xF001F001
	.4byte 0xF001F001
	.4byte 0x00000001
	.globl gUnknown_82C24A4
gUnknown_82C24A4: @ 0x082C24A4
sBGTemplates:
	.4byte 0x000000F8 @ BG0: charBase=2, mapBase=15, priority=0
	.4byte 0x000010E1 @ BG1: charBase=0, mapBase=14, priority=1
	.4byte 0x000020D2 @ BG2: charBase=0, mapBase=13, priority=2
	.4byte 0x000030C3 @ BG3: charBase=0, mapBase=12, priority=3
	.globl gUnknown_82C24B4
gUnknown_82C24B4: @ 0x082C24B4
sMainWindows:
sWindowTemplate_MysteryGiftHeader:
	.byte 0 @ bg
	.byte 0 @ tilemapLeft
	.byte 0 @ tilemapTop
	.byte 30 @ width
	.byte 2 @ height
	.byte 12 @ paletteNum
	.2byte 0x0013 @ baseBlock

sWindowTemplate_MysteryGiftMessage:
	.byte 0 @ bg
	.byte 1 @ tilemapLeft
	.byte 15 @ tilemapTop
	.byte 28 @ width
	.byte 4 @ height
	.byte 12 @ paletteNum
	.2byte 0x004F @ baseBlock

sWindowTemplate_MysteryGiftUnused:
	.byte 0 @ bg
	.byte 0 @ tilemapLeft
	.byte 15 @ tilemapTop
	.byte 30 @ width
	.byte 5 @ height
	.byte 13 @ paletteNum
	.2byte 0x004F @ baseBlock

sWindowTemplate_MysteryGiftDummy:
	.byte 0xFF, 0, 0, 0, 0, 0
	.2byte 0
	.globl gUnknown_82C24D4
gUnknown_82C24D4: @ 0x082C24D4
sWindowTemplate_YesNoMsg_Wide:
	.byte 0 @ bg
	.byte 1 @ tilemapLeft
	.byte 15 @ tilemapTop
	.byte 28 @ width
	.byte 4 @ height
	.byte 12 @ paletteNum
	.2byte 0x00E5 @ baseBlock
	.globl gUnknown_82C24DC
gUnknown_82C24DC: @ 0x082C24DC
sWindowTemplate_YesNoMsg:
	.byte 0 @ bg
	.byte 1 @ tilemapLeft
	.byte 15 @ tilemapTop
	.byte 20 @ width
	.byte 4 @ height
	.byte 12 @ paletteNum
	.2byte 0x00E5 @ baseBlock
	.globl gUnknown_82C24E4
gUnknown_82C24E4: @ 0x082C24E4
sWindowTemplate_GiftSelect:
	.byte 0 @ bg
	.byte 1 @ tilemapLeft
	.byte 15 @ tilemapTop
	.byte 19 @ width
	.byte 4 @ height
	.byte 12 @ paletteNum
	.2byte 0x00E5 @ baseBlock
	.globl gUnknown_82C24EC
gUnknown_82C24EC: @ 0x082C24EC
sWindowTemplate_ThreeOptions:
	.byte 0 @ bg
	.byte 8 @ tilemapLeft
	.byte 6 @ tilemapTop
	.byte 14 @ width
	.byte 6 @ height
	.byte 12 @ paletteNum
	.2byte 0x0155 @ baseBlock
	.globl gUnknown_82C24F4
gUnknown_82C24F4: @ 0x082C24F4
sWindowTemplate_YesNoBox:
	.byte 0 @ bg
	.byte 23 @ tilemapLeft
	.byte 15 @ tilemapTop
	.byte 5 @ width
	.byte 4 @ height
	.byte 12 @ paletteNum
	.2byte 0x0155 @ baseBlock
	.globl gUnknown_82C24FC
gUnknown_82C24FC: @ 0x082C24FC
sWindowTemplate_GiftSelect_3Options:
	.byte 0 @ bg
	.byte 22 @ tilemapLeft
	.byte 11 @ tilemapTop
	.byte 6 @ width
	.byte 8 @ height
	.byte 12 @ paletteNum
	.2byte 0x0155 @ baseBlock
	.globl gUnknown_82C2504
gUnknown_82C2504: @ 0x082C2504
sWindowTemplate_GiftSelect_2Options:
	.byte 0 @ bg
	.byte 22 @ tilemapLeft
	.byte 13 @ tilemapTop
	.byte 6 @ width
	.byte 6 @ height
	.byte 12 @ paletteNum
	.2byte 0x0155 @ baseBlock
	.globl gUnknown_82C250C
gUnknown_82C250C: @ 0x082C250C
sWindowTemplate_GiftSelect_1Option:
	.byte 0 @ bg
	.byte 22 @ tilemapLeft
	.byte 15 @ tilemapTop
	.byte 6 @ width
	.byte 4 @ height
	.byte 12 @ paletteNum
	.2byte 0x0155 @ baseBlock

	@ src/data/union_room.h:551 sText_WonderCards (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2C2514
gText_Rom_2C2514: @ 0x082C2514
	.globl gText_WonderCards
gText_WonderCards:
	.string "ふしぎなカード$"
	.if (. - gText_Rom_2C2514) != 0x8
	.error "gText_Rom_2C2514 must retain its original byte length"
	.endif
	.globl gText_Rom_2C2518
	.set gText_Rom_2C2518, gText_Rom_2C2514 + 0x4

	@ src/data/union_room.h:552 sText_WonderNews (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2C251C
gText_Rom_2C251C: @ 0x082C251C
	.globl gText_WonderNews
gText_WonderNews:
	.string "ふしぎなニュース$"
	.if (. - gText_Rom_2C251C) != 0x9
	.error "gText_Rom_2C251C must retain its original byte length"
	.endif
	.globl gText_Rom_2C2520
	.set gText_Rom_2C2520, gText_Rom_2C251C + 0x4
sText_JoySpot: @ 0x082C2525
	.string "　　　ジョイスポット$"
