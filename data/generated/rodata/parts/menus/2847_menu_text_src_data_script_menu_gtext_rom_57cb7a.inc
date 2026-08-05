	@ src/data/script_menu.h:1429 script_menu_line_1429
	.globl gText_Rom_57CB7A
gText_Rom_57CB7A: @ 0x0857CB7A
	.string "5のしま$"
	.if (. - gText_Rom_57CB7A) > 0x5
	.error "gText_Rom_57CB7A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57CB7A) < 0x5
	.space 0x5 - (. - gText_Rom_57CB7A)
	.endif
