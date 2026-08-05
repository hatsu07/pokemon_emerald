	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:407 BattlePyramid_Text_ThreeTrainersRemaining2
	.globl gText_Rom_22E479
gText_Rom_22E479: @ 0x0822E479
	.string "くやしいー!\pでも あと 3にん いる トレーナーが\nきっと たおしてくれるわ"
	.byte EOS
	.if (. - gText_Rom_22E479) > 0x28
	.error "gText_Rom_22E479 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22E479) < 0x28
	.space 0x28 - (. - gText_Rom_22E479)
	.endif
