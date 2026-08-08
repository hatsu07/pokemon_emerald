
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

	@ src/pokemon.c:362 pokemon_line_362
	.globl gText_Rom_5ECDFA
gText_Rom_5ECDFA: @ 0x085ECDFA
	.string "れいせい$"
	.if (. - gText_Rom_5ECDFA) > 0x5
	.error "gText_Rom_5ECDFA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECDFA) < 0x5
	.space 0x5 - (. - gText_Rom_5ECDFA)
	.endif

	@ src/pokemon.c:374 pokemon_line_374
	.globl gText_Rom_5ECDFF
gText_Rom_5ECDFF: @ 0x085ECDFF
	.string "てれや$"
	.if (. - gText_Rom_5ECDFF) > 0x4
	.error "gText_Rom_5ECDFF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECDFF) < 0x4
	.space 0x4 - (. - gText_Rom_5ECDFF)
	.endif

	@ src/pokemon.c:386 pokemon_line_386
	.globl gText_Rom_5ECE03
gText_Rom_5ECE03: @ 0x085ECE03
	.string "うっかりや$"
	.if (. - gText_Rom_5ECE03) > 0x6
	.error "gText_Rom_5ECE03 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECE03) < 0x6
	.space 0x6 - (. - gText_Rom_5ECE03)
	.endif

	@ src/pokemon.c:398 pokemon_line_398
	.globl gText_Rom_5ECE09
gText_Rom_5ECE09: @ 0x085ECE09
	.string "おだやか$"
	.if (. - gText_Rom_5ECE09) > 0x5
	.error "gText_Rom_5ECE09 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5ECE09) < 0x5
	.space 0x5 - (. - gText_Rom_5ECE09)
	.endif
