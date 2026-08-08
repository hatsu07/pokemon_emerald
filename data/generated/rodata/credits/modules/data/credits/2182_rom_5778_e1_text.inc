	@ src/data/credits.h:79 sCreditsText_MusicComposition (+1 aliases)
	.globl gText_Rom_5778E1
gText_Rom_5778E1: @ 0x085778E1
	.string "おんがく$"
	.if (. - gText_Rom_5778E1) > 0x5
	.error "gText_Rom_5778E1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5778E1) < 0x5
	.space 0x5 - (. - gText_Rom_5778E1)
	.endif
