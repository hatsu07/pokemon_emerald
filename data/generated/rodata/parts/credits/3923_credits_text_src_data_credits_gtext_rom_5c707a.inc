	@ src/data/credits.h:166 sCreditsText_AkiraKinashi
	.globl gText_Rom_5C707A
gText_Rom_5C707A: @ 0x085C707A
	.string "きなし あきら$"
	.if (. - gText_Rom_5C707A) > 0x8
	.error "gText_Rom_5C707A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C707A) < 0x8
	.space 0x8 - (. - gText_Rom_5C707A)
	.endif
