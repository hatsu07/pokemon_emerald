	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24B777
gText_Rom_24B777: @ 0x0824B777
	.string "ほかの　ポケモンが　ぜんぜん\nきに　ならなく　なった！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24B777) > 0x28
	.error "gText_Rom_24B777 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B777) < 0x28
	.space 0x28 - (. - gText_Rom_24B777)
	.endif
