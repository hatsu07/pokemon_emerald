	@ src/data/credits.h:178 sCreditsText_TsunekazIshihara
	.globl gText_Rom_5C70E2
gText_Rom_5C70E2: @ 0x085C70E2
	.string "いしはら つねかず$"
	.if (. - gText_Rom_5C70E2) > 0xa
	.error "gText_Rom_5C70E2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C70E2) < 0xa
	.space 0xa - (. - gText_Rom_5C70E2)
	.endif
