	@ src/data/credits.h:127 sCreditsText_JunOkutani
	.globl gText_Rom_5C6F21
gText_Rom_5C6F21: @ 0x085C6F21
	.string "おくたに じゅん$"
	.if (. - gText_Rom_5C6F21) > 0x9
	.error "gText_Rom_5C6F21 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6F21) < 0x9
	.space 0x9 - (. - gText_Rom_5C6F21)
	.endif
