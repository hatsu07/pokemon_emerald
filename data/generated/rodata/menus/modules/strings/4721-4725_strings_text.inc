	@ src/strings.c:315 gText_RestoreWhichMove
	.globl gText_Rom_5CA0C1
gText_Rom_5CA0C1: @ 0x085CA0C1
	.string "どれを かいふくする?$"
	.if (. - gText_Rom_5CA0C1) > 0xc
	.error "gText_Rom_5CA0C1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA0C1) < 0xc
	.space 0xc - (. - gText_Rom_5CA0C1)
	.endif

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

	@ src/strings.c:317 gText_DoWhatWithItem
	.globl gText_Rom_5CA0D6
gText_Rom_5CA0D6: @ 0x085CA0D6
	.string "もちものを どうしますか?$"
	.if (. - gText_Rom_5CA0D6) > 0xe
	.error "gText_Rom_5CA0D6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA0D6) < 0xe
	.space 0xe - (. - gText_Rom_5CA0D6)
	.endif
