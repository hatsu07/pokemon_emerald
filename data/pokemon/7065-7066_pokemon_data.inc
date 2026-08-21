	@ pret/pokeemerald-jp direct xref for 0x085ED40C: pokemon_summary_screen.s: SummaryScreen_DecompressGraphics
	.globl gPokemonSummaryScreenData_085ED40C
gPokemonSummaryScreenData_085ED40C: @ 0x085ED40C
	@ analyzed canonical ROM range 0x085ED40C-0x085ED413
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: PROVEN_POINTER_FIELD addr=0x085ED40C size=0x4 source=v53_repeated_layout_exact_elf_symbol
	.4byte gLz77Asset_08D971CC
	@ ANALYSIS: COMPRESSED_SPRITE_SHEET_META size=0x4 addr=0x085ED410 parent=gPokemonSummaryScreenData_085ED40C sheetSize=0x1700 tag=0x7532
	@ ANALYSIS: SOURCE_RANGE addr=0x085ED410 size=0x4
	.2byte 0x1700, 0x7532 @ size, tag
	@ pret/pokeemerald-jp direct xref for 0x085ED414: pokemon_summary_screen.s: CreateMoveTypeIcons
	.globl gPokemonSummaryScreenData_085ED414
gPokemonSummaryScreenData_085ED414: @ 0x085ED414
	@ analyzed canonical ROM range 0x085ED414-0x085ED42B
sSpriteTemplate_085ED414: @ 0x085ED414
	rodata_sprite_template 0x7532, 0x7532, 0x085ED2F0, 0x085ED3B0, 0, gDummySpriteAffineAnimTable, SpriteCallbackDummy
	@ pret/pokeemerald-jp direct xref for 0x085ED42C: pokemon_summary_screen.s: SetMoveTypeSpritePosAndType
	.globl gPokemonSummaryScreenData_085ED42C
gPokemonSummaryScreenData_085ED42C: @ 0x085ED42C
	@ analyzed canonical ROM range 0x085ED42C-0x085ED4C3
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x98 entries=76
	.2byte 0x0D0D, 0x0E0E, 0x0D0D, 0x0E0F, 0x0F0D, 0x0E0D, 0x0D0F, 0x0E0E
	.2byte 0x0D0F, 0x0E0D, 0x0F0E, 0x000D, 0x0000, 0x4000, 0x0400, 0x0000
	.2byte 0x0000, 0x0000, 0xFFFF, 0x0000, 0x0004, 0x0000, 0xFFFF, 0x0000
	.2byte 0x0008, 0x0000, 0xFFFF, 0x0000, 0x000C, 0x0000, 0xFFFF, 0x0000
	.2byte 0x0010, 0x0000, 0xFFFF, 0x0000, 0x0010, 0x0040, 0xFFFF, 0x0000
	.2byte 0x0014, 0x0000, 0xFFFF, 0x0000, 0x0018, 0x0000, 0xFFFF, 0x0000
	.2byte 0x0018, 0x0040, 0xFFFF, 0x0000, 0x001C, 0x0000, 0xFFFF, 0x0000
	.2byte 0xD44C, 0x085E, 0xD454, 0x085E, 0xD45C, 0x085E, 0xD464, 0x085E
	.2byte 0xD46C, 0x085E, 0xD474, 0x085E, 0xD47C, 0x085E, 0xD484, 0x085E
	.2byte 0xD48C, 0x085E, 0xD494, 0x085E
	@ pret/pokeemerald-jp direct xref for 0x085ED4C4: pokemon_summary_screen.s: SummaryScreen_DecompressGraphics
	.globl gPokemonSummaryScreenData_085ED4C4
gPokemonSummaryScreenData_085ED4C4: @ 0x085ED4C4
	@ analyzed canonical ROM range 0x085ED4C4-0x085ED4CB
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: PROVEN_POINTER_FIELD addr=0x085ED4C4 size=0x4 source=v53_repeated_layout_exact_elf_symbol
	.4byte gLz77Asset_08D97CBC
	@ ANALYSIS: COMPRESSED_SPRITE_SHEET_META size=0x4 addr=0x085ED4C8 parent=gPokemonSummaryScreenData_085ED4C4 sheetSize=0x400 tag=0x7530
	@ ANALYSIS: SOURCE_RANGE addr=0x085ED4C8 size=0x4
	.2byte 0x400, 0x7530 @ size, tag
	@ pret/pokeemerald-jp direct xref for 0x085ED4CC: pokemon_summary_screen.s: SummaryScreen_DecompressGraphics
	.globl gPokemonSummaryScreenData_085ED4CC
gPokemonSummaryScreenData_085ED4CC: @ 0x085ED4CC
	@ analyzed canonical ROM range 0x085ED4CC-0x085ED4D3
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: PROVEN_POINTER_FIELD addr=0x085ED4CC size=0x4 source=v53_repeated_layout_exact_elf_symbol
	.4byte gLz77Asset_08D97DB8
	@ ANALYSIS: COMPRESSED_SPRITE_PALETTE_META size=0x4 addr=0x085ED4D0 parent=gPokemonSummaryScreenData_085ED4CC tag=0x7530 padding=0
	@ ANALYSIS: SOURCE_RANGE addr=0x085ED4D0 size=0x4
	.2byte 0x7530, 0 @ tag, padding
	@ pret/pokeemerald-jp direct xref for 0x085ED4D4: pokemon_summary_screen.s: sub_081C4300
	.globl gPokemonSummaryScreenData_085ED4D4
gPokemonSummaryScreenData_085ED4D4: @ 0x085ED4D4
	@ analyzed canonical ROM range 0x085ED4D4-0x085ED547
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x74 bytes=116
	.byte 0x30, 0x75, 0x30, 0x75, 0x44, 0xD4, 0x5E, 0x08, 0x9C, 0xD4, 0x5E, 0x08, 0x00, 0x00, 0x00, 0x00
	.byte 0x10, 0xF3, 0x2B, 0x08, 0x41, 0x71, 0x00, 0x08, 0x00, 0x40, 0x00, 0x40, 0x00, 0x0C, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00
	.byte 0x08, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00
	.byte 0x10, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00
	.byte 0x18, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xF4, 0xD4, 0x5E, 0x08, 0xFC, 0xD4, 0x5E, 0x08
	.byte 0x04, 0xD5, 0x5E, 0x08, 0x0C, 0xD5, 0x5E, 0x08, 0x14, 0xD5, 0x5E, 0x08, 0x1C, 0xD5, 0x5E, 0x08
	.byte 0x24, 0xD5, 0x5E, 0x08
	@ pret/pokeemerald-jp direct xref for 0x085ED548: pokemon_summary_screen.s: SummaryScreen_DecompressGraphics
	.globl gPokemonSummaryScreenData_085ED548
