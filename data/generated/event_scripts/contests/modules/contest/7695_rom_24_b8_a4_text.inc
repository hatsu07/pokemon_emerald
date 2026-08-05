	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24B8A4
gText_Rom_24B8A4: @ 0x0824B8A4
	.string "アピールが　まだの　ポケモンを\nきんちょう　させようと　した！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24B8A4) > 0x2c
	.error "gText_Rom_24B8A4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B8A4) < 0x2c
	.space 0x2c - (. - gText_Rom_24B8A4)
	.endif
