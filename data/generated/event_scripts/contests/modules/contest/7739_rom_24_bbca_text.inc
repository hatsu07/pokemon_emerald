	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24BBCA
gText_Rom_24BBCA: @ 0x0824BBCA
	.string "まえの　ポケモンより\nだいぶ　めだった！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{EOS}"
	.if (. - gText_Rom_24BBCA) > 0x21
	.error "gText_Rom_24BBCA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24BBCA) < 0x21
	.space 0x21 - (. - gText_Rom_24BBCA)
	.endif
