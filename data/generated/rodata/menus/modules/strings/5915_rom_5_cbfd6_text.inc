	@ src/strings.c:651 gText_Dry2
	.globl gText_Rom_5CBFD6
gText_Rom_5CBFD6: @ 0x085CBFD6
	.string "しぶ{EOS}"
	.if (. - gText_Rom_5CBFD6) > 0x3
	.error "gText_Rom_5CBFD6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBFD6) < 0x3
	.space 0x3 - (. - gText_Rom_5CBFD6)
	.endif
