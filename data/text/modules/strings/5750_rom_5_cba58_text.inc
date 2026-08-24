	@ src/strings.c:577 gText_ApprenticePhrase
	.globl gText_ApprenticePhrase
gText_ApprenticePhrase: @ 0x085CBA58
	.string "でしの きめゼリフは{EOS}"
	.if (. - gText_ApprenticePhrase) > 0xb
	.error "gText_ApprenticePhrase may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticePhrase) < 0xb
	.space 0xb - (. - gText_ApprenticePhrase)
	.endif
