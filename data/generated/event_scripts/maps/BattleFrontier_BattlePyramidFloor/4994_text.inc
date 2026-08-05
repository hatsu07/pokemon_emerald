	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:380 BattlePyramid_Text_FourTrainersRemaining1
	.globl gText_Rom_22E2FD
gText_Rom_22E2FD: @ 0x0822E2FD
	.string "とっても つよかったよー!!\pでも つよい トレーナーは\nまだまだ 4にんも いるからねー!"
	.byte EOS
	.if (. - gText_Rom_22E2FD) > 0x2f
	.error "gText_Rom_22E2FD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22E2FD) < 0x2f
	.space 0x2f - (. - gText_Rom_22E2FD)
	.endif
