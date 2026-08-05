	@ src/data/credits.h:126 sCreditsText_KanakoEo
	.globl gText_Rom_5C6F1A
gText_Rom_5C6F1A: @ 0x085C6F1A
	.string "えお かなこ$"
	.if (. - gText_Rom_5C6F1A) > 0x7
	.error "gText_Rom_5C6F1A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6F1A) < 0x7
	.space 0x7 - (. - gText_Rom_5C6F1A)
	.endif
