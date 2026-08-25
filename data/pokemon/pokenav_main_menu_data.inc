	@ pret/pokeemerald-jp direct xref for 0x085EF9E0: pokenav_main_menu.s: LoopedTask_InitPokenavMenu
	.globl gPokenavMainMenuData_085EF9E0
gPokenavMainMenuData_085EF9E0: @ 0x085EF9E0
	@ analyzed canonical ROM range 0x085EF9E0-0x085EF9FF
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x20 bytes=32
	.byte 0x00, 0x00, 0xFF, 0x7F, 0x00, 0x00, 0x18, 0x67, 0x64, 0x4B, 0xAD, 0x5B, 0xF6, 0x6B, 0x1A, 0x7F
	.byte 0x9D, 0x7F, 0xFF, 0x5A, 0x7F, 0x6B, 0x57, 0x02, 0xBD, 0x73, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	@ semantic exact asset for 0x085EFA00: gPokenavHeader_Gfx
	.globl gPokenavHeader_Gfx
gPokenavHeader_Gfx:
	.incbin "build/graphics/pokenav/header.4bpp.lz"
	.if (. - gPokenavHeader_Gfx) != 0x22C
	.error "gPokenavHeader_Gfx compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x085EFC2C: pokenav_main_menu.s: LoopedTask_InitPokenavMenu
.globl gPokenavHeader_Tilemap
gPokenavHeader_Tilemap: @ 0x085EFC2C
	@ confirmed GBA LZ77 stream: compressed=0x17B, decompressed=0x800
	@ analyzed canonical ROM range 0x085EFC2C-0x085F021B
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: 3 exact LZ77 assets extracted from this former raw block; non-LZ residual bytes remain literal
	.incbin "build/graphics/pokenav/header_rom_exact.tilemap.lz"
	.byte 0x00, 0xFF, 0x7F, 0x95, 0x15, 0x55, 0x4A, 0xB6, 0x56, 0x1F, 0x3B, 0xFE, 0x31, 0x94, 0x66, 0x8C
	.byte 0x79, 0xFF, 0x7F, 0xC1, 0x7E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x39, 0x6B, 0xB5
	.byte 0x5E
	.globl gLz77Asset_085EFDC8
gLz77Asset_085EFDC8: @ 0x085EFDC8
	.incbin "build/assets/lz77_raw/085EFDC8.bin.lz"
	.byte 0x00, 0x00
	.globl gLz77Asset_085F01AC
gLz77Asset_085F01AC: @ 0x085F01AC
	.incbin "build/assets/lz77_raw/085F01AC.bin.lz"
	@ pret/pokeemerald-jp direct xref for 0x085F021C: pokenav_main_menu.s: LoadLeftHeaderGfxForMenu, LoadLeftHeaderGfxForSubMenu
	.globl gPokenavMainMenuData_085F021C
gPokenavMainMenuData_085F021C: @ 0x085F021C
	@ analyzed canonical ROM range 0x085F021C-0x085F13C7
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: 12 exact LZ77 assets extracted from this former raw block; non-LZ residual bytes remain literal
	.byte 0x00, 0x00, 0xFF, 0x7F, 0x4A, 0x25, 0xB5, 0x56, 0x1E, 0x1B, 0xBF, 0x33, 0x5C, 0x02, 0x00, 0x00
	.byte 0x04, 0x37, 0xF2, 0x33, 0x29, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x7F
	.byte 0x00, 0x00, 0xFF, 0x7F, 0x4A, 0x25, 0xB5, 0x56, 0x1E, 0x1B, 0xBF, 0x33, 0x5C, 0x02, 0x00, 0x00
	.byte 0x4D, 0x6D, 0xD8, 0x7E, 0x0A, 0x51, 0x0C, 0x7B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x7F
	.byte 0x00, 0x00, 0xFF, 0x7F, 0x4A, 0x25, 0xB5, 0x56, 0x1E, 0x1B, 0xBF, 0x33, 0x5C, 0x02, 0x00, 0x00
	.byte 0xBE, 0x35, 0xBF, 0x52, 0x39, 0x21, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x7F
	.byte 0x00, 0x00, 0xFF, 0x7F, 0x4A, 0x25, 0xB5, 0x56, 0x1E, 0x1B, 0xBF, 0x33, 0x5C, 0x02, 0x00, 0x00
	.byte 0xB6, 0x3E, 0x5B, 0x53, 0xF0, 0x25, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x7F
	.byte 0x00, 0x00, 0xFF, 0x7F, 0x4A, 0x25, 0xB5, 0x56, 0x1E, 0x1B, 0xBF, 0x33, 0x5C, 0x02, 0x00, 0x00
	.byte 0x1F, 0x11, 0x5F, 0x2E, 0x16, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.globl gLz77Asset_085F02BC
