	@ src/data/credits.h:145 sCreditsText_YuriSakurai
	.globl gText_Rom_5C6FC2
gText_Rom_5C6FC2: @ 0x085C6FC2
	.string "さくらい ゆうり$"
	.if (. - gText_Rom_5C6FC2) > 0x9
	.error "gText_Rom_5C6FC2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6FC2) < 0x9
	.space 0x9 - (. - gText_Rom_5C6FC2)
	.endif
