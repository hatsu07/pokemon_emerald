	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24BC82
gText_Rom_24BC82: @ 0x0824BC82
	.string "つぎの　アピールを　おそく\nしようと　1ぽ　さがった！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{EOS}"
	.if (. - gText_Rom_24BC82) > 0x28
	.error "gText_Rom_24BC82 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24BC82) < 0x28
	.space 0x28 - (. - gText_Rom_24BC82)
	.endif
