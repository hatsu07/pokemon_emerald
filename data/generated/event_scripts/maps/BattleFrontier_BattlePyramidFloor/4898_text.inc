	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:233 BattlePyramid_Text_ZeroItemsRemaining1
	.globl gText_Rom_22DB1F
gText_Rom_22DB1F: @ 0x0822DB1F
	.string "どうぐを さがしているの?\pどうぐは\nもう おちていないんだよ!$"
	.if (. - gText_Rom_22DB1F) > 0x21
	.error "gText_Rom_22DB1F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22DB1F) < 0x21
	.space 0x21 - (. - gText_Rom_22DB1F)
	.endif
