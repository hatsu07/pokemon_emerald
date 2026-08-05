	@ src/pokemon.c:290 pokemon_line_290
	.globl gText_Rom_5ECDDE
gText_Rom_5ECDDE: @ 0x085ECDDE
	.string "せっかち$"
	.if (. - gText_Rom_5ECDDE) > 0x5
	.error "gText_Rom_5ECDDE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECDDE) < 0x5
	.space 0x5 - (. - gText_Rom_5ECDDE)
	.endif
