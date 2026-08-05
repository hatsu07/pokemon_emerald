	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:218 BattlePyramid_Text_FiveItemsRemaining1
	.globl gText_Rom_22DA70
gText_Rom_22DA70: @ 0x0822DA70
	.string "どうぐを さがしているの?\pどうぐは\nあと 5つ おちているんだよ!$"
	.if (. - gText_Rom_22DA70) > 0x23
	.error "gText_Rom_22DA70 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22DA70) < 0x23
	.space 0x23 - (. - gText_Rom_22DA70)
	.endif
