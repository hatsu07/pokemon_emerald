	@ src/strings.c:507 gText_PokemonMoves
	.globl gText_Rom_5CAF7F
gText_Rom_5CAF7F: @ 0x085CAF7F
	.string "ポケモンのわざ$"
	.if (. - gText_Rom_5CAF7F) > 0x8
	.error "gText_Rom_5CAF7F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAF7F) < 0x8
	.space 0x8 - (. - gText_Rom_5CAF7F)
	.endif
