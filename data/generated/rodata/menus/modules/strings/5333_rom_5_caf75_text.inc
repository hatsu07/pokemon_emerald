	@ src/strings.c:506 gText_PokemonNature
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAF75
gText_Rom_5CAF75: @ 0x085CAF75
	.string "ポケモンのせいかく$"
	.if (. - gText_Rom_5CAF75) != 0xa
	.error "gText_Rom_5CAF75 must retain its original byte length"
	.endif
