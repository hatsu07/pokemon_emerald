	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24BF03
gText_Rom_24BF03: @ 0x0824BF03
	.string "でも　きんちょう\nさせられなかった！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24BF03) > 0x1f
	.error "gText_Rom_24BF03 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24BF03) < 0x1f
	.space 0x1f - (. - gText_Rom_24BF03)
	.endif
