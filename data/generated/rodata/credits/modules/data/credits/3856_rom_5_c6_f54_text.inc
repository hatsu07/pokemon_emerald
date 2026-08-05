	@ src/data/credits.h:133 sCreditsText_KojiNishino
	.globl gText_Rom_5C6F54
gText_Rom_5C6F54: @ 0x085C6F54
	.string "にしの こうじ$"
	.if (. - gText_Rom_5C6F54) > 0x8
	.error "gText_Rom_5C6F54 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6F54) < 0x8
	.space 0x8 - (. - gText_Rom_5C6F54)
	.endif
