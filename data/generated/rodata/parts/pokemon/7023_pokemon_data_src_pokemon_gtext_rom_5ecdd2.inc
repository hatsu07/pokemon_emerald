	@ src/pokemon.c:266 pokemon_line_266
	.globl gText_Rom_5ECDD2
gText_Rom_5ECDD2: @ 0x085ECDD2
	.string "のうてんき$"
	.if (. - gText_Rom_5ECDD2) > 0x6
	.error "gText_Rom_5ECDD2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECDD2) < 0x6
	.space 0x6 - (. - gText_Rom_5ECDD2)
	.endif
