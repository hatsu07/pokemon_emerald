	@ src/data/credits.h:138 sCreditsText_TeruyukiShimoyamada
	.globl gText_Rom_5C6F7F
gText_Rom_5C6F7F: @ 0x085C6F7F
	.string "しもやまだ てるゆき$"
	.if (. - gText_Rom_5C6F7F) > 0xb
	.error "gText_Rom_5C6F7F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6F7F) < 0xb
	.space 0xb - (. - gText_Rom_5C6F7F)
	.endif
