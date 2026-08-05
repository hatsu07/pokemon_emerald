	@ src/pokemon.c:350 pokemon_line_350
	.globl gText_Rom_5ECDF5
gText_Rom_5ECDF5: @ 0x085ECDF5
	.string "おっとり$"
	.if (. - gText_Rom_5ECDF5) > 0x5
	.error "gText_Rom_5ECDF5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECDF5) < 0x5
	.space 0x5 - (. - gText_Rom_5ECDF5)
	.endif
