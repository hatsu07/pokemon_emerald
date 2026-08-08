	@ data/maps/Route110/scripts.inc:870 Route110_Text_ChallengeReactionGood
	.globl gText_Rom_1E9C81
gText_Rom_1E9C81: @ 0x081E9C81
	.string "なかなかの テクニックを もってるな!\pまあ スピードを だしすぎて\nアクシデントを おこさないように しなよ!$"
	.if (. - gText_Rom_1E9C81) > 0x39
	.error "gText_Rom_1E9C81 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E9C81) < 0x39
	.space 0x39 - (. - gText_Rom_1E9C81)
	.endif
