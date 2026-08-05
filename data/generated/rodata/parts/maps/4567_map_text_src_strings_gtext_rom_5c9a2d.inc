	@ src/strings.c:237 gText_ThrowInPremierBall
	.globl gText_Rom_5C9A2D
gText_Rom_5C9A2D: @ 0x085C9A2D
	.string "プレミアボール 1コ\nおまけ しておきますね!{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C9A2D) > 0x1a
	.error "gText_Rom_5C9A2D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9A2D) < 0x1a
	.space 0x1a - (. - gText_Rom_5C9A2D)
	.endif
