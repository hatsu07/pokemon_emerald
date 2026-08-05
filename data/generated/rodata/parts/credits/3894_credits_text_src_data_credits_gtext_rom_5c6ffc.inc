	@ src/data/credits.h:152 sCreditsText_AkikoShinozaki
	.globl gText_Rom_5C6FFC
gText_Rom_5C6FFC: @ 0x085C6FFC
	.string "しのざき あきこ$"
	.if (. - gText_Rom_5C6FFC) > 0x9
	.error "gText_Rom_5C6FFC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6FFC) < 0x9
	.space 0x9 - (. - gText_Rom_5C6FFC)
	.endif