gLz77Asset_085F02BC: @ 0x085F02BC
	.incbin "build/assets/lz77_raw/085F02BC.bin.lz"
	.byte 0x00
	.globl gLz77Asset_085F0428
gLz77Asset_085F0428: @ 0x085F0428
	.incbin "build/assets/lz77_raw/085F0428.bin.lz"
	.byte 0x00, 0x00
	.globl gLz77Asset_085F0598
gLz77Asset_085F0598: @ 0x085F0598
	.incbin "build/assets/lz77_raw/085F0598.bin.lz"
	.byte 0x00, 0x00
	.globl gLz77Asset_085F073C
gLz77Asset_085F073C: @ 0x085F073C
	.incbin "build/graphics/pokeblock/use_screen/condition_rom_exact.4bpp.lz"
	.byte 0x00
	.globl gLz77Asset_085F08B0
gLz77Asset_085F08B0: @ 0x085F08B0
	.incbin "build/assets/lz77_raw/085F08B0.bin.lz"
	.byte 0x00, 0x00, 0x00
	.globl gLz77Asset_085F0B24
gLz77Asset_085F0B24: @ 0x085F0B24
	.incbin "build/assets/lz77_raw/085F0B24.bin.lz"
	.byte 0x00
	.globl gLz77Asset_085F0C8C
gLz77Asset_085F0C8C: @ 0x085F0C8C
	.incbin "build/assets/lz77_raw/085F0C8C.bin.lz"
	.byte 0x00, 0x00, 0x00
	.globl gLz77Asset_085F0DEC
gLz77Asset_085F0DEC: @ 0x085F0DEC
	.incbin "build/assets/lz77_raw/085F0DEC.bin.lz"
	.globl gLz77Asset_085F0F00
gLz77Asset_085F0F00: @ 0x085F0F00
	.incbin "build/assets/lz77_raw/085F0F00.bin.lz"
	.byte 0x00
	.globl gLz77Asset_085F1034
gLz77Asset_085F1034: @ 0x085F1034
	.incbin "build/assets/lz77_raw/085F1034.bin.lz"
	.byte 0x00, 0x00
	.globl gLz77Asset_085F116C
gLz77Asset_085F116C: @ 0x085F116C
	.incbin "build/assets/lz77_raw/085F116C.bin.lz"
	.byte 0x00
	.globl gLz77Asset_085F1288
gLz77Asset_085F1288: @ 0x085F1288
	.incbin "build/assets/lz77_raw/085F1288.bin.lz"
	.byte 0x00, 0x00
	@ pret/pokeemerald-jp direct xref for 0x085F13C8: pokenav_main_menu.s: LoopedTask_InitPokenavMenu
	.globl gPokenavMainMenuData_085F13C8
gPokenavMainMenuData_085F13C8: @ 0x085F13C8
	@ analyzed canonical ROM range 0x085F13C8-0x085F13CB
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x4 bytes=4
	.byte 0x50, 0x00, 0x00, 0x00
	@ pret/pokeemerald-jp direct xref for 0x085F13CC: pokenav_main_menu.s: sub_081C7334
	.globl gPokenavMainMenuData_085F13CC
gPokenavMainMenuData_085F13CC: @ 0x085F13CC
	@ analyzed canonical ROM range 0x085F13CC-0x085F13DB
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x10 entries=8
	.2byte 0x0100, 0x1016, 0x0002, 0x0036, 0x00FF, 0x0000, 0x0000, 0x0000
	@ pret/pokeemerald-jp direct xref for 0x085F13DC: pokenav_main_menu.s: sub_081C7364
	.globl gPokenavMainMenuData_085F13DC
