	@ src/data/credits.h:111 sCreditsText_AkitoMori
	.globl gText_Rom_5C6E9A
gText_Rom_5C6E9A: @ 0x085C6E9A
	.string "もり あきと$"
	.if (. - gText_Rom_5C6E9A) > 0x7
	.error "gText_Rom_5C6E9A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6E9A) < 0x7
	.space 0x7 - (. - gText_Rom_5C6E9A)
	.endif
