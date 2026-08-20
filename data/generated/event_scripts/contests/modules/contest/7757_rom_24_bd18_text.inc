	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24BD18
gText_Rom_24BD18: @ 0x0824BD18
	.string "アピールの　くみあわせが\nかなり　きに　いられた！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{EOS}"
	.if (. - gText_Rom_24BD18) > 0x26
	.error "gText_Rom_24BD18 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24BD18) < 0x26
	.space 0x26 - (. - gText_Rom_24BD18)
	.endif
