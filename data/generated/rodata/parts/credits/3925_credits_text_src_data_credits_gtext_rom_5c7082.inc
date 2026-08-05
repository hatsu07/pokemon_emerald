	@ src/data/credits.h:167 sCreditsText_MichikoTakizawa
	.globl gText_Rom_5C7082
gText_Rom_5C7082: @ 0x085C7082
	.string "たきざわ みちこ$"
	.if (. - gText_Rom_5C7082) > 0x9
	.error "gText_Rom_5C7082 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C7082) < 0x9
	.space 0x9 - (. - gText_Rom_5C7082)
	.endif
