	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24BACB
gText_Rom_24BACB: @ 0x0824BACB
	.string "{0xFD}{0x02}の　アピールは\nあまり　うまく　いかなかった！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{EOS}"
	.if (. - gText_Rom_24BACB) > 0x26
	.error "gText_Rom_24BACB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24BACB) < 0x26
	.space 0x26 - (. - gText_Rom_24BACB)
	.endif
