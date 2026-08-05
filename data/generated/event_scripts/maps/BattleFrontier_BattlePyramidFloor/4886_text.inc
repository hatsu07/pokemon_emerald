	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:215 BattlePyramid_Text_SixItemsRemaining1
	.globl gText_Rom_22DA4D
gText_Rom_22DA4D: @ 0x0822DA4D
	.string "どうぐを さがしているの?\pどうぐは\nあと 6つ おちているんだよ!$"
	.if (. - gText_Rom_22DA4D) > 0x23
	.error "gText_Rom_22DA4D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22DA4D) < 0x23
	.space 0x23 - (. - gText_Rom_22DA4D)
	.endif
