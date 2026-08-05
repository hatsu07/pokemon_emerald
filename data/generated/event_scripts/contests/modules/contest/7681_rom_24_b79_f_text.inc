	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24B79F
gText_Rom_24B79F: @ 0x0824B79F
	.string "ほかの　ポケモンが　あまり\nきに　ならなく　なった！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24B79F) > 0x27
	.error "gText_Rom_24B79F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B79F) < 0x27
	.space 0x27 - (. - gText_Rom_24B79F)
	.endif
