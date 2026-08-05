	@ src/data/credits.h:172 sCreditsText_TakehiroIzushi
	.globl gText_Rom_5C70AC
gText_Rom_5C70AC: @ 0x085C70AC
	.string "いずし たけひろ$"
	.if (. - gText_Rom_5C70AC) > 0x9
	.error "gText_Rom_5C70AC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C70AC) < 0x9
	.space 0x9 - (. - gText_Rom_5C70AC)
	.endif
