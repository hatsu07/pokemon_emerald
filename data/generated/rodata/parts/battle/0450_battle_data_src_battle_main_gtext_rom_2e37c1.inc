	@ src/battle_main.c:357 battle_main_line_357 (+1 aliases)
	.globl gText_Rom_2E37C1
gText_Rom_2E37C1: @ 0x082E37C1
	.string "ラブラブカップル$"
	.if (. - gText_Rom_2E37C1) > 0x9
	.error "gText_Rom_2E37C1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2E37C1) < 0x9
	.space 0x9 - (. - gText_Rom_2E37C1)
	.endif
	.space 0x2, 0x00
