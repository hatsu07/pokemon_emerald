	@ data/text/apprentice.inc:472 gText_ApprenticeThanksNoHeldItem15
	.globl gText_Rom_270050
gText_Rom_270050: @ 0x08270050
	.string "いや そうか なら いいんだ\nどうも ありがとう\pでは いずれまた あおう!"
	.byte EOS
	.if (. - gText_Rom_270050) > 0x27
	.error "gText_Rom_270050 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_270050) < 0x27
	.space 0x27 - (. - gText_Rom_270050)
	.endif
