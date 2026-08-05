	@ src/pokedex_plus_hgss.c:160 sText_Stats_CatchRate_Medium
	.globl gText_Rom_5CAAC1
gText_Rom_5CAAC1: @ 0x085CAAC1
	.string "ふつう$"
	.if (. - gText_Rom_5CAAC1) > 0x4
	.error "gText_Rom_5CAAC1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAAC1) < 0x4
	.space 0x4 - (. - gText_Rom_5CAAC1)
	.endif
	@ Replaced baserom.gba range: offset=0x5CAAC5, size=0x5
	.byte 0x26, 0x21, 0x19, 0x2D, 0x00
