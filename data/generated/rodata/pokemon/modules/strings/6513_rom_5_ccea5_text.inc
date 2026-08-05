	@ src/strings.c:853 gText_LinkContestResults
	.globl gText_Rom_5CCEA5
gText_Rom_5CCEA5: @ 0x085CCEA5
	.string "{PLAYER}の つうしん コンテスト せいせき$"
	.if (. - gText_Rom_5CCEA5) > 0x14
	.error "gText_Rom_5CCEA5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCEA5) < 0x14
	.space 0x14 - (. - gText_Rom_5CCEA5)
	.endif
