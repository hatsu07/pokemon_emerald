	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:212 BattlePyramid_Text_SevenItemsRemaining1
	.globl gText_Rom_22DA2A
gText_Rom_22DA2A: @ 0x0822DA2A
	.string "どうぐを さがしているの?\pどうぐは\nあと 7つ おちているんだよ!$"
	.if (. - gText_Rom_22DA2A) > 0x23
	.error "gText_Rom_22DA2A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22DA2A) < 0x23
	.space 0x23 - (. - gText_Rom_22DA2A)
	.endif
