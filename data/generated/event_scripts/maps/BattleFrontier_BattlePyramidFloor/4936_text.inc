	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:290 BattlePyramid_Text_EightItemsRemaining4
	.globl gText_Rom_22DE75
gText_Rom_22DE75: @ 0x0822DE75
	.string "つよい あなたに ヒントを あげる!\pどうぐは\nあと 8つ おちているらしいわ!$"
	.if (. - gText_Rom_22DE75) > 0x29
	.error "gText_Rom_22DE75 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22DE75) < 0x29
	.space 0x29 - (. - gText_Rom_22DE75)
	.endif
