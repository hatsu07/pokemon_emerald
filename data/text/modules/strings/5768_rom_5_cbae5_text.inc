	@ src/strings.c:586 gText_IsThatOkay
	.globl gText_IsThatOkay
gText_IsThatOkay: @ 0x085CBAE5
	.string "されませんが いいですか?{EOS}"
	.if (. - gText_IsThatOkay) > 0xe
	.error "gText_IsThatOkay may not grow beyond its original slot"
	.endif
	.if (. - gText_IsThatOkay) < 0xe
	.space 0xe - (. - gText_IsThatOkay)
	.endif