gPokemonSummaryScreenData_085ED548: @ 0x085ED548
	@ analyzed canonical ROM range 0x085ED548-0x085ED54F
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: PROVEN_POINTER_FIELD addr=0x085ED548 size=0x4 source=v53_repeated_layout_exact_elf_symbol
	.4byte gLz77Asset_08D96F44
	@ ANALYSIS: COMPRESSED_SPRITE_SHEET_META size=0x4 addr=0x085ED54C parent=gPokemonSummaryScreenData_085ED548 sheetSize=0x380 tag=0x7531
	@ ANALYSIS: SOURCE_RANGE addr=0x085ED54C size=0x4
	.2byte 0x380, 0x7531 @ size, tag
	@ pret/pokeemerald-jp direct xref for 0x085ED550: pokemon_summary_screen.s: SummaryScreen_DecompressGraphics
	.globl gPokemonSummaryScreenData_085ED550
gPokemonSummaryScreenData_085ED550: @ 0x085ED550
	@ analyzed canonical ROM range 0x085ED550-0x085ED557
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: PROVEN_POINTER_FIELD addr=0x085ED550 size=0x4 source=v53_repeated_layout_exact_elf_symbol
	.4byte gLz77Asset_08D971A4
	@ ANALYSIS: COMPRESSED_SPRITE_PALETTE_META size=0x4 addr=0x085ED554 parent=gPokemonSummaryScreenData_085ED550 tag=0x7531 padding=0
	@ ANALYSIS: SOURCE_RANGE addr=0x085ED554 size=0x4
	.2byte 0x7531, 0 @ tag, padding
	@ pret/pokeemerald-jp direct xref for 0x085ED558: pokemon_summary_screen.s: CreateSetStatusSprite
	.globl gPokemonSummaryScreenData_085ED558
gPokemonSummaryScreenData_085ED558: @ 0x085ED558
	@ analyzed canonical ROM range 0x085ED558-0x085ED56F
sSpriteTemplate_085ED558: @ 0x085ED558
	rodata_sprite_template 0x7531, 0x7531, 0x085ED4EC, 0x085ED52C, 0, gDummySpriteAffineAnimTable, SpriteCallbackDummy
	@ pret/pokeemerald-jp direct xref for 0x085ED570: pokemon_summary_screen.s: CreateMonMarkingsSprite
	.globl gPokemonSummaryScreenData_085ED570
gPokemonSummaryScreenData_085ED570: @ 0x085ED570
	@ analyzed canonical ROM range 0x085ED570-0x085ED58F
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x20 entries=16
	.2byte 0x0000, 0x6E54, 0x7675, 0x7FFF, 0x6739, 0x0000, 0x0000, 0x0000
	.2byte 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000
	@ pret/pokeemerald-jp direct xref for 0x085ED590: unk_pokedex_area_screen_helper.s: sub_081C4578
	.globl gUnkPokedexAreaScreenHelperData_085ED590
gUnkPokedexAreaScreenHelperData_085ED590: @ 0x085ED590
	@ analyzed canonical ROM range 0x085ED590-0x085ED5EF
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x60 bytes=96
	.byte 0x00, 0x00, 0x53, 0x7F, 0xC0, 0x01, 0xD4, 0x7E, 0xA7, 0x06, 0x17, 0x18, 0xBF, 0x45, 0x14, 0x04
	.byte 0x1E, 0x00, 0xFF, 0x66, 0x9F, 0x1A, 0x9D, 0x57, 0x9C, 0x02, 0xFD, 0x1E, 0x39, 0x4B, 0x4C, 0x03
	.byte 0x00, 0x00, 0xB5, 0x1B, 0xFA, 0x3F, 0x9D, 0x3B, 0x69, 0x72, 0x05, 0x72, 0x03, 0x61, 0x07, 0x62
	.byte 0x5E, 0x2B, 0x24, 0x61, 0xA8, 0x65, 0x00, 0x00, 0x9F, 0x43, 0x7F, 0x02, 0x16, 0x00, 0xFF, 0x7F
	.byte 0x00, 0x00, 0xB9, 0x7F, 0x58, 0x7F, 0x8C, 0x31, 0x39, 0x67, 0xF7, 0x01, 0x00, 0x00, 0xCF, 0x6A
	.byte 0xC0, 0x55, 0xE0, 0x44, 0xBF, 0x0A, 0xFF, 0x08, 0x12, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	@ semantic exact asset for 0x085ED5F0: sPokedexAreaMap_Gfx
	.globl sPokedexAreaMap_Gfx
sPokedexAreaMap_Gfx:
	.incbin "build/graphics/pokedex/region_map.8bpp.lz"
	.if (. - sPokedexAreaMap_Gfx) != 0xD54
	.error "sPokedexAreaMap_Gfx compressed size mismatch"
	.endif
	@ semantic exact asset for 0x085EE344: sPokedexAreaMap_Tilemap
	.globl sPokedexAreaMap_Tilemap
sPokedexAreaMap_Tilemap:
	.incbin "build/graphics/pokedex/region_map.bin.lz"
	.if (. - sPokedexAreaMap_Tilemap) != 0x314
	.error "sPokedexAreaMap_Tilemap compressed size mismatch"
	.endif
	@ semantic exact asset for 0x085EE658: sPokedexAreaMapAffine_Gfx
	.globl sPokedexAreaMapAffine_Gfx
sPokedexAreaMapAffine_Gfx:
	.incbin "build/graphics/pokedex/region_map_affine.8bpp.lz"
	.if (. - sPokedexAreaMapAffine_Gfx) != 0xD5C
	.error "sPokedexAreaMapAffine_Gfx compressed size mismatch"
	.endif
	@ semantic exact asset for 0x085EF3B4: sPokedexAreaMapAffine_Tilemap
	.globl sPokedexAreaMapAffine_Tilemap
