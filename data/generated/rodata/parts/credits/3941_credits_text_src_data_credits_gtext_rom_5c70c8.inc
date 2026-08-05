	@ src/data/credits.h:175 sCreditsText_TakaoNakano
	.globl gText_Rom_5C70C8
gText_Rom_5C70C8: @ 0x085C70C8
	.string "なかの たかお$"
	.if (. - gText_Rom_5C70C8) > 0x8
	.error "gText_Rom_5C70C8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C70C8) < 0x8
	.space 0x8 - (. - gText_Rom_5C70C8)
	.endif
