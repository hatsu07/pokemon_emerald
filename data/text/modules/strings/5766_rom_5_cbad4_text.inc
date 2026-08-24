	@ src/strings.c:585 gText_EditedTextWillNotBeSaved
	.globl gText_EditedTextWillNotBeSaved
gText_EditedTextWillNotBeSaved: @ 0x085CBAD4
	.string "へんしゅうした ことばは ほぞん{EOS}"
	.if (. - gText_EditedTextWillNotBeSaved) > 0x11
	.error "gText_EditedTextWillNotBeSaved may not grow beyond its original slot"
	.endif
	.if (. - gText_EditedTextWillNotBeSaved) < 0x11
	.space 0x11 - (. - gText_EditedTextWillNotBeSaved)
	.endif
