	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24BDA2
gText_Rom_24BDA2: @ 0x0824BDA2
	.string "{0xFD}{0x02}は\nこのくらいは　へいきだった！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24BDA2) > 0x1f
	.error "gText_Rom_24BDA2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24BDA2) < 0x1f
	.space 0x1f - (. - gText_Rom_24BDA2)
	.endif
