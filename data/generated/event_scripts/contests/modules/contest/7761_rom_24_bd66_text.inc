	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24BD66
gText_Rom_24BD66: @ 0x0824BD66
	.string "{0xFD}{0x02}は　なんとか\nめを　そらした！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24BD66) > 0x1e
	.error "gText_Rom_24BD66 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24BD66) < 0x1e
	.space 0x1e - (. - gText_Rom_24BD66)
	.endif
