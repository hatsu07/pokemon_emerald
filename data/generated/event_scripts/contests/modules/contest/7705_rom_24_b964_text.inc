	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24B964
gText_Rom_24B964: @ 0x0824B964
	.string "めだっていない　{0xFD}{0x02}は\nがんばりまくった！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}$"
	.if (. - gText_Rom_24B964) > 0x22
	.error "gText_Rom_24B964 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B964) < 0x22
	.space 0x22 - (. - gText_Rom_24B964)
	.endif
