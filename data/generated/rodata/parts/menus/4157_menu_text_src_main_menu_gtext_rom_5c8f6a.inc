	@ src/main_menu.c:519 main_menu_line_519
	.globl gText_Rom_5C8F6A
gText_Rom_5C8F6A: @ 0x085C8F6A
	.string "マキコ$"
	.if (. - gText_Rom_5C8F6A) > 0x4
	.error "gText_Rom_5C8F6A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8F6A) < 0x4
	.space 0x4 - (. - gText_Rom_5C8F6A)
	.endif
	.space 0x2, 0xFF
