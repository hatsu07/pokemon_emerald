	@ src/strings.c:564 gText_IsAsShownOkay
	.globl gText_Rom_5CB9B3
gText_Rom_5CB9B3: @ 0x085CB9B3
	.string "これで いいですか?$"
	.if (. - gText_Rom_5CB9B3) > 0xb
	.error "gText_Rom_5CB9B3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB9B3) < 0xb
	.space 0xb - (. - gText_Rom_5CB9B3)
	.endif
