	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:308 BattlePyramid_Text_TwoItemsRemaining4
	.globl gText_Rom_22DF6B
gText_Rom_22DF6B: @ 0x0822DF6B
	.string "つよい あなたに ヒントを あげる!\pどうぐは\nあと 2つ おちているらしいわ!{EOS}"
	.if (. - gText_Rom_22DF6B) > 0x29
	.error "gText_Rom_22DF6B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22DF6B) < 0x29
	.space 0x29 - (. - gText_Rom_22DF6B)
	.endif
