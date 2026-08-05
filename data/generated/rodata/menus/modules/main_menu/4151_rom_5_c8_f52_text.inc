	@ src/main_menu.c:515 main_menu_line_515
	.globl gText_Rom_5C8F52
gText_Rom_5C8F52: @ 0x085C8F52
	.string "チヨコ$"
	.if (. - gText_Rom_5C8F52) > 0x4
	.error "gText_Rom_5C8F52 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8F52) < 0x4
	.space 0x4 - (. - gText_Rom_5C8F52)
	.endif
	.space 0x2, 0xFF
