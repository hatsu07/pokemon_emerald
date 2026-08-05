	@ src/data/credits.h:171 sCreditsText_GakujiNomoto
	.globl gText_Rom_5C70A4
gText_Rom_5C70A4: @ 0x085C70A4
	.string "のもと がくじ$"
	.if (. - gText_Rom_5C70A4) > 0x8
	.error "gText_Rom_5C70A4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C70A4) < 0x8
	.space 0x8 - (. - gText_Rom_5C70A4)
	.endif
