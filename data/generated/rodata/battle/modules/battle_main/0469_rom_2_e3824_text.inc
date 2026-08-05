	@ src/battle_main.c:366 battle_main_line_366
	.globl gText_Rom_2E3824
gText_Rom_2E3824: @ 0x082E3824
	.string "ピラミッドキング$"
	.if (. - gText_Rom_2E3824) > 0x9
	.error "gText_Rom_2E3824 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E3824) < 0x9
	.space 0x9 - (. - gText_Rom_2E3824)
	.endif
	.space 0x2, 0x00
