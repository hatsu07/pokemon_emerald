	@ src/pokemon.c:254 pokemon_line_254
	.globl gText_Rom_5ECDCD
gText_Rom_5ECDCD: @ 0x085ECDCD
	.string "わんぱく$"
	.if (. - gText_Rom_5ECDCD) > 0x5
	.error "gText_Rom_5ECDCD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECDCD) < 0x5
	.space 0x5 - (. - gText_Rom_5ECDCD)
	.endif
