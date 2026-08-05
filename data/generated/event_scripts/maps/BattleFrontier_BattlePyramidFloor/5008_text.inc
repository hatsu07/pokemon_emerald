	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:404 BattlePyramid_Text_FourTrainersRemaining2
	.globl gText_Rom_22E451
gText_Rom_22E451: @ 0x0822E451
	.string "くやしいー!\pでも あと 4にん いる トレーナーが\nきっと たおしてくれるわ"
	.byte EOS
	.if (. - gText_Rom_22E451) > 0x28
	.error "gText_Rom_22E451 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22E451) < 0x28
	.space 0x28 - (. - gText_Rom_22E451)
	.endif
