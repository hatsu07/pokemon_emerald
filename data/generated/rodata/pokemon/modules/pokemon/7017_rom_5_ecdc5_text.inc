	@ src/pokemon.c:230 pokemon_line_230
	.globl gText_Rom_5ECDC5
gText_Rom_5ECDC5: @ 0x085ECDC5
	.string "すなお$"
	.if (. - gText_Rom_5ECDC5) > 0x4
	.error "gText_Rom_5ECDC5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECDC5) < 0x4
	.space 0x4 - (. - gText_Rom_5ECDC5)
	.endif
