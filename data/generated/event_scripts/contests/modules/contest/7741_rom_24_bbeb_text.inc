	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24BBEB
gText_Rom_24BBEB: @ 0x0824BBEB
	.string "まえの　ポケモンより\nうまく　できなかった！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{EOS}"
	.if (. - gText_Rom_24BBEB) > 0x23
	.error "gText_Rom_24BBEB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24BBEB) < 0x23
	.space 0x23 - (. - gText_Rom_24BBEB)
	.endif
