	@ src/strings.c:564 gText_IsAsShownOkay
	.globl gText_IsAsShownOkay
gText_IsAsShownOkay: @ 0x085CB9B3
	.string "これで いいですか?{EOS}"
	.if (. - gText_IsAsShownOkay) > 0xb
	.error "gText_IsAsShownOkay may not grow beyond its original slot"
	.endif
	.if (. - gText_IsAsShownOkay) < 0xb
	.space 0xb - (. - gText_IsAsShownOkay)
	.endif
