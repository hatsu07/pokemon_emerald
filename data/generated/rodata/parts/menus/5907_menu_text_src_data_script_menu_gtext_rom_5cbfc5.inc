	@ src/data/script_menu.h:294 script_menu_line_294
	.globl gText_Rom_5CBFC5
gText_Rom_5CBFC5: @ 0x085CBFC5
	.string "いまいち$"
	.if (. - gText_Rom_5CBFC5) > 0x5
	.error "gText_Rom_5CBFC5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBFC5) < 0x5
	.space 0x5 - (. - gText_Rom_5CBFC5)
	.endif
