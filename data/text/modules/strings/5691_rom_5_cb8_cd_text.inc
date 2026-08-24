	@ src/strings.c:548 gText_WithFourPhrases
	.globl gText_WithFourPhrases
gText_WithFourPhrases: @ 0x085CB8CD
	.string "4つの ことばで{EOS}"
	.if (. - gText_WithFourPhrases) > 0x9
	.error "gText_WithFourPhrases may not grow beyond its original slot"
	.endif
	.if (. - gText_WithFourPhrases) < 0x9
	.space 0x9 - (. - gText_WithFourPhrases)
	.endif
