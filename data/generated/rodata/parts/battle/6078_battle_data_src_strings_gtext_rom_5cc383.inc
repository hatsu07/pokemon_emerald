	@ src/strings.c:683 gText_PokemonTrades
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CC383
gText_Rom_5CC383: @ 0x085CC383
	.string "ポケモンつうしんこうかん$"
	.if (. - gText_Rom_5CC383) != 0xd
	.error "gText_Rom_5CC383 must retain its original byte length"
	.endif
