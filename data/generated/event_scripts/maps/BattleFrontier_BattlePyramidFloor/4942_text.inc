	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:299 BattlePyramid_Text_FiveItemsRemaining4
	.globl gText_Rom_22DEF0
gText_Rom_22DEF0: @ 0x0822DEF0
	.string "つよい あなたに ヒントを あげる!\pどうぐは\nあと 5つ おちているらしいわ!{EOS}"
	.if (. - gText_Rom_22DEF0) > 0x29
	.error "gText_Rom_22DEF0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22DEF0) < 0x29
	.space 0x29 - (. - gText_Rom_22DEF0)
	.endif
