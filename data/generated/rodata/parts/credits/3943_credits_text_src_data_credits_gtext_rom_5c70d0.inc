	@ src/data/credits.h:176 sCreditsText_HiroyukiJinnai
	.globl gText_Rom_5C70D0
gText_Rom_5C70D0: @ 0x085C70D0
	.string "じんない ひろゆき$"
	.if (. - gText_Rom_5C70D0) > 0xa
	.error "gText_Rom_5C70D0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C70D0) < 0xa
	.space 0xa - (. - gText_Rom_5C70D0)
	.endif
