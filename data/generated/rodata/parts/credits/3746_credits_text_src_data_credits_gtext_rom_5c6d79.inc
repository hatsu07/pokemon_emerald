	@ src/data/credits.h:83 sCreditsText_Scenario
	.globl gText_Rom_5C6D79
gText_Rom_5C6D79: @ 0x085C6D79
	.string "シナリオ$"
	.if (. - gText_Rom_5C6D79) > 0x5
	.error "gText_Rom_5C6D79 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6D79) < 0x5
	.space 0x5 - (. - gText_Rom_5C6D79)
	.endif
