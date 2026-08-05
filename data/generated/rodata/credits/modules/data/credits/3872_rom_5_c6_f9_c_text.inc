	@ src/data/credits.h:141 sCreditsText_ToshinobuMatsumiya
	.globl gText_Rom_5C6F9C
gText_Rom_5C6F9C: @ 0x085C6F9C
	.string "まつみや としのぶ$"
	.if (. - gText_Rom_5C6F9C) > 0xa
	.error "gText_Rom_5C6F9C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6F9C) < 0xa
	.space 0xa - (. - gText_Rom_5C6F9C)
	.endif
