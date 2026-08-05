	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24BCF2
gText_Rom_24BCF2: @ 0x0824BCF2
	.string "アピールの　くみあわせが\nきに　いって　もらえた！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24BCF2) > 0x26
	.error "gText_Rom_24BCF2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24BCF2) < 0x26
	.space 0x26 - (. - gText_Rom_24BCF2)
	.endif
