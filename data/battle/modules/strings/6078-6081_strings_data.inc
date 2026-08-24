	@ src/strings.c:683 gText_PokemonTrades
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_PokemonTrades
gText_PokemonTrades: @ 0x085CC383
	.string "ポケモンつうしんこうかん{EOS}"
	.if (. - gText_PokemonTrades) != 0xd
	.error "gText_PokemonTrades must retain its original byte length"
	.endif
	.globl gText_Rom_5CC38B
	.set gText_Rom_5CC38B, gText_PokemonTrades + 0x8

	@ src/strings.c:684 gText_UnionTradesAndBattles
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_UnionTradesAndBattles
gText_UnionTradesAndBattles: @ 0x085CC390
	.string "ユニオンたいせんとこうかん{EOS}"
	.if (. - gText_UnionTradesAndBattles) != 0xe
	.error "gText_UnionTradesAndBattles must retain its original byte length"
	.endif
