	@ asm/contest.s:4363 sub_080D8334
	.globl gText_Rom_24C029
gText_Rom_24C029: @ 0x0824C029
	.string "{0xFD}{0x02}の　{0xFD}{0x04}に\nまわりが　もりあがった！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24C029) > 0x21
	.error "gText_Rom_24C029 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C029) < 0x21
	.space 0x21 - (. - gText_Rom_24C029)
	.endif
