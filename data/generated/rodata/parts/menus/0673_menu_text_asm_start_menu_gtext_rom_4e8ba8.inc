	@ asm/start_menu.s:361 ShowPyramidFloorWindow (+1 aliases)
	.globl gText_Rom_4E8BA8
gText_Rom_4E8BA8: @ 0x084E8BA8
	.string "げんざい　1だんめ$"
	.if (. - gText_Rom_4E8BA8) > 0xa
	.error "gText_Rom_4E8BA8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4E8BA8) < 0xa
	.space 0xa - (. - gText_Rom_4E8BA8)
	.endif
