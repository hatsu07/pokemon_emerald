	@ src/data/credits.h:114 sCreditsText_HiroyukiNakamura
	.globl gText_Rom_5C6EB2
gText_Rom_5C6EB2: @ 0x085C6EB2
	.string "なかむら ひろゆき$"
	.if (. - gText_Rom_5C6EB2) > 0xa
	.error "gText_Rom_5C6EB2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6EB2) < 0xa
	.space 0xa - (. - gText_Rom_5C6EB2)
	.endif
