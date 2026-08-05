	@ src/battle_dome.c:986 battle_dome_line_986
	.globl gText_Rom_274212
gText_Rom_274212: @ 0x08274212
	.string " 1かいせん だい5しあい$"
	.if (. - gText_Rom_274212) > 0xe
	.error "gText_Rom_274212 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274212) < 0xe
	.space 0xe - (. - gText_Rom_274212)
	.endif
