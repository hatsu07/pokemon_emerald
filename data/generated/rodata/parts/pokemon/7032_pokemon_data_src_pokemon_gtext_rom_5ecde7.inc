	@ src/pokemon.c:314 pokemon_line_314
	.globl gText_Rom_5ECDE7
gText_Rom_5ECDE7: @ 0x085ECDE7
	.string "ようき$"
	.if (. - gText_Rom_5ECDE7) > 0x4
	.error "gText_Rom_5ECDE7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECDE7) < 0x4
	.space 0x4 - (. - gText_Rom_5ECDE7)
	.endif
