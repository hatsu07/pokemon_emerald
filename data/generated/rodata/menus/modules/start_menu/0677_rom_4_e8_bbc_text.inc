	@ asm/start_menu.s:361 ShowPyramidFloorWindow (+1 aliases)
	.globl gText_Rom_4E8BBC
gText_Rom_4E8BBC: @ 0x084E8BBC
	.string "げんざい　3だんめ$"
	.if (. - gText_Rom_4E8BBC) > 0xa
	.error "gText_Rom_4E8BBC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4E8BBC) < 0xa
	.space 0xa - (. - gText_Rom_4E8BBC)
	.endif
