	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:230 BattlePyramid_Text_OneItemRemaining1
	.globl gText_Rom_22DAFC
gText_Rom_22DAFC: @ 0x0822DAFC
	.string "どうぐを さがしているの?\pどうぐは\nあと 1つ おちているんだよ!{EOS}"
	.if (. - gText_Rom_22DAFC) > 0x23
	.error "gText_Rom_22DAFC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22DAFC) < 0x23
	.space 0x23 - (. - gText_Rom_22DAFC)
	.endif