gPokenavMainMenuData_085F13DC: @ 0x085F13DC
	@ confirmed contiguous ROM pointer table: 12 entries from this address
sPointerTable_085F13DC:
	@ analyzed canonical ROM range 0x085F13DC-0x085F140B
	@ pointer/nullable table
	.4byte gText_PokenavMatchCall_SelfIntroduction + 0x8 @ +0x0
	.4byte gText_PokenavMatchCall_SelfIntroduction + 0x19 @ +0x4
	.4byte sInfoText_ChoiceBack_Copy_Battle_5CB71D + 0x4 @ +0x8
	.4byte gText_Rom_5CB72A + 0x4 @ +0xC
	.4byte gText_Rom_5CB73D + 0x4 @ +0x10
	.4byte gText_Rom_5CB74B + 0x4 @ +0x14
	.4byte sText_BButtonCancel_Copy_UnionRoom + 0x6 @ +0x18
	.4byte sInfoText_ChoiceBack_Copy_Battle_5CB768 + 0x4 @ +0x1C
	.4byte gText_Rom_5CB775 + 0x4 @ +0x20
	.4byte gText_Rom_5CB77B + 0x4 @ +0x24
	.4byte gText_Rom_5CB78A + 0x4 @ +0x28
	.4byte gText_Rom_5CB798 + 0x4 @ +0x2C
	@ pret/pokeemerald-jp direct xref for 0x085F140C: pokenav_main_menu.s: sub_081C7364
	.globl gPokenavMainMenuData_085F140C
gPokenavMainMenuData_085F140C: @ 0x085F140C
	@ analyzed canonical ROM range 0x085F140C-0x085F140F
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x4 bytes=4
	.byte 0x04, 0x01, 0x02, 0x00
	@ pret/pokeemerald-jp direct xref for 0x085F1410: pokenav_main_menu.s: InitPokenavMainMenuResources
	.globl gPokenavMainMenuData_085F1410
gPokenavMainMenuData_085F1410: @ 0x085F1410
	@ analyzed canonical ROM range 0x085F1410-0x085F1417
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: PROVEN_POINTER_FIELD addr=0x085F1410 size=0x4 source=v53_repeated_layout_exact_elf_symbol
	.4byte gLz77Asset_085EFDC8
	@ ANALYSIS: COMPRESSED_SPRITE_SHEET_META size=0x4 addr=0x085F1414 parent=gPokenavMainMenuData_085F1410 sheetSize=0x1000 tag=0
	@ ANALYSIS: SOURCE_RANGE addr=0x085F1414 size=0x4
	.2byte 0x1000, 0 @ size, tag
	@ pret/pokeemerald-jp direct xref for 0x085F1418: pokenav_main_menu.s: InitPokenavMainMenuResources
	.globl gPokenavMainMenuData_085F1418
gPokenavMainMenuData_085F1418: @ 0x085F1418
	@ analyzed canonical ROM range 0x085F1418-0x085F1427
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x10 entries=8
	.2byte 0xFDA8, 0x085E, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000
	@ pret/pokeemerald-jp direct xref for 0x085F1428: pokenav_main_menu.s: InitHoennMapHeaderSprites
	.globl gPokenavMainMenuData_085F1428
gPokenavMainMenuData_085F1428: @ 0x085F1428
	@ analyzed canonical ROM range 0x085F1428-0x085F142F
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: PROVEN_POINTER_FIELD addr=0x085F1428 size=0x4 source=v53_repeated_layout_exact_elf_symbol
	.4byte gLz77Asset_085F08B0
	@ ANALYSIS: COMPRESSED_SPRITE_SHEET_META size=0x4 addr=0x085F142C parent=gPokenavMainMenuData_085F1428 sheetSize=0xC00 tag=2
	@ ANALYSIS: SOURCE_RANGE addr=0x085F142C size=0x4
	.2byte 0xC00, 2 @ size, tag
	@ pret/pokeemerald-jp direct xref for 0x085F1430: pokenav_main_menu.s: LoadLeftHeaderGfxForMenu
	.globl gPokenavMainMenuData_085F1430
