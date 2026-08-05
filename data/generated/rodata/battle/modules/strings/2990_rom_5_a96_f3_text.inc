	@ src/strings.c:618 gText_ChallengeQuestionMark
	.globl gText_Rom_5A96F3
gText_Rom_5A96F3: @ 0x085A96F3
	.string "あきらめますか?$"
	.if (. - gText_Rom_5A96F3) > 0x9
	.error "gText_Rom_5A96F3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A96F3) < 0x9
	.space 0x9 - (. - gText_Rom_5A96F3)
	.endif
