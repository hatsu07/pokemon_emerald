	@ src/data/credits.h:101 sCreditsText_Artwork
	.globl gText_Rom_5C6E3E
gText_Rom_5C6E3E: @ 0x085C6E3E
	.string "アート ワーク$"
	.if (. - gText_Rom_5C6E3E) > 0x8
	.error "gText_Rom_5C6E3E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6E3E) < 0x8
	.space 0x8 - (. - gText_Rom_5C6E3E)
	.endif
