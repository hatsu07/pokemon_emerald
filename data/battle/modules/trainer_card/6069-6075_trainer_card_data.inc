	@ src/main_menu.c:275 gText_ContinueMenuTime (+3 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CC341
gText_Rom_5CC341: @ 0x085CC341
	.string "プレイじかん{EOS}"
	.if (. - gText_Rom_5CC341) != 0x7
	.error "gText_Rom_5CC341 must retain its original byte length"
	.endif
	.globl gText_Rom_5CC344
	.set gText_Rom_5CC344, gText_Rom_5CC341 + 0x3
	@ src/strings.c:677 gJPText_BattlePoints
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gJPText_BattlePoints
gJPText_BattlePoints: @ 0x085CC348
	.string "ゲームポイント{EOS}"
	.if (. - gJPText_BattlePoints) != 0x8
	.error "gJPText_BattlePoints must retain its original byte length"
	.endif
	.globl gText_Rom_5CC350

	@ asm/trainer_card.s:2612 sub_080C31FC
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CC350
gText_Rom_5CC350: @ 0x085CC350
	.string "のトレーナーカード{EOS}"
	.if (. - gText_Rom_5CC350) != 0xa
	.error "gText_Rom_5CC350 must retain its original byte length"
	.endif
	.globl gText_Rom_5CC356
	.set gText_Rom_5CC356, gText_Rom_5CC350 + 0x6
	.globl gText_Rom_5CC35A
gText_Rom_5CC35A: @ 0x085CC35A
	@ Decoded text from ROM range: offset=0x5CC35A, size=0xD
	.string "はじめてのでんどういり　{EOS}"

	@ asm/trainer_card.s:2808 PrintLinkResultsNumsOnCard (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CC367
gText_Rom_5CC367: @ 0x085CC367
	.string "つうしんたいせん{EOS}"
	.if (. - gText_Rom_5CC367) != 0x9
	.error "gText_Rom_5CC367 must retain its original byte length"
	.endif
	.globl gText_Rom_5CC36B
	.set gText_Rom_5CC36B, gText_Rom_5CC367 + 0x4

	@ asm/trainer_card.s:2808 PrintLinkResultsNumsOnCard (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CC370
gText_Rom_5CC370: @ 0x085CC370
	.string "ケーブルたいせん{EOS}"
	.if (. - gText_Rom_5CC370) != 0x9
	.error "gText_Rom_5CC370 must retain its original byte length"
	.endif
