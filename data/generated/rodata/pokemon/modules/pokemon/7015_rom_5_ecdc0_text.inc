	@ src/pokemon.c:218 pokemon_line_218
	.globl gText_Rom_5ECDC0
gText_Rom_5ECDC0: @ 0x085ECDC0
	.string "ずぶとい$"
	.if (. - gText_Rom_5ECDC0) > 0x5
	.error "gText_Rom_5ECDC0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECDC0) < 0x5
	.space 0x5 - (. - gText_Rom_5ECDC0)
	.endif
