	@ src/data/credits.h:100 sCreditsText_SupportProgrammers
	.globl gText_Rom_5C6E33
gText_Rom_5C6E33: @ 0x085C6E33
	.string "プログラム サポート$"
	.if (. - gText_Rom_5C6E33) > 0xb
	.error "gText_Rom_5C6E33 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6E33) < 0xb
	.space 0xb - (. - gText_Rom_5C6E33)
	.endif
