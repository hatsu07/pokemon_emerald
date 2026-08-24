	@ src/strings.c:614 gText_AfterYouHaveReadTheQuiz
	.globl gText_AfterYouHaveReadTheQuiz
gText_AfterYouHaveReadTheQuiz: @ 0x085CBC89
	.string "もんだいを よんだら{EOS}"
	.if (. - gText_AfterYouHaveReadTheQuiz) > 0xb
	.error "gText_AfterYouHaveReadTheQuiz may not grow beyond its original slot"
	.endif
	.if (. - gText_AfterYouHaveReadTheQuiz) < 0xb
	.space 0xb - (. - gText_AfterYouHaveReadTheQuiz)
	.endif
