	@ src/strings.c:315 gText_RestoreWhichMove
	.globl gText_RestoreWhichMove
gText_RestoreWhichMove: @ 0x085CA0C1
	.string "どれを かいふくする?{EOS}"
	.if (. - gText_RestoreWhichMove) > 0xc
	.error "gText_RestoreWhichMove may not grow beyond its original slot"
	.endif
	.if (. - gText_RestoreWhichMove) < 0xc
	.space 0xc - (. - gText_RestoreWhichMove)
	.endif

	@ src/strings.c:316 gText_BoostPp
	.globl gText_BoostPp
gText_BoostPp: @ 0x085CA0CD
	.string "どれを ふやす?{EOS}"
	.if (. - gText_BoostPp) > 0x9
	.error "gText_BoostPp may not grow beyond its original slot"
	.endif
	.if (. - gText_BoostPp) < 0x9
	.space 0x9 - (. - gText_BoostPp)
	.endif

	@ src/strings.c:317 gText_DoWhatWithItem
	.globl gText_DoWhatWithItem
gText_DoWhatWithItem: @ 0x085CA0D6
	.string "もちものを どうしますか?{EOS}"
	.if (. - gText_DoWhatWithItem) > 0xe
	.error "gText_DoWhatWithItem may not grow beyond its original slot"
	.endif
	.if (. - gText_DoWhatWithItem) < 0xe
	.space 0xe - (. - gText_DoWhatWithItem)
	.endif