gPokenavMainMenuData_085F1430: @ 0x085F1430
	@ analyzed canonical ROM range 0x085F1430-0x085F145F
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x085F1430 size=0x4 source=v54_multi_pointer
	.4byte gLz77Asset_085F02BC
	@ ANALYSIS: POKENAV_LEFT_HEADER_MENU_META size=0x4 addr=0x085F1434 parent=gPokenavMainMenuData_085F1430 offset=0x4 tileOffset=32 paletteIndex=3
	@ ANALYSIS: SOURCE_RANGE addr=0x085F1434 size=0x4
	.2byte 32, 3 @ tileOffset, paletteIndex
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x085F1438 size=0x4 source=v54_multi_pointer
	.4byte gLz77Asset_085F073C
	@ ANALYSIS: POKENAV_LEFT_HEADER_MENU_META size=0x4 addr=0x085F143C parent=gPokenavMainMenuData_085F1430 offset=0xC tileOffset=32 paletteIndex=1
	@ ANALYSIS: SOURCE_RANGE addr=0x085F143C size=0x4
	.2byte 32, 1 @ tileOffset, paletteIndex
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x085F1440 size=0x4 source=v54_multi_pointer
	.4byte gLz77Asset_085F0598
	@ ANALYSIS: POKENAV_LEFT_HEADER_MENU_META size=0x4 addr=0x085F1444 parent=gPokenavMainMenuData_085F1430 offset=0x14 tileOffset=32 paletteIndex=2
	@ ANALYSIS: SOURCE_RANGE addr=0x085F1444 size=0x4
	.2byte 32, 2 @ tileOffset, paletteIndex
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x085F1448 size=0x4 source=v54_multi_pointer
	.4byte gLz77Asset_085F0428
	@ ANALYSIS: POKENAV_LEFT_HEADER_MENU_META size=0x4 addr=0x085F144C parent=gPokenavMainMenuData_085F1430 offset=0x1C tileOffset=32 paletteIndex=4
	@ ANALYSIS: SOURCE_RANGE addr=0x085F144C size=0x4
	.2byte 32, 4 @ tileOffset, paletteIndex
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x085F1450 size=0x4 source=v54_multi_pointer
	.4byte gLz77Asset_085F08B0
	@ ANALYSIS: POKENAV_LEFT_HEADER_MENU_META size=0x4 addr=0x085F1454 parent=gPokenavMainMenuData_085F1430 offset=0x24 tileOffset=32 paletteIndex=0
	@ ANALYSIS: SOURCE_RANGE addr=0x085F1454 size=0x4
	.2byte 32, 0 @ tileOffset, paletteIndex
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x085F1458 size=0x4 source=v54_multi_pointer
	.4byte gLz77Asset_085F08B0
	@ ANALYSIS: POKENAV_LEFT_HEADER_MENU_META size=0x4 addr=0x085F145C parent=gPokenavMainMenuData_085F1430 offset=0x2C tileOffset=64 paletteIndex=0
	@ ANALYSIS: SOURCE_RANGE addr=0x085F145C size=0x4
	.2byte 64, 0 @ tileOffset, paletteIndex
	@ pret/pokeemerald-jp direct xref for 0x085F1460: pokenav_main_menu.s: LoadLeftHeaderGfxForSubMenu
	.globl gPokenavMainMenuData_085F1460
