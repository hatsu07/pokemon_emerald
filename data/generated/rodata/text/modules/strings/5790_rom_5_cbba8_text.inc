	@ src/strings.c:597 gText_CancelSelection
	.globl gText_Rom_5CBBA8
gText_Rom_5CBBA8: @ 0x085CBBA8
	.string "もとにもどして いいですか?$"
	.if (. - gText_Rom_5CBBA8) > 0xf
	.error "gText_Rom_5CBBA8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBBA8) < 0xf
	.space 0xf - (. - gText_Rom_5CBBA8)
	.endif
