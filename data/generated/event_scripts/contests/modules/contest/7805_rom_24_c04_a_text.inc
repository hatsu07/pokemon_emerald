	@ asm/contest.s:3824 sub_080D8334
	.globl gText_Rom_24C04A
gText_Rom_24C04A: @ 0x0824C04A
	.string "{0xFD}{0x02}は　つぎの　アピールに\nさんか　できなくなった！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{EOS}"
	.if (. - gText_Rom_24C04A) > 0x27
	.error "gText_Rom_24C04A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C04A) < 0x27
	.space 0x27 - (. - gText_Rom_24C04A)
	.endif