sPokedexAreaMapAffine_Tilemap:
	.incbin "build/graphics/pokedex/region_map_affine.bin.lz"
	.if (. - sPokedexAreaMapAffine_Tilemap) != 0x350
	.error "sPokedexAreaMapAffine_Tilemap compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x085EF704: battle_pyramid_bag.s: sub_081C49E4
	.globl gBattlePyramidBagData_085EF704
gBattlePyramidBagData_085EF704: @ 0x085EF704
	@ analyzed canonical ROM range 0x085EF704-0x085EF70F
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0xC entries=6
	.2byte 0x11F0, 0x0000, 0x01E1, 0x0000, 0x21DE, 0x0000
	@ pret/pokeemerald-jp direct xref for 0x085EF710: battle_pyramid_bag.s: SetBagItemsListTemplate

	.globl sPyramidBagListMenuTemplate
sPyramidBagListMenuTemplate: @ 0x085EF710
	@ JP struct ListMenuTemplate. SetBagItemsListTemplate copies all 24 bytes,
	@ then fills items, totalItems and maxShowed at runtime.
	@ Preserve JP packed fields exactly (not canonical EN initializer values).
	rodata_list_menu_template 0, PyramidBagMoveCursorFunc, PrintItemQuantity, 0, 0, 0, 0, 8, 0, 2, 2, 0, 3, 0, 0, 0, 1, 0
	.globl gPokemonPointerTable_Rom_5EF728
gPokemonPointerTable_Rom_5EF728: @ 0x085EF728
	.4byte gText_Rom_5C93A3
	.4byte BagAction_UseOnField
	.4byte gText_Rom_5C93A7
	.4byte BagAction_Toss
	.4byte gText_Rom_5C93B0
	.4byte BagAction_Give
	.4byte gText_Exit
	.4byte BagAction_Cancel
	.4byte gText_Rom_5C93A3
	.4byte BagAction_UseInBattle
	.4byte gBattleSetupData_085C93D0
	.4byte NULL
	@ pret/pokeemerald-jp direct xref for 0x085EF758: battle_pyramid_bag.s: sub_081C551C
	.globl gBattlePyramidBagData_085EF758
gBattlePyramidBagData_085EF758: @ 0x085EF758
	@ analyzed canonical ROM range 0x085EF758-0x085EF75B
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x4 bytes=4
	.byte 0x00, 0x02, 0x01, 0x03
	@ pret/pokeemerald-jp direct xref for 0x085EF75C: battle_pyramid_bag.s: sub_081C551C
	.globl gBattlePyramidBagData_085EF75C
gBattlePyramidBagData_085EF75C: @ 0x085EF75C
	@ analyzed canonical ROM range 0x085EF75C-0x085EF75D
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x2 bytes=2
	.byte 0x01, 0x03
	@ pret/pokeemerald-jp direct xref for 0x085EF75E: battle_pyramid_bag.s: sub_081C551C
	.globl gBattlePyramidBagData_085EF75E
gBattlePyramidBagData_085EF75E: @ 0x085EF75E
	@ analyzed canonical ROM range 0x085EF75E-0x085EF75F
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x2 bytes=2
	.byte 0x04, 0x03
	@ pret/pokeemerald-jp direct xref for 0x085EF760: battle_pyramid_bag.s: sub_081C551C
	.globl gBattlePyramidBagData_085EF760
gBattlePyramidBagData_085EF760: @ 0x085EF760
	@ analyzed canonical ROM range 0x085EF760-0x085EF763
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x4 bytes=4
	.byte 0x03, 0x00, 0x00, 0x00
	.globl gPokemonU32Table_Rom_5EF764
gPokemonU32Table_Rom_5EF764: @ 0x085EF764
	.4byte TossItem
	.4byte DontTossItem
	@ pret/pokeemerald-jp direct xref for 0x085EF76C: battle_pyramid_bag.s: PrintOnWindow_Font1
	.globl gBattlePyramidBagData_085EF76C
gBattlePyramidBagData_085EF76C: @ 0x085EF76C
	@ analyzed canonical ROM range 0x085EF76C-0x085EF777
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0xC entries=6
	.2byte 0x0200, 0x0003, 0x0103, 0x0201, 0x0003, 0x0000
	@ pret/pokeemerald-jp direct xref for 0x085EF778: battle_pyramid_bag.s: sub_081C63F0
	.globl gBattlePyramidBagData_085EF778
gBattlePyramidBagData_085EF778: @ 0x085EF778
	@ analyzed canonical ROM range 0x085EF778-0x085EF79F
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x28 entries=20
	.2byte 0x0E00, 0x0F02, 0x0F10, 0x001E, 0x0100, 0x0C0D, 0x0F06, 0x010E
	.2byte 0x0401, 0x160F, 0x0F04, 0x0156, 0x1801, 0x0511, 0x0F02, 0x01AE
	.2byte 0x00FF, 0x0000, 0x0000, 0x0000
	@ pret/pokeemerald-jp direct xref for 0x085EF7A0: battle_pyramid_bag.s: sub_081C64E4
	.globl gBattlePyramidBagData_085EF7A0
gBattlePyramidBagData_085EF7A0: @ 0x085EF7A0
	@ analyzed canonical ROM range 0x085EF7A0-0x085EF7BF
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x20 entries=16
	.2byte 0x1801, 0x0511, 0x0F02, 0x01B8, 0x1801, 0x050F, 0x0F04, 0x01B8
	.2byte 0x1101, 0x0C0F, 0x0F04, 0x01B8, 0x1101, 0x0C0D, 0x0F06, 0x01B8
	@ pret/pokeemerald-jp direct xref for 0x085EF7C0: battle_pyramid_bag.s: sub_081C656C
	.globl gBattlePyramidBagData_085EF7C0
