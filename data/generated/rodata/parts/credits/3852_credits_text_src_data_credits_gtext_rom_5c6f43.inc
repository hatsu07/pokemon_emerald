	@ src/data/credits.h:131 sCreditsText_GoIchinose
	.globl gText_Rom_5C6F43
gText_Rom_5C6F43: @ 0x085C6F43
	.string "いちのせ ごう$"
	.if (. - gText_Rom_5C6F43) > 0x8
	.error "gText_Rom_5C6F43 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6F43) < 0x8
	.space 0x8 - (. - gText_Rom_5C6F43)
	.endif
