	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24B7C6
gText_Rom_24B7C6: @ 0x0824B7C6
	.string "ほかの　ポケモンを　あまり\nきに　しないように　なった！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24B7C6) > 0x29
	.error "gText_Rom_24B7C6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B7C6) < 0x29
	.space 0x29 - (. - gText_Rom_24B7C6)
	.endif
