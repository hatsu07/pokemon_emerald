	@ src/data/credits.h:151 sCreditsText_ChieMatsumiya
	.globl gText_Rom_5C6FF4
gText_Rom_5C6FF4: @ 0x085C6FF4
	.string "まつみや ちえ$"
	.if (. - gText_Rom_5C6FF4) > 0x8
	.error "gText_Rom_5C6FF4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6FF4) < 0x8
	.space 0x8 - (. - gText_Rom_5C6FF4)
	.endif
