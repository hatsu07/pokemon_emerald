	@ src/option_menu.c:88 gText_ButtonTypeLR
	.globl gText_Rom_5373E5
gText_Rom_5373E5: @ 0x085373E5
	.string "{COLOR GREEN}{SHADOW LIGHT_GREEN}LR$"
	.if (. - gText_Rom_5373E5) > 0x9
	.error "gText_Rom_5373E5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5373E5) < 0x9
	.space 0x9 - (. - gText_Rom_5373E5)
	.endif
