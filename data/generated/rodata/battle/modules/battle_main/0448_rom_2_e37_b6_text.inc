	@ src/battle_main.c:356 battle_main_line_356 (+1 aliases)
	.globl gText_Rom_2E37B6
gText_Rom_2E37B6: @ 0x082E37B6
	.string "ミニスカート$"
	.if (. - gText_Rom_2E37B6) > 0x7
	.error "gText_Rom_2E37B6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E37B6) < 0x7
	.space 0x7 - (. - gText_Rom_2E37B6)
	.endif
	.space 0x4, 0x00
