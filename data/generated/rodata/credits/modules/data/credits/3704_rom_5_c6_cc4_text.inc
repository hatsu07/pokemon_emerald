	@ src/data/credits.h:67 sCreditsText_Credits
	.globl gText_Rom_5C6CC4
gText_Rom_5C6CC4: @ 0x085C6CC4
	.string "スタッフリスト$"
	.if (. - gText_Rom_5C6CC4) > 0x8
	.error "gText_Rom_5C6CC4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6CC4) < 0x8
	.space 0x8 - (. - gText_Rom_5C6CC4)
	.endif
