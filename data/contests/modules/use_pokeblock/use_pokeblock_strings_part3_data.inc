	@ src/strings.c:624 gText_PokemonCenter
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_PokemonCenter
gText_PokemonCenter: @ 0x085CBD09
	.string "ポケモンセンター{EOS}"
	.if (. - gText_PokemonCenter) != 0x9
	.error "gText_PokemonCenter must retain its original byte length"
	.endif

