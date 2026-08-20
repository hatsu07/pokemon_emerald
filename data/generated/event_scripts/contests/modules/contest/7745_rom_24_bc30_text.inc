	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24BC30
gText_Rom_24BC30: @ 0x0824BC30
	.string "{0xFD}{0x02}は　ちょうしが　よくて\nぜっこうの　アピールに　なった！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{EOS}"
	.if (. - gText_Rom_24BC30) > 0x2b
	.error "gText_Rom_24BC30 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24BC30) < 0x2b
	.space 0x2b - (. - gText_Rom_24BC30)
	.endif
