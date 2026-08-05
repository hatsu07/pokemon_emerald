	@ src/data/credits.h:192 sCreditsText_RetsujiNomoto
	.globl gText_Rom_5C7163
gText_Rom_5C7163: @ 0x085C7163
	.string "のもと れつじ$"
	.if (. - gText_Rom_5C7163) > 0x8
	.error "gText_Rom_5C7163 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C7163) < 0x8
	.space 0x8 - (. - gText_Rom_5C7163)
	.endif
