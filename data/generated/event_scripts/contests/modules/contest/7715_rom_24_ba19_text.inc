	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24BA19
gText_Rom_24BA19: @ 0x0824BA19
	.string "{0xFD}{0x02}の　アピールは\nうまく　みせられなかった！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{EOS}"
	.if (. - gText_Rom_24BA19) > 0x24
	.error "gText_Rom_24BA19 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24BA19) < 0x24
	.space 0x24 - (. - gText_Rom_24BA19)
	.endif
