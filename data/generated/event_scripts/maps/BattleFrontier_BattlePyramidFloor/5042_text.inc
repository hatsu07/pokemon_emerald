	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:455 BattlePyramid_Text_ThreeTrainersRemaining4
	.globl gText_Rom_22E6F6
gText_Rom_22E6F6: @ 0x0822E6F6
	.string "あなたなら まだ たたかっていない\n3にんの トレーナーを たおせるかも……"
	.byte EOS
	.if (. - gText_Rom_22E6F6) > 0x27
	.error "gText_Rom_22E6F6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22E6F6) < 0x27
	.space 0x27 - (. - gText_Rom_22E6F6)
	.endif
