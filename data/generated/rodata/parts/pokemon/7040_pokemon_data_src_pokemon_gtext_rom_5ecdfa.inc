	@ src/pokemon.c:362 pokemon_line_362
	.globl gText_Rom_5ECDFA
gText_Rom_5ECDFA: @ 0x085ECDFA
	.string "れいせい$"
	.if (. - gText_Rom_5ECDFA) > 0x5
	.error "gText_Rom_5ECDFA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECDFA) < 0x5
	.space 0x5 - (. - gText_Rom_5ECDFA)
	.endif
