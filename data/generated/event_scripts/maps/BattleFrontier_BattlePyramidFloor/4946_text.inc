	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:305 BattlePyramid_Text_ThreeItemsRemaining4
	.globl gText_Rom_22DF42
gText_Rom_22DF42: @ 0x0822DF42
	.string "つよい あなたに ヒントを あげる!\pどうぐは\nあと 3つ おちているらしいわ!$"
	.if (. - gText_Rom_22DF42) > 0x29
	.error "gText_Rom_22DF42 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22DF42) < 0x29
	.space 0x29 - (. - gText_Rom_22DF42)
	.endif
