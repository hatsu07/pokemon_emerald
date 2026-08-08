	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24B814
gText_Rom_24B814: @ 0x0824B814
	.string "みんなの　めを\nくらませようと　した！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24B814) > 0x20
	.error "gText_Rom_24B814 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B814) < 0x20
	.space 0x20 - (. - gText_Rom_24B814)
	.endif
