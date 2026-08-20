	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24B886
gText_Rom_24B886: @ 0x0824B886
	.string "{0xFD}{0x02}は\nきんちょう　してしまった！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{EOS}"
	.if (. - gText_Rom_24B886) > 0x1e
	.error "gText_Rom_24B886 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B886) < 0x1e
	.space 0x1e - (. - gText_Rom_24B886)
	.endif
