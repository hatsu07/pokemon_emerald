	@ src/battle_dome.c:990 battle_dome_line_990
	.globl gText_Rom_27424A
gText_Rom_27424A: @ 0x0827424A
	.string " 2かいせん だい1しあい$"
	.if (. - gText_Rom_27424A) > 0xe
	.error "gText_Rom_27424A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27424A) < 0xe
	.space 0xe - (. - gText_Rom_27424A)
	.endif
