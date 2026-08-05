	@ src/main_menu.c:488 main_menu_line_488
	.globl gText_Rom_5C8EC4
gText_Rom_5C8EC4: @ 0x085C8EC4
	.string "タツヤ$"
	.if (. - gText_Rom_5C8EC4) > 0x4
	.error "gText_Rom_5C8EC4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8EC4) < 0x4
	.space 0x4 - (. - gText_Rom_5C8EC4)
	.endif
	.space 0x2, 0xFF
