	@ asm/contest.s:11866 sub_080DCBC0 (+3 aliases)
	.globl gText_Rom_24C0F7
gText_Rom_24C0F7: @ 0x0824C0F7
	.string "かわいさ$"
	.if (. - gText_Rom_24C0F7) > 0x5
	.error "gText_Rom_24C0F7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C0F7) < 0x5
	.space 0x5 - (. - gText_Rom_24C0F7)
	.endif
