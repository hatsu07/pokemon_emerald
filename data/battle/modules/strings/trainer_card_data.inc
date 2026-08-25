	@ pret/pokeemerald-jp direct xref for 0x085CC379: trainer_card.s: PrintIdOnCard
	.globl gTrainerCardData_085CC379
gTrainerCardData_085CC379: @ 0x085CC379
	@ analyzed canonical ROM range 0x085CC379-0x085CC382
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0xA entries=5
	.2byte 0x1106, 0x0000, 0x0000, 0x1F00, 0xFF09
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


	@ src/data/script_menu.h:507 gText_BerryCrush3 (+3 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_BerryCrush
gText_BerryCrush: @ 0x085CC39E
	.string "きのみクラッシュ{EOS}"
	.if (. - gText_BerryCrush) != 0x9
	.error "gText_BerryCrush must retain its original byte length"
	.endif

	@ src/strings.c:686 gText_WaitingTrainerFinishReading
	.globl gText_WaitingTrainerFinishReading
gText_WaitingTrainerFinishReading: @ 0x085CC3A7
	.string "あいてが カードを みおわるのを\nまっています{EOS}"
	.if (. - gText_WaitingTrainerFinishReading) > 0x18
	.error "gText_WaitingTrainerFinishReading may not grow beyond its original slot"
	.endif
	.if (. - gText_WaitingTrainerFinishReading) < 0x18
	.space 0x18 - (. - gText_WaitingTrainerFinishReading)
	.endif

	@ src/strings.c:687 gText_PokeblocksWithFriends
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_PokeblocksWithFriends
gText_PokeblocksWithFriends: @ 0x085CC3BF
	.string "ともだちと つくった ポロック{EOS}"
	.if (. - gText_PokeblocksWithFriends) != 0x10
	.error "gText_PokeblocksWithFriends must retain its original byte length"
	.endif
