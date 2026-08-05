	@ src/battle_dome.c:874 battle_dome_line_874
	.globl gText_Rom_273A84
gText_Rom_273A84: @ 0x08273A84
	.string "じつりょくは かなり したの レベルの チーム。$"
	.if (. - gText_Rom_273A84) > 0x19
	.error "gText_Rom_273A84 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273A84) < 0x19
	.space 0x19 - (. - gText_Rom_273A84)
	.endif
