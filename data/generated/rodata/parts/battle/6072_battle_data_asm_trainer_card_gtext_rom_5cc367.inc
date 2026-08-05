	@ asm/trainer_card.s:2808 PrintLinkResultsNumsOnCard (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CC367
gText_Rom_5CC367: @ 0x085CC367
	.string "つうしんたいせん$"
	.if (. - gText_Rom_5CC367) != 0x9
	.error "gText_Rom_5CC367 must retain its original byte length"
	.endif
