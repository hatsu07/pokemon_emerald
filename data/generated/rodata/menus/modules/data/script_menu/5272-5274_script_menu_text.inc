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

	@ src/data/script_menu.h:594 script_menu_line_594
	.globl gText_Rom_5CADDE
gText_Rom_5CADDE: @ 0x085CADDE
	.string "15BP$"
	.if (. - gText_Rom_5CADDE) > 0x5
	.error "gText_Rom_5CADDE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CADDE) < 0x5
	.space 0x5 - (. - gText_Rom_5CADDE)
	.endif
