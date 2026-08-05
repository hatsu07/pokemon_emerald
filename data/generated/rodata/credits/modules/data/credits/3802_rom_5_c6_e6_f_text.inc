	@ src/data/credits.h:106 sCreditsText_KenSugimori
	.globl gText_Rom_5C6E6F
gText_Rom_5C6E6F: @ 0x085C6E6F
	.string "すぎもり けん$"
	.if (. - gText_Rom_5C6E6F) > 0x8
	.error "gText_Rom_5C6E6F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6E6F) < 0x8
	.space 0x8 - (. - gText_Rom_5C6E6F)
	.endif
