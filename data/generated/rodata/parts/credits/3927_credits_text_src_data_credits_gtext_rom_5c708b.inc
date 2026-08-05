	@ src/data/credits.h:168 sCreditsText_MakikoTakada
	.globl gText_Rom_5C708B
gText_Rom_5C708B: @ 0x085C708B
	.string "たかだ まきこ$"
	.if (. - gText_Rom_5C708B) > 0x8
	.error "gText_Rom_5C708B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C708B) < 0x8
	.space 0x8 - (. - gText_Rom_5C708B)
	.endif
