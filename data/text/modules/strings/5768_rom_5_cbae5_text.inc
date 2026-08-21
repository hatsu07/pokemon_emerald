	@ src/strings.c:586 gText_IsThatOkay
	.globl gText_Rom_5CBAE5
gText_Rom_5CBAE5: @ 0x085CBAE5
	.string "されませんが いいですか?{EOS}"
	.if (. - gText_Rom_5CBAE5) > 0xe
	.error "gText_Rom_5CBAE5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBAE5) < 0xe
	.space 0xe - (. - gText_Rom_5CBAE5)
	.endif
