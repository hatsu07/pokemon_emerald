	@ src/data/credits.h:149 sCreditsText_TeikoSasaki
	.globl gText_Rom_5C6FE4
gText_Rom_5C6FE4: @ 0x085C6FE4
	.string "ささき ていこ$"
	.if (. - gText_Rom_5C6FE4) > 0x8
	.error "gText_Rom_5C6FE4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6FE4) < 0x8
	.space 0x8 - (. - gText_Rom_5C6FE4)
	.endif
