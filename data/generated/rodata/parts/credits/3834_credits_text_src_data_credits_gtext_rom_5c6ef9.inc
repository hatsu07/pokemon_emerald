	@ src/data/credits.h:122 sCreditsText_SatoshiOhta
	.globl gText_Rom_5C6EF9
gText_Rom_5C6EF9: @ 0x085C6EF9
	.string "おおた さとし$"
	.if (. - gText_Rom_5C6EF9) > 0x8
	.error "gText_Rom_5C6EF9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6EF9) < 0x8
	.space 0x8 - (. - gText_Rom_5C6EF9)
	.endif
