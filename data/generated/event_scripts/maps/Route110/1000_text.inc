	@ data/maps/Route110/scripts.inc:875 Route110_Text_ChallengeReactionOk
	.globl gText_Rom_1E9CBA
gText_Rom_1E9CBA: @ 0x081E9CBA
	.string "まだ みじゅくな ぶぶんも あるようだが\nせっかくの じてんしゃを\lたのしむ きもちを わすれないで くれよ$"
	.if (. - gText_Rom_1E9CBA) > 0x37
	.error "gText_Rom_1E9CBA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E9CBA) < 0x37
	.space 0x37 - (. - gText_Rom_1E9CBA)
	.endif
