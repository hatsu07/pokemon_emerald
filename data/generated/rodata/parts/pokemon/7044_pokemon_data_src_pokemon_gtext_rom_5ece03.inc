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
