	@ src/main_menu.c:513 main_menu_line_513
	.globl gText_Rom_5C8F46
gText_Rom_5C8F46: @ 0x085C8F46
	.string "ジュリ$"
	.if (. - gText_Rom_5C8F46) > 0x4
	.error "gText_Rom_5C8F46 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8F46) < 0x4
	.space 0x4 - (. - gText_Rom_5C8F46)
	.endif
	.space 0x2, 0xFF
