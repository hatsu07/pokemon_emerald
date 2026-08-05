	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:221 BattlePyramid_Text_FourItemsRemaining1
	.globl gText_Rom_22DA93
gText_Rom_22DA93: @ 0x0822DA93
	.string "どうぐを さがしているの?\pどうぐは\nあと 4つ おちているんだよ!$"
	.if (. - gText_Rom_22DA93) > 0x23
	.error "gText_Rom_22DA93 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22DA93) < 0x23
	.space 0x23 - (. - gText_Rom_22DA93)
	.endif
