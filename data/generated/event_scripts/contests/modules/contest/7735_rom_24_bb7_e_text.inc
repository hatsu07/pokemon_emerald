	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24BB7E
gText_Rom_24BB7E: @ 0x0824BB7E
	.string "まえの　ポケモンと\nおなじタイプで　きにいられた！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{EOS}"
	.if (. - gText_Rom_24BB7E) > 0x26
	.error "gText_Rom_24BB7E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24BB7E) < 0x26
	.space 0x26 - (. - gText_Rom_24BB7E)
	.endif
