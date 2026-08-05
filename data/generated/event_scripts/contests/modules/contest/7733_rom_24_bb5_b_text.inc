	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24BB5B
gText_Rom_24BB5B: @ 0x0824BB5B
	.string "{0xFD}{0x02}の　アピールは\nとても　うまく　いった！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24BB5B) > 0x23
	.error "gText_Rom_24BB5B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24BB5B) < 0x23
	.space 0x23 - (. - gText_Rom_24BB5B)
	.endif