gPokenavMainMenuData_085F1460: @ 0x085F1460
	@ analyzed canonical ROM range 0x085F1460-0x085F14C7
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x085F1460 size=0x4 source=v54_multi_pointer
	.4byte gLz77Asset_085F0B24
	@ ANALYSIS: POKENAV_LEFT_HEADER_SUBMENU_PALETTE_INDEX size=0x4 addr=0x085F1464 parent=gPokenavMainMenuData_085F1460 offset=0x4 paletteIndex=1
	@ ANALYSIS: SOURCE_RANGE addr=0x085F1464 size=0x4
	.4byte 1 @ paletteIndex
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x085F1468 size=0x4 source=v54_multi_pointer
	.4byte gLz77Asset_085F0C8C
	@ ANALYSIS: POKENAV_LEFT_HEADER_SUBMENU_PALETTE_INDEX size=0x4 addr=0x085F146C parent=gPokenavMainMenuData_085F1460 offset=0xC paletteIndex=1
	@ ANALYSIS: SOURCE_RANGE addr=0x085F146C size=0x4
	.4byte 1 @ paletteIndex
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x085F1470 size=0x4 source=v54_multi_pointer
	.4byte gLz77Asset_085F0DEC
	@ ANALYSIS: POKENAV_LEFT_HEADER_SUBMENU_PALETTE_INDEX size=0x4 addr=0x085F1474 parent=gPokenavMainMenuData_085F1460 offset=0x14 paletteIndex=4
	@ ANALYSIS: SOURCE_RANGE addr=0x085F1474 size=0x4
	.4byte 4 @ paletteIndex
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x085F1478 size=0x4 source=v54_multi_pointer
	.4byte gLz77Asset_085F0F00
	@ ANALYSIS: POKENAV_LEFT_HEADER_SUBMENU_PALETTE_INDEX size=0x4 addr=0x085F147C parent=gPokenavMainMenuData_085F1460 offset=0x1C paletteIndex=1
	@ ANALYSIS: SOURCE_RANGE addr=0x085F147C size=0x4
	.4byte 1 @ paletteIndex
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x085F1480 size=0x4 source=v54_multi_pointer
	.4byte gLz77Asset_085F1034
	@ ANALYSIS: POKENAV_LEFT_HEADER_SUBMENU_PALETTE_INDEX size=0x4 addr=0x085F1484 parent=gPokenavMainMenuData_085F1460 offset=0x24 paletteIndex=2
	@ ANALYSIS: SOURCE_RANGE addr=0x085F1484 size=0x4
	.4byte 2 @ paletteIndex
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x085F1488 size=0x4 source=v54_multi_pointer
	.4byte gLz77Asset_085F116C
	@ ANALYSIS: POKENAV_LEFT_HEADER_SUBMENU_PALETTE_INDEX size=0x4 addr=0x085F148C parent=gPokenavMainMenuData_085F1460 offset=0x2C paletteIndex=0
	@ ANALYSIS: SOURCE_RANGE addr=0x085F148C size=0x4
	.byte 0x00, 0x00, 0x00, 0x00
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x085F1490 size=0x4 source=v54_multi_pointer
	.4byte gLz77Asset_085F1288
	@ 4-byte alignment/unused zero before the spinning Pokenav sprite OAM.
	.space 0x4, 0
	.globl gSpinningPokenavSpriteOam
gSpinningPokenavSpriteOam:
	.2byte 0x0000, 0x8000, 0x0000, 0x0000
	.globl gSpinningPokenavAnims
gSpinningPokenavAnims:
	.2byte 0x0000, 0x0008 @ ANIMCMD_FRAME(0, 8)
	.2byte 0x0010, 0x0008 @ ANIMCMD_FRAME(16, 8)
	.2byte 0x0020, 0x0008 @ ANIMCMD_FRAME(32, 8)
	.2byte 0x0030, 0x0008 @ ANIMCMD_FRAME(48, 8)
	.2byte 0x0040, 0x0008 @ ANIMCMD_FRAME(64, 8)
	.2byte 0x0050, 0x0008 @ ANIMCMD_FRAME(80, 8)
	.2byte 0x0060, 0x0008 @ ANIMCMD_FRAME(96, 8)
	.2byte 0x0070, 0x0008 @ ANIMCMD_FRAME(112, 8)
	.2byte 0xFFFE, 0x0000 @ ANIMCMD_JUMP(0)
	.globl gSpinningPokenavAnimTable
gSpinningPokenavAnimTable:
	.4byte gSpinningPokenavAnims
	@ pret/pokeemerald-jp direct xref for 0x085F14C8: pokenav_main_menu.s: InitPokenavMainMenuResources
	.globl gPokenavMainMenuData_085F14C8
gPokenavMainMenuData_085F14C8: @ 0x085F14C8
	@ struct SpriteTemplate for the spinning Pokenav icon.
	.globl gSpinningPokenavSpriteTemplate
