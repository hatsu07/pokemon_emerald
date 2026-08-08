	@ src/strings.c:683 gText_PokemonTrades
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CC383
gText_Rom_5CC383: @ 0x085CC383
	.string "ポケモンつうしんこうかん$"
	.if (. - gText_Rom_5CC383) != 0xd
	.error "gText_Rom_5CC383 must retain its original byte length"
	.endif
	.globl gText_Rom_5CC38B
	.set gText_Rom_5CC38B, gText_Rom_5CC383 + 0x8
	.globl gUnknown_85CC390
gUnknown_85CC390: @ 0x085CC390

	@ src/strings.c:684 gText_UnionTradesAndBattles
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CC390
gText_Rom_5CC390: @ 0x085CC390
	.string "ユニオンたいせんとこうかん$"
	.if (. - gText_Rom_5CC390) != 0xe
	.error "gText_Rom_5CC390 must retain its original byte length"
	.endif
