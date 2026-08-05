	@ asm/pokemon.s:10677 sub_0806C9E8 (+5 aliases)
	.globl gText_Rom_5AB06D
gText_Rom_5AB06D: @ 0x085AB06D
	.string "すばやさ$"
	.if (. - gText_Rom_5AB06D) > 0x5
	.error "gText_Rom_5AB06D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB06D) < 0x5
	.space 0x5 - (. - gText_Rom_5AB06D)
	.endif
