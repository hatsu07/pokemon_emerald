	@ src/data/credits.h:184 sCreditsText_MikikoOhhashi
	.globl gText_Rom_5C711B
gText_Rom_5C711B: @ 0x085C711B
	.string "おおはし みきこ$"
	.if (. - gText_Rom_5C711B) > 0x9
	.error "gText_Rom_5C711B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C711B) < 0x9
	.space 0x9 - (. - gText_Rom_5C711B)
	.endif
