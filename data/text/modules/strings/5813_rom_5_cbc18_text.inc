	@ src/strings.c:608 gText_ApprenticesPhrase
	.globl gText_ApprenticesPhrase
gText_ApprenticesPhrase: @ 0x085CBC18
	.string "でしの きめゼリフ{EOS}"
	.if (. - gText_ApprenticesPhrase) > 0xa
	.error "gText_ApprenticesPhrase may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticesPhrase) < 0xa
	.space 0xa - (. - gText_ApprenticesPhrase)
	.endif