gBattlePyramidBagData_085EF7C0: @ 0x085EF7C0
	@ analyzed canonical ROM range 0x085EF7C0-0x085EF81B
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x5C entries=46
	.2byte 0x1801, 0x050F, 0x0F04, 0x01B8, 0x0100, 0xC000, 0x0400, 0x0000
	.2byte 0x0000, 0x0004, 0xFFFF, 0x0000, 0xF7D0, 0x085E, 0x0100, 0x0100
	.2byte 0x0000, 0x0000, 0x7FFF, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000
	.2byte 0x02FE, 0x0000, 0x0000, 0x0000, 0x0402, 0x0000, 0x0000, 0x0000
	.2byte 0x04FE, 0x0000, 0x0000, 0x0000, 0x0202, 0x0000, 0x7FFF, 0x0000
	.2byte 0x0000, 0x0000, 0xF7DC, 0x085E, 0xF7EC, 0x085E
	@ pret/pokeemerald-jp direct xref for 0x085EF81C: battle_pyramid_bag.s: sub_081C4A40
	.globl gBattlePyramidBagData_085EF81C
gBattlePyramidBagData_085EF81C: @ 0x085EF81C
	@ analyzed canonical ROM range 0x085EF81C-0x085EF823
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: PROVEN_POINTER_FIELD addr=0x085EF81C size=0x4 source=v53_repeated_layout_exact_elf_symbol
	.4byte gLz77Asset_08D9ABE4
	@ ANALYSIS: COMPRESSED_SPRITE_SHEET_META size=0x4 addr=0x085EF820 parent=gBattlePyramidBagData_085EF81C sheetSize=0x800 tag=0x1024
	@ ANALYSIS: SOURCE_RANGE addr=0x085EF820 size=0x4
	.2byte 0x800, 0x1024 @ size, tag
	@ pret/pokeemerald-jp direct xref for 0x085EF824: battle_pyramid_bag.s: sub_081C66B4
	.globl gBattlePyramidBagData_085EF824
gBattlePyramidBagData_085EF824: @ 0x085EF824
	@ analyzed canonical ROM range 0x085EF824-0x085EF83B
sSpriteTemplate_085EF824: @ 0x085EF824
	rodata_sprite_template 0x1024, 0x1024, 0x085EF7C8, 0x085EF7D8, 0, 0x085EF814, SpriteCallbackDummy
	.globl gPokemonPointerTable_Rom_5EF83C
gPokemonPointerTable_Rom_5EF83C: @ 0x085EF83C
	.4byte sub_081C8A44
	.4byte sub_081C8BC8
	.4byte sub_081C90D0
	.4byte sub_081C913C
	.4byte sub_081C916C
	.4byte sub_081C8BDC
	.4byte sub_081C9180
	.4byte sub_081C8A44
	.4byte sub_081C8BC8
	.4byte sub_081C90EC
	.4byte sub_081C913C
	.4byte sub_081C916C
	.4byte sub_081C8BDC
	.4byte sub_081C9180
	.4byte sub_081C8AE4
	.4byte sub_081C8BC8
	.4byte sub_081C90EC
	.4byte sub_081C913C
	.4byte sub_081C916C
	.4byte sub_081C8BDC
	.4byte sub_081C9180
	.4byte sub_081C8B14
	.4byte sub_081C8BC8
	.4byte sub_081C90EC
	.4byte sub_081C913C
	.4byte sub_081C916C
	.4byte sub_081C8BDC
	.4byte sub_081C9180
	.4byte sub_081C8A78
	.4byte sub_081C8BC8
	.4byte sub_081C90EC
	.4byte sub_081C913C
	.4byte sub_081C916C
	.4byte sub_081C8BDC
	.4byte sub_081C9180
	.4byte sub_081C8AB0
	.4byte sub_081C8BC8
	.4byte sub_081C90EC
	.4byte sub_081C913C
	.4byte sub_081C916C
	.4byte sub_081C8BDC
	.4byte sub_081C9180
	.4byte sub_081CBC28
	.4byte sub_081CBCA8
	.4byte sub_081CBD48
	.4byte sub_081CBD80
	.4byte sub_081CBDB0
	.4byte sub_081CBC78
	.4byte sub_081CBDC4
	.4byte sub_081CC718
	.4byte sub_081CC7B0
	.4byte sub_081CD534
	.4byte sub_081CD58C
	.4byte sub_081CD5C4
	.4byte sub_081CC900
	.4byte sub_081CE3D4
	.4byte sub_081CE670
	.4byte sub_081CE710
	.4byte sub_081CEA64
	.4byte sub_081CEAD4
	.4byte sub_081CEB04
	.4byte sub_081CE724
	.4byte sub_081CEB2C
	.4byte sub_081CC764
	.4byte sub_081CC7B0
	.4byte sub_081CD534
	.4byte sub_081CD58C
	.4byte sub_081CD5C4
	.4byte sub_081CC900
	.4byte sub_081CE3D4
	.4byte sub_081CE6CC
	.4byte sub_081CE710
	.4byte sub_081CEA9C
	.4byte sub_081CEAD4
	.4byte sub_081CEB04
	.4byte sub_081CE724
	.4byte sub_081CEB2C
	.4byte sub_081CA294
	.4byte sub_081CA2D0
	.4byte sub_081CAA04
	.4byte sub_081CAA40
	.4byte sub_081CAA70
	.4byte sub_081CA2E4
	.4byte sub_081CAA84
	.4byte sub_081CF090
	.4byte sub_081CF108
	.4byte sub_081CF4A4
	.4byte sub_081CF514
	.4byte sub_081CF544
	.4byte sub_081CF11C
	.4byte sub_081CF56C
	.4byte sub_081CFB00
	.4byte sub_081CFB50
	.4byte sub_081D0028
	.4byte sub_081D0060
	.4byte sub_081D0090
	.4byte sub_081CFB68
	.4byte sub_081D00A4
	.4byte sub_081CF0D8
	.4byte sub_081CF108
	.4byte sub_081CF4DC
	.4byte sub_081CF514
	.4byte sub_081CF544
	.4byte sub_081CF11C
	.4byte sub_081CF56C
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
	.4byte 0x085CB703 @ +0x0
	.4byte 0x085CB714 @ +0x4
	.4byte 0x085CB721 @ +0x8
	.4byte 0x085CB72E @ +0xC
	.4byte 0x085CB741 @ +0x10
	.4byte 0x085CB74F @ +0x14
	.4byte 0x085CB75F @ +0x18
	.4byte 0x085CB76C @ +0x1C
	.4byte 0x085CB779 @ +0x20
	.4byte 0x085CB77F @ +0x24
	.4byte 0x085CB78E @ +0x28
	.4byte 0x085CB79C @ +0x2C
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
	.2byte 0x0000, 0x426B, 0x2506, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000
	.2byte 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000

	@ GBA LZ77-compressed Match Call right-arrow sprite graphics.
	@ compressed=0x68 bytes; decompressed=0xC0 bytes.
	.globl gMatchCallRightArrowGfx
