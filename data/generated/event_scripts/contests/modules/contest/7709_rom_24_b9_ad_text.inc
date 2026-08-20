	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24B9AD
gText_Rom_24B9AD: @ 0x0824B9AD
	.string "{0xFD}{0x02}は　アピールを\nうまく　みせられなかった！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{EOS}"
	.if (. - gText_Rom_24B9AD) > 0x24
	.error "gText_Rom_24B9AD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24B9AD) < 0x24
	.space 0x24 - (. - gText_Rom_24B9AD)
	.endif
