	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:449 BattlePyramid_Text_FiveTrainersRemaining4
	.globl gText_Rom_22E6A8
gText_Rom_22E6A8: @ 0x0822E6A8
	.string "あなたなら まだ たたかっていない\n5にんの トレーナーを たおせるかも……"
	.byte EOS
	.if (. - gText_Rom_22E6A8) > 0x27
	.error "gText_Rom_22E6A8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22E6A8) < 0x27
	.space 0x27 - (. - gText_Rom_22E6A8)
	.endif
