	@ src/data/credits.h:154 sCreditsText_NozomuSaito
	.globl gText_Rom_5C700D
gText_Rom_5C700D: @ 0x085C700D
	.string "さいとう のぞむ$"
	.if (. - gText_Rom_5C700D) > 0x9
	.error "gText_Rom_5C700D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C700D) < 0x9
	.space 0x9 - (. - gText_Rom_5C700D)
	.endif
