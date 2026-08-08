	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24BFA5
gText_Rom_24BFA5: @ 0x0824BFA5
	.string "{0xFD}{0x02}は\nへいき　だった！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24BFA5) > 0x19
	.error "gText_Rom_24BFA5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24BFA5) < 0x19
	.space 0x19 - (. - gText_Rom_24BFA5)
	.endif
