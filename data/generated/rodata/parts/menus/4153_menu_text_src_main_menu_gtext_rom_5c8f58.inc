	@ src/main_menu.c:516 main_menu_line_516
	.globl gText_Rom_5C8F58
gText_Rom_5C8F58: @ 0x085C8F58
	.string "テルコ$"
	.if (. - gText_Rom_5C8F58) > 0x4
	.error "gText_Rom_5C8F58 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8F58) < 0x4
	.space 0x4 - (. - gText_Rom_5C8F58)
	.endif
	.space 0x2, 0xFF
