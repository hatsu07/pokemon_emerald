	@ src/main_menu.c:494 main_menu_line_494
	.globl gText_Rom_5C8EE8
gText_Rom_5C8EE8: @ 0x085C8EE8
	.string "ヒロアキ$"
	.if (. - gText_Rom_5C8EE8) > 0x5
	.error "gText_Rom_5C8EE8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8EE8) < 0x5
	.space 0x5 - (. - gText_Rom_5C8EE8)
	.endif
	.space 0x1, 0xFF
