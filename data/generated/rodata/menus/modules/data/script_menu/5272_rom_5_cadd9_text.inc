	@ src/data/script_menu.h:593 script_menu_line_593
	.globl gText_Rom_5CADD9
gText_Rom_5CADD9: @ 0x085CADD9
	.string "10BP$"
	.if (. - gText_Rom_5CADD9) > 0x5
	.error "gText_Rom_5CADD9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CADD9) < 0x5
	.space 0x5 - (. - gText_Rom_5CADD9)
	.endif
