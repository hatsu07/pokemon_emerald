	@ src/strings.c:618 gText_ChallengeQuestionMark
	.globl gText_ChallengeQuestionMark
gText_ChallengeQuestionMark: @ 0x085CBCB7
	.string "あきらめますか?{EOS}"
	.if (. - gText_ChallengeQuestionMark) > 0x9
	.error "gText_ChallengeQuestionMark may not grow beyond its original slot"
	.endif
	.if (. - gText_ChallengeQuestionMark) < 0x9
	.space 0x9 - (. - gText_ChallengeQuestionMark)
	.endif
