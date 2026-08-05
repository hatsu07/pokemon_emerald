	@ src/pokemon.c:158 pokemon_line_158
	.globl gText_Rom_5ECDA4
gText_Rom_5ECDA4: @ 0x085ECDA4
	.string "がんばりや$"
	.if (. - gText_Rom_5ECDA4) > 0x6
	.error "gText_Rom_5ECDA4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECDA4) < 0x6
	.space 0x6 - (. - gText_Rom_5ECDA4)
	.endif
