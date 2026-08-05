	@ src/battle_main.c:333 battle_main_line_333 (+2 aliases)
	.globl gText_Rom_2E36B9
gText_Rom_2E36B9: @ 0x082E36B9
	.string "してんのう$"
	.if (. - gText_Rom_2E36B9) > 0x6
	.error "gText_Rom_2E36B9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E36B9) < 0x6
	.space 0x6 - (. - gText_Rom_2E36B9)
	.endif
	.space 0x5, 0x00
