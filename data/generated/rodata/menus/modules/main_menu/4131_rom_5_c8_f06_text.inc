	@ src/main_menu.c:499 main_menu_line_499
	.globl gText_Rom_5C8F06
gText_Rom_5C8F06: @ 0x085C8F06
	.string "リュウ$"
	.if (. - gText_Rom_5C8F06) > 0x4
	.error "gText_Rom_5C8F06 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8F06) < 0x4
	.space 0x4 - (. - gText_Rom_5C8F06)
	.endif
	.space 0x2, 0xFF
