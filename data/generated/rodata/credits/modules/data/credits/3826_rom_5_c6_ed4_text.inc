	@ src/data/credits.h:118 sCreditsText_MiyukiIwasawa
	.globl gText_Rom_5C6ED4
gText_Rom_5C6ED4: @ 0x085C6ED4
	.string "いわさわ みゆき$"
	.if (. - gText_Rom_5C6ED4) > 0x9
	.error "gText_Rom_5C6ED4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6ED4) < 0x9
	.space 0x9 - (. - gText_Rom_5C6ED4)
	.endif
