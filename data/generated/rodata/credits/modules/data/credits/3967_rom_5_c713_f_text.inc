	@ src/data/credits.h:188 sCreditsText_ShunsukeKohori
	.globl gText_Rom_5C713F
gText_Rom_5C713F: @ 0x085C713F
	.string "こほり しゅんすけ$"
	.if (. - gText_Rom_5C713F) > 0xa
	.error "gText_Rom_5C713F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C713F) < 0xa
	.space 0xa - (. - gText_Rom_5C713F)
	.endif
