	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:413 BattlePyramid_Text_OneTrainersRemaining2
	.globl gText_Rom_22E4C9
gText_Rom_22E4C9: @ 0x0822E4C9
	.string "くやしいー!\pでも あと 1にん いる トレーナーが\nきっと たおしてくれるわ"
	.byte EOS
	.if (. - gText_Rom_22E4C9) > 0x28
	.error "gText_Rom_22E4C9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22E4C9) < 0x28
	.space 0x28 - (. - gText_Rom_22E4C9)
	.endif