gSpinningPokenavSpriteTemplate:
	.2byte 0x0000, 0x0000 @ tileTag, paletteTag
	.4byte gSpinningPokenavSpriteOam @ oam
	.4byte gSpinningPokenavAnimTable @ anims
	.4byte 0 @ images = NULL
	.4byte gDummySpriteAffineAnimTable @ affineAnims
	.4byte SpriteCB_SpinningPokenav @ callback
	@ ANALYSIS: U32_TABLE size=0x10 entries=4
	.4byte 0xC0004000 @ +0x18
	.4byte 0x00000400 @ +0x1C
	.4byte 0x80004000 @ +0x20
	.4byte 0x00000400 @ +0x24
	@ pret/pokeemerald-jp direct xref for 0x085F14F0: pokenav_main_menu.s: InitHoennMapHeaderSprites
	.globl gPokenavMainMenuData_085F14F0
gPokenavMainMenuData_085F14F0: @ 0x085F14F0
	@ analyzed canonical ROM range 0x085F14F0-0x085F1507
sSpriteTemplate_085F14F0: @ 0x085F14F0
	rodata_sprite_template 0x0002, 0x0001, 0x085F14E0, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, SpriteCallbackDummy
	@ pret/pokeemerald-jp direct xref for 0x085F1508: pokenav_main_menu.s: InitHoennMapHeaderSprites
	.globl gPokenavMainMenuData_085F1508
gPokenavMainMenuData_085F1508: @ 0x085F1508
	@ analyzed canonical ROM range 0x085F1508-0x085F15A7
	@ structured u16 table (semantic role inferred only to scalar width)
	@ struct SpriteTemplate for the submenu left header (24 bytes total).
	.globl gPokenavSubmenuLeftHeaderSpriteTemplate
gPokenavSubmenuLeftHeaderSpriteTemplate:
	.2byte 0x0002, 0x0002 @ +0x0
	.4byte gSpinningPokenavSpriteTemplate + 0x20 @ +0x4 ROM pointer; numeric preserved
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x085F1510 size=0x4 source=v54_multi_pointer
	.4byte gDummySpriteAnimTable
	.4byte 0 @ images = NULL
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x085F1518 size=0x4 source=v54_multi_pointer
	.4byte gDummySpriteAffineAnimTable
	@ ANALYSIS: PROVEN_GLOBAL_POINTER_FIELD addr=0x085F151C size=0x4 source=v54_multi_pointer
	.4byte SpriteCallbackDummy
	@ Match Call right-arrow sprite palette; referenced by the palette record at 0x085F15C8.
	.globl gMatchCallRightArrowPal
gMatchCallRightArrowPal: @ 0x085F1520
	@ ANALYSIS: SEMANTIC_NUMERIC_PALETTE_ASSET
	@ Editable palette PNG: 1 row(s), 16 colors per row.
	.incbin "build/graphics/semantic_palettes/match_call/gMatchCallRightArrowPal.gbapal"

	@ GBA LZ77-compressed Match Call right-arrow sprite graphics.
	@ compressed=0x68 bytes; decompressed=0xC0 bytes.
	.globl gMatchCallRightArrowGfx
gMatchCallRightArrowGfx: @ 0x085F1540
	@ ANALYSIS: SEMANTIC_NUMERIC_GRAPHICS_ASSET
	.byte 0x10, 0xC0, 0x00, 0x00, 0x2E, 0x00, 0x00, 0x70, 0x01, 0x11, 0x50, 0x03, 0x00, 0x04, 0x30, 0x03
	.byte 0x11, 0x84, 0x10, 0x03, 0x02, 0x11, 0x11, 0x22, 0x00, 0x03, 0x02, 0x00, 0xA6, 0x00, 0x06, 0x00
	.byte 0x00, 0x06, 0x00, 0x20, 0x00, 0x03, 0xA0, 0x01, 0x10, 0xF3, 0x00, 0x28, 0x10, 0x03, 0x00, 0x04
	.byte 0x30, 0x03, 0x00, 0x10, 0x40, 0x03, 0x30, 0x57, 0x20, 0x11, 0x01, 0x00, 0x03, 0x21, 0x00, 0x11
	.byte 0x21, 0x22, 0x95, 0x00, 0x03, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x06, 0x00, 0x00, 0x06, 0xF5
	.byte 0x60, 0x41, 0x30, 0x03, 0x40, 0x3F, 0x60, 0x4F, 0x22, 0x20, 0x22, 0x01, 0x40, 0x03, 0xE8, 0x00
	.byte 0x46, 0x30, 0x03, 0x40, 0x4F, 0x22, 0x00, 0x1E
