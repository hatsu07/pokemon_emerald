	@ src/data/credits.h:163 sCreditsText_HiroNakamura
	.globl gText_Rom_5C705E
gText_Rom_5C705E: @ 0x085C705E
	.string "なかむら ひろき$"
	.if (. - gText_Rom_5C705E) > 0x9
	.error "gText_Rom_5C705E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C705E) < 0x9
	.space 0x9 - (. - gText_Rom_5C705E)
	.endif
