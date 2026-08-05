	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:461 BattlePyramid_Text_OneTrainersRemaining4
	.globl gText_Rom_22E744
gText_Rom_22E744: @ 0x0822E744
	.string "あなたなら まだ たたかっていない\n1にんの トレーナーを たおせるかも……"
	.byte EOS
	.if (. - gText_Rom_22E744) > 0x27
	.error "gText_Rom_22E744 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22E744) < 0x27
	.space 0x27 - (. - gText_Rom_22E744)
	.endif
