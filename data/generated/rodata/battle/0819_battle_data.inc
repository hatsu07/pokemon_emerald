	@ pret/pokeemerald-jp direct xref for 0x08562828: contest.s: sub_080DA330, sub_080DA460
	.globl gContestData_08562828
gContestData_08562828: @ 0x08562828
	@ analyzed canonical ROM range 0x08562828-0x08562887
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: RAW_BLOCK size=0x60
	.2byte 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0200
	.2byte 0x0202, 0x0202, 0x0202, 0x0202, 0x0000, 0x0000, 0x0000, 0x0000
	.2byte 0x0000, 0x0000, 0x0000, 0x0200, 0x0202, 0x0202, 0x0202, 0x0202
	.2byte 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0200
	.2byte 0x0202, 0x0202, 0x0202, 0x0202, 0x0000, 0x0000, 0x0000, 0x0000
	.2byte 0x0000, 0x0000, 0x0000, 0x0200, 0x0202, 0x0202, 0x0202, 0x0202
	@ pret/pokeemerald-jp direct xref for 0x08562888: contest.s: sub_080DC150

	.globl sSpriteSheets_ContestantsTurnBlinkEffect
sSpriteSheets_ContestantsTurnBlinkEffect: @ 0x08562888
	@ struct CompressedSpriteSheet[4]; indexed by contestant in sub_080DC150.
	rodata_compressed_sprite_sheet gBlankGfxCompressed, 0x1000, 0x80E8
	rodata_compressed_sprite_sheet gBlankGfxCompressed, 0x1000, 0x80E9
	rodata_compressed_sprite_sheet gBlankGfxCompressed, 0x1000, 0x80EA
	rodata_compressed_sprite_sheet gBlankGfxCompressed, 0x1000, 0x80EB
	@ pret/pokeemerald-jp direct xref for 0x085628A8: contest.s: sub_080DC150
	.globl gContestData_085628A8
gContestData_085628A8: @ 0x085628A8
	@ analyzed canonical ROM range 0x085628A8-0x0856290F
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: RAW_BLOCK size=0x68
	.byte 0xA4, 0xA0, 0x01, 0x02, 0xE8, 0x80, 0x00, 0x00, 0xC4, 0xA0, 0x01, 0x02, 0xE9, 0x80, 0x00, 0x00
	.byte 0xE4, 0xA0, 0x01, 0x02, 0xEA, 0x80, 0x00, 0x00, 0x04, 0xA1, 0x01, 0x02, 0xEB, 0x80, 0x00, 0x00
	.byte 0x00, 0x07, 0x00, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00
	.byte 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x03, 0x00, 0x00, 0x0F, 0x00, 0x00
	.byte 0xFD, 0xFF, 0xFD, 0xFF, 0x00, 0x0F, 0x00, 0x00, 0x03, 0x00, 0x03, 0x00, 0x00, 0x0F, 0x00, 0x00
	.byte 0xFD, 0xFF, 0xFD, 0xFF, 0x00, 0x0F, 0x00, 0x00, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0xD0, 0x28, 0x56, 0x08, 0xE0, 0x28, 0x56, 0x08
	@ pret/pokeemerald-jp direct xref for 0x08562910: contest.s: sub_080DC150
	.globl gContestData_08562910
gContestData_08562910: @ 0x08562910
	@ analyzed canonical ROM range 0x08562910-0x0856296F
	@ pointer/nullable table
	@ ANALYSIS: RAW_BLOCK size=0x8
	.4byte 0x80E880E8 @ +0x0
	.4byte 0x085628C8 @ +0x4
	.4byte gDummySpriteAnimTable @ +0x8
	@ ANALYSIS: RAW_BLOCK size=0x8
	.4byte 0 @ +0xC
	.4byte 0x08562908 @ +0x10
	.4byte SpriteCallbackDummy @ +0x14
	@ ANALYSIS: RAW_BLOCK size=0x8
	.4byte 0x80E980E9 @ +0x18
	.4byte 0x085628C8 @ +0x1C
	.4byte gDummySpriteAnimTable @ +0x20
	@ ANALYSIS: RAW_BLOCK size=0x8
	.4byte 0 @ +0x24
	.4byte 0x08562908 @ +0x28
	.4byte SpriteCallbackDummy @ +0x2C
	@ ANALYSIS: RAW_BLOCK size=0x8
	.4byte 0x80EA80EA @ +0x30
	.4byte 0x085628C8 @ +0x34
	.4byte gDummySpriteAnimTable @ +0x38
	@ ANALYSIS: RAW_BLOCK size=0x8
	.4byte 0 @ +0x3C
	.4byte 0x08562908 @ +0x40
	.4byte SpriteCallbackDummy @ +0x44
	@ ANALYSIS: RAW_BLOCK size=0x8
	.4byte 0x80EB80EB @ +0x48
	.4byte 0x085628C8 @ +0x4C
	.4byte gDummySpriteAnimTable @ +0x50
	@ ANALYSIS: RAW_BLOCK size=0x8
	.4byte 0 @ +0x54
	.4byte 0x08562908 @ +0x58
	.4byte SpriteCallbackDummy @ +0x5C
	@ pret/pokeemerald-jp direct xref for 0x08562970: contest.s: Contest_GetMoveExcitement
	.globl gContestData_08562970
