	@ asm/contest.s:4961 sub_080D8334
	.globl gText_Rom_24B354
gText_Rom_24B354: @ 0x0824B354
	.string "{0xFD}{0x02}は\nみんなを　みていた！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24B354) > 0x1b
	.error "gText_Rom_24B354 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B354) < 0x1b
	.space 0x1b - (. - gText_Rom_24B354)
	.endif
