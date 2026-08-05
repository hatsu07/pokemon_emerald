	@ asm/contest.s:11840 sub_080DCBC0
	.globl gText_Rom_24C0DC
gText_Rom_24C0DC: @ 0x0824C0DC
	.string "デレデレ$"
	.if (. - gText_Rom_24C0DC) > 0x5
	.error "gText_Rom_24C0DC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C0DC) < 0x5
	.space 0x5 - (. - gText_Rom_24C0DC)
	.endif
