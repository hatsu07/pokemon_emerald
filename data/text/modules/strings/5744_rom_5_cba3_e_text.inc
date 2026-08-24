	@ src/strings.c:574 gText_SetTheQuizAnswer
	.globl gText_SetTheQuizAnswer
gText_SetTheQuizAnswer: @ 0x085CBA3E
	.string "クイズの こたえを つくろう!{EOS}"
	.if (. - gText_SetTheQuizAnswer) > 0x10
	.error "gText_SetTheQuizAnswer may not grow beyond its original slot"
	.endif
	.if (. - gText_SetTheQuizAnswer) < 0x10
	.space 0x10 - (. - gText_SetTheQuizAnswer)
	.endif
