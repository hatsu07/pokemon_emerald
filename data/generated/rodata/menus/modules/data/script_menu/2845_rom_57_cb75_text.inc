	@ src/data/script_menu.h:1428 script_menu_line_1428
	.globl gText_Rom_57CB75
gText_Rom_57CB75: @ 0x0857CB75
	.string "4のしま$"
	.if (. - gText_Rom_57CB75) > 0x5
	.error "gText_Rom_57CB75 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57CB75) < 0x5
	.space 0x5 - (. - gText_Rom_57CB75)
	.endif
