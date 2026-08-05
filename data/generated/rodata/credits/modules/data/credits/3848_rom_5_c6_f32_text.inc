	@ src/data/credits.h:129 sCreditsText_MuneoSaito
	.globl gText_Rom_5C6F32
gText_Rom_5C6F32: @ 0x085C6F32
	.string "さいとう むねお$"
	.if (. - gText_Rom_5C6F32) > 0x9
	.error "gText_Rom_5C6F32 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C6F32) < 0x9
	.space 0x9 - (. - gText_Rom_5C6F32)
	.endif
