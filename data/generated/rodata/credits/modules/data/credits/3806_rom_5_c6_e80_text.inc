	@ src/data/credits.h:108 sCreditsText_TetsuyaWatanabe
	.globl gText_Rom_5C6E80
gText_Rom_5C6E80: @ 0x085C6E80
	.string "わたなべ てつや$"
	.if (. - gText_Rom_5C6E80) > 0x9
	.error "gText_Rom_5C6E80 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6E80) < 0x9
	.space 0x9 - (. - gText_Rom_5C6E80)
	.endif
