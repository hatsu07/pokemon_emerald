	@ src/data/credits.h:104 sCreditsText_SatoshiTajiri
	.globl gText_Rom_5C6E5D
gText_Rom_5C6E5D: @ 0x085C6E5D
	.string "たじり さとし$"
	.if (. - gText_Rom_5C6E5D) > 0x8
	.error "gText_Rom_5C6E5D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6E5D) < 0x8
	.space 0x8 - (. - gText_Rom_5C6E5D)
	.endif
