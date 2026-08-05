	@ src/data/credits.h:124 sCreditsText_AimiTomita
	.globl gText_Rom_5C6F0A
gText_Rom_5C6F0A: @ 0x085C6F0A
	.string "とみた あいみ$"
	.if (. - gText_Rom_5C6F0A) > 0x8
	.error "gText_Rom_5C6F0A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6F0A) < 0x8
	.space 0x8 - (. - gText_Rom_5C6F0A)
	.endif
