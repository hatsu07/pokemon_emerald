	@ asm/contest.s:4708 sub_080D8334
	.globl gText_Rom_24C091
gText_Rom_24C091: @ 0x0824C091
	.string "かんきゃくは\n{0xFD}{0x04}を　みつづけている！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24C091) > 0x20
	.error "gText_Rom_24C091 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C091) < 0x20
	.space 0x20 - (. - gText_Rom_24C091)
	.endif
