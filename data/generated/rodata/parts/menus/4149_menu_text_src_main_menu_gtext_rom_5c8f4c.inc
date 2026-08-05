	@ src/main_menu.c:514 main_menu_line_514
	.globl gText_Rom_5C8F4C
gText_Rom_5C8F4C: @ 0x085C8F4C
	.string "チエミ$"
	.if (. - gText_Rom_5C8F4C) > 0x4
	.error "gText_Rom_5C8F4C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8F4C) < 0x4
	.space 0x4 - (. - gText_Rom_5C8F4C)
	.endif
	.space 0x2, 0xFF
