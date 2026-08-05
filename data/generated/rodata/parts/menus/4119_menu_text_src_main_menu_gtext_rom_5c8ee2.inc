	@ src/main_menu.c:493 main_menu_line_493
	.globl gText_Rom_5C8EE2
gText_Rom_5C8EE2: @ 0x085C8EE2
	.string "ヒトシ$"
	.if (. - gText_Rom_5C8EE2) > 0x4
	.error "gText_Rom_5C8EE2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8EE2) < 0x4
	.space 0x4 - (. - gText_Rom_5C8EE2)
	.endif
	.space 0x2, 0xFF
