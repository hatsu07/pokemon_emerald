	@ asm/wallclock.s:530 CB2_ViewWallClock
	.globl gText_Rom_591C1A
gText_Rom_591C1A: @ 0x08591C1A
	.string "もどる　{EOS}"
	.if (. - gText_Rom_591C1A) > 0x5
	.error "gText_Rom_591C1A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_591C1A) < 0x5
	.space 0x5 - (. - gText_Rom_591C1A)
	.endif
	.space 0x1, 0x00
