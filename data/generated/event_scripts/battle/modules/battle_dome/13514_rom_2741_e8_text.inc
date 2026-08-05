	@ src/battle_dome.c:983 battle_dome_line_983
	.globl gText_Rom_2741E8
gText_Rom_2741E8: @ 0x082741E8
	.string " 1かいせん だい2しあい$"
	.if (. - gText_Rom_2741E8) > 0xe
	.error "gText_Rom_2741E8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2741E8) < 0xe
	.space 0xe - (. - gText_Rom_2741E8)
	.endif
