	@ src/main_menu.c:481 main_menu_line_481
	.globl gText_Rom_5C8E9A
gText_Rom_5C8E9A: @ 0x085C8E9A
	.string "イツオ$"
	.if (. - gText_Rom_5C8E9A) > 0x4
	.error "gText_Rom_5C8E9A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8E9A) < 0x4
	.space 0x4 - (. - gText_Rom_5C8E9A)
	.endif
	.space 0x2, 0xFF
