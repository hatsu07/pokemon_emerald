	@ src/main_menu.c:523 main_menu_line_523
	.globl gText_Rom_5C8F82
gText_Rom_5C8F82: @ 0x085C8F82
	.string "ユウメ$"
	.if (. - gText_Rom_5C8F82) > 0x4
	.error "gText_Rom_5C8F82 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8F82) < 0x4
	.space 0x4 - (. - gText_Rom_5C8F82)
	.endif
	.space 0x2, 0xFF
