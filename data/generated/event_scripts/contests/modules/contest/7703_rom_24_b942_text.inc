	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24B942
gText_Rom_24B942: @ 0x0824B942
	.string "めだっている　{0xFD}{0x02}は\nさらに　はりきった！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{EOS}"
	.if (. - gText_Rom_24B942) > 0x22
	.error "gText_Rom_24B942 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B942) < 0x22
	.space 0x22 - (. - gText_Rom_24B942)
	.endif
