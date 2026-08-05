	@ src/data/credits.h:173 sCreditsText_HitoshiYamagami
	.globl gText_Rom_5C70B5
gText_Rom_5C70B5: @ 0x085C70B5
	.string "やまがみ ひとし$"
	.if (. - gText_Rom_5C70B5) > 0x9
	.error "gText_Rom_5C70B5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C70B5) < 0x9
	.space 0x9 - (. - gText_Rom_5C70B5)
	.endif
