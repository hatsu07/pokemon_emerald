	@ src/data/credits.h:177 sCreditsText_HiroakiTsuru
	.globl gText_Rom_5C70DA
gText_Rom_5C70DA: @ 0x085C70DA
	.string "つる ひろあき$"
	.if (. - gText_Rom_5C70DA) > 0x8
	.error "gText_Rom_5C70DA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C70DA) < 0x8
	.space 0x8 - (. - gText_Rom_5C70DA)
	.endif
