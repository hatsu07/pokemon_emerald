	@ src/data/credits.h:115 sCreditsText_MasaoTaya
	.globl gText_Rom_5C6EBC
gText_Rom_5C6EBC: @ 0x085C6EBC
	.string "たや まさお$"
	.if (. - gText_Rom_5C6EBC) > 0x7
	.error "gText_Rom_5C6EBC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6EBC) < 0x7
	.space 0x7 - (. - gText_Rom_5C6EBC)
	.endif
