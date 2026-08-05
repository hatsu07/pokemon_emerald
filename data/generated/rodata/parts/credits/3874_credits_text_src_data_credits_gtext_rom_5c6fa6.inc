	@ src/data/credits.h:142 sCreditsText_AkihitoTomisawa
	.globl gText_Rom_5C6FA6
gText_Rom_5C6FA6: @ 0x085C6FA6
	.string "とみさわ あきひと$"
	.if (. - gText_Rom_5C6FA6) > 0xa
	.error "gText_Rom_5C6FA6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6FA6) < 0xa
	.space 0xa - (. - gText_Rom_5C6FA6)
	.endif
