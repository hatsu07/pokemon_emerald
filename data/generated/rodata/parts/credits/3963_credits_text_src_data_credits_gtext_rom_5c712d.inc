	@ src/data/credits.h:186 sCreditsText_KenjiroIto
	.globl gText_Rom_5C712D
gText_Rom_5C712D: @ 0x085C712D
	.string "いとう けんじろう$"
	.if (. - gText_Rom_5C712D) > 0xa
	.error "gText_Rom_5C712D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C712D) < 0xa
	.space 0xa - (. - gText_Rom_5C712D)
	.endif
