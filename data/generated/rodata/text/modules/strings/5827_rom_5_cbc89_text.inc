	@ src/strings.c:614 gText_AfterYouHaveReadTheQuiz
	.globl gText_Rom_5CBC89
gText_Rom_5CBC89: @ 0x085CBC89
	.string "もんだいを よんだら$"
	.if (. - gText_Rom_5CBC89) > 0xb
	.error "gText_Rom_5CBC89 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBC89) < 0xb
	.space 0xb - (. - gText_Rom_5CBC89)
	.endif
