	@ src/data/credits.h:146 sCreditsText_HiromiSagawa
	.globl gText_Rom_5C6FCB
gText_Rom_5C6FCB: @ 0x085C6FCB
	.string "さがわ ひろみ$"
	.if (. - gText_Rom_5C6FCB) > 0x8
	.error "gText_Rom_5C6FCB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6FCB) < 0x8
	.space 0x8 - (. - gText_Rom_5C6FCB)
	.endif
