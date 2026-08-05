	@ src/data/credits.h:117 sCreditsText_TomomichiOhta
	.globl gText_Rom_5C6ECB
gText_Rom_5C6ECB: @ 0x085C6ECB
	.string "おおた ともみち$"
	.if (. - gText_Rom_5C6ECB) > 0x9
	.error "gText_Rom_5C6ECB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6ECB) < 0x9
	.space 0x9 - (. - gText_Rom_5C6ECB)
	.endif
