	@ src/data/credits.h:160 sCreditsText_AtsushiTada
	.globl gText_Rom_5C7043
gText_Rom_5C7043: @ 0x085C7043
	.string "ただ あつし$"
	.if (. - gText_Rom_5C7043) > 0x7
	.error "gText_Rom_5C7043 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C7043) < 0x7
	.space 0x7 - (. - gText_Rom_5C7043)
	.endif
