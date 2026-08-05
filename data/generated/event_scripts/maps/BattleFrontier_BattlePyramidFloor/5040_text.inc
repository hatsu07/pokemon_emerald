	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:452 BattlePyramid_Text_FourTrainersRemaining4
	.globl gText_Rom_22E6CF
gText_Rom_22E6CF: @ 0x0822E6CF
	.string "あなたなら まだ たたかっていない\n4にんの トレーナーを たおせるかも……"
	.byte EOS
	.if (. - gText_Rom_22E6CF) > 0x27
	.error "gText_Rom_22E6CF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22E6CF) < 0x27
	.space 0x27 - (. - gText_Rom_22E6CF)
	.endif
