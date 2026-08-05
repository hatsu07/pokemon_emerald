	@ src/data/credits.h:164 sCreditsText_HiroyukiUesugi
	.globl gText_Rom_5C7067
gText_Rom_5C7067: @ 0x085C7067
	.string "うえすぎ ひろゆき$"
	.if (. - gText_Rom_5C7067) > 0xa
	.error "gText_Rom_5C7067 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C7067) < 0xa
	.space 0xa - (. - gText_Rom_5C7067)
	.endif
