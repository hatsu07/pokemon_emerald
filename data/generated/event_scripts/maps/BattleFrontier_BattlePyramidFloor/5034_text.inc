	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:443 BattlePyramid_Text_SevenTrainersRemaining4
	.globl gText_Rom_22E65A
gText_Rom_22E65A: @ 0x0822E65A
	.string "あなたなら まだ たたかっていない\n7にんの トレーナーを たおせるかも……"
	.byte EOS
	.if (. - gText_Rom_22E65A) > 0x27
	.error "gText_Rom_22E65A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22E65A) < 0x27
	.space 0x27 - (. - gText_Rom_22E65A)
	.endif
