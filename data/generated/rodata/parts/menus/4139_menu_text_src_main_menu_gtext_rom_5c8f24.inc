	@ src/main_menu.c:507 main_menu_line_507
	.globl gText_Rom_5C8F24
gText_Rom_5C8F24: @ 0x085C8F24
	.string "エミィ$"
	.if (. - gText_Rom_5C8F24) > 0x4
	.error "gText_Rom_5C8F24 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8F24) < 0x4
	.space 0x4 - (. - gText_Rom_5C8F24)
	.endif
