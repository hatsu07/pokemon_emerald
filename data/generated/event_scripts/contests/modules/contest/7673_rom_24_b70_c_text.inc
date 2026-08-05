	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24B70C
gText_Rom_24B70C: @ 0x0824B70C
	.string "ほかの　ポケモンが　いつもより\nきに　なって　きた！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24B70C) > 0x27
	.error "gText_Rom_24B70C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B70C) < 0x27
	.space 0x27 - (. - gText_Rom_24B70C)
	.endif
