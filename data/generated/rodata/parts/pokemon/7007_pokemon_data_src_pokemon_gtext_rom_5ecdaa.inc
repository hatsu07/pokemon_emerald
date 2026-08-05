	@ src/pokemon.c:170 pokemon_line_170
	.globl gText_Rom_5ECDAA
gText_Rom_5ECDAA: @ 0x085ECDAA
	.string "さみしがり$"
	.if (. - gText_Rom_5ECDAA) > 0x6
	.error "gText_Rom_5ECDAA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECDAA) < 0x6
	.space 0x6 - (. - gText_Rom_5ECDAA)
	.endif
