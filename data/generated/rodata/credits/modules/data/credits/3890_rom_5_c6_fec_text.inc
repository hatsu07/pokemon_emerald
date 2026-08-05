	@ src/data/credits.h:150 sCreditsText_SachikoHamano
	.globl gText_Rom_5C6FEC
gText_Rom_5C6FEC: @ 0x085C6FEC
	.string "はまの さちこ$"
	.if (. - gText_Rom_5C6FEC) > 0x8
	.error "gText_Rom_5C6FEC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6FEC) < 0x8
	.space 0x8 - (. - gText_Rom_5C6FEC)
	.endif
