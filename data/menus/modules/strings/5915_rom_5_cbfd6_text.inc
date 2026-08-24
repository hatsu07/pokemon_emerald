	@ src/strings.c:651 gText_Dry2
	.globl gText_Dry2
gText_Dry2: @ 0x085CBFD6
	.string "しぶ{EOS}"
	.if (. - gText_Dry2) > 0x3
	.error "gText_Dry2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Dry2) < 0x3
	.space 0x3 - (. - gText_Dry2)
	.endif
