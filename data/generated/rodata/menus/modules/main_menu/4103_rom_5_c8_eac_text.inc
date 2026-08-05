	@ src/main_menu.c:484 main_menu_line_484
	.globl gText_Rom_5C8EAC
gText_Rom_5C8EAC: @ 0x085C8EAC
	.string "シュウサク$"
	.if (. - gText_Rom_5C8EAC) > 0x6
	.error "gText_Rom_5C8EAC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8EAC) < 0x6
	.space 0x6 - (. - gText_Rom_5C8EAC)
	.endif
