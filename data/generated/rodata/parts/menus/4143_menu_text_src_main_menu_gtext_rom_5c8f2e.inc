	@ src/main_menu.c:509 main_menu_line_509
	.globl gText_Rom_5C8F2E
gText_Rom_5C8F2E: @ 0x085C8F2E
	.string "カレン$"
	.if (. - gText_Rom_5C8F2E) > 0x4
	.error "gText_Rom_5C8F2E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8F2E) < 0x4
	.space 0x4 - (. - gText_Rom_5C8F2E)
	.endif
	.space 0x2, 0xFF
