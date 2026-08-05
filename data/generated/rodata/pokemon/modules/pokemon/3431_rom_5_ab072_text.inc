	@ asm/pokemon.s:10677 sub_0806C9E8 (+6 aliases)
	.globl gText_Rom_5AB072
gText_Rom_5AB072: @ 0x085AB072
	.string "とくこう$"
	.if (. - gText_Rom_5AB072) > 0x5
	.error "gText_Rom_5AB072 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB072) < 0x5
	.space 0x5 - (. - gText_Rom_5AB072)
	.endif
