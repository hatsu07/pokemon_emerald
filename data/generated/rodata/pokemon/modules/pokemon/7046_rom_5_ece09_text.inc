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
