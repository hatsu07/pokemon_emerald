	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:410 BattlePyramid_Text_TwoTrainersRemaining2
	.globl gText_Rom_22E4A1
gText_Rom_22E4A1: @ 0x0822E4A1
	.string "くやしいー!\pでも あと 2にん いる トレーナーが\nきっと たおしてくれるわ"
	.byte EOS
	.if (. - gText_Rom_22E4A1) > 0x28
	.error "gText_Rom_22E4A1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22E4A1) < 0x28
	.space 0x28 - (. - gText_Rom_22E4A1)
	.endif
