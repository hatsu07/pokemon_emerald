	@ src/data/credits.h:123 sCreditsText_AsukaIwashita
	.globl gText_Rom_5C6F01
gText_Rom_5C6F01: @ 0x085C6F01
	.string "いわした あすか$"
	.if (. - gText_Rom_5C6F01) > 0x9
	.error "gText_Rom_5C6F01 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6F01) < 0x9
	.space 0x9 - (. - gText_Rom_5C6F01)
	.endif
