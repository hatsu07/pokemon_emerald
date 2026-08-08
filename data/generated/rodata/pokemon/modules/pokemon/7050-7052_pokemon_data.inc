	@ src/pokemon.c:422 pokemon_line_422
	.globl gText_Rom_5ECE14
gText_Rom_5ECE14: @ 0x085ECE14
	.string "なまいき$"
	.if (. - gText_Rom_5ECE14) > 0x5
	.error "gText_Rom_5ECE14 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECE14) < 0x5
	.space 0x5 - (. - gText_Rom_5ECE14)
	.endif

	@ src/pokemon.c:434 pokemon_line_434
	.globl gText_Rom_5ECE19
gText_Rom_5ECE19: @ 0x085ECE19
	.string "しんちょう$"
	.if (. - gText_Rom_5ECE19) > 0x6
	.error "gText_Rom_5ECE19 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECE19) < 0x6
	.space 0x6 - (. - gText_Rom_5ECE19)
	.endif
