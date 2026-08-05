	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:398 BattlePyramid_Text_SixTrainersRemaining2
	.globl gText_Rom_22E401
gText_Rom_22E401: @ 0x0822E401
	.string "くやしいー!\pでも あと 6にん いる トレーナーが\nきっと たおしてくれるわ"
	.byte EOS
	.if (. - gText_Rom_22E401) > 0x28
	.error "gText_Rom_22E401 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22E401) < 0x28
	.space 0x28 - (. - gText_Rom_22E401)
	.endif
