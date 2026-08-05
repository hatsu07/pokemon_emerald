	@ src/data/script_menu.h:1431 script_menu_line_1431
	.globl gText_Rom_57CB7F
gText_Rom_57CB7F: @ 0x0857CB7F
	.string "7のしま$"
	.if (. - gText_Rom_57CB7F) > 0x5
	.error "gText_Rom_57CB7F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_57CB7F) < 0x5
	.space 0x5 - (. - gText_Rom_57CB7F)
	.endif
