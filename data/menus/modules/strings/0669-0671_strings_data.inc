	.globl gText_SafariBallStock

	@ src/strings.c:950 gText_SafariBallStock
	.globl gText_SafariBallStock
gText_SafariBallStock: @ 0x084E8B84
	.string "サファリボール\nのこり {STR_VAR_1}コ{EOS}"
	.if (. - gText_SafariBallStock) > 0x10
	.error "gText_SafariBallStock may not grow beyond its original slot"
	.endif
	.if (. - gText_SafariBallStock) < 0x10
	.space 0x10 - (. - gText_SafariBallStock)
	.endif
	@ pret/pokeemerald-jp direct xref for 0x084E8B94: start_menu.s: ShowSafariBallsWindow
	.globl gStartMenuData_084E8B94
gStartMenuData_084E8B94: @ 0x084E8B94
	@ analyzed canonical ROM range 0x084E8B94-0x084E8B9B
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x8 entries=4
	.2byte 0x0100, 0x0801, 0x0F04, 0x0008

	@ src/strings.c:952 gText_BattlePyramidFloor
	.globl gText_BattlePyramidFloor
gText_BattlePyramidFloor: @ 0x084E8B9C
	.string "バトルピラミッド\n{STR_VAR_1}{EOS}"
	.if (. - gText_BattlePyramidFloor) > 0xc
	.error "gText_BattlePyramidFloor may not grow beyond its original slot"
	.endif
	.if (. - gText_BattlePyramidFloor) < 0xc
	.space 0xc - (. - gText_BattlePyramidFloor)
	.endif
