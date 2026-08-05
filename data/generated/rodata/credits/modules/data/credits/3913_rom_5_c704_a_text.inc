	@ src/data/credits.h:161 sCreditsText_TakahiroOhnishi
	.globl gText_Rom_5C704A
gText_Rom_5C704A: @ 0x085C704A
	.string "おおにし たかひろ$"
	.if (. - gText_Rom_5C704A) > 0xa
	.error "gText_Rom_5C704A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C704A) < 0xa
	.space 0xa - (. - gText_Rom_5C704A)
	.endif
