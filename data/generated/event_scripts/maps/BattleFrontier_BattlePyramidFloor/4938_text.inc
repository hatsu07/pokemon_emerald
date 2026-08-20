	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:293 BattlePyramid_Text_SevenItemsRemaining4
	.globl gText_Rom_22DE9E
gText_Rom_22DE9E: @ 0x0822DE9E
	.string "つよい あなたに ヒントを あげる!\pどうぐは\nあと 7つ おちているらしいわ!{EOS}"
	.if (. - gText_Rom_22DE9E) > 0x29
	.error "gText_Rom_22DE9E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22DE9E) < 0x29
	.space 0x29 - (. - gText_Rom_22DE9E)
	.endif
