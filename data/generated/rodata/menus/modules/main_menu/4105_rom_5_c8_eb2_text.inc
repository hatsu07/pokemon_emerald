	@ src/main_menu.c:485 main_menu_line_485
	.globl gText_Rom_5C8EB2
gText_Rom_5C8EB2: @ 0x085C8EB2
	.string "セイゴ$"
	.if (. - gText_Rom_5C8EB2) > 0x4
	.error "gText_Rom_5C8EB2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8EB2) < 0x4
	.space 0x4 - (. - gText_Rom_5C8EB2)
	.endif
	.space 0x2, 0xFF
