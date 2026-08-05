	@ src/main_menu.c:521 main_menu_line_521
	.globl gText_Rom_5C8F76
gText_Rom_5C8F76: @ 0x085C8F76
	.string "ムツミ$"
	.if (. - gText_Rom_5C8F76) > 0x4
	.error "gText_Rom_5C8F76 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8F76) < 0x4
	.space 0x4 - (. - gText_Rom_5C8F76)
	.endif
	.space 0x2, 0xFF
