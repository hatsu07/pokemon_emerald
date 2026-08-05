	@ asm/start_menu.s:361 ShowPyramidFloorWindow (+1 aliases)
	.globl gText_Rom_4E8BDA
gText_Rom_4E8BDA: @ 0x084E8BDA
	.string "げんざい　6だんめ$"
	.if (. - gText_Rom_4E8BDA) > 0xa
	.error "gText_Rom_4E8BDA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4E8BDA) < 0xa
	.space 0xa - (. - gText_Rom_4E8BDA)
	.endif
