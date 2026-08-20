	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:311 BattlePyramid_Text_OneItemRemaining4
	.globl gText_Rom_22DF94
gText_Rom_22DF94: @ 0x0822DF94
	.string "つよい あなたに ヒントを あげる!\pどうぐは\nあと 1つ おちているらしいわ!{EOS}"
	.if (. - gText_Rom_22DF94) > 0x29
	.error "gText_Rom_22DF94 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22DF94) < 0x29
	.space 0x29 - (. - gText_Rom_22DF94)
	.endif
