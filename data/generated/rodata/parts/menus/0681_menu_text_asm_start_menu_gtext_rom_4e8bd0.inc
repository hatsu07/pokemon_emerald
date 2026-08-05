	@ asm/start_menu.s:361 ShowPyramidFloorWindow (+1 aliases)
	.globl gText_Rom_4E8BD0
gText_Rom_4E8BD0: @ 0x084E8BD0
	.string "げんざい　5だんめ$"
	.if (. - gText_Rom_4E8BD0) > 0xa
	.error "gText_Rom_4E8BD0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4E8BD0) < 0xa
	.space 0xa - (. - gText_Rom_4E8BD0)
	.endif
