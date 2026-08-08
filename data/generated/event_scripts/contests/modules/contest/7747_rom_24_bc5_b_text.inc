	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24BC5B
gText_Rom_24BC5B: @ 0x0824BC5B
	.string "つぎの　アピールを　はやく\nしようと　まえに　でた！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24BC5B) > 0x27
	.error "gText_Rom_24BC5B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24BC5B) < 0x27
	.space 0x27 - (. - gText_Rom_24BC5B)
	.endif
