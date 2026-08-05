	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:395 BattlePyramid_Text_SevenTrainersRemaining2
	.globl gText_Rom_22E3D9
gText_Rom_22E3D9: @ 0x0822E3D9
	.string "くやしいー!\pでも あと 7にん いる トレーナーが\nきっと たおしてくれるわ"
	.byte EOS
	.if (. - gText_Rom_22E3D9) > 0x28
	.error "gText_Rom_22E3D9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22E3D9) < 0x28
	.space 0x28 - (. - gText_Rom_22E3D9)
	.endif
