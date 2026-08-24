	@ pret/pokeemerald-jp direct xref for 0x085F15A8: pokenav_match_call_ui.s: sub_081C8484
	.globl gPokenavMatchCallUiData_085F15A8
gPokenavMatchCallUiData_085F15A8: @ 0x085F15A8
	@ analyzed canonical ROM range 0x085F15A8-0x085F15AB
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x4 bytes=4
	.byte 0x00, 0x02, 0x05, 0x00
	.4byte gText_Rom_5CB6EC
	.4byte gText_PokenavMatchCall_TrainerPokemon
	.4byte gText_PokenavMatchCall_SelfIntroduction
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
	.4byte gPokenavMatchCallUiData_085F15C8 + 0x10 @ +0x4
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
