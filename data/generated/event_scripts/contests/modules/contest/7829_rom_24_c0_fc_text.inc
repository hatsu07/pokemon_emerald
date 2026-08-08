	@ asm/contest.s:11866 sub_080DCBC0 (+3 aliases)
	.globl gText_Rom_24C0FC
gText_Rom_24C0FC: @ 0x0824C0FC
	.string "かしこさ$"
	.if (. - gText_Rom_24C0FC) > 0x5
	.error "gText_Rom_24C0FC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C0FC) < 0x5
	.space 0x5 - (. - gText_Rom_24C0FC)
	.endif
