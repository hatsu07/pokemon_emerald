	@ src/pokemon.c:242 pokemon_line_242
	.globl gText_Rom_5ECDC9
gText_Rom_5ECDC9: @ 0x085ECDC9
	.string "のんき$"
	.if (. - gText_Rom_5ECDC9) > 0x4
	.error "gText_Rom_5ECDC9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECDC9) < 0x4
	.space 0x4 - (. - gText_Rom_5ECDC9)
	.endif
