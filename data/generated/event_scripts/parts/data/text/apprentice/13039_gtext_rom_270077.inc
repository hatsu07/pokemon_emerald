	@ data/text/apprentice.inc:475 gText_ApprenticeThanksHeldItem15
	.globl gText_Rom_270077
gText_Rom_270077: @ 0x08270077
	.string "{STR_VAR_1}…… ほんとうかね?\pいや ほんとう なら いいんだ\nどうも ありがとう\lこんな わたしの ポケモンでも\lつかいこなせると いいな\pでは いずれまた あおう!"
	.byte EOS
	.if (. - gText_Rom_270077) > 0x52
	.error "gText_Rom_270077 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_270077) < 0x52
	.space 0x52 - (. - gText_Rom_270077)
	.endif
