	@ src/strings.c:572 gText_AndCreateAQuiz
	.globl gText_AndCreateAQuiz
gText_AndCreateAQuiz: @ 0x085CBA1F
	.string "クイズを つくろう!{EOS}"
	.if (. - gText_AndCreateAQuiz) > 0xb
	.error "gText_AndCreateAQuiz may not grow beyond its original slot"
	.endif
	.if (. - gText_AndCreateAQuiz) < 0xb
	.space 0xb - (. - gText_AndCreateAQuiz)
	.endif