gMatchCallRightArrowGfx: @ 0x085F1540
	.byte 0x10, 0xC0, 0x00, 0x00, 0x2E, 0x00, 0x00, 0x70, 0x01, 0x11, 0x50, 0x03, 0x00, 0x04, 0x30, 0x03
	.byte 0x11, 0x84, 0x10, 0x03, 0x02, 0x11, 0x11, 0x22, 0x00, 0x03, 0x02, 0x00, 0xA6, 0x00, 0x06, 0x00
	.byte 0x00, 0x06, 0x00, 0x20, 0x00, 0x03, 0xA0, 0x01, 0x10, 0xF3, 0x00, 0x28, 0x10, 0x03, 0x00, 0x04
	.byte 0x30, 0x03, 0x00, 0x10, 0x40, 0x03, 0x30, 0x57, 0x20, 0x11, 0x01, 0x00, 0x03, 0x21, 0x00, 0x11
	.byte 0x21, 0x22, 0x95, 0x00, 0x03, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x06, 0x00, 0x00, 0x06, 0xF5
	.byte 0x60, 0x41, 0x30, 0x03, 0x40, 0x3F, 0x60, 0x4F, 0x22, 0x20, 0x22, 0x01, 0x40, 0x03, 0xE8, 0x00
	.byte 0x46, 0x30, 0x03, 0x40, 0x4F, 0x22, 0x00, 0x1E
	@ pret/pokeemerald-jp direct xref for 0x085F15A8: pokenav_match_call_ui.s: sub_081C8484
	.globl gPokenavMatchCallUiData_085F15A8
gPokenavMatchCallUiData_085F15A8: @ 0x085F15A8
	@ analyzed canonical ROM range 0x085F15A8-0x085F15AB
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x4 bytes=4
	.byte 0x00, 0x02, 0x05, 0x00
	.globl gPokemonPointerTable_Rom_5F15AC
gPokemonPointerTable_Rom_5F15AC: @ 0x085F15AC
	.4byte gText_Rom_5CB6EC
	.4byte gText_Rom_5CB6F1
	.4byte gText_Rom_5CB6FB
	@ pret/pokeemerald-jp direct xref for 0x085F15B8: pokenav_match_call_ui.s: PrintMatchCallFieldNames
	.globl gPokenavMatchCallUiData_085F15B8
gPokenavMatchCallUiData_085F15B8: @ 0x085F15B8
	@ analyzed canonical ROM range 0x085F15B8-0x085F15BA
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x3 bytes=3
	.byte 0x01, 0x04, 0x05
	@ pret/pokeemerald-jp direct xref for 0x085F15BB: pokenav_match_call_ui.s: sub_081C85FC
	.globl gPokenavMatchCallUiData_085F15BB
gPokenavMatchCallUiData_085F15BB: @ 0x085F15BB
	@ analyzed canonical ROM range 0x085F15BB-0x085F15BF
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x5 bytes=5
	.byte 0x02, 0x04, 0x06, 0x07, 0x00
	@ pret/pokeemerald-jp direct xref for 0x085F15C0: pokenav_match_call_ui.s: sub_081C867C
	.globl gPokenavMatchCallUiData_085F15C0
gPokenavMatchCallUiData_085F15C0: @ 0x085F15C0
	@ analyzed canonical ROM range 0x085F15C0-0x085F15C7
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x8 entries=4
	.4byte gMatchCallRightArrowGfx
	.2byte 0x00C0, 0x000A @ size, tileTag
	@ pret/pokeemerald-jp direct xref for 0x085F15C8: pokenav_match_call_ui.s: sub_081C867C
	.globl gPokenavMatchCallUiData_085F15C8
gPokenavMatchCallUiData_085F15C8: @ 0x085F15C8
	@ analyzed canonical ROM range 0x085F15C8-0x085F15DF
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x18 entries=12
	.4byte gMatchCallRightArrowPal
	.2byte 0x0014, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000 @ paletteTag + following JP-local fields
	.2byte 0x8000, 0x0000, 0x0C00, 0x0000
	@ pret/pokeemerald-jp direct xref for 0x085F15E0: pokenav_match_call_ui.s: sub_081C86A4
	.globl gPokenavMatchCallUiData_085F15E0
gPokenavMatchCallUiData_085F15E0: @ 0x085F15E0
	@ analyzed canonical ROM range 0x085F15E0-0x085F15FF
	@ pointer/nullable table
	.4byte 0x0014000A @ +0x0
	.4byte 0x085F15D8 @ +0x4
	.4byte gDummySpriteAnimTable @ +0x8
	@ ANALYSIS: ZERO_PADDING size=0x4
	.space 0x4, 0
	.4byte gDummySpriteAffineAnimTable @ +0x10
	.4byte SpriteCB_MatchCallRightArrow @ +0x14
	.4byte 0x00004000 @ +0x18
	.4byte 0x00000800 @ +0x1C
	@ pret/pokeemerald-jp direct xref for 0x085F1600: pokenav_match_call_ui.s: sub_081C86A4
	.globl gPokenavMatchCallUiData_085F1600
gPokenavMatchCallUiData_085F1600: @ 0x085F1600
	@ analyzed canonical ROM range 0x085F1600-0x085F1617
sSpriteTemplate_085F1600: @ 0x085F1600
	rodata_sprite_template 0x000A, 0x0014, 0x085F15F8, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, SpriteCallbackDummy
	@ pret/pokeemerald-jp direct xref for 0x085F1618: pokenav_unk_1.s: sub_081C8DE8, sub_081C8EA8, sub_081C8FC0
	.globl gPokenavUnk1Data_085F1618
