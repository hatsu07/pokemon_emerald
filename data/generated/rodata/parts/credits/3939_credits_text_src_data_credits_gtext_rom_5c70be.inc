	@ src/data/credits.h:174 sCreditsText_KyokoWatanabe
	.globl gText_Rom_5C70BE
gText_Rom_5C70BE: @ 0x085C70BE
	.string "わたなべ きょうこ$"
	.if (. - gText_Rom_5C70BE) > 0xa
	.error "gText_Rom_5C70BE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C70BE) < 0xa
	.space 0xa - (. - gText_Rom_5C70BE)
	.endif
