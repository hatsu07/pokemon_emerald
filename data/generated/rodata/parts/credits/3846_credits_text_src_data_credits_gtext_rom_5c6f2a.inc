	@ src/data/credits.h:128 sCreditsText_AtsukoNishida
	.globl gText_Rom_5C6F2A
gText_Rom_5C6F2A: @ 0x085C6F2A
	.string "にしだ あつこ$"
	.if (. - gText_Rom_5C6F2A) > 0x8
	.error "gText_Rom_5C6F2A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6F2A) < 0x8
	.space 0x8 - (. - gText_Rom_5C6F2A)
	.endif
