	@ src/data/credits.h:148 sCreditsText_YoshioTajiri
	.globl gText_Rom_5C6FDC
gText_Rom_5C6FDC: @ 0x085C6FDC
	.string "たじり よしお$"
	.if (. - gText_Rom_5C6FDC) > 0x8
	.error "gText_Rom_5C6FDC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6FDC) < 0x8
	.space 0x8 - (. - gText_Rom_5C6FDC)
	.endif
