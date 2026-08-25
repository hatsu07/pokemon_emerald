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
	.4byte gText_Rom_5C93A3
	.4byte BagAction_UseOnField
	.4byte gPartyMenuActionText_Toss
	.4byte BagAction_Toss
	.4byte gPartyMenuActionText_Summary
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
