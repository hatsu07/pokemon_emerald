	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24BB14
gText_Rom_24BB14: @ 0x0824BB14
	.string "{0xFD}{0x02}の　アピールは\nまあまあ　うまく　いった！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{EOS}"
	.if (. - gText_Rom_24BB14) > 0x24
	.error "gText_Rom_24BB14 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24BB14) < 0x24
	.space 0x24 - (. - gText_Rom_24BB14)
	.endif
