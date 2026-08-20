	@ src/strings.c:617 gText_LikeToQuitQuiz
	.globl gText_Rom_5CBCAB
gText_Rom_5CBCAB: @ 0x085CBCAB
	.string "クイズの チャレンジを{EOS}"
	.if (. - gText_Rom_5CBCAB) > 0xc
	.error "gText_Rom_5CBCAB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBCAB) < 0xc
	.space 0xc - (. - gText_Rom_5CBCAB)
	.endif
