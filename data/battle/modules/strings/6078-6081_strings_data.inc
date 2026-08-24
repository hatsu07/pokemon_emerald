	.globl gText_Rom_5CC374
	.set gText_Rom_5CC374, gText_Rom_5CC370 + 0x4
	@ pret/pokeemerald-jp direct xref for 0x085CC379: trainer_card.s: PrintIdOnCard
	.globl gTrainerCardData_085CC379
gTrainerCardData_085CC379: @ 0x085CC379
	@ analyzed canonical ROM range 0x085CC379-0x085CC382
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0xA entries=5
	.2byte 0x1106, 0x0000, 0x0000, 0x1F00, 0xFF09
	.globl gText_PokemonTrades
	@ src/strings.c:683 gText_PokemonTrades
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_PokemonTrades
gText_PokemonTrades: @ 0x085CC383
	.string "ポケモンつうしんこうかん{EOS}"
	.if (. - gText_PokemonTrades) != 0xd
	.error "gText_PokemonTrades must retain its original byte length"
	.endif

	@ src/strings.c:684 gText_UnionTradesAndBattles
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_UnionTradesAndBattles
gText_UnionTradesAndBattles: @ 0x085CC390
	.string "ユニオンたいせんとこうかん{EOS}"
	.if (. - gText_UnionTradesAndBattles) != 0xe
	.error "gText_UnionTradesAndBattles must retain its original byte length"
	.endif
