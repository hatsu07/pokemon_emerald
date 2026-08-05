	@ asm/contest.s:11851 sub_080DCBC0
	.globl gText_Rom_24C0E1
gText_Rom_24C0E1: @ 0x0824C0E1
	.string "オロオロ$"
	.if (. - gText_Rom_24C0E1) > 0x5
	.error "gText_Rom_24C0E1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C0E1) < 0x5
	.space 0x5 - (. - gText_Rom_24C0E1)
	.endif
