	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:446 BattlePyramid_Text_SixTrainersRemaining4
	.globl gText_Rom_22E681
gText_Rom_22E681: @ 0x0822E681
	.string "あなたなら まだ たたかっていない\n6にんの トレーナーを たおせるかも……"
	.byte EOS
	.if (. - gText_Rom_22E681) > 0x27
	.error "gText_Rom_22E681 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22E681) < 0x27
	.space 0x27 - (. - gText_Rom_22E681)
	.endif
