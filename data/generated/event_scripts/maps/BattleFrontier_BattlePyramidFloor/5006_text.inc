	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:401 BattlePyramid_Text_FiveTrainersRemaining2
	.globl gText_Rom_22E429
gText_Rom_22E429: @ 0x0822E429
	.string "くやしいー!\pでも あと 5にん いる トレーナーが\nきっと たおしてくれるわ"
	.byte EOS
	.if (. - gText_Rom_22E429) > 0x28
	.error "gText_Rom_22E429 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22E429) < 0x28
	.space 0x28 - (. - gText_Rom_22E429)
	.endif
