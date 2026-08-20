	@ src/strings.c:595 gText_CreateAQuiz2 (+1 aliases)
	.globl gText_Rom_5CBB89
gText_Rom_5CBB89: @ 0x085CBB89
	.string "もんだいを つくってください!{EOS}"
	.if (. - gText_Rom_5CBB89) > 0x10
	.error "gText_Rom_5CBB89 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBB89) < 0x10
	.space 0x10 - (. - gText_Rom_5CBB89)
	.endif
