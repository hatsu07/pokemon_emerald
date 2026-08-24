	@ src/strings.c:617 gText_LikeToQuitQuiz
	.globl gText_LikeToQuitQuiz
gText_LikeToQuitQuiz: @ 0x085CBCAB
	.string "クイズの チャレンジを{EOS}"
	.if (. - gText_LikeToQuitQuiz) > 0xc
	.error "gText_LikeToQuitQuiz may not grow beyond its original slot"
	.endif
	.if (. - gText_LikeToQuitQuiz) < 0xc
	.space 0xc - (. - gText_LikeToQuitQuiz)
	.endif
