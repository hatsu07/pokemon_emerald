	@ asm/start_menu.s:361 ShowPyramidFloorWindow (+1 aliases)
	.globl gText_Rom_4E8BE4
gText_Rom_4E8BE4: @ 0x084E8BE4
	.string "げんざい　7だんめ$"
	.if (. - gText_Rom_4E8BE4) > 0xa
	.error "gText_Rom_4E8BE4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4E8BE4) < 0xa
	.space 0xa - (. - gText_Rom_4E8BE4)
	.endif
