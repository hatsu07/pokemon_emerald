	@ src/main_menu.c:486 main_menu_line_486
	.globl gText_Rom_5C8EB8
gText_Rom_5C8EB8: @ 0x085C8EB8
	.string "ダイサク$"
	.if (. - gText_Rom_5C8EB8) > 0x5
	.error "gText_Rom_5C8EB8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8EB8) < 0x5
	.space 0x5 - (. - gText_Rom_5C8EB8)
	.endif
	.space 0x1, 0xFF
