	@ src/battle_dome.c:984 battle_dome_line_984
	.globl gText_Rom_2741F6
gText_Rom_2741F6: @ 0x082741F6
	.string " 1かいせん だい3しあい$"
	.if (. - gText_Rom_2741F6) > 0xe
	.error "gText_Rom_2741F6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2741F6) < 0xe
	.space 0xe - (. - gText_Rom_2741F6)
	.endif
