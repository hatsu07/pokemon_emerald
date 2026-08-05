	@ src/strings.c:708 gText_Give
	.globl gText_Rom_5CC47F
gText_Rom_5CC47F: @ 0x085CC47F
	.string "もたせるべき$"
	.if (. - gText_Rom_5CC47F) > 0x7
	.error "gText_Rom_5CC47F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC47F) < 0x7
	.space 0x7 - (. - gText_Rom_5CC47F)
	.endif
