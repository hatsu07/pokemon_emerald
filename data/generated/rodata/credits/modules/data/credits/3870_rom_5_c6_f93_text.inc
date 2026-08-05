	@ src/data/credits.h:140 sCreditsText_TadashiTakahashi
	.globl gText_Rom_5C6F93
gText_Rom_5C6F93: @ 0x085C6F93
	.string "たかはし ただし$"
	.if (. - gText_Rom_5C6F93) > 0x9
	.error "gText_Rom_5C6F93 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6F93) < 0x9
	.space 0x9 - (. - gText_Rom_5C6F93)
	.endif
