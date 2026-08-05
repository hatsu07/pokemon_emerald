	@ src/data/credits.h:143 sCreditsText_HirokiEnomoto
	.globl gText_Rom_5C6FB0
gText_Rom_5C6FB0: @ 0x085C6FB0
	.string "えのもと ひろき$"
	.if (. - gText_Rom_5C6FB0) > 0x9
	.error "gText_Rom_5C6FB0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6FB0) < 0x9
	.space 0x9 - (. - gText_Rom_5C6FB0)
	.endif
