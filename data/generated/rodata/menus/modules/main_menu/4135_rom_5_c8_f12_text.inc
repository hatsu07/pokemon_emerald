	@ src/main_menu.c:504 main_menu_line_504
	.globl gText_Rom_5C8F12
gText_Rom_5C8F12: @ 0x085C8F12
	.string "アイコ$"
	.if (. - gText_Rom_5C8F12) > 0x4
	.error "gText_Rom_5C8F12 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8F12) < 0x4
	.space 0x4 - (. - gText_Rom_5C8F12)
	.endif
	.space 0x2, 0xFF
