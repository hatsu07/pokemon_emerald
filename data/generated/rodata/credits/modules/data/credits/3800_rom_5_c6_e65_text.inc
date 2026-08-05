	@ src/data/credits.h:105 sCreditsText_JunichiMasuda
	.globl gText_Rom_5C6E65
gText_Rom_5C6E65: @ 0x085C6E65
	.string "ますだ じゅんいち$"
	.if (. - gText_Rom_5C6E65) > 0xa
	.error "gText_Rom_5C6E65 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6E65) < 0xa
	.space 0xa - (. - gText_Rom_5C6E65)
	.endif
