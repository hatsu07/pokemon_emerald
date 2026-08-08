	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24BF5E
gText_Rom_24BF5E: @ 0x0824BF5E
	.string "でも　ちょうしは\nあがらなかった…{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24BF5E) > 0x1e
	.error "gText_Rom_24BF5E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24BF5E) < 0x1e
	.space 0x1e - (. - gText_Rom_24BF5E)
	.endif
