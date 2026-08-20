	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24BC0E
gText_Rom_24BC0E: @ 0x0824BC0E
	.string "{0xFD}{0x02}の　ちょうしが\nいつもより　あがった！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{EOS}"
	.if (. - gText_Rom_24BC0E) > 0x22
	.error "gText_Rom_24BC0E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24BC0E) < 0x22
	.space 0x22 - (. - gText_Rom_24BC0E)
	.endif
