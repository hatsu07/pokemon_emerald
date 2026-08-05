	@ src/main_menu.c:489 main_menu_line_489
	.globl gText_Rom_5C8ECA
gText_Rom_5C8ECA: @ 0x085C8ECA
	.string "ダニエル$"
	.if (. - gText_Rom_5C8ECA) > 0x5
	.error "gText_Rom_5C8ECA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8ECA) < 0x5
	.space 0x5 - (. - gText_Rom_5C8ECA)
	.endif
	.space 0x1, 0xFF
