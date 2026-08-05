	@ asm/start_menu.s:361 ShowPyramidFloorWindow (+1 aliases)
	.globl gText_Rom_4E8BEE
gText_Rom_4E8BEE: @ 0x084E8BEE
	.string "げんざい　ちょうじょう$"
	.if (. - gText_Rom_4E8BEE) > 0xc
	.error "gText_Rom_4E8BEE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_4E8BEE) < 0xc
	.space 0xc - (. - gText_Rom_4E8BEE)
	.endif
	.space 0x2, 0x00
