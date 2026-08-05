	@ src/pokemon.c:278 pokemon_line_278
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5ECDD8
gText_Rom_5ECDD8: @ 0x085ECDD8
	.string "おくびょう$"
	.if (. - gText_Rom_5ECDD8) != 0x6
	.error "gText_Rom_5ECDD8 must retain its original byte length"
	.endif
