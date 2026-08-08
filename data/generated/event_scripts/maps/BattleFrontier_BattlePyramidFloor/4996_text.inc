	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:383 BattlePyramid_Text_ThreeTrainersRemaining1
	.globl gText_Rom_22E32C
gText_Rom_22E32C: @ 0x0822E32C
	.string "とっても つよかったよー!!\pでも つよい トレーナーは\nまだまだ 3にんも いるからねー!"
	.byte EOS
	.if (. - gText_Rom_22E32C) > 0x2f
	.error "gText_Rom_22E32C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22E32C) < 0x2f
	.space 0x2f - (. - gText_Rom_22E32C)
	.endif
