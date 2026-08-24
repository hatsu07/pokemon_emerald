	@ src/strings.c:587 gText_PleaseEnterPhraseOrWord
	.globl gText_PleaseEnterPhraseOrWord
gText_PleaseEnterPhraseOrWord: @ 0x085CBAF3
	.string "なにか ことばを いれてください!{EOS}"
	.if (. - gText_PleaseEnterPhraseOrWord) > 0x12
	.error "gText_PleaseEnterPhraseOrWord may not grow beyond its original slot"
	.endif
	.if (. - gText_PleaseEnterPhraseOrWord) < 0x12
	.space 0x12 - (. - gText_PleaseEnterPhraseOrWord)
	.endif
