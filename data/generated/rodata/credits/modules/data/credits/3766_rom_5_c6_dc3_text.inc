	@ src/data/credits.h:90 sCreditsText_NCLProductTesting
	.globl gText_Rom_5C6DC3
gText_Rom_5C6DC3: @ 0x085C6DC3
	.string "デバッグプレイ$"
	.if (. - gText_Rom_5C6DC3) > 0x8
	.error "gText_Rom_5C6DC3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6DC3) < 0x8
	.space 0x8 - (. - gText_Rom_5C6DC3)
	.endif
