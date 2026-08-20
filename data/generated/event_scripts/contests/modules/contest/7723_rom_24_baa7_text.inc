	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24BAA7
gText_Rom_24BAA7: @ 0x0824BAA7
	.string "{0xFD}{0x02}の　アピールは\nしっぱい　して　しまった！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{EOS}"
	.if (. - gText_Rom_24BAA7) > 0x24
	.error "gText_Rom_24BAA7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24BAA7) < 0x24
	.space 0x24 - (. - gText_Rom_24BAA7)
	.endif
