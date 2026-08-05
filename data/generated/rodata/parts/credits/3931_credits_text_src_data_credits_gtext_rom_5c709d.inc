	@ src/data/credits.h:170 sCreditsText_AiMashima
	.globl gText_Rom_5C709D
gText_Rom_5C709D: @ 0x085C709D
	.string "ましま あい$"
	.if (. - gText_Rom_5C709D) > 0x7
	.error "gText_Rom_5C709D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C709D) < 0x7
	.space 0x7 - (. - gText_Rom_5C709D)
	.endif
