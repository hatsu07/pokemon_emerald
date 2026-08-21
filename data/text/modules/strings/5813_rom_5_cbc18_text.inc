	@ src/strings.c:608 gText_ApprenticesPhrase
	.globl gText_Rom_5CBC18
gText_Rom_5CBC18: @ 0x085CBC18
	.string "でしの きめゼリフ{EOS}"
	.if (. - gText_Rom_5CBC18) > 0xa
	.error "gText_Rom_5CBC18 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBC18) < 0xa
	.space 0xa - (. - gText_Rom_5CBC18)
	.endif
