	@ src/strings.c:595 gText_CreateAQuiz2 (+1 aliases)
	.globl gText_CreateAQuiz2
gText_CreateAQuiz2: @ 0x085CBCD0
	.string "もんだいを つくってください!{EOS}"
	.if (. - gText_CreateAQuiz2) > 0x10
	.error "gText_CreateAQuiz2 may not grow beyond its original slot"
	.endif
	.if (. - gText_CreateAQuiz2) < 0x10
	.space 0x10 - (. - gText_CreateAQuiz2)
	.endif
