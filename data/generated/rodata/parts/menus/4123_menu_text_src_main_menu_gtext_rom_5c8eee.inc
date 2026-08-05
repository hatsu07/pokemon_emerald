	@ src/main_menu.c:495 main_menu_line_495
	.globl gText_Rom_5C8EEE
gText_Rom_5C8EEE: @ 0x085C8EEE
	.string "ユキヒコ$"
	.if (. - gText_Rom_5C8EEE) > 0x5
	.error "gText_Rom_5C8EEE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8EEE) < 0x5
	.space 0x5 - (. - gText_Rom_5C8EEE)
	.endif
	.space 0x1, 0xFF