gPokenavUnk1Data_085F1618: @ 0x085F1618
	@ analyzed canonical ROM range 0x085F1618-0x085F161C
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x5 bytes=5
	.byte 0x02, 0x03, 0x04, 0x02, 0x05
	@ pret/pokeemerald-jp direct xref for 0x085F161D: pokenav_unk_1.s: sub_081C8BE8, sub_081C8CCC, sub_081C8D34, sub_081C8DE8, sub_081C8EA8 (+3 more)
	.globl gPokenavUnk1Data_085F161D
gPokenavUnk1Data_085F161D: @ 0x085F161D
	@ analyzed canonical ROM range 0x085F161D-0x085F163B
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x1F bytes=31
	.byte 0x00, 0x01, 0x04, 0x04, 0x04, 0x04, 0x00, 0x01, 0x02, 0x04, 0x04, 0x04, 0x00, 0x01, 0x02, 0x03
	.byte 0x04, 0x04, 0x05, 0x06, 0x07, 0x04, 0x04, 0x04, 0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x00
	.globl gPokemonRecord_Rom_5F163C
gPokemonRecord_Rom_5F163C: @ 0x085F163C
	.space 0x2, 0x00
	@ pret/pokeemerald-jp direct xref for 0x085F163E: pokenav_unk_2.s: sub_081C9FC4
	.globl gPokenavUnk2Data_085F163E
gPokenavUnk2Data_085F163E: @ 0x085F163E
	@ analyzed canonical ROM range 0x085F163E-0x085F1649
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0xC bytes=12
	.byte 0xFF, 0x7F, 0xFB, 0x7B, 0x18, 0x67, 0x5E, 0x02, 0x1E, 0x1B, 0xBF, 0x33
	@ pret/pokeemerald-jp direct xref for 0x085F164A: pokenav_unk_2.s: sub_081C9FFC, sub_081CA010
	.globl gPokenavUnk2Data_085F164A
gPokenavUnk2Data_085F164A: @ 0x085F164A
	@ analyzed canonical ROM range 0x085F164A-0x085F165B
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x12 bytes=18
	.byte 0x9D, 0x7F, 0x1A, 0x7F, 0x7F, 0x6B, 0xFF, 0x5A, 0x57, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00
	@ semantic exact asset for 0x085F165C: sPokenavBgDotsTiles
	.globl sPokenavBgDotsTiles
sPokenavBgDotsTiles:
	.incbin "build/graphics/pokenav/bg_dots.4bpp.lz"
	.if (. - sPokenavBgDotsTiles) != 0x14
	.error "sPokenavBgDotsTiles compressed size mismatch"
	.endif
	@ semantic exact asset for 0x085F1670: sPokenavBgDotsTilemap
	.globl sPokenavBgDotsTilemap
sPokenavBgDotsTilemap:
	.incbin "build/graphics/pokenav/bg_dots.bin.lz"
	.if (. - sPokenavBgDotsTilemap) != 0xA0
	.error "sPokenavBgDotsTilemap compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x085F1710: pokenav_unk_2.s: sub_081C91BC
	.globl gPokenavUnk2Data_085F1710
gPokenavUnk2Data_085F1710: @ 0x085F1710
	@ analyzed canonical ROM range 0x085F1710-0x085F172F
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x20 bytes=32
	.byte 0x00, 0x00, 0x6A, 0x31, 0x07, 0x25, 0xAA, 0x35, 0xEC, 0x41, 0x5A, 0x57, 0xDF, 0x6B, 0x38, 0x67
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	@ semantic exact asset for 0x085F1730: gPokenavMessageBox_Gfx
	.globl gPokenavMessageBox_Gfx
gPokenavMessageBox_Gfx:
	.incbin "build/graphics/pokenav/message.4bpp.lz"
	.if (. - gPokenavMessageBox_Gfx) != 0x50
	.error "gPokenavMessageBox_Gfx compressed size mismatch"
	.endif
	@ semantic exact asset for 0x085F1780: gPokenavMessageBox_Tilemap
	.globl gPokenavMessageBox_Tilemap
gPokenavMessageBox_Tilemap:
	.incbin "build/graphics/pokenav/message.bin.lz"
	.if (. - gPokenavMessageBox_Tilemap) != 0xB8
	.error "gPokenavMessageBox_Tilemap compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x085F1838: pokenav_unk_2.s: sub_081C91BC
	.globl gPokenavUnk2Data_085F1838
gPokenavUnk2Data_085F1838: @ 0x085F1838
	@ analyzed canonical ROM range 0x085F1838-0x085F1857
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x20 bytes=32
	.byte 0xFF, 0x7F, 0x95, 0x15, 0x55, 0x4A, 0xB6, 0x56, 0x1F, 0x3B, 0xFE, 0x31, 0x94, 0x66, 0x8C, 0x79
	.byte 0xFF, 0x7F, 0xC1, 0x7E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x39, 0x6B, 0xB5, 0x5E
	@ semantic exact asset for 0x085F1858: sPokenavDeviceBgTiles
	.globl sPokenavDeviceBgTiles
sPokenavDeviceBgTiles:
	.incbin "build/graphics/pokenav/device_outline.4bpp.lz"
	.if (. - sPokenavDeviceBgTiles) != 0x288
	.error "sPokenavDeviceBgTiles compressed size mismatch"
	.endif
	@ pret/pokeemerald-jp direct xref for 0x085F1AE0: pokenav_unk_2.s: sub_081C91BC
