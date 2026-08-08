	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:458 BattlePyramid_Text_TwoTrainersRemaining4
	.globl gText_Rom_22E71D
gText_Rom_22E71D: @ 0x0822E71D
	.string "あなたなら まだ たたかっていない\n2にんの トレーナーを たおせるかも……"
	.byte EOS
	.if (. - gText_Rom_22E71D) > 0x27
	.error "gText_Rom_22E71D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22E71D) < 0x27
	.space 0x27 - (. - gText_Rom_22E71D)
	.endif
