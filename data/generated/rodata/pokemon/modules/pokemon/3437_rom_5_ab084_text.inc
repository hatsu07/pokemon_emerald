	@ asm/pokemon.s:10677 sub_0806C9E8 (+1 aliases)
	.globl gText_Rom_5AB084
gText_Rom_5AB084: @ 0x085AB084
	.string "かいひりつ$"
	.if (. - gText_Rom_5AB084) > 0x6
	.error "gText_Rom_5AB084 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5AB084) < 0x6
	.space 0x6 - (. - gText_Rom_5AB084)
	.endif
	.space 0x2, 0x00