.globl sPokenavDeviceBgTilemap
sPokenavDeviceBgTilemap: @ 0x085F1AE0
	@ confirmed GBA LZ77 stream: compressed=0x10D, decompressed=0x500
	@ analyzed canonical ROM range 0x085F1AE0-0x085F26FB
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: 3 exact LZ77 assets extracted from this former raw block; non-LZ residual bytes remain literal
	.incbin "build/graphics/pokenav/device_outline_rom_exact.tilemap.lz"
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x7F, 0x4A, 0x25, 0xB5, 0x56, 0x1E, 0x1B, 0xBF, 0x33, 0x5C
	.byte 0x02, 0x00, 0x00, 0x04, 0x37, 0xF2, 0x33, 0x29, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0xFF, 0x7F, 0x00, 0x00, 0xFF, 0x7F, 0x4A, 0x25, 0xB5, 0x56, 0x1E, 0x1B, 0xBF, 0x33, 0x5C
	.byte 0x02, 0x00, 0x00, 0x4D, 0x6D, 0xD8, 0x7E, 0x0A, 0x51, 0x0C, 0x7B, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0xFF, 0x7F, 0x00, 0x00, 0xFF, 0x7F, 0x4A, 0x25, 0xB5, 0x56, 0x1E, 0x1B, 0xBF, 0x33, 0x5C
	.byte 0x02, 0x00, 0x00, 0xBE, 0x35, 0xBF, 0x52, 0x39, 0x21, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0xFF, 0x7F, 0x00, 0x00, 0xFF, 0x7F, 0x4A, 0x25, 0xB5, 0x56, 0x1E, 0x1B, 0xBF, 0x33, 0x5C
	.byte 0x02, 0x00, 0x00, 0xB6, 0x3E, 0x5B, 0x53, 0xF0, 0x25, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0xFF, 0x7F, 0x00, 0x00, 0xFF, 0x7F, 0x4A, 0x25, 0xB5, 0x56, 0x1E, 0x1B, 0xBF, 0x33, 0x5C
	.byte 0x02, 0x00, 0x00, 0x1F, 0x11, 0x5F, 0x2E, 0x16, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x00, 0x00
	.globl gLz77Asset_085F1C90
gLz77Asset_085F1C90: @ 0x085F1C90
	.incbin "build/graphics/pokenav/options/options_rom_exact.4bpp.lz"
	.byte 0x00, 0x00, 0xFF, 0x7F, 0x95, 0x15, 0x55, 0x4A, 0xB6, 0x56, 0x1F, 0x3B, 0xFE, 0x31, 0x94, 0x66
	.byte 0x8C, 0x79, 0xFF, 0x7F, 0xC1, 0x7E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x39, 0x6B
	.byte 0xB5, 0x5E
	.globl gLz77Asset_085F268C
gLz77Asset_085F268C: @ 0x085F268C
	.incbin "build/graphics/pokenav/blue_light_rom_exact.4bpp.lz"
	@ pret/pokeemerald-jp direct xref for 0x085F26FC: pokenav_unk_2.s: sub_081C91BC
	.globl gPokenavUnk2Data_085F26FC
gPokenavUnk2Data_085F26FC: @ 0x085F26FC
	@ analyzed canonical ROM range 0x085F26FC-0x085F2707
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0xC entries=6
	.2byte 0x10F5, 0x0000, 0x217A, 0x0000, 0x31FF, 0x0000
	.globl gPokemonPointerTable_Rom_5F2708
gPokemonPointerTable_Rom_5F2708: @ 0x085F2708
	.4byte NULL
	.4byte sub_081C9418
	.4byte sub_081C9454
	.4byte sub_081C94F0
	.4byte sub_081C9584
	.4byte sub_081C9604
	.4byte sub_081C9674
	.4byte sub_081C96A4
	.4byte sub_081C96D4
	@ pret/pokeemerald-jp direct xref for 0x085F272C: pokenav_unk_2.s: sub_081C9770
	.globl gPokenavUnk2Data_085F272C
gPokenavUnk2Data_085F272C: @ 0x085F272C
	@ analyzed canonical ROM range 0x085F272C-0x085F273B
	@ structured u16 table (semantic role inferred only to scalar width)
	@ struct CompressedSpriteSheet[2]; sub_081C9770 loads both entries.
	@ ANALYSIS: SEMANTIC_COMPRESSED_SPRITE_SHEET_TABLE addr=0x085F272C size=0x10 count=2
	compressed_sprite_sheet gLz77Asset_085F1C90, 0x3400, 0x0003
	compressed_sprite_sheet gLz77Asset_085F268C, 0x100, 0x0001
	@ pret/pokeemerald-jp direct xref for 0x085F273C: pokenav_unk_2.s: sub_081C9770
	.globl gPokenavUnk2Data_085F273C
gPokenavUnk2Data_085F273C: @ 0x085F273C
	@ analyzed canonical ROM range 0x085F273C-0x085F27A7
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x6C entries=54
	.2byte 0x1BF0, 0x085F, 0x0004, 0x0000, 0x1C10, 0x085F, 0x0005, 0x0000
	.2byte 0x1C30, 0x085F, 0x0006, 0x0000, 0x1C50, 0x085F, 0x0007, 0x0000
	.2byte 0x1C70, 0x085F, 0x0008, 0x0000, 0x266C, 0x085F, 0x0003, 0x0000
	.2byte 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0020, 0x0001
	.2byte 0x0040, 0x0004, 0x0060, 0x0002, 0x0080, 0x0003, 0x00A0, 0x0001
	.2byte 0x00C0, 0x0001, 0x00E0, 0x0004, 0x0100, 0x0001, 0x0120, 0x0002
	.2byte 0x0140, 0x0000, 0x0160, 0x0000, 0x0180, 0x0003
	@ pret/pokeemerald-jp direct xref for 0x085F27A8: pokenav_unk_2.s: sub_081CA1E8
	.globl gPokenavUnk2Data_085F27A8
gPokenavUnk2Data_085F27A8: @ 0x085F27A8
	@ analyzed canonical ROM range 0x085F27A8-0x085F27AB
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x4 bytes=4
	.byte 0x2A, 0x00, 0x14, 0x00
	@ pret/pokeemerald-jp direct xref for 0x085F27AC: pokenav_unk_2.s: sub_081C9874
	.globl gPokenavUnk2Data_085F27AC
