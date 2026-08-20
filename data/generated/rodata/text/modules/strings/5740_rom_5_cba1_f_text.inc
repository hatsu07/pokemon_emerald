	@ src/strings.c:572 gText_AndCreateAQuiz
	.globl gText_Rom_5CBA1F
gText_Rom_5CBA1F: @ 0x085CBA1F
	.string "クイズを つくろう!{EOS}"
	.if (. - gText_Rom_5CBA1F) > 0xb
	.error "gText_Rom_5CBA1F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBA1F) < 0xb
	.space 0xb - (. - gText_Rom_5CBA1F)
	.endif
