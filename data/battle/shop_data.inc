	@ pret/pokeemerald-jp direct xref for 0x085629BC: shop.s: CB2_BuyMenu
	.globl gShopData_085629BC
gShopData_085629BC: @ 0x085629BC
	@ analyzed canonical ROM range 0x085629BC-0x085629C3
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x8 entries=4
	.2byte 0x0200, 0x0901, 0x0F06, 0x0008
	@ pret/pokeemerald-jp direct xref for 0x085629C4: shop.s: CB2_BuyMenu
	.globl gShopData_085629C4
gShopData_085629C4: @ 0x085629C4
	@ analyzed canonical ROM range 0x085629C4-0x085629CB
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x8 entries=4
	.2byte 0x0200, 0x0901, 0x0F04, 0x0008
	@ pret/pokeemerald-jp direct xref for 0x085629CC: shop.s: BuyMenuBuildListMenuTemplate
	.globl gShopData_085629CC
gShopData_085629CC: @ 0x085629CC
	@ analyzed canonical ROM range 0x085629CC-0x085629E3
	@ semantic recovery: rodata; byte-verified against linked ROM
	@ ANALYSIS: ZERO_PADDING size=0x4
	.space 0x4, 0

	@ proven function-pointer table
	.4byte BuyMenuPrintItemDescriptionAndShowItemIcon
	.4byte CreateShopMenu
	.byte 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x08, 0x00, 0x22, 0x30, 0x00, 0x01
	@ pret/pokeemerald-jp direct xref for 0x085629E4: shop.s: BuyMenuInitBgs
	.globl gShopData_085629E4
gShopData_085629E4: @ 0x085629E4
	@ analyzed canonical ROM range 0x085629E4-0x085629F3
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x10 entries=8
	.2byte 0x01F8, 0x0000, 0x11E1, 0x0000, 0x21D2, 0x0000, 0x31C3, 0x0000
	@ pret/pokeemerald-jp direct xref for 0x085629F4: shop.s: BuyMenuInitWindows
	.globl gShopData_085629F4
gShopData_085629F4: @ 0x085629F4
	@ analyzed canonical ROM range 0x085629F4-0x08562A2B
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x38 entries=28
	.2byte 0x0100, 0x0C01, 0x0F02, 0x001E, 0x0E00, 0x0F02, 0x0F10, 0x0036
	.2byte 0x0100, 0x0C0D, 0x0F06, 0x0126, 0x0100, 0x0C0B, 0x0F02, 0x016E
	.2byte 0x1200, 0x0B0B, 0x0F02, 0x0186, 0x0400, 0x160F, 0x0F04, 0x019C
	.2byte 0x00FF, 0x0000, 0x0000, 0x0000
	@ pret/pokeemerald-jp direct xref for 0x08562A2C: shop.s: BuyMenuConfirmPurchase
	.globl gShopData_08562A2C
gShopData_08562A2C: @ 0x08562A2C
	@ analyzed canonical ROM range 0x08562A2C-0x08562A33
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x8 entries=4
	.2byte 0x1500, 0x0509, 0x0F04, 0x01F4
	@ pret/pokeemerald-jp direct xref for 0x08562A34: shop.s: BuyMenuPrint
	.globl gShopData_08562A34
gShopData_08562A34: @ 0x08562A34
	@ analyzed canonical ROM range 0x08562A34-0x08562A3D
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0xA entries=5
	.2byte 0x0201, 0x0003, 0x0302, 0x0300, 0x0002
