	@ src/strings.c:618 gText_ChallengeQuestionMark
	.globl gText_Rom_5CBCB7
gText_Rom_5CBCB7: @ 0x085CBCB7
	.string "あきらめますか?{EOS}"
	.if (. - gText_Rom_5CBCB7) > 0x9
	.error "gText_Rom_5CBCB7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBCB7) < 0x9
	.space 0x9 - (. - gText_Rom_5CBCB7)
	.endif
