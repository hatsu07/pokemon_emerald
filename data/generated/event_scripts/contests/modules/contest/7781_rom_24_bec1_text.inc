	@ asm/contest.s:4809 sub_080D8334
	.globl gText_Rom_24BEC1
gText_Rom_24BEC1: @ 0x0824BEC1
	.string "{0xFD}{0x02}は　きんちょうして\nアピールが　できなかった！{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{PAUSE}{0x0F}{EOS}"
	.if (. - gText_Rom_24BEC1) > 0x26
	.error "gText_Rom_24BEC1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24BEC1) < 0x26
	.space 0x26 - (. - gText_Rom_24BEC1)
	.endif
