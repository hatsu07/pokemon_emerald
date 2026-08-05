	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:374 BattlePyramid_Text_SixTrainersRemaining1
	.globl gText_Rom_22E29F
gText_Rom_22E29F: @ 0x0822E29F
	.string "とっても つよかったよー!!\pでも つよい トレーナーは\nまだまだ 6にんも いるからねー!"
	.byte EOS
	.if (. - gText_Rom_22E29F) > 0x2f
	.error "gText_Rom_22E29F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22E29F) < 0x2f
	.space 0x2f - (. - gText_Rom_22E29F)
	.endif