gPokenavUnk2Data_085F27AC: @ 0x085F27AC
	@ analyzed canonical ROM range 0x085F27AC-0x085F2833
	@ pointer/nullable table
	@ ANALYSIS: U32_TABLE size=0x88 entries=34
	.4byte gPokenavUnk2Data_085F273C + 0x38 @ +0x0
	.4byte gPokenavUnk2Data_085F273C + 0x3C @ +0x4
	.4byte gPokenavUnk2Data_085F273C + 0x48 @ +0x8
	.4byte 0 @ +0xC
	.4byte 0 @ +0x10
	.4byte 0 @ +0x14
	.4byte 0x0014002A @ +0x18
	.4byte gPokenavUnk2Data_085F273C + 0x38 @ +0x1C
	.4byte gPokenavUnk2Data_085F273C + 0x3C @ +0x20
	.4byte gPokenavUnk2Data_085F273C + 0x40 @ +0x24
	.4byte gPokenavUnk2Data_085F273C + 0x48 @ +0x28
	.4byte 0 @ +0x2C
	.4byte 0 @ +0x30
	.4byte 0x0014002A @ +0x34
	.4byte gPokenavUnk2Data_085F273C + 0x38 @ +0x38
	.4byte gPokenavUnk2Data_085F273C + 0x3C @ +0x3C
	.4byte gPokenavUnk2Data_085F273C + 0x40 @ +0x40
	.4byte gPokenavUnk2Data_085F273C + 0x44 @ +0x44
	.4byte gPokenavUnk2Data_085F273C + 0x48 @ +0x48
	.4byte 0 @ +0x4C
	.4byte 0x00140038 @ +0x50
	.4byte gPokenavUnk2Data_085F273C + 0x4C @ +0x54
	.4byte gPokenavUnk2Data_085F273C + 0x50 @ +0x58
	.4byte gPokenavUnk2Data_085F273C + 0x68 @ +0x5C
	.4byte 0 @ +0x60
	.4byte 0 @ +0x64
	.4byte 0 @ +0x68
	.4byte 0x00100028 @ +0x6C
	.4byte gPokenavUnk2Data_085F273C + 0x54 @ +0x70
	.4byte gPokenavUnk2Data_085F273C + 0x58 @ +0x74
	.4byte gPokenavUnk2Data_085F273C + 0x5C @ +0x78
	.4byte gPokenavUnk2Data_085F273C + 0x60 @ +0x7C
	.4byte gPokenavUnk2Data_085F273C + 0x64 @ +0x80
	.4byte gPokenavUnk2Data_085F273C + 0x68 @ +0x84
	@ pret/pokeemerald-jp direct xref for 0x085F2834: pokenav_unk_2.s: sub_081C9E8C
	.globl gPokenavUnk2Data_085F2834
gPokenavUnk2Data_085F2834: @ 0x085F2834
	@ analyzed canonical ROM range 0x085F2834-0x085F283B
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x8 entries=4
	.2byte 0x0401, 0x1611, 0x0102, 0x0008
	.globl gPokemonPointerTable_Rom_5F283C
gPokemonPointerTable_Rom_5F283C: @ 0x085F283C
	.4byte gText_Rom_5CB589
	.4byte gText_Rom_5CB59B
	.4byte gText_Rom_5CB5AC
	.4byte gText_Rom_5CB5BE
	.4byte gText_Rom_5CB5D0
	.4byte gText_Rom_5CB606
	.4byte gText_Rom_5CB61A
	.4byte gText_Rom_5CB62F
	.4byte gText_Rom_5CB641
	.4byte gText_Rom_5CB653
	.4byte gText_Rom_5CB665
	.4byte gText_Rom_5CB676
	.4byte gText_Rom_5CB687
	.4byte gText_Rom_5CB699
	@ pret/pokeemerald-jp direct xref for 0x085F2874: pokenav_unk_2.s: sub_081C9EC0
	.globl gPokenavUnk2Data_085F2874
gPokenavUnk2Data_085F2874: @ 0x085F2874
	@ analyzed canonical ROM range 0x085F2874-0x085F2876
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x3 bytes=3
	.byte 0x06, 0x08, 0x07
	@ pret/pokeemerald-jp direct xref for 0x085F2877: pokenav_unk_2.s: sub_081C9F1C
	.globl gPokenavUnk2Data_085F2877
gPokenavUnk2Data_085F2877: @ 0x085F2877
	@ analyzed canonical ROM range 0x085F2877-0x085F28B3
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x3D bytes=61
	.byte 0x06, 0x08, 0x07, 0x00, 0x00, 0x00, 0x40, 0x00, 0x80, 0x00, 0x08, 0x00, 0x00, 0x00, 0x01, 0x00
	.byte 0x01, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00
	.byte 0x01, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x10, 0x00, 0x00, 0x12, 0x00, 0x00, 0xFF, 0x7F, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0x84, 0x28, 0x5F, 0x08, 0x94, 0x28, 0x5F, 0x08
	@ pret/pokeemerald-jp direct xref for 0x085F28B4: pokenav_unk_2.s: sub_081C97D8
	.globl gPokenavUnk2Data_085F28B4
gPokenavUnk2Data_085F28B4: @ 0x085F28B4
	@ analyzed canonical ROM range 0x085F28B4-0x085F28D3
	@ pointer/nullable table
	@ ANALYSIS: U32_TABLE size=0x8 entries=2
	.4byte 0x00040003 @ +0x0
	.4byte gPokenavUnk2Data_085F2877 + 0x5 @ +0x4
	.4byte gDummySpriteAnimTable @ +0x8
	@ ANALYSIS: U32_TABLE size=0x8 entries=2
	.4byte 0 @ +0xC
	.4byte gPokenavUnk2Data_085F2877 + 0x35 @ +0x10
	.4byte SpriteCallbackDummy @ +0x14
	@ ANALYSIS: U32_TABLE size=0x8 entries=2
	.4byte 0x80004000 @ +0x18
	.4byte 0x00000800 @ +0x1C
	@ pret/pokeemerald-jp direct xref for 0x085F28D4: pokenav_unk_2.s: sub_081C9DEC
	.globl gPokenavUnk2Data_085F28D4
gPokenavUnk2Data_085F28D4: @ 0x085F28D4
	@ analyzed canonical ROM range 0x085F28D4-0x085F28EB
sSpriteTemplate_085F28D4: @ 0x085F28D4
	rodata_sprite_template 0x0001, 0x0003, 0x085F28CC, gDummySpriteAnimTable, 0, gDummySpriteAffineAnimTable, SpriteCallbackDummy
	@ pret/pokeemerald-jp direct xref for 0x085F28EC: pokenav_unk_2.s: sub_081CA0D8
	.globl gPokenavUnk2Data_085F28EC
gPokenavUnk2Data_085F28EC: @ 0x085F28EC
	@ analyzed canonical ROM range 0x085F28EC-0x085F28F7
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0xC entries=6
	.2byte 0x0040, 0x0400, 0x0001, 0xA260, 0x0001, 0x0000
