	@ asm/contest.s:11812 sub_080DCBC0
	.globl gText_Rom_24C0D2
gText_Rom_24C0D2: @ 0x0824C0D2
	.string "モジモジ$"
	.if (. - gText_Rom_24C0D2) > 0x5
	.error "gText_Rom_24C0D2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C0D2) < 0x5
	.space 0x5 - (. - gText_Rom_24C0D2)
	.endif
