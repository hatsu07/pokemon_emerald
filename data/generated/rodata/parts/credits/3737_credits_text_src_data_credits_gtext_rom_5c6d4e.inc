	@ src/data/credits.h:79 sCreditsText_MusicComposition (+1 aliases)
	.globl gText_Rom_5C6D4E
gText_Rom_5C6D4E: @ 0x085C6D4E
	.string "おんがく$"
	.if (. - gText_Rom_5C6D4E) > 0x5
	.error "gText_Rom_5C6D4E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6D4E) < 0x5
	.space 0x5 - (. - gText_Rom_5C6D4E)
	.endif
