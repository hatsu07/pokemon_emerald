	@ src/main_menu.c:508 main_menu_line_508
	.globl gText_Rom_5C8F28
gText_Rom_5C8F28: @ 0x085C8F28
	.string "カオリ$"
	.if (. - gText_Rom_5C8F28) > 0x4
	.error "gText_Rom_5C8F28 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8F28) < 0x4
	.space 0x4 - (. - gText_Rom_5C8F28)
	.endif
	.space 0x2, 0xFF
