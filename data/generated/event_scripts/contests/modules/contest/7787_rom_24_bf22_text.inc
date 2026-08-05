	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24BF22
gText_Rom_24BF22: @ 0x0824BF22
	.string "でも　だれも\nきんちょう　しなかった！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24BF22) > 0x20
	.error "gText_Rom_24BF22 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24BF22) < 0x20
	.space 0x20 - (. - gText_Rom_24BF22)
	.endif
