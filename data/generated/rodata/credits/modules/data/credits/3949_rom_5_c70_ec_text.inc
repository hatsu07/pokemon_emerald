	@ src/data/credits.h:179 sCreditsText_SatoruIwata
	.globl gText_Rom_5C70EC
gText_Rom_5C70EC: @ 0x085C70EC
	.string "いわた さとる$"
	.if (. - gText_Rom_5C70EC) > 0x8
	.error "gText_Rom_5C70EC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C70EC) < 0x8
	.space 0x8 - (. - gText_Rom_5C70EC)
	.endif
