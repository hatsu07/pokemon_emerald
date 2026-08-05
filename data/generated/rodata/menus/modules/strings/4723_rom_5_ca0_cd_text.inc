	@ src/strings.c:316 gText_BoostPp
	.globl gText_Rom_5CA0CD
gText_Rom_5CA0CD: @ 0x085CA0CD
	.string "どれを ふやす?$"
	.if (. - gText_Rom_5CA0CD) > 0x9
	.error "gText_Rom_5CA0CD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA0CD) < 0x9
	.space 0x9 - (. - gText_Rom_5CA0CD)
	.endif
