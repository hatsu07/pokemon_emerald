	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24BF42
gText_Rom_24BF42: @ 0x0824BF42
	.string "でも　むし　されて　しまった…{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24BF42) > 0x1c
	.error "gText_Rom_24BF42 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24BF42) < 0x1c
	.space 0x1c - (. - gText_Rom_24BF42)
	.endif
