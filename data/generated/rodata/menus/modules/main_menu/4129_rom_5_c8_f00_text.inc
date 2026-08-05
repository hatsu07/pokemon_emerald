	@ src/main_menu.c:498 main_menu_line_498
	.globl gText_Rom_5C8F00
gText_Rom_5C8F00: @ 0x085C8F00
	.string "リチャード$"
	.if (. - gText_Rom_5C8F00) > 0x6
	.error "gText_Rom_5C8F00 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8F00) < 0x6
	.space 0x6 - (. - gText_Rom_5C8F00)
	.endif
