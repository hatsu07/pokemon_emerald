	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:371 BattlePyramid_Text_SevenTrainersRemaining1
	.globl gText_Rom_22E270
gText_Rom_22E270: @ 0x0822E270
	.string "とっても つよかったよー!!\pでも つよい トレーナーは\nまだまだ 7にんも いるからねー!"
	.byte EOS
	.if (. - gText_Rom_22E270) > 0x2f
	.error "gText_Rom_22E270 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22E270) < 0x2f
	.space 0x2f - (. - gText_Rom_22E270)
	.endif
