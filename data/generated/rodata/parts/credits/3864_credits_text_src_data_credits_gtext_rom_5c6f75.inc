	@ src/data/credits.h:137 sCreditsText_TakeshiKawachimaru
	.globl gText_Rom_5C6F75
gText_Rom_5C6F75: @ 0x085C6F75
	.string "かわちまる たけし$"
	.if (. - gText_Rom_5C6F75) > 0xa
	.error "gText_Rom_5C6F75 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6F75) < 0xa
	.space 0xa - (. - gText_Rom_5C6F75)
	.endif
