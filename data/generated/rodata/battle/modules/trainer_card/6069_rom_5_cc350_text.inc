	@ asm/trainer_card.s:2612 sub_080C31FC
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CC350
gText_Rom_5CC350: @ 0x085CC350
	.string "のトレーナーカード$"
	.if (. - gText_Rom_5CC350) != 0xa
	.error "gText_Rom_5CC350 must retain its original byte length"
	.endif
