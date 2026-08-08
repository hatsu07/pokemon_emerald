	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24BA60
gText_Rom_24BA60: @ 0x0824BA60
	.string "{0xFD}{0x02}の　アピールは\nまあまあ　うまく　いった！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24BA60) > 0x24
	.error "gText_Rom_24BA60 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24BA60) < 0x24
	.space 0x24 - (. - gText_Rom_24BA60)
	.endif
