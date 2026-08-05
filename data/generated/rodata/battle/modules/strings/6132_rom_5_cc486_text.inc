	@ src/strings.c:709 gText_NoNeed
	.globl gText_Rom_5CC486
gText_Rom_5CC486: @ 0x085CC486
	.string "もたせない$"
	.if (. - gText_Rom_5CC486) > 0x6
	.error "gText_Rom_5CC486 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC486) < 0x6
	.space 0x6 - (. - gText_Rom_5CC486)
	.endif
