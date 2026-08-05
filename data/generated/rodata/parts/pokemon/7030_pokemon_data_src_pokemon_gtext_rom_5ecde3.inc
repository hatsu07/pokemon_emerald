	@ src/pokemon.c:302 pokemon_line_302
	.globl gText_Rom_5ECDE3
gText_Rom_5ECDE3: @ 0x085ECDE3
	.string "まじめ$"
	.if (. - gText_Rom_5ECDE3) > 0x4
	.error "gText_Rom_5ECDE3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECDE3) < 0x4
	.space 0x4 - (. - gText_Rom_5ECDE3)
	.endif
