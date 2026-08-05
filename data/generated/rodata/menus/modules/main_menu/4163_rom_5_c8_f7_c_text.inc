	@ src/main_menu.c:522 main_menu_line_522
	.globl gText_Rom_5C8F7C
gText_Rom_5C8F7C: @ 0x085C8F7C
	.string "モニカ$"
	.if (. - gText_Rom_5C8F7C) > 0x4
	.error "gText_Rom_5C8F7C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8F7C) < 0x4
	.space 0x4 - (. - gText_Rom_5C8F7C)
	.endif
	.space 0x2, 0xFF
