	@ src/pokemon.c:206 pokemon_line_206
	.globl gText_Rom_5ECDBB
gText_Rom_5ECDBB: @ 0x085ECDBB
	.string "やんちゃ$"
	.if (. - gText_Rom_5ECDBB) > 0x5
	.error "gText_Rom_5ECDBB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECDBB) < 0x5
	.space 0x5 - (. - gText_Rom_5ECDBB)
	.endif
