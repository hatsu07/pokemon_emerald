	@ asm/trainer_card.s:2808 PrintLinkResultsNumsOnCard (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CC370
gText_Rom_5CC370: @ 0x085CC370
	.string "ケーブルたいせん$"
	.if (. - gText_Rom_5CC370) != 0x9
	.error "gText_Rom_5CC370 must retain its original byte length"
	.endif
