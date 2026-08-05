	@ src/strings.c:84 gText_DexSearchAlphaDEF
	.globl gText_Rom_5CC504
gText_Rom_5CC504: @ 0x085CC504
	.string "かきくけこ$"
	.if (. - gText_Rom_5CC504) > 0x6
	.error "gText_Rom_5CC504 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC504) < 0x6
	.space 0x6 - (. - gText_Rom_5CC504)
	.endif
