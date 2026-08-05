	@ src/data/credits.h:165 sCreditsText_TerukiMurakawa
	.globl gText_Rom_5C7071
gText_Rom_5C7071: @ 0x085C7071
	.string "むらかわ てるき$"
	.if (. - gText_Rom_5C7071) > 0x9
	.error "gText_Rom_5C7071 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C7071) < 0x9
	.space 0x9 - (. - gText_Rom_5C7071)
	.endif
