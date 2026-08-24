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
