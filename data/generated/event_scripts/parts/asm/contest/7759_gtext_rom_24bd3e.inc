	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24BD3E
gText_Rom_24BD3E: @ 0x0824BD3E
	.string "アピールの　くみあわせが\nものすごく　きに　いられた！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24BD3E) > 0x28
	.error "gText_Rom_24BD3E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24BD3E) < 0x28
	.space 0x28 - (. - gText_Rom_24BD3E)
	.endif
