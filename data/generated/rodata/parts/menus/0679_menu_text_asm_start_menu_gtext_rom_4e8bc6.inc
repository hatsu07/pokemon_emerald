	@ asm/start_menu.s:361 ShowPyramidFloorWindow (+1 aliases)
	.globl gText_Rom_4E8BC6
gText_Rom_4E8BC6: @ 0x084E8BC6
	.string "げんざい　4だんめ$"
	.if (. - gText_Rom_4E8BC6) > 0xa
	.error "gText_Rom_4E8BC6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4E8BC6) < 0xa
	.space 0xa - (. - gText_Rom_4E8BC6)
	.endif
