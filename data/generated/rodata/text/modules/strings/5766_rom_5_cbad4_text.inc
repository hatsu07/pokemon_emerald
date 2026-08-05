	@ src/strings.c:585 gText_EditedTextWillNotBeSaved
	.globl gText_Rom_5CBAD4
gText_Rom_5CBAD4: @ 0x085CBAD4
	.string "へんしゅうした ことばは ほぞん$"
	.if (. - gText_Rom_5CBAD4) > 0x11
	.error "gText_Rom_5CBAD4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBAD4) < 0x11
	.space 0x11 - (. - gText_Rom_5CBAD4)
	.endif
