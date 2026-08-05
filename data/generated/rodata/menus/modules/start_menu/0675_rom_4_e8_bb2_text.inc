	@ asm/start_menu.s:361 ShowPyramidFloorWindow (+1 aliases)
	.globl gText_Rom_4E8BB2
gText_Rom_4E8BB2: @ 0x084E8BB2
	.string "げんざい　2だんめ$"
	.if (. - gText_Rom_4E8BB2) > 0xa
	.error "gText_Rom_4E8BB2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4E8BB2) < 0xa
	.space 0xa - (. - gText_Rom_4E8BB2)
	.endif
