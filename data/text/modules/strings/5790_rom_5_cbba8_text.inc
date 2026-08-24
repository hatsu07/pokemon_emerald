	@ src/strings.c:597 gText_CancelSelection
	.globl gText_CancelSelection
gText_CancelSelection: @ 0x085CBBA8
	.string "もとにもどして いいですか?{EOS}"
	.if (. - gText_CancelSelection) > 0xf
	.error "gText_CancelSelection may not grow beyond its original slot"
	.endif
	.if (. - gText_CancelSelection) < 0xf
	.space 0xf - (. - gText_CancelSelection)
	.endif