gContestData_08562970: @ 0x08562970
	@ analyzed canonical ROM range 0x08562970-0x0856298B
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: RAW_BLOCK size=0x1C
	.2byte 0x0001, 0xFFFF, 0x0000, 0x0001, 0xFFFF, 0x00FF, 0x0001, 0xFFFF
	.2byte 0x00FF, 0x0001, 0xFF00, 0x00FF, 0x0001, 0x0000
	.globl gBattleU32Table_Rom_56298C
gBattleU32Table_Rom_56298C: @ 0x0856298C
	.4byte BuyMenuTryMakePurchase
	.4byte BuyMenuReturnToItemList
	.globl gBattlePointerTable_Rom_562994
gBattlePointerTable_Rom_562994: @ 0x08562994
	.4byte gText_Rom_5C98BE
	.4byte Task_HandleShopMenuBuy
	.4byte gText_Rom_5C98C5
	.4byte Task_HandleShopMenuSell
	.4byte gText_Rom_5C98CC
	.4byte Task_HandleShopMenuQuit
	.globl gBattlePointerTable_Rom_5629AC
gBattlePointerTable_Rom_5629AC: @ 0x085629AC
	.4byte gText_Rom_5C98BE
	.4byte Task_HandleShopMenuBuy
	.4byte gText_Rom_5C98CC
	.4byte Task_HandleShopMenuQuit
	@ pret/pokeemerald-jp direct xref for 0x085629BC: shop.s: CB2_BuyMenu
	.globl gShopData_085629BC
gShopData_085629BC: @ 0x085629BC
	@ analyzed canonical ROM range 0x085629BC-0x085629C3
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: RAW_BLOCK size=0x8
	.2byte 0x0200, 0x0901, 0x0F06, 0x0008
	@ pret/pokeemerald-jp direct xref for 0x085629C4: shop.s: CB2_BuyMenu
	.globl gShopData_085629C4
gShopData_085629C4: @ 0x085629C4
	@ analyzed canonical ROM range 0x085629C4-0x085629CB
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: RAW_BLOCK size=0x8
	.2byte 0x0200, 0x0901, 0x0F04, 0x0008
	@ pret/pokeemerald-jp direct xref for 0x085629CC: shop.s: BuyMenuBuildListMenuTemplate
	.globl gShopData_085629CC
gShopData_085629CC: @ 0x085629CC
	@ analyzed canonical ROM range 0x085629CC-0x085629E3
	@ semantic recovery: rodata; byte-verified against linked ROM
	@ ANALYSIS: ZERO_PADDING size=0x4
	.space 0x4, 0
FunctionPointerTable_JP_085629D0: @ 0x085629D0
	@ proven function-pointer table
	.4byte BuyMenuPrintItemDescriptionAndShowItemIcon
	.4byte CreateShopMenu
	.byte 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x08, 0x00, 0x22, 0x30, 0x00, 0x01
	@ pret/pokeemerald-jp direct xref for 0x085629E4: shop.s: BuyMenuInitBgs
	.globl gShopData_085629E4
gShopData_085629E4: @ 0x085629E4
	@ analyzed canonical ROM range 0x085629E4-0x085629F3
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: RAW_BLOCK size=0x10
	.2byte 0x01F8, 0x0000, 0x11E1, 0x0000, 0x21D2, 0x0000, 0x31C3, 0x0000
	@ pret/pokeemerald-jp direct xref for 0x085629F4: shop.s: BuyMenuInitWindows
	.globl gShopData_085629F4
