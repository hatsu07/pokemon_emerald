	@ src/data/credits.h:110 sCreditsText_SosukeTamada
	.globl gText_Rom_5C6E91
gText_Rom_5C6E91: @ 0x085C6E91
	.string "たまだ そうすけ$"
	.if (. - gText_Rom_5C6E91) > 0x9
	.error "gText_Rom_5C6E91 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6E91) < 0x9
	.space 0x9 - (. - gText_Rom_5C6E91)
	.endif
