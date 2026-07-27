	@ asm/trainer_card.s:2612 sub_080C31FC
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CC350
gText_Rom_5CC350: @ 0x085CC350
	.string "のトレーナーカード$"
	.if (. - gText_Rom_5CC350) != 0xa
	.error "gText_Rom_5CC350 must retain its original byte length"
	.endif
	.globl gText_Rom_5CC356
	.set gText_Rom_5CC356, gText_Rom_5CC350 + 0x6
	.globl gUnknown_85CC35A
gUnknown_85CC35A: @ 0x085CC35A
	.incbin "baserom.gba", 0x5cc35a, 0xd

	@ asm/trainer_card.s:2808 PrintLinkResultsNumsOnCard (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CC367
gText_Rom_5CC367: @ 0x085CC367
	.string "つうしんたいせん$"
	.if (. - gText_Rom_5CC367) != 0x9
	.error "gText_Rom_5CC367 must retain its original byte length"
	.endif
	.globl gText_Rom_5CC36B
	.set gText_Rom_5CC36B, gText_Rom_5CC367 + 0x4

	@ asm/trainer_card.s:2808 PrintLinkResultsNumsOnCard (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CC370
gText_Rom_5CC370: @ 0x085CC370
	.string "ケーブルたいせん$"
	.if (. - gText_Rom_5CC370) != 0x9
	.error "gText_Rom_5CC370 must retain its original byte length"
	.endif
	.globl gText_Rom_5CC374
	.set gText_Rom_5CC374, gText_Rom_5CC370 + 0x4
	.globl gUnknown_85CC379
gUnknown_85CC379: @ 0x085CC379
	.incbin "baserom.gba", 0x5cc379, 0xa
	.globl gUnknown_85CC383
gUnknown_85CC383: @ 0x085CC383

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
	.globl gText_Rom_5CC399
	.set gText_Rom_5CC399, gText_Rom_5CC390 + 0x9
	.globl gUnknown_85CC39E
gUnknown_85CC39E: @ 0x085CC39E

