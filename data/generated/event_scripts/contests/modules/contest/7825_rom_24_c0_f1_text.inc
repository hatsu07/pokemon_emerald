	@ asm/contest.s:11866 sub_080DCBC0 (+3 aliases)
	.globl gText_Rom_24C0F1
gText_Rom_24C0F1: @ 0x0824C0F1
	.string "うつくしさ{EOS}"
	.if (. - gText_Rom_24C0F1) > 0x6
	.error "gText_Rom_24C0F1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C0F1) < 0x6
	.space 0x6 - (. - gText_Rom_24C0F1)
	.endif
