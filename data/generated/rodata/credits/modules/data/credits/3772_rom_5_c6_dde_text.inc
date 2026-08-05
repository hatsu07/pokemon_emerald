	@ src/data/credits.h:93 sCreditsText_Producers
	.globl gText_Rom_5C6DDE
gText_Rom_5C6DDE: @ 0x085C6DDE
	.string "プロデューサー$"
	.if (. - gText_Rom_5C6DDE) > 0x8
	.error "gText_Rom_5C6DDE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6DDE) < 0x8
	.space 0x8 - (. - gText_Rom_5C6DDE)
	.endif
