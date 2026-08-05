	@ src/data/credits.h:180 sCreditsText_KazuyaSuyama
	.globl gText_Rom_5C70F4
gText_Rom_5C70F4: @ 0x085C70F4
	.string "すやま かずや$"
	.if (. - gText_Rom_5C70F4) > 0x8
	.error "gText_Rom_5C70F4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C70F4) < 0x8
	.space 0x8 - (. - gText_Rom_5C70F4)
	.endif
