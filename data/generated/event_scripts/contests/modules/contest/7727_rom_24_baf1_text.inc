	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24BAF1
gText_Rom_24BAF1: @ 0x0824BAF1
	.string "{0xFD}{0x02}の　アピールは\nすこし　うまく　いった！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{EOS}"
	.if (. - gText_Rom_24BAF1) > 0x23
	.error "gText_Rom_24BAF1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24BAF1) < 0x23
	.space 0x23 - (. - gText_Rom_24BAF1)
	.endif
