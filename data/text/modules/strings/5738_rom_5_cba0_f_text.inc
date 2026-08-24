	@ src/strings.c:571 gText_SelectTheAnswerToTheQuiz
	.globl gText_SelectTheAnswerToTheQuiz
gText_SelectTheAnswerToTheQuiz: @ 0x085CBA0F
	.string "クイズの こたえを えらぼう!{EOS}"
	.if (. - gText_SelectTheAnswerToTheQuiz) > 0x10
	.error "gText_SelectTheAnswerToTheQuiz may not grow beyond its original slot"
	.endif
	.if (. - gText_SelectTheAnswerToTheQuiz) < 0x10
	.space 0x10 - (. - gText_SelectTheAnswerToTheQuiz)
	.endif
