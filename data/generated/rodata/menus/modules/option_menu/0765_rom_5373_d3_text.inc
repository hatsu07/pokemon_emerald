	@ src/option_menu.c:86 gText_FrameTypeNumber
	.globl gText_Rom_5373D3
gText_Rom_5373D3: @ 0x085373D3
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}$"
	.if (. - gText_Rom_5373D3) > 0x7
	.error "gText_Rom_5373D3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5373D3) < 0x7
	.space 0x7 - (. - gText_Rom_5373D3)
	.endif
