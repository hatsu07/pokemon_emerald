	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24B834
gText_Rom_24B834: @ 0x0824B834
	.string "しんさいんは　{0xFD}{0x02}から\nめを　そらして　しまった！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24B834) > 0x26
	.error "gText_Rom_24B834 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B834) < 0x26
	.space 0x26 - (. - gText_Rom_24B834)
	.endif
