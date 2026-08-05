	@ src/strings.c:595 gText_CreateAQuiz2 (+1 aliases)
	.globl gText_Rom_5CBCD0
gText_Rom_5CBCD0: @ 0x085CBCD0
	.string "もんだいを つくってください!$"
	.if (. - gText_Rom_5CBCD0) > 0x10
	.error "gText_Rom_5CBCD0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBCD0) < 0x10
	.space 0x10 - (. - gText_Rom_5CBCD0)
	.endif
