	@ src/strings.c:551 gText_ChangeJustOneWordOrPhrase
	.globl gText_ChangeJustOneWordOrPhrase
gText_ChangeJustOneWordOrPhrase: @ 0x085CB8F3
	.string "ことばを 1つだけ いれかえて{EOS}"
	.if (. - gText_ChangeJustOneWordOrPhrase) > 0x10
	.error "gText_ChangeJustOneWordOrPhrase may not grow beyond its original slot"
	.endif
	.if (. - gText_ChangeJustOneWordOrPhrase) < 0x10
	.space 0x10 - (. - gText_ChangeJustOneWordOrPhrase)
	.endif
