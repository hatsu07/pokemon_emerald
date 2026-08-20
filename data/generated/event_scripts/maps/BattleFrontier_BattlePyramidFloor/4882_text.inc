	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:209 BattlePyramid_Text_EightItemsRemaining1
	.globl gText_Rom_22DA07
gText_Rom_22DA07: @ 0x0822DA07
	.string "どうぐを さがしているの?\pどうぐは\nあと 8つ おちているんだよ!{EOS}"
	.if (. - gText_Rom_22DA07) > 0x23
	.error "gText_Rom_22DA07 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22DA07) < 0x23
	.space 0x23 - (. - gText_Rom_22DA07)
	.endif
