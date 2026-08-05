	@ src/data/credits.h:109 sCreditsText_HisashiSogabe
	.globl gText_Rom_5C6E89
gText_Rom_5C6E89: @ 0x085C6E89
	.string "そがべ ひさし$"
	.if (. - gText_Rom_5C6E89) > 0x8
	.error "gText_Rom_5C6E89 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6E89) < 0x8
	.space 0x8 - (. - gText_Rom_5C6E89)
	.endif