gShopData_085629F4: @ 0x085629F4
	@ analyzed canonical ROM range 0x085629F4-0x08562A2B
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: RAW_BLOCK size=0x38
	.2byte 0x0100, 0x0C01, 0x0F02, 0x001E, 0x0E00, 0x0F02, 0x0F10, 0x0036
	.2byte 0x0100, 0x0C0D, 0x0F06, 0x0126, 0x0100, 0x0C0B, 0x0F02, 0x016E
	.2byte 0x1200, 0x0B0B, 0x0F02, 0x0186, 0x0400, 0x160F, 0x0F04, 0x019C
	.2byte 0x00FF, 0x0000, 0x0000, 0x0000
	@ pret/pokeemerald-jp direct xref for 0x08562A2C: shop.s: BuyMenuConfirmPurchase
	.globl gShopData_08562A2C
gShopData_08562A2C: @ 0x08562A2C
	@ analyzed canonical ROM range 0x08562A2C-0x08562A33
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: RAW_BLOCK size=0x8
	.2byte 0x1500, 0x0509, 0x0F04, 0x01F4
	@ pret/pokeemerald-jp direct xref for 0x08562A34: shop.s: BuyMenuPrint
	.globl gShopData_08562A34
gShopData_08562A34: @ 0x08562A34
	@ analyzed canonical ROM range 0x08562A34-0x08562A3D
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: RAW_BLOCK size=0xA
	.2byte 0x0201, 0x0003, 0x0302, 0x0300, 0x0002
	@ pret/pokeemerald-jp direct xref for 0x08562A3E: fldeff_escalator.s: sub_080E0990
	.globl gFldeffEscalatorData_08562A3E
gFldeffEscalatorData_08562A3E: @ 0x08562A3E
	@ analyzed canonical ROM range 0x08562A3E-0x08562A43
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: RAW_BLOCK size=0x6
	.byte 0x84, 0x02, 0x82, 0x02, 0x80, 0x02
	@ pret/pokeemerald-jp direct xref for 0x08562A44: fldeff_escalator.s: sub_080E0990
	.globl gFldeffEscalatorData_08562A44
gFldeffEscalatorData_08562A44: @ 0x08562A44
	@ analyzed canonical ROM range 0x08562A44-0x08562A49
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: RAW_BLOCK size=0x6
	.byte 0x85, 0x02, 0x83, 0x02, 0x81, 0x02
	@ pret/pokeemerald-jp direct xref for 0x08562A4A: fldeff_escalator.s: sub_080E0990
	.globl gFldeffEscalatorData_08562A4A
gFldeffEscalatorData_08562A4A: @ 0x08562A4A
	@ analyzed canonical ROM range 0x08562A4A-0x08562A4F
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: RAW_BLOCK size=0x6
	.byte 0x8C, 0x02, 0x8A, 0x02, 0x88, 0x02
	@ pret/pokeemerald-jp direct xref for 0x08562A50: fldeff_escalator.s: sub_080E0990
	.globl gFldeffEscalatorData_08562A50
gFldeffEscalatorData_08562A50: @ 0x08562A50
	@ analyzed canonical ROM range 0x08562A50-0x08562A55
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: RAW_BLOCK size=0x6
	.byte 0x8D, 0x02, 0x8B, 0x02, 0x89, 0x02
	@ pret/pokeemerald-jp direct xref for 0x08562A56: fldeff_escalator.s: sub_080E0990
	.globl gFldeffEscalatorData_08562A56
gFldeffEscalatorData_08562A56: @ 0x08562A56
	@ analyzed canonical ROM range 0x08562A56-0x08562A5B
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: RAW_BLOCK size=0x6
	.byte 0xA0, 0x02, 0xA2, 0x02, 0xA4, 0x02
	@ pret/pokeemerald-jp direct xref for 0x08562A5C: fldeff_escalator.s: sub_080E0990
	.globl gFldeffEscalatorData_08562A5C
gFldeffEscalatorData_08562A5C: @ 0x08562A5C
	@ analyzed canonical ROM range 0x08562A5C-0x08562A61
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: RAW_BLOCK size=0x6
	.byte 0xA1, 0x02, 0xA3, 0x02, 0xA5, 0x02
	@ pret/pokeemerald-jp direct xref for 0x08562A62: fldeff_escalator.s: sub_080E0990
	.globl gFldeffEscalatorData_08562A62
gFldeffEscalatorData_08562A62: @ 0x08562A62
	@ Actual escalator table is 6 bytes; following bytes are Berry descriptions.
	.byte 0xA8, 0x02, 0xAA, 0x02, 0xAC, 0x02
	.include "data/berry/berry_descriptions.inc"
