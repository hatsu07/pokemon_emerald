	@ src/main_menu.c:500 main_menu_line_500
	.globl gText_Rom_5C8F0C
gText_Rom_5C8F0C: @ 0x085C8F0C
	.string "リョウタ$"
	.if (. - gText_Rom_5C8F0C) > 0x5
	.error "gText_Rom_5C8F0C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8F0C) < 0x5
	.space 0x5 - (. - gText_Rom_5C8F0C)
	.endif
	.space 0x1, 0xFF
