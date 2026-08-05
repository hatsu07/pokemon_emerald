	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24B733
gText_Rom_24B733: @ 0x0824B733
	.string "{0xFD}{0x02}は　このあと\nアピール　できなく　なった！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24B733) > 0x24
	.error "gText_Rom_24B733 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B733) < 0x24
	.space 0x24 - (. - gText_Rom_24B733)
	.endif
