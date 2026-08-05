	@ src/strings.c:624 gText_PokemonCenter
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CBD09
gText_Rom_5CBD09: @ 0x085CBD09
	.string "ポケモンセンター$"
	.if (. - gText_Rom_5CBD09) != 0x9
	.error "gText_Rom_5CBD09 must retain its original byte length"
	.endif
