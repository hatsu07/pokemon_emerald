	@ asm/pokemon.s:10677 sub_0806C9E8
	.globl gText_Rom_5AB065
gText_Rom_5AB065: @ 0x085AB065
	.string "ぼうぎょりょく$"
	.if (. - gText_Rom_5AB065) > 0x8
	.error "gText_Rom_5AB065 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB065) < 0x8
	.space 0x8 - (. - gText_Rom_5AB065)
	.endif
