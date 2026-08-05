	@ src/data/credits.h:97 sCreditsText_BrailleCodeCheck
	.globl gText_Rom_5C6E0F
gText_Rom_5C6E0F: @ 0x085C6E0F
	.string "てんじ かんしゅう$"
	.if (. - gText_Rom_5C6E0F) > 0xa
	.error "gText_Rom_5C6E0F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6E0F) < 0xa
	.space 0xa - (. - gText_Rom_5C6E0F)
	.endif
