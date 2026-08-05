	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24B757
gText_Rom_24B757: @ 0x0824B757
	.string "ちょっと　だけ\nきもちが　おちついた！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24B757) > 0x20
	.error "gText_Rom_24B757 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B757) < 0x20
	.space 0x20 - (. - gText_Rom_24B757)
	.endif
