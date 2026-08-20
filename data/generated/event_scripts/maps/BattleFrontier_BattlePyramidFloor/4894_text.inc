	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:227 BattlePyramid_Text_TwoItemsRemaining1
	.globl gText_Rom_22DAD9
gText_Rom_22DAD9: @ 0x0822DAD9
	.string "どうぐを さがしているの?\pどうぐは\nあと 2つ おちているんだよ!{EOS}"
	.if (. - gText_Rom_22DAD9) > 0x23
	.error "gText_Rom_22DAD9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22DAD9) < 0x23
	.space 0x23 - (. - gText_Rom_22DAD9)
	.endif
