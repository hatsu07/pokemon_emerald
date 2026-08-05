	@ src/data/credits.h:162 sCreditsText_NorihideOkamura
	.globl gText_Rom_5C7054
gText_Rom_5C7054: @ 0x085C7054
	.string "おかむら のりひで$"
	.if (. - gText_Rom_5C7054) > 0xa
	.error "gText_Rom_5C7054 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C7054) < 0xa
	.space 0xa - (. - gText_Rom_5C7054)
	.endif
