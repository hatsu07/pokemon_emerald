	@ src/data/credits.h:91 sCreditsText_SpecialThanks
	.globl gText_Rom_5C6DCB
gText_Rom_5C6DCB: @ 0x085C6DCB
	.string "スペシャルサンクス$"
	.if (. - gText_Rom_5C6DCB) > 0xa
	.error "gText_Rom_5C6DCB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6DCB) < 0xa
	.space 0xa - (. - gText_Rom_5C6DCB)
	.endif
