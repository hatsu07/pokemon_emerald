	@ asm/pokemon.s:10677 sub_0806C9E8
	.globl gText_Rom_5AB05D
gText_Rom_5AB05D: @ 0x085AB05D
	.string "こうげきりょく$"
	.if (. - gText_Rom_5AB05D) > 0x8
	.error "gText_Rom_5AB05D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB05D) < 0x8
	.space 0x8 - (. - gText_Rom_5AB05D)
	.endif
