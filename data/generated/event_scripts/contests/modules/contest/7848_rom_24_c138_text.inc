	@ asm/contest.s:11866 sub_080DCBC0 (+1 aliases)
	.globl gText_Rom_24C138
gText_Rom_24C138: @ 0x0824C138
	.string "？？？{EOS}"
	.if (. - gText_Rom_24C138) > 0x4
	.error "gText_Rom_24C138 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C138) < 0x4
	.space 0x4 - (. - gText_Rom_24C138)
	.endif
