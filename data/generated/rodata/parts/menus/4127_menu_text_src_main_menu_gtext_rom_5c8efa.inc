	@ src/main_menu.c:497 main_menu_line_497
	.globl gText_Rom_5C8EFA
gText_Rom_5C8EFA: @ 0x085C8EFA
	.string "リクヤ$"
	.if (. - gText_Rom_5C8EFA) > 0x4
	.error "gText_Rom_5C8EFA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8EFA) < 0x4
	.space 0x4 - (. - gText_Rom_5C8EFA)
	.endif
	.space 0x2, 0xFF
