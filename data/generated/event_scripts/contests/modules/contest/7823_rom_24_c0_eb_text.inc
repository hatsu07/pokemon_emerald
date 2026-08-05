	@ asm/contest.s:11866 sub_080DCBC0 (+3 aliases)
	.globl gText_Rom_24C0EB
gText_Rom_24C0EB: @ 0x0824C0EB
	.string "かっこよさ$"
	.if (. - gText_Rom_24C0EB) > 0x6
	.error "gText_Rom_24C0EB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C0EB) < 0x6
	.space 0x6 - (. - gText_Rom_24C0EB)
	.endif
