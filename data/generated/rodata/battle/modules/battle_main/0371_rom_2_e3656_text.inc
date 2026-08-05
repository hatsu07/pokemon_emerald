	@ src/battle_main.c:324 battle_main_line_324
	.globl gText_Rom_2E3656
gText_Rom_2E3656: @ 0x082E3656
	.string "おぼっちゃま$"
	.if (. - gText_Rom_2E3656) > 0x7
	.error "gText_Rom_2E3656 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E3656) < 0x7
	.space 0x7 - (. - gText_Rom_2E3656)
	.endif
	.space 0x4, 0x00
