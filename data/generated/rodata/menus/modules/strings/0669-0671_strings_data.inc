	@ src/strings.c:950 gText_SafariBallStock
	.globl gText_Rom_4E8B84
gText_Rom_4E8B84: @ 0x084E8B84
	.string "サファリボール\nのこり {STR_VAR_1}コ$"
	.if (. - gText_Rom_4E8B84) > 0x10
	.error "gText_Rom_4E8B84 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4E8B84) < 0x10
	.space 0x10 - (. - gText_Rom_4E8B84)
	.endif
	@ pret/pokeemerald-jp direct xref for 0x084E8B94: start_menu.s: ShowSafariBallsWindow
	.globl gStartMenuData_084E8B94
gStartMenuData_084E8B94:
	.globl gUnknown_84E8B94
gUnknown_84E8B94: @ 0x084E8B94
	@ analyzed canonical ROM range 0x084E8B94-0x084E8B9B
sAnalyzedData_084E8B94: @ 0x084E8B94
	@ structured u16 table (semantic role inferred only to scalar width)
	.2byte 0x0100, 0x0801, 0x0F04, 0x0008
	.globl gUnknown_84E8B9C
gUnknown_84E8B9C: @ 0x084E8B9C

	@ src/strings.c:952 gText_BattlePyramidFloor
	.globl gText_Rom_4E8B9C
gText_Rom_4E8B9C: @ 0x084E8B9C
	.string "バトルピラミッド\n{STR_VAR_1}$"
	.if (. - gText_Rom_4E8B9C) > 0xc
	.error "gText_Rom_4E8B9C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4E8B9C) < 0xc
	.space 0xc - (. - gText_Rom_4E8B9C)
	.endif
