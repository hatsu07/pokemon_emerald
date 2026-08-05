	@ src/data/credits.h:135 sCreditsText_TetsujiOhta
	.globl gText_Rom_5C6F65
gText_Rom_5C6F65: @ 0x085C6F65
	.string "おおた てつじ$"
	.if (. - gText_Rom_5C6F65) > 0x8
	.error "gText_Rom_5C6F65 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6F65) < 0x8
	.space 0x8 - (. - gText_Rom_5C6F65)
	.endif
