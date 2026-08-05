	@ src/data/credits.h:155 sCreditsText_KenkichiToyama
	.globl gText_Rom_5C7016
gText_Rom_5C7016: @ 0x085C7016
	.string "とやま けんきち$"
	.if (. - gText_Rom_5C7016) > 0x9
	.error "gText_Rom_5C7016 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C7016) < 0x9
	.space 0x9 - (. - gText_Rom_5C7016)
	.endif
