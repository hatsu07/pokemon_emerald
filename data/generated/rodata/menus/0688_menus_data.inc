	.globl gUnknown_84E8BFC
gUnknown_84E8BFC: @ 0x084E8BFC
	.4byte gText_Rom_4E8BA8
	.4byte gText_Rom_4E8BB2
	.4byte gText_Rom_4E8BBC
	.4byte gText_Rom_4E8BC6
	.4byte gText_Rom_4E8BD0
	.4byte gText_Rom_4E8BDA
	.4byte gText_Rom_4E8BE4
	.4byte gText_Rom_4E8BEE
	.globl gUnknown_84E8C1C
gUnknown_84E8C1C: @ 0x084E8C1C
	@ analyzed canonical ROM range 0x084E8C1C-0x084E8C23
sAnalyzedData_084E8C1C: @ 0x084E8C1C
	@ structured u16 table (semantic role inferred only to scalar width)
	.2byte 0x0100, 0x0A01, 0x0F04, 0x0008
	.globl gUnknown_84E8C24
gUnknown_84E8C24: @ 0x084E8C24
	@ analyzed canonical ROM range 0x084E8C24-0x084E8C2B
sAnalyzedData_084E8C24: @ 0x084E8C24
	@ structured u16 table (semantic role inferred only to scalar width)
	.2byte 0x0100, 0x0C01, 0x0F04, 0x0008
	.globl gUnknown_84E8C2C
gUnknown_84E8C2C: @ 0x084E8C2C
	@ confirmed contiguous ROM pointer table: 26 entries from this address
sPointerTable_084E8C2C:
	@ analyzed canonical ROM range 0x084E8C2C-0x084E8C93
sAnalyzedData_084E8C2C: @ 0x084E8C2C
	@ pointer/nullable table
	.4byte gText_Rom_4E8B58 @ +0x0
	.4byte StartMenuPokedexCallback @ +0x4
	.4byte gText_Rom_4E8B5C @ +0x8
	.4byte StartMenuPokemonCallback @ +0xC
	.4byte gText_Rom_4E8B61 @ +0x10
	.4byte StartMenuBagCallback @ +0x14
	.4byte gText_Rom_4E8B65 @ +0x18
	.4byte StartMenuPokeNavCallback @ +0x1C
	.4byte 0x084E8B6A @ +0x20
	.4byte StartMenuPlayerNameCallback @ +0x24
	.4byte gText_Rom_4E8B6D @ +0x28
	.4byte StartMenuSaveCallback @ +0x2C
	.4byte gText_Rom_4E8B72 @ +0x30
	.4byte StartMenuOptionCallback @ +0x34
	.4byte gText_Rom_4E8B77 @ +0x38
	.4byte StartMenuExitCallback @ +0x3C
	.4byte gText_Rom_4E8B7B @ +0x40
	.4byte StartMenuSafariZoneRetireCallback @ +0x44
	.4byte 0x084E8B6A @ +0x48
	.4byte StartMenuLinkModePlayerNameCallback @ +0x4C
	.4byte gText_Rom_4E8B80 @ +0x50
	.4byte StartMenuSaveCallback @ +0x54
	.4byte gText_Rom_4E8B7B @ +0x58
	.4byte StartMenuBattlePyramidRetireCallback @ +0x5C
	.4byte gText_Rom_4E8B61 @ +0x60
	.4byte StartMenuBattlePyramidBagCallback @ +0x64
	.globl gUnknown_84E8C94
gUnknown_84E8C94: @ 0x084E8C94
	@ analyzed canonical ROM range 0x084E8C94-0x084E8C97
sAnalyzedData_084E8C94: @ 0x084E8C94
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xF8, 0x01, 0x00, 0x00
	.globl gUnknown_84E8C98
gUnknown_84E8C98: @ 0x084E8C98
	@ analyzed canonical ROM range 0x084E8C98-0x084E8CA7
sAnalyzedData_084E8C98: @ 0x084E8C98
	@ structured u16 table (semantic role inferred only to scalar width)
	.2byte 0x0400, 0x160F, 0x0F04, 0x01A8, 0x00FF, 0x0000, 0x0000, 0x0000
	.globl gUnknown_84E8CA8
gUnknown_84E8CA8: @ 0x084E8CA8
	@ analyzed canonical ROM range 0x084E8CA8-0x084E8CAF
sAnalyzedData_084E8CA8: @ 0x084E8CA8
	@ structured u16 table (semantic role inferred only to scalar width)
	.2byte 0x0100, 0x0E01, 0x0F09, 0x0008
	.globl gUnknown_84E8CB0
gUnknown_84E8CB0: @ 0x084E8CB0

