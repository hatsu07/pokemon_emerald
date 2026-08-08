	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:224 BattlePyramid_Text_ThreeItemsRemaining1
	.globl gText_Rom_22DAB6
gText_Rom_22DAB6: @ 0x0822DAB6
	.string "どうぐを さがしているの?\pどうぐは\nあと 3つ おちているんだよ!$"
	.if (. - gText_Rom_22DAB6) > 0x23
	.error "gText_Rom_22DAB6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22DAB6) < 0x23
	.space 0x23 - (. - gText_Rom_22DAB6)
	.endif
