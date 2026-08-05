	@ data/maps/BattleFrontier_BattlePyramidFloor/scripts.inc:377 BattlePyramid_Text_FiveTrainersRemaining1
	.globl gText_Rom_22E2CE
gText_Rom_22E2CE: @ 0x0822E2CE
	.string "とっても つよかったよー!!\pでも つよい トレーナーは\nまだまだ 5にんも いるからねー!"
	.byte EOS
	.if (. - gText_Rom_22E2CE) > 0x2f
	.error "gText_Rom_22E2CE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22E2CE) < 0x2f
	.space 0x2f - (. - gText_Rom_22E2CE)
	.endif
