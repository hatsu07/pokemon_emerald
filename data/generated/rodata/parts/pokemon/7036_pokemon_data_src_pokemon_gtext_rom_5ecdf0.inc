	@ src/pokemon.c:338 pokemon_line_338
	.globl gText_Rom_5ECDF0
gText_Rom_5ECDF0: @ 0x085ECDF0
	.string "ひかえめ$"
	.if (. - gText_Rom_5ECDF0) > 0x5
	.error "gText_Rom_5ECDF0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECDF0) < 0x5
	.space 0x5 - (. - gText_Rom_5ECDF0)
	.endif
