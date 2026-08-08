	@ src/battle_dome.c:982 battle_dome_line_982
	.globl gText_Rom_2741DA
gText_Rom_2741DA: @ 0x082741DA
	.string " 1かいせん だい1しあい$"
	.if (. - gText_Rom_2741DA) > 0xe
	.error "gText_Rom_2741DA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2741DA) < 0xe
	.space 0xe - (. - gText_Rom_2741DA)
	.endif
