	@ src/pokemon.c:326 pokemon_line_326
	.globl gText_Rom_5ECDEB
gText_Rom_5ECDEB: @ 0x085ECDEB
	.string "むじゃき$"
	.if (. - gText_Rom_5ECDEB) > 0x5
	.error "gText_Rom_5ECDEB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECDEB) < 0x5
	.space 0x5 - (. - gText_Rom_5ECDEB)
	.endif
