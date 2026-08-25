.if .L__inc_fragment_select_8940a0d08f69 == 1
sSpriteTemplate_08537298: @ 0x08537298
	rodata_sprite_template 0xFFFF, 0x111A, 0x08536EC4, 0x08537288, 0x08537248, gDummySpriteAffineAnimTable, Fldeff_MoveDeoxysRock
	@ pret/pokeemerald-jp direct xref for 0x085372B0: scanline_effect.s: CB2_InitOptionMenu
	.globl gScanlineEffectData_085372B0
gScanlineEffectData_085372B0: @ 0x085372B0
	@ analyzed canonical ROM range 0x085372B0-0x0853730F
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x60 entries=48
	.2byte 0x0000, 0x7FFF, 0x2ADF, 0x01F8, 0x423F, 0x0CDF, 0x2529, 0x675A
	.2byte 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000
	.2byte 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF
	.2byte 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0x111F, 0xF811, 0x888F, 0xF888
	.2byte 0xFFFF, 0xFFFF, 0x111F, 0xF811, 0x888F, 0xF888, 0xFFFF, 0xFFFF
	.2byte 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF
	.globl gText_MainMenuOption_Copy_MainMenu
.elseif .L__inc_fragment_select_8940a0d08f69 == 2
	@ pret/pokeemerald-jp direct xref for 0x085373EE: scanline_effect.s: sub_080BA780
	.globl gScanlineEffectData_085373EE
gScanlineEffectData_085373EE: @ 0x085373EE
	@ analyzed canonical ROM range 0x085373EE-0x085373FB
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0xE bytes=14
	.byte 0xFC, 0x01, 0x06, 0xFC, 0x03, 0x07, 0xC6, 0xF9, 0xDE, 0xBB, 0xFF, 0x00, 0x00, 0x00
	@ pret/pokeemerald-jp direct xref for 0x085373FC: scanline_effect.s: CB2_InitOptionMenu
	.globl gScanlineEffectData_085373FC
gScanlineEffectData_085373FC: @ 0x085373FC
	@ analyzed canonical ROM range 0x085373FC-0x08537413
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x18 entries=12
	.2byte 0x0201, 0x1A01, 0x0102, 0x0002, 0x0200, 0x1A05, 0x010E, 0x0036
	.2byte 0x00FF, 0x0000, 0x0000, 0x0000
	@ pret/pokeemerald-jp direct xref for 0x08537414: scanline_effect.s: CB2_InitOptionMenu
	.globl gScanlineEffectData_08537414
gScanlineEffectData_08537414: @ 0x08537414
	@ analyzed canonical ROM range 0x08537414-0x0853741B
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x8 entries=4
	.2byte 0x01E5, 0x0000, 0x11F4, 0x0000
	@ pret/pokeemerald-jp direct xref for 0x0853741C: scanline_effect.s: CB2_InitOptionMenu
	.globl gScanlineEffectData_0853741C
gScanlineEffectData_0853741C: @ 0x0853741C
	@ analyzed canonical ROM range 0x0853741C-0x08537421
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x6 bytes=6
	.byte 0x51, 0x7E, 0x00, 0x00, 0x0F, 0x02
	@ pret/pokeemerald-jp direct xref for 0x08537422: pokedex.s: LoadPokedexBgPalette, sub_080BF9E4
.endif
