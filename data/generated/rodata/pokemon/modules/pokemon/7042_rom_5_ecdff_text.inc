	@ src/pokemon.c:374 pokemon_line_374
	.globl gText_Rom_5ECDFF
gText_Rom_5ECDFF: @ 0x085ECDFF
	.string "てれや$"
	.if (. - gText_Rom_5ECDFF) > 0x4
	.error "gText_Rom_5ECDFF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECDFF) < 0x4
	.space 0x4 - (. - gText_Rom_5ECDFF)
	.endif
