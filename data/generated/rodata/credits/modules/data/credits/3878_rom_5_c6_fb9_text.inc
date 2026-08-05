	@ src/data/credits.h:144 sCreditsText_KazuyukiTerada
	.globl gText_Rom_5C6FB9
gText_Rom_5C6FB9: @ 0x085C6FB9
	.string "てらだ かずゆき$"
	.if (. - gText_Rom_5C6FB9) > 0x9
	.error "gText_Rom_5C6FB9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6FB9) < 0x9
	.space 0x9 - (. - gText_Rom_5C6FB9)
	.endif
