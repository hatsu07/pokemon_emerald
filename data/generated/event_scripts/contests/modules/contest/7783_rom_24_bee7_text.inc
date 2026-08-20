	@ asm/contest.s:11866 sub_080DCBC0
	.globl gText_Rom_24BEE7
gText_Rom_24BEE7: @ 0x0824BEE7
	.string "でも　しっぱい　してしまった！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{EOS}"
	.if (. - gText_Rom_24BEE7) > 0x1c
	.error "gText_Rom_24BEE7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24BEE7) < 0x1c
	.space 0x1c - (. - gText_Rom_24BEE7)
	.endif
