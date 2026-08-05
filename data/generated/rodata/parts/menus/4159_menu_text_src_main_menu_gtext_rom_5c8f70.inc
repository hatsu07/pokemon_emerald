	@ src/main_menu.c:520 main_menu_line_520
	.globl gText_Rom_5C8F70
gText_Rom_5C8F70: @ 0x085C8F70
	.string "ミサコ$"
	.if (. - gText_Rom_5C8F70) > 0x4
	.error "gText_Rom_5C8F70 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8F70) < 0x4
	.space 0x4 - (. - gText_Rom_5C8F70)
	.endif
	.space 0x2, 0xFF
