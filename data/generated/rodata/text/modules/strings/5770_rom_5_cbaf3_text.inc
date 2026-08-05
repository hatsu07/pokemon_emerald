	@ src/strings.c:587 gText_PleaseEnterPhraseOrWord
	.globl gText_Rom_5CBAF3
gText_Rom_5CBAF3: @ 0x085CBAF3
	.string "なにか ことばを いれてください!$"
	.if (. - gText_Rom_5CBAF3) > 0x12
	.error "gText_Rom_5CBAF3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBAF3) < 0x12
	.space 0x12 - (. - gText_Rom_5CBAF3)
	.endif
