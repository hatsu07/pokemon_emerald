	@ src/battle_dome.c:989 battle_dome_line_989
	.globl gText_Rom_27423C
gText_Rom_27423C: @ 0x0827423C
	.string " 1かいせん だい8しあい$"
	.if (. - gText_Rom_27423C) > 0xe
	.error "gText_Rom_27423C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27423C) < 0xe
	.space 0xe - (. - gText_Rom_27423C)
	.endif
